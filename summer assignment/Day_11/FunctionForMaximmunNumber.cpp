#include <iostream>
using namespace std;
int max(int &a , int &b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main()
{
    int a , b;
    cout << "Enter a :: ";
    cin >> a;
    cout<<"Enter b :: ";
    cin>>b;
    cout<<max(a,b);
}