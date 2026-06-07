#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        int k = 1;
        for(int j = i;j<=n;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}