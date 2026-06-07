#include <bits/stdc++.h>
using namespace std;
void more_inputs()
{
    int confor;
    string n_str;
    long long u_phone;
    cin.ignore();
    cout << "Enter name :: ";
    getline(cin, n_str);
    cout << endl;
    cout << "Enter phone no :: ";
    cin >> u_phone;

    cout << "--DATA SAVED SUCCESFULLY--";
    cin.ignore();
    cout << endl;
    cout << "--DO YOU WANT TO ENTER DATA FOR ANOTHER PERSON --";
    cout << endl;
    cout << "IF YES WRITE 1 || IF NOT WRITE 0 :: ";
    cin >> confor;
    if (confor == 1)
    {
        more_inputs();
    }
    else if (confor == 0)
    {
        cout << "--EXITING PROGRAM--";
    }
    else
    {
        cout << "--INVALID INPUT--";
        cout << endl;
        cout << "--EXITING PROGRAM--";
    }
}
int main()
{
    string str;
    string s_str;
    cout << "--HELLO THERE ENTER YOUR DETAILS--" << endl;
    cout << "Enter name :: ";
    getline(cin, str);
    cout << endl;
    long long user_phone[1];
    cout << "Enter phone number :: ";
    cin >> user_phone[0];
    cout << endl
         << endl;
    cout << "--your typed input is --" << endl
         << str << endl;
    for (int i = 0; i < sizeof(user_phone) / sizeof(user_phone[0]); i++)
    {
        cout << user_phone[i];
    }
    cout << endl;
    int con;
    int conf;
    cout << "IF CORRECT WRITE 1 || IF NOT WRITE 0 :: ";
    cin >> con;
    if (con == 1)
    {
        cout << "DO YOU WANT TO ENTER DETAILS FOR SOME ONE ELSE --" << endl;
        cout << "IF YES WRITE 1 || IF NOT WRITE 0 :: ";
        cin >> conf;
    }
    else
    {
        cout << "--NO PROBLEM YOU CAN ENTER YOUR DETAILS AGAIN--" << endl;
        cin.ignore();
        cout << "Enter name again :: ";
        getline(cin, s_str);
        cout << endl;
        cout << "Enter phone number again :: ";
        cin >> user_phone[0];
        cout << endl;
        cout << "--your typed input is --" << endl
             << str << endl;
        for (int i = 0; i < sizeof(user_phone) / sizeof(user_phone[0]); i++)
        {
            cout << user_phone[i];
        }
        cout << endl;
        cout << "DO YOU WANT TO ENTER DETAILS FOR SOME ONE ELSE --" << endl;
        cout << "IF YES WRITE 1 || IF NOT WRITE 0 :: ";
        cin >> conf;
    }

    if (conf == 1)
    {
        more_inputs();
    }
    else
    {
        cout << "---THANK YOU FOR REGISTERING ---";
    }
}