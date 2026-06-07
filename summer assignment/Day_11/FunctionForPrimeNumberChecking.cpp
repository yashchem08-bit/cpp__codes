#include <iostream>
using namespace std;
int isprime(int &a ){
    bool prime = true;
    for(int i = 2;i*i<a;i++){
        if(a%i == 0){
            prime = false;   
            break;
        }
    }
    if(prime == true){
         cout<<"prime number ";
    }
    else{
        cout<<"not prime number ";
    }
}
int main()
{
    int a ;
    cout << "Enter a :: ";
    cin >> a;
   
    isprime(a);
}