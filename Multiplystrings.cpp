#include<bits/stdc++.h>
using  namespace std;
 string multiplyStrings(string &s1, string &s2) {
        string st1 = "" , st2 = "";
        int n = s1.size() , m = s2.size();
        int i = 0, j = 0;
        bool fs1 = 0 , fs2 = 0;
        bool no_leading_zero = 1 , no_leading_zero2 = 1;
        while(i < n){
            if(s1[i] == '-'){
                fs1 = 1;
                i++;
            }
            if(no_leading_zero && s1[i] == '0'){
                i++;
            }else{
                no_leading_zero = 0;
                st1 += s1[i];
                i++;
            }
        }
        while(j < m){
            if(s2[j] == '-'){
                fs2 = 1;
                j++;
            }
            if(no_leading_zero2 && s2[j] == '0'){
                j++;
            }else{
                no_leading_zero2 = 0;
                st2 += s2[j];
                j++;
            }
        }
        
        string ans = "";
        vector<int> res;
        for(int k = n-1 ;k>=0;k--){
            int add = 0;
            for(int l = m-1;l>=0;l--){
                int mul = (int)st1[k]*(int)st2[l];
                int crr = mul/10;
                add += mul+crr;
            }
            
        }
    }
int main(){
    string s1 = "0000000023580";
    string s2 = "-0000032230";
    multiplyStrings(s1,s2);
}