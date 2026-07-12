#include <bits/stdc++.h>
using namespace std;
int Coverd_intervals(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(),[](const vector<int> &a,const vector<int> &b){
        if(a[0] != b[0]) return a[0] < b[0];
        return a[1] > b[1];
    });
    int remain = 0;
    int prevend = INT_MIN;
    for(auto &val : intervals){
        int end = val[1];
        if(end > prevend){
            remain++;
            prevend = end;
        }
    }
    return remain;
}
int main()
{
    vector<vector<int>> intervals = {{1, 2}, {1, 4}, {3, 4}};
    cout << Coverd_intervals(intervals);
}