#include<iostream>
using namespace std;
int main(){
    int n ,count = 0, sum = 0;
    cout<<"Enter n :: ";
    cin>>n;
    int temp =n;
    while(n != 0){
        count++;
        n /= 10;
    }

    for(int i = 1;i<=count;i++){
        int ld = temp %10;
        sum += ld;
        temp /= 10;
    }
    cout<<"Sum of digits is :: "<<sum<<endl;
}