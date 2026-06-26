#include <bits/stdc++.h>
using namespace std;
void rotate_image(vector<vector<int>> &matrix)
{
    // int i = 0, j = 0, di = matrix.size() - 1, dj = 0;

    // while (j != matrix.size() && dj != matrix.size())
    // {
    //     swap(matrix[i][j], matrix[di][dj]);
    //     j++;
    //     dj++;
    // }
   // int x = 0, y = 0, dx = 0, dy = 0;

    // while (x != matrix.size() && y != matrix.size() && dx != matrix.size() && dy != matrix.size())
    // {
    //     if (x == y || dx == dy)
    //     {
    //         y++;
    //         dx++;
    //     }
    //     else
    //     {
    //         swap(matrix[x][y], matrix[dx][dy]);
    //     }
    //     if (y == matrix.size() - 1 || dx == matrix.size() - 1)
    //     {
    //         x++;
    //         dy++;
    //         swap(matrix[x][y], matrix[dx][dy]);
    //     }
    // }
    // for(int x = 0 ;x <matrix.size();x++){
    //     for(int y = 0 ;y<matrix.size();y++){
    //        if(x == y ){
    //         matrix[x][y] = matrix[y][x];
    //        }else{
    //         swap(matrix[x][y], matrix[y][x]);
    //        }

    //     }
    // }

     for (int x = 0; x < matrix.size(); x++)
    {
        for (int y = x+1; y < matrix.size(); y++)
        {
            swap(matrix[x][y],matrix[y][x]);
        }
        
    }
    for(int k = 0 ;k <matrix.size();k++){
        reverse(matrix[k].begin(),matrix[k].end());
    }
    // for(int k = 0 ;k <matrix.size();k++){
    //     reverse(matrix[k].begin(),matrix[k].end());
    // }
    // for(int k = 0 ;k <matrix.size();k++){
    //     reverse(matrix[k].begin(),matrix[k].end());
    // }
    for (int x = 0; x < matrix.size(); x++)
    {
        for (int y = 0; y < matrix.size(); y++)
        {
            cout << matrix[x][y] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate_image(matrix);
}