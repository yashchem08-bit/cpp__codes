// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      vector<int> v = {2,5,1,6,7};
//      vector<int> :: iterator it = v.begin();
//      vector<int> :: iterator ite = v.end();
//      cout<<(*(it))<<endl;
//      cout<<(*(ite-1))<<endl;

//      for(it = v.begin();it != v.end();++it){
//         cout<<(*it)<<endl;
//      }

//      vector<pair<int,int> > p = {{1,2},{2,3},{6,7}};
//      vector<pair<int,int> > :: iterator iter ;
//      for(iter = p.begin();iter != p.end();++iter){
//         cout<<(*iter).first<<" "<<(*iter).second<<endl;
//      }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<char> v (5,'*');   // range based + auto keyword for loops..........
    for(char &val : v){
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto it = v.begin(); it != v.end();it++){
        cout<<(*it)<<endl;
    }
    for(auto &val : v){
        cout<<val<<" ";
    }
}