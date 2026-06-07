#include <iostream>
using namespace std;
int Two_sum(int arr[7], int &trgt){
    for(int i = 0 ;i <7;i++){
        for(int j = 0 ;j<7;j++){
            if(arr[i] + arr[j] == trgt){
                cout<<"indices :: "<<i<<" "<<j<<endl;
            }
        }
    }
}

int main()
{
    int trgt;
    cout << "Enter target :: ";
    cin >> trgt;
    int arr[7] = {5,3,2,2,3,5,6}; 
    Two_sum(arr,trgt);
}