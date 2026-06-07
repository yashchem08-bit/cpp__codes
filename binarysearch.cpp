#include<bits/stdc++.h>
using namespace std;
void bin_search(vector<int> vec , int &trgt){
    int st = 0 ;
    int end = vec.size()-1;
    while(st<=end){
        int mid = st +(end - st)/2;
        if(vec[mid] == trgt){
            cout<<"found at :: "<<mid<<" ";
            return;
        }else if(vec[mid] < trgt){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    cout<<"/n not found /n";
}
int main(){
    vector<int> vec = {2,8,9,10,24,65,78,89,777,1008,9943,1000,98765,987654,2345678};
    int trgt = 1000;
    bin_search(vec,trgt);
}