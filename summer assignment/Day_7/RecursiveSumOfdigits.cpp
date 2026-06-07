#include<iostream>
using namespace std;
int sumDig(int n , int sum){
    if(n == 0){
        return sum;
    }
    int ld = n%10;
    sum += ld;
    n /= 10;
    sumDig(n,sum);
}
int main(){
    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    int sum = 0;
    cout<<sumDig(n,sum);
}