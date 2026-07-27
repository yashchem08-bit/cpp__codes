#include<bits/stdc++.h>
using namespace std;
int maxproduuct(int n ){
    int maxproduct = 1;
    int count = 0, m = n;
    vector<int> ans;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    for(int i=1;i<=count;i++){
        int ld = m % 10;
        ans.push_back(ld);
        m /= 10;
    }
    int lar = INT_MIN , seclar = INT_MIN;
    for(int i = 0 ;i<ans.size();i++){
        if(ans[i] > lar){
            seclar = lar;
            lar = ans[i];
        }else if(ans[i] <= lar && ans[i] >= seclar){
            seclar = ans[i];
        }
    }
    maxproduct = seclar*lar;
    return maxproduct;
    
}
int main(){
    int n = 1434;
    cout<<maxproduuct(n);
}