#include <iostream>
using namespace std;
class cricketetr
{
public:
    string name;
    int runs;
    float avg;
    cricketetr(string name, int runs, float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print()
    {
        cout << name << " " << runs << " " << avg << endl;
    }
};

int main()
{
    cricketetr c1("MS Dhoni ", 50000, 49.99);
    cricketetr c2("sachin tendulkar", 49999, 51.92);
    c1.print();
    c2.print();
}