#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Enter x :: ";
    cin>>x;
    cout<<"Enter n :: ";
    cin>>n;
    int ans = 1;
    for(int i = 1;i<=n;i++){
       ans *=x;
    }
    cout<<ans;

}