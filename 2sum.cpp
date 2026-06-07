#include<bits/stdc++.h>
using namespace std;
void Two_sum(int arr[],int &n,int &trgt){
    bool found = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( trgt == arr[i]+arr[j]){
                found = true;
                cout<<"INDICES ARE :: "<<i<<" "<<j<<endl;
            }
        }
    }
    if(! found){
        cout<<"--NO MATCHING INDICES FOUND--";
    }
}
int main(){
    int arr[] = {2,6,4,8,3,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int trgt = 7;
    Two_sum(arr,n,trgt);
}

