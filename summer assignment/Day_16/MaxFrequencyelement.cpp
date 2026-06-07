#include <iostream>
#include <unordered_map>
#include <vector>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int arr[n]; // 5,3,2,2,3,5,6
    vector<pair<int,int>> freq;
    cout << "Enter elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int count = 0;
        m.insert({x, count});
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        m[x]++;
    }
    for (auto &pr : m)
    {
        int x = pr.first;
        int y = pr.second;
        freq.push_back({x,y});
    }
    int max = INT_MIN;
    int temp ,N;
    int i = 0;
    for( i = 0 ;i<freq.size();i++){
        temp = freq[i].second;
        if(max < temp){
            max = temp ;
            N = i;
        }
    }
    cout<<freq[N].first<<" occurs "<<max<<"  maximum times"<<endl;
    

}