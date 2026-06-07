#include <bits/stdc++.h>
using namespace std;
void Reverse(string name , int i ,int j){
        while(i<j){
                int temp = name[i];
                name[i] = name[j];
                name[j] = temp;
                i++;
                j--;
        }
        cout<<name<<endl;
}
int main()
{
        string name = "yash";
        name.length();
        // cout << name << endl;
        // string s = "hello \"good boy\" ";
        // cout << s << endl;
        // cout<<"\\"<<endl;
        int i ,j;
        Reverse(name,0,name.size()-1);
}