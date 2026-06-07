#include<iostream>
#include<vector>
using namespace std;
void merge( int num1[],int num2[],int &n ,int&m){
   int merged[n+m];
   int idx = 0;
   for(int i = 0;i<n;i++){
    merged[idx++] = num1[i];
   }
   for(int i = 0;i<m;i++){
    merged[idx++] = num2[i];
   }
   for(int i = 0 ;i<(n+m);i++){
    cout<<merged[i]<<" ";
   }
   cout<<endl;

}
int main(){
   int num1[3] = {1,2,3};
    int num2[3] = {2,4,5};
    int n = 3 , m = 3;
    merge(num1,num2,n,m);
}