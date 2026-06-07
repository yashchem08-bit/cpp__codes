#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void common(vector<int> v1, vector<int> v2)
{
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    vector<int> result;
    for (auto &val : v1)
    {
        m1[val]++;
    }
    for (auto &val : v2)
    {
        m2[val]++;
    }

    for (auto &out : m1)
    {
        if (m2.find(out.first) != m2.end())
        {
            result.push_back(out.first);
        }
    }
    for (auto &val : result)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1 = {1, 4, 2, 3};
    vector<int> v2 = {1, 3, 6, 7};
    int n = 4;

    common(v1, v2);
}