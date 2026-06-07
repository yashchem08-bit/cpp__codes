// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int> &v){
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;
//     cout<<"Enter n :: ";
//       int n ;
//       cin>>n;
//       for(int i = 0; i<n ;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//       }
//       v.pop_back();
//       print(v);

//       vector<int> v1 = v;   // v1 is copy of v....
//       vector<int> &v2 = v;  //v2 is passed by references of v ..........
// }


// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<pair<int,int>> &v){
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
//     cout<<endl;
// }
// int main(){
//     vector<pair<int,int>> v;
//     int n ;
//     cout<<"Enter n :: ";
//     cin>>n;
//     for(int i =0;i<n;i++){
//         int x , y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     print(v);


//}






#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<string> v ){
    for(auto &val : v){
        cout<<val<<" "<<endl;
    }
}
void input_vector(vector<string> v , int &n){
    cout<<"Enter name :: ";
    for(int i =0 ;i<=n ;i++){
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    
}

int main(){
    int n ;
    cout<<"How many users want to store their details::";
    cin>>n;
    vector<string> v;
    input_vector(v,n);
    print_vector(v);

}