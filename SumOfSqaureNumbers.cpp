#include<bits/stdc++.h>
using namespace std;
bool judge(int c){
    int a = sqrt(c);
    int b = 0;
    bool found = false;
    while(found == false){
        int x = (a*a) + (b*b);
        if(x == c){
            found = true;
            break;
        }
        if(x < c){
            a--;
        }else{
            b++;
        }
    }
    return found;
}
int main(){
    int c;
    cin>>c;
    cout<<judge(c);
}

// #include<bits/stdc++.h>
// using namespace std;
// bool judge(int c){ 
//     for(int a  = 0 ;a*a <= c;a++){
//         int x = c-(a*a);
//         int b = sqrt(x);

//         if( b*b == x){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int c;
//     cin>>c;
//     cout<<judge(c);
// }