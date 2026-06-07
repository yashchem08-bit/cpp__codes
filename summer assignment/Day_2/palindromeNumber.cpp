#include<iostream>
using namespace std;
int main(){
    int n ,rev = 0 ,i = 0;
    cout<<"Enter n :: ";
    cin>>n;
    int temp = n;
    while(n != 0){
        int ld = n%10;
        rev = rev*10 + ld;
        n /= 10;
    }
    if(temp == rev){
        cout<<"palindrome number ";

    }else{
        cout<<"not a palindrome number ";
    }
}