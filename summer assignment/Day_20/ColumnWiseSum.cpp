#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];    
    int arr2[3];     
     
    cout<<"Enter elements :: ";
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    
    for(int i = 0 ;i<3;i++){
        int temp = 0;
        for(int j = 0;j<3;j++){
            temp += arr1[j][i]; 
        }
        arr2[i] = temp;

    }
     for(int i = 0;i<3;i++){
       cout<<arr2[i]<<" ";
    }
}