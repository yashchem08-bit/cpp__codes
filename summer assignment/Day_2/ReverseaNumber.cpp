#include<iostream>
using namespace std;
int main(){
    int n ,rev = 0 ,i = 0;
    cout<<"Enter n :: ";
    cin>>n;
    while(n != 0){
        int ld = n%10;
        rev = rev*10 + ld;
        n /= 10;
    }
    cout<<rev;
}