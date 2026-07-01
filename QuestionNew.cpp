// #include<iostream>
// using namespace std;
// int main(){
//     int a = 2, b=3, c= 1, d = 4 , e = 2;
//     a += 4;
//     b = c+ a++;
//     c = --d*e--;
//     int result = a+b*c-d+e;
//     cout<<result<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
// }
#include<iostream>
using namespace std;
int main(){
   for(int i = 1;i<=100;i++){
    if(i % 3 == 0 && i % 2 == 1){
        cout<<i;
    }
    cout<<endl;
   }
}