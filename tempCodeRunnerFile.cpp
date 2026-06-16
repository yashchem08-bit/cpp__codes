
#include <bits/stdc++.h>
using namespace std;
void Consecutive_ones(vector<int> &v)
{
    int n = v.size();
    int count = 0;
    int i = 0;
    int tmp = 0;
    // 1, 0 ,1 ,1 , 0 , 1
    while (i != n)
    {
        i++; // 1//2 // 3 // 4 // 5
        if (v[i - 1] == 1)
        {            // 1 , 2 , 3 , 0
            count++; // 1 , 0 , 1 , 2

            if (tmp > count)
            {
                break;
            }

            continue;
        }
        else
        {
            count = 0;
        }
    }
    cout << tmp << endl;
}
int main()
{
    vector<int> v = {1,0,1,1,0,1};
    Consecutive_ones(v);
}