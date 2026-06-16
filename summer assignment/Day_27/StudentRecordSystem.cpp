#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Definition of the Student Class
class Student
{
private:
    int rollNumber;
    string name;
    string course;
    float gpa;

public:
    // Setup initial empty states
    Student() : rollNumber(0), name(""), course(""), gpa(0.0) {}

    // Main entry validation wrapper
    void inputRecord()
    {
        cout << "Enter Roll Number: ";
        while (!(cin >> rollNumber) || rollNumber <= 0)
        {
            cout << "Invalid input. Enter a positive integer for Roll Number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(); // Clean buffer stream

        cout << "Enter Full Name: ";
        getline(cin, name);

        cout << "Enter Course/Branch: ";
        getline(cin, course);

        cout << "Enter GPA (0.0 - 4.0): ";
        while (!(cin >> gpa) || gpa < 0.0 || gpa > 4.0)
        {
            cout << "Invalid entry. Enter a valid GPA between 0.0 and 4.0: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // Structured display block
    void displayRow() const
    {
        cout << left << setw(12) << rollNumber
             << setw(25) << name
             << setw(20) << course
             << setw(6) << fixed << setprecision(2) << gpa << endl;
    }

    // Storage Serialization Utilities
    void writeToFile(ofstream &out) const
    {
        out << rollNumber << "\n"
            << name << "\n"
            << course << "\n"
            << gpa << "\n";
    }

    bool readFromFile(ifstream &in)
    {
        if (in >> rollNumber)
        {
            in.ignore();
            getline(in, name);
            getline(in, course);
            in >> gpa;
            return true;
        }
        return false;
    }

    int getRollNumber() const { return rollNumber; }
    void setCourse(string c) { course = c; }
    void setGpa(float g) { gpa = g; }
};

// System Functions declarations
void addStudentRecord();
void displayAllRecords();
void searchStudentRecord();
void updateStudentRecord();
void deleteStudentRecord();
bool checkDuplicate(int roll);

const string FILE_NAME = "students.txt";

int main()
{
    int choice;
    do
    {
        cout << "\n=========================================" << endl;
        cout << "    STUDENT RECORD MANAGEMENT SYSTEM     " << endl;
        cout << "=========================================" << endl;
        cout << "1. Add New Student Record" << endl;
        cout << "2. Display All Student Records" << endl;
        cout << "3. Search Student Record by Roll No" << endl;
        cout << "4. Update Student Record" << endl;
        cout << "5. Delete Student Record" << endl;
        cout << "6. Exit System" << endl;
        cout << "=========================================" << endl;
        cout << "Enter your operational choice (1-6): ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice! Please select a valid option." << endl;
            continue;
        }

        switch (choice)
        {
        case 1:
            addStudentRecord();
            break;
        case 2:
            displayAllRecords();
            break;
        case 3:
            searchStudentRecord();
            break;
        case 4:
            updateStudentRecord();
            break;
        case 5:
            deleteStudentRecord();
            break;
        case 6:
            cout << "\nShutting down system database safely. Goodbye!" << endl;
            break;
        default:
            cout << "Selection out of scope. Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

// 1. CREATE: Append student data safely
void addStudentRecord()
{
    Student tempStudent;
    tempStudent.inputRecord();

    if (checkDuplicate(tempStudent.getRollNumber()))
    {
        cout << "\nError: Record with Roll Number " << tempStudent.getRollNumber() << " already exists!" << endl;
        return;
    }

    ofstream outFile(FILE_NAME, ios::app);
    if (!outFile)
    {
        cout << "Critical Database Write Fault!" << endl;
        return;
    }

    tempStudent.writeToFile(outFile);
    outFile.close();
    cout << "\nRecord successfully saved to persistent storage!" << endl;
}

// 2. READ ALL: Step through stream sequentially
void displayAllRecords()
{
    ifstream inFile(FILE_NAME);
    if (!inFile)
    {
        cout << "\nNo active local records found. Database is currently empty." << endl;
        return;
    }

    Student tempStudent;
    cout << "\n-------------------------------------------------------------------" << endl;
    cout << left << setw(12) << "Roll No" << setw(25) << "Name" << setw(20) << "Course" << setw(6) << "GPA" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    bool recordExists = false;
    while (tempStudent.readFromFile(inFile))
    {
        tempStudent.displayRow();
        recordExists = true;
    }

    if (!recordExists)
    {
        cout << "No entries discovered inside data registry." << endl;
    }
    cout << "-------------------------------------------------------------------" << endl;
    inFile.close();
}

// 3. READ SINGLE: Target exact matches
void searchStudentRecord()
{
    int searchRoll;
    cout << "Enter target Roll Number to look up: ";
    cin >> searchRoll;

    ifstream inFile(FILE_NAME);
    if (!inFile)
    {
        cout << "Data storage instance could not be accessed." << endl;
        return;
    }

    Student tempStudent;
    bool found = false;

    while (tempStudent.readFromFile(inFile))
    {
        if (tempStudent.getRollNumber() == searchRoll)
        {
            cout << "\nRecord Discovered!" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            cout << left << setw(12) << "Roll No" << setw(25) << "Name" << setw(20) << "Course" << setw(6) << "GPA" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            tempStudent.displayRow();
            cout << "-------------------------------------------------------------------" << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nStudent Record with Roll Number " << searchRoll << " not found." << endl;
    inFile.close();
}

// 4. UPDATE: Modify inline properties via cache file replacement
void updateStudentRecord()
{
    int targetRoll;
    cout << "Enter the Roll Number of the record to modify: ";
    cin >> targetRoll;

    ifstream inFile(FILE_NAME);
    ofstream tempFile("temp.txt");

    if (!inFile || !tempFile)
    {
        cout << "System File Processing Failure!" << endl;
        return;
    }

    Student tempStudent;
    bool updated = false;

    while (tempStudent.readFromFile(inFile))
    {
        if (tempStudent.getRollNumber() == targetRoll)
        {
            string newCourse;
            float newGpa;
            cin.ignore();

            cout << "\nRecord located. Enter updated field metrics:\n";
            cout << "New Course/Branch: ";
            getline(cin, newCourse);
            cout << "New GPA (0.0 - 4.0): ";
            cin >> newGpa;

            tempStudent.setCourse(newCourse);
            tempStudent.setGpa(newGpa);
            updated = true;
        }
        tempStudent.writeToFile(tempFile);
    }

    inFile.close();
    tempFile.close();

    remove(FILE_NAME.c_str());
    rename("temp.txt", FILE_NAME.c_str());

    if (updated)
        cout << "\nSystem Registry Modified Successfully!" << endl;
    else
        cout << "\nRoll Number match not identified." << endl;
}

// 5. DELETE: Drop a row via sequential file omitting algorithm
void deleteStudentRecord()
{
    int targetRoll;
    cout << "Enter Roll Number to delete from registry: ";
    cin >> targetRoll;

    ifstream inFile(FILE_NAME);
    ofstream tempFile("temp.txt");

    if (!inFile || !tempFile)
    {
        cout << "System Access Storage Error!" << endl;
        return;
    }

    Student tempStudent;
    bool deleted = false;

    while (tempStudent.readFromFile(inFile))
    {
        if (tempStudent.getRollNumber() != targetRoll)
        {
            tempStudent.writeToFile(tempFile);
        }
        else
        {
            deleted = true;
        }
    }

    inFile.close();
    tempFile.close();

    remove(FILE_NAME.c_str());
    rename("temp.txt", FILE_NAME.c_str());

    if (deleted)
        cout << "\nStudent identity deleted successfully from active files." << endl;
    else
        cout << "\nNo target file match with specified Roll Number discovered." << endl;
}

// Helper: Evaluates existing key entries before allocations
bool checkDuplicate(int roll)
{
    ifstream inFile(FILE_NAME);
    if (!inFile)
        return false;

    Student temp;
    while (temp.readFromFile(inFile))
    {
        if (temp.getRollNumber() == roll)
        {
            inFile.close();
            return true;
        }
    }
    inFile.close();
    return false;
}
