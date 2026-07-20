#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    float n ;
    cout<<"Enter n :: ";
    cin>>n;
    int y = (int)n;
    if(n == y){
        cout<<"INTEGER";
    }else{
        cout<<"NOT AN INTEGER";
    }
}