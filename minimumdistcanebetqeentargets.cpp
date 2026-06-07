// #include <bits/stdc++.h>        // brute force.......
// using namespace std;
// int distan1(vector<int> &num, int &trgt)
// {
//     int str = 0;
//     int end = num.size() - 1;
//     int dist1 = 0;
//     int dist2 = 0;
//     for (int i = 0; i < num.size(); i++)
//     {
//         int mid = (str + end) / 2;
//         if (num[mid] == trgt)
//         {
//             dist1 = i;
//         }
//         else if (num[mid] > trgt)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             str = mid + 1;
//         }
//     }
//     return dist1;
// }
// int distan2(vector<int> &num, int &st)
// {
//     int str = 0;
//     int end = num.size() - 1;
//     int dist2 = 0;
//     for (int i = 0; i < num.size(); i++)
//     {
//         int nmid = (str + end) / 2;
//         if (num[nmid] == st)
//         {
//             dist2 = i;
//         }
//         else if (num[nmid] > st)
//         {
//             end = nmid - 1;
//         }
//         else
//         {
//             str = nmid + 1;
//         }
//     }
//     return dist2;
// }
// int main()
// {
//     vector<int> num(5);

//     cout << "enter elements of array ";
//     for (int i = 0; i < 5; i++)
//     {
//         int x;
//         cin >> x;
//         num.push_back(x);
//     }
//     int trgt, st;
//     cout << "Enter trgt :: ";
//     cin >> trgt;
//     cout << "Enter starting point :: ";
//     cin >> st;
//     distan1(num, trgt);
//     distan2(num, st);
//     cout << "minimum distance will be :: " << (distan1(num, trgt) - distan2(num, st)) << endl;
// }

// Given an integer array nums (0-indexed) and two integers target and start, find an index i such that nums[i] == target and abs(i - start) is minimized. Note that abs(x) is the absolute value of x.

// Return abs(i - start).

// It is guaranteed that target exists in nums.

#include <bits/stdc++.h>
using namespace std;
int dist(vector<int> &num, int targt)
{
    int str = 0;
    int end = num.size() - 1;

    for (int i = 0; i < num.size(); i++)
    {
        int mid = (str + end) / 2;
        if (num[mid] == targt)
        {
            return mid;
        }
        else if (num[mid] > targt)
        {
            end = mid - 1;
        }
        else
        {
            str = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> num(5);

    cout << "enter elements of array ";
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }
    int trgt, st;
    cout << "Enter trgt :: ";
    cin >> trgt;
    cout << "Enter starting point :: ";
    cin >> st;
    int idx1 = dist(num, trgt);
    int idx2 = dist(num, st);
    cout << "minimum distance will be :: " << min(abs(idx1 - idx2), abs(idx1 - idx2)) << endl;
}