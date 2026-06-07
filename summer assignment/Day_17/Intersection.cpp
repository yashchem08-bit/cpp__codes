#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
void Intersection(int num1[], int num2[], int &n, int &m)
{
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num1[i] == num2[j])
            {
                result.push_back(num1[i]);
            }
        }
    }
    unordered_set<int> seen;
    vector<int> re;
    for (auto &val : result)
    {
        if (seen.find(val) == seen.end())
        {
            re.push_back(val);
            seen.insert(val);
        }
    }
    for (auto &out : re)
    {
        cout << out << " ";
    }
}
int main()
{
    int num1[4] = { 1, 2, 2, 1 };
    int num2[3] = { 2, 2 };

    int n = 4, m = 3;

    Intersection(num1, num2, n, m);
}