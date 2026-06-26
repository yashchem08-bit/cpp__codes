#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<string> &st){
    int i = 0;
    int j = st.size()-1;
    while(i < j){
        swap(st[i],st[j]);
        i++;
        j--;
    }
}
string Break_string(string str){
    vector<string> st;
    int i = 0;

    while(i < str.size()){
        string c;
        while(str[i] != ' ' && i < str.size()){
           c.push_back(str[i]);
           i++;
        }
        if(!c.empty()){
            st.push_back(c);
        }
        i++;
    }
    Reverse(st);
    string result;
    int k ;
    for(k = 0 ;k<=st.size()-1;k++){
        result += st[k];    
        if(k <st.size()-1){
           result += " ";
        }
            
    } 
    return result;
}
int main(){
    string str = "";
    Break_string(str);
}