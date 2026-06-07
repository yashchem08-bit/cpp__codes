#include<iostream>
using namespace std;
int binary(int &n){
    int bin[32] = {0};
    int i = 0;
    while(n != 0){
        bin[i] = n%2;
        i++;
        n /= 2;
    }
    int count = 0;
   for(int j = 0;j<i;j++){
    if(bin[j] == 1){
        count++;
    }
   }
   return count;
    
}
int main(){
    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    cout<<binary(n);
 }

