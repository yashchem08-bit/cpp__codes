#include<bits/stdc++.h>
using namespace std;
int perfectNum(int &n, int &sum){
    for(int i = 1; i<=n/2;){
        if(n%i==0){
            sum += i;
            i++;
        }else{
            i++;
        }
    }
    return sum ;
}
int main(){
    int n ;
    cout<<"ENTER N :: ";
    cin>>n;
    int sum = 0;
    perfectNum(n,sum);
    if(n == sum){
        cout<<"Perfect number ";
    }else{
        cout<<"Not a perfect number ";
    }


}