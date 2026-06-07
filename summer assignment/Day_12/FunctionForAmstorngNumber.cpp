#include<iostream>
#include<math.h>
using namespace std;
int amstrong(int &n){
    for(int i = 1;i<=n;i++){
        int temp = i , count = 0 , ams = 0;
        while(temp != 0){
            count ++;
            temp /= 10;
        }
        temp = i;
        for(int j = 1;j<=count;j++){
            int ld = temp%10;
            ams += pow(ld,count);
            temp /= 10;
        }
        if( ams == i){
            cout<<"AMSTRONG NUMBER :: "<<ams<<endl;
        }

    }
}
int main(){
    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    amstrong(n);
    
}