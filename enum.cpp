#include<bits/stdc++.h>
using namespace std;
enum example{
    a,B,c
};
enum num : char{
    a = 1,b = 3,c = 4
};
enum ne : int {
   ptr = 67
};
int main(){
    example value = B;
    num value = b;
    ne ch = ptr;
    cout<<value<<endl<<ch<<endl;
}

