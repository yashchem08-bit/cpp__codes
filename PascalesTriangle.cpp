// #include <bits/stdc++.h>
// using namespace std;
// int add( int i , int j){
//     if(i == j){
//         return 1;
//     }
//     if(i == 1 ){
//         return 1;
//     }
//     if(j == 0){
//         return 1;
//     }
//     return add(i-1,j-1)+add(i-1,j);
// }
// vector<vector<int>> generate(int &n)
// {
//    vector<vector<int>> triangle ;
//    triangle.push_back({1});
//    triangle.push_back({1,1});
//    int j = 0;
//    for(int i = 2 ;i<=n;i++){
//     triangle[i].insert(triangle[i].begin(),{1});
//     triangle[i].insert(triangle[i].begin()+j,add(i , j));
//     j++;
//     triangle[i].insert(triangle[i].end(),{1});
   
//    }
// }
// int main()
// {
//     int n;
//     cout << "Enter n :: ";
//     cin >> n;
//     generate(n);
// }


// #include <bits/stdc++.h>
// using namespace std;
// int add( int i , int j){
//     if(i == j){
//         return 1;
//     }
//     if(j == 0){
//         return 1;
//     }
//     return add(i-1,j-1)+add(i-1,j);
// }
// vector<vector<int>> generate(int &n)
// {
//    vector<vector<int>> triangle;
//    for(int i = 0 ;i<=n;i++){
//     vector<int> row;
//     for(int j = 0 ;j<= i;j++){
//         row.push_back(add(i,j));
//     }
//     triangle.push_back(row);
//    }
//    return triangle;
   
// }
// int main()
// {
//     int n;
//     cout << "Enter n :: ";
//     cin >> n;
//     vector<vector<int>> triangle  = generate(n);
//     for(auto &val : triangle){
//         for(auto &out : val){
//             cout<<out<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> generate(int &n)
// {
//    vector<vector<int>> triangle(n);
//    for(int i = 0 ;i<n;i++){
//     triangle[i].resize(i+1);
//      triangle[i][0] = triangle[i][i] = 1;
//     for(int j = 1;j < i;j++){
       
//         triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
//     }
//    }
//    return triangle;
   
// }
// int main()
// {
//     int n;
//     cout << "Enter n :: ";
//     cin >> n;
//     vector<vector<int>> triangle  = generate(n);
//     for(auto &val : triangle){
//         for(auto &out : val){
//             cout<<out<<" ";
//         }
//         cout<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

// Function to compute nth row of Pascal's Triangle in O(n)
vector<int> getRow(int n) {
    vector<int> row(n + 1, 1);
    for (int k = 1; k < n; k++) {
        row[k] = (long long)(row[k - 1] * (n - k + 1)) / k;
    }
    return row;
}

int main() {
    int n;
    cout << "Enter n :: ";
    cin >> n;

    vector<int> row = getRow(n - 1); // 0-indexed row
    for (auto val : row) cout << val << " ";
    cout << endl;

    return 0;
}
