#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge()
{
    // int i = 0;
    // int ld = intervals[i][1];   //last digit of 1st pair
    // int FD = intervals[i][0];
    // i++;
    // int fd = intervals[i][0];      // first digit of 2nd pair
    // cout<<ld<<endl<<FD<<endl<<fd<<endl<<endl;

    // int Nld = intervals[--i][0];   //first digit of 1st pair
    // // int NFD = intervals[i][0];
    // i++;
    // int Nfd = intervals[i][1];      // last digit of 2nd pair
    // cout<<Nld<<endl<<Nfd<<endl;
    // cout<<i<<endl<<endl;

    // i++;

    // int nld = intervals[--i][0];   //first digit of 1st pair
    // // int NFD = intervals[i][0];
    // i++;
    // int nfd = intervals[i][1];      // last digit of 2nd pair
    // cout<<nld<<endl<<nfd<<endl;
    // cout<<i<<endl;

    // i++;

    // int neld = intervals[--i][0];   //first digit of 1st pair
    // // int NFD = intervals[i][0];
    // i++;
    // int nefd = intervals[i][1];      // last digit of 2nd pair
    // cout<<neld<<endl<<nefd<<endl;
    // cout<<i<<endl;

    // int n = intervals.size();
    // int x = 0, y = 0;
    // vector<vector<int>> m;
    // while (x < n && y < n)
    // {

    //     int ld = intervals[y][1];
    //     if (y == n - 1)
    //     {
    //         x++;
    //         m.push_back({intervals[x][0], intervals[x][1]});
    //         break;
    //     }
    //     int fd = intervals[++y][0];
    //     if (ld >= fd)
    //     {
    //         int n = y;
    //         if (intervals[--n][0] == intervals[++n][1])
    //         {
    //             m.push_back({fd, ld});
    //         }
    //         else
    //         {
    //             m.push_back({intervals[--y][0], intervals[++y][1]});
    //         }
    //         x++;
    //         y++;
    //     }
    //     else if (ld < fd)
    //     {
    //         x++;
    //         m.push_back({intervals[x][0], intervals[x][1]});
    //     }
    //     else
    //     {
    //         x++;
    //     }
    // }



    // int n = intervals.size();
    // int x = 0, y = 1;
    // vector<vector<int>> m;
    // int st = intervals[0][0];
    // int end = intervals[0][1];
    // while (y < n)
    // {
    //     int fd = intervals[y][0];
    //     int ld = intervals[y][1];
    //     if(fd <= end){
    //         end = max(fd,end);
    //     }else {
    //         m.push_back({st,end});
    //         st = fd;
    //         end = ld;
    //     }
    //     y++;
        
    // }
    // for (auto &val : m)
    // {
    //     for (auto &out : val)
    //     {
    //         cout << out << " ";
    //     }
    //     cout << endl;
    // }


    // vector<vector<int>> intervals = {{4,7},{1,4}};
    // int n = intervals.size();
    // int x = 0, y = 1;   
    // vector<vector<int>> m;

    // int start = intervals[0][0];
    // int end   = intervals[0][1];

    // while (y < n) {
    //     int fd = intervals[y][0]; 
    //     int ld = intervals[y][1]; 

    //     if (fd <= end) {
    //       
    //         end = max(end, ld);
    //     } else {
    //         m.push_back({start, end});
    //         start = fd;
    //         end   = ld;
    //     }
    //     y++;
    // }


    // // push the last interval
    // m.push_back({start, end});

    // // print result
    // for (auto &val : m) {
    //     cout << val[0] << " " << val[1] << endl;
    // }



    vector<vector<int>> intervals = {{4,7},{1,4}};
    int n = intervals.size();
    int x = 0, y = 1;   
    vector<vector<int>> m;
    if(intervals.empty()){
        return m;
    }
    m.push_back(intervals[0]);
    for(int i = 0 ;i<n;i++){
        if(intervals[i][0] <= m[i][1]){
            m[i][1] = max(m[i][1],intervals[i][1]);
        }else{
            m.push_back(intervals[i]);
        }
    }
     for (auto &val : m) {
        cout << val[0] << " " << val[1] << endl;
    }    

}
int main()
{
    
    merge();
}