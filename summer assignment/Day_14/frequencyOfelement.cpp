#include <iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int arr[n]; // 5,3,2,2,3,5,6
    cout << "Enter elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int,int> m;
    for(int i = 0 ;i<n;i++){
        int x = arr[i];
        int count = 0;
        m.insert({x,count});
    }
    for(int i = 0 ;i<n;i++){
        int x = arr[i];
        int count = 0;
        m[x]++;
    }
    for(auto &pr : m){
        cout<<pr.first<<"ocurs "<<pr.second<<" times"<<endl;
    }



}