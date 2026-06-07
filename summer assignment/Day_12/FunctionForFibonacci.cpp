#include<iostream>
using namespace std;
int fibo(int &n){
    int a = 0 ,b = 1, New;
    cout<<a<<endl<<b<<endl;
    for(int i = 1;i<=n;i++){
        New = a+b;
        cout<<New<<endl;
        a = b ;
        b = New;
    }
}
int main(){
    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    fibo(n);
}