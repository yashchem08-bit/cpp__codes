#include<bits/stdc++.h>
using namespace std;
int main(){

    // int arr[3][3] = {{1,1,1},{1,0,1},{1,1,1}};
    // int i = 0 , j = 0;
    
    // while(i < 3 && j < 3){
    //     if(arr[i][j] == 0){
    //         for(int k = 0 ;k <3;k++ ){
    //             arr[i][k] = 0;
    //             arr[k][j] = 0;
    //         }
    //     }else{
    //         i++;
    //         j++;
    //     }
    // }
    // for(int x = 0 ;x<3;x++){
    //     for(int y  = 0 ;y<3;y++){
    //         cout<<arr[x][y];
    //     }
    //     cout<<endl;
    // }

    vector<vector<int>> mat = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int r = (int)mat.size();
    int colm = mat.empty() ? 0 : (int)mat[0].size();
    vector<bool> row(r,false),column(colm,false);
    for(int i = 0 ;i<r;i++){
        for(int j =0 ;j<colm;j++){
            if(mat[i][j] == 0){
                row[i] = true;
                column[j] = true;
            }
        }
    }

    for(int i = 0 ;i<r;i++){
        for(int j = 0 ;i<colm;j++){
            if(row[i] == true || column[j] == true){
                mat[i][j] = 0;
            }
        }
    }
     for(int x = 0 ;x<r;x++){
        for(int y  = 0 ;y<colm;y++){
            cout<<mat[x][y];
        }
        cout<<endl;
    }

}