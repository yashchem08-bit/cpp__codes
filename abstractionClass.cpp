#include <iostream>
#include <string>
using namespace std;
class camera
{
public:
    virtual void OpenCamera() = 0;
    virtual void Photomode() = 0;
    virtual void Videomode() = 0;
    void open()
    {
        OpenCamera();
        Photomode();
        Videomode();
    }
};
class youtube : public camera
{
public:
    void OpenCamera() override
    {
        cout << ":: opening camera :: "<<endl;
    }
    void Photomode() override
    {
        int n;
        cout << ":: photo mode is started you are requested to take picture :: " << endl;
        cout << "press 1 for taking picture :: " << endl;
        cin >> n;
        if (n == 1)
        {
            cout << "::clicked::";
        }
        else
        {
            cout << "::invalid input::";
        }
        cout << endl;
        cout << "want to take picture again press 2 || else press 0 ";
        cin>>n;
        if (n == 2)
        {
            n = 0;
            Photomode();
        }
        else
        {
            cout << "--exiting photo mode--"<<endl;
        }
        n = 0;
    }
    void Videomode()
    {
        int n;
        cout << ":: Video mode is started you are requested to start recording :: " << endl;
        cout << "press 1 to start recording :: " << endl;
        cin >> n;
        if (n == 1)
        {
            cout << "::started::";
        }
        else
        {
            cout << "::invalid input::";
        }
        cout << endl;
        cout << "want to start again press 2 || else press 0 "<<endl;
        cin>>n;
        if (n == 2)
        {
            n = 0;
            Videomode();
        }
        else
        {
            cout <<endl<< "--exiting Video mode--"<<endl;
        }
        n = 0;
    }
};
int main()
{
    youtube exe;
    exe.open();
    exe.OpenCamera();
    exe.Photomode();
}