#include<iostream>
using namespace std;
int main(){
    string str = "aabbccd";
    int freq[26] = {0};
    // counting frequency of each character....
    for(char c : str){
        freq[ c - 'a']++;
    }
    bool found = false;
    for(char c : str){
        if(freq[c - 'a'] == 1){
            cout<<"First non repeating character :: "<<c<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<":: NO Non Repeating character found ::"<<endl;
    }
}