// #include <bits/stdc++.h>
// using namespace std;
// void Consecutive_ones(vector<int> &v)
// {
//     int n = v.size();
//     int count = 0;
//     int i = 0;
//     int tmp = 0;
//     int tmp1=0;
//     while (i != n)
//     {
//         i++; 
//         if (v[i - 1] == 1)
//         {           
//             count++; 
//             if(count<tmp)
//             {   
            
//                 break;
                
//             }
//             tmp=count;
//             continue;
//         }
//         else
//         {
//             count = 0;
        
//         }
//         tmp1=tmp;
//     }
//     cout << tmp1 << endl;
// }
// int main()
// {
//     vector<int> v = {1,1,0,1,1,1};
//     Consecutive_ones(v);
// }

#include <bits/stdc++.h>
using namespace std;
void Consecutive_ones(vector<int> &v)
{
    int n = v.size();
    int count = 0;
    int i = 0;
    
    int arr[n] = {0};
    while( i != n){
        i++;
        if(v[i-1] == 1){
            count++;
            arr[i-1] = count;
            continue;
        }else{
            count = 0;
            arr[i-1] = count;
        }
    }
    int max = INT_MIN;
    for(int j = 0 ;j<n;j++){
        if(max<arr[j]){
            max = arr[j];
        }
    }
    cout<<max<<endl;
}
int main()
{
    vector<int> v = {1,1,1,0,1,1,1,1,1};
    Consecutive_ones(v);
}