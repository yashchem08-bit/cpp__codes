#include<iostream>
using namespace std;
int main(){

    int arr[5] = {5,3,6,2,8};
    int n ;
    cout<<"ENTER TARGET :: ";
    cin>>n;
    for(int i = 0 ;i<5;i++){
            if(arr[i] == n){
                cout<<"Found at index :: "<<i<<endl;
                break;
        }
    }

}