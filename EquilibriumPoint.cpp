// #include<bits/stdc++.h>
// using namespace std;
// int Find_point(vector<int> &vec){
//     int low = 0, high = vec.size()-1;
//     int leftsum = vec[low] , rightsum = vec[high];
//     int result = -1;
//     while(low <= high){
        
//         if(leftsum == rightsum){
//             result = low+1;
//             break;
//         }else if( leftsum > rightsum){
//             high--;
//             rightsum += vec[high];
//         }else{
//             low++;
//             leftsum += vec[low];
//         }

//     }
//     return result;
// }
// int  main(){
//     vector<int> vec = {8, 8, 3, 7, 8, 2, 7, 2};
//     cout<<Find_point(vec);
// }


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v(n,0);
    vector<int> ans;
    for(int i =0 ;i<n;i++){
        cin>>v[i];
    }
   sort(v.begin(),v.end());
   int st = 0 , end = 1;
   int left_sum = 
   while(st <n && end < n){

   }
    
}
