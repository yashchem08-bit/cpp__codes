#include <iostream>
using namespace std;
void moveZero(int arr[5] ){
    int i = 0 , end = 4;
    while(i != 4){
        if(arr[i] == 0){
            swap(arr[i] , arr[end]);
            end--;
        }
        i++;
    }
}
int main()
{
    int arr[5] = {0,5,6,0,2};
    moveZero(arr);
    for(int i = 0; i<5;i++){
        cout<<arr[i] <<" ";
    }
}