#include<iostream>
using namespace std;
int reverse(int &n , int &rev){
    while (n != 0)
    {
        int ld = n%10;
        rev = rev*10 + ld;
        n /= 10;
    }
    return rev;
}
int main(){
    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    int temp = n , rev = 0;
    cout<<reverse(n,rev)<<endl;
    if(temp == rev){
        cout<<"Palindrome";
    }else{
        cout<<"Not Plaindrome";
    }
}