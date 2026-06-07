#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];
    
    cout<<"Enter elements of matrix 1 :: ";
    for(int i = 0 ;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
   int diasum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(i == j){
                diasum += arr1[i][j];
            }
        }
    }
    cout<<diasum;
}