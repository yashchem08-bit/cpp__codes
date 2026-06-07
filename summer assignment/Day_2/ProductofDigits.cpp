#include<iostream>
using namespace std;
 int main(){
    int n , prod = 1;
    cout<<"Enter n :: ";
    cin>>n;
    while(n != 0){
        int ld = n%10;
        prod *= ld;
        n /=10;
    }
    cout<<prod<<endl;
 }