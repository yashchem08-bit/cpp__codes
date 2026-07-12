#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> GenegrateMatrix(int &n){
    vector<vector<int>> matrix(n,vector<int>(n,0));
    int left = 0 , right = n-1;
    int top = 0, bottom = n-1;
    int x = 1;
    while(left <= right && top <= bottom){
        for(int i = left ;i<= right;i++){
            matrix[top][i] = x++;
        }
        top++;
        for(int i = top;i<=bottom;i++ ){
            matrix[i][right] = x++;
        }
        right--;
        if(top <= bottom){
            for(int i = right;i >= left ;i--){
                matrix[bottom][i] = x++;  
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom;i>=top;i--){
                matrix[i][left] = x++;
            }
            left++;
        }

    }
    return matrix;
}
int main(){
    int n = 10 ;
    vector<vector<int>> ans = GenegrateMatrix(n);
    for(auto &val : ans){
        for(auto &out : val){
            cout<<out<<" ";
        }
        cout<<endl;
    }
}