#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str = "250.34.211.43";
    string ans;

    for(int i = 0 ;i<= str.size();i++){
        if(str[i] == '.' ){
            ans = ans + "[.]";
        }else{
            ans += str[i];
        }
    }
    cout<<ans;
}