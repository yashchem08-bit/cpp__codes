// #include<iostream>      // programm for sum of digits
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:: ";
//     cin>>n;

//     int temp = n;
//     int count = 0;
//     while(temp>0){
//         count++;
//         temp /= 10;

//     }

//     int sum = 0;

//     for(int i=0;i<count;i++){
//         int ld = n%10;
//         sum = sum+ld;
//         n /= 10;
//     }
//     cout<<"your sum is :: "<<sum<<endl;
// }


#include<bits/stdc++.h>      // programm for amstrong number....
using namespace std;
int main(){
    int n;
    cout<<"Enter n:: ";
    cin>>n;

    int temp = n;
    int Ntemp = n;
    int count = 0;
    while(temp>0){
        count++;
        temp /= 10;
    }

    int ams = 0;

   while(Ntemp>0){
    int ld = Ntemp%10;
    ams = ams + pow(ld,count);
    Ntemp /= 10;
   }

    if(n == ams){
        cout<<"yes amstrong number "<<endl;
    }
    else{
        cout<<"No amstrong number"<<endl;
    }
}