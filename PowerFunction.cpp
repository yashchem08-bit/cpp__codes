#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
        if(n == 1){
            return x;
        }
        if(n < 0){
         double z = pow(x,(double)(-n));
         return 1/z;
        }
        return pow(x,n);
    }

int main(){
    double x = -1;
    int n = -2147483648;
    cout<<myPow(x,n);
    
}