#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter n :: ";
    cin >> n;
    int temp = n, ams = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    int ntemp = temp;
    for (int i = 1; i <= count; i++)
    {
        int ld = temp % 10;
        ld = pow(ld,count);
        temp /= 10;
        ams += ld;
    }
    if(ntemp == ams){
        cout<<"amstrong number ";
    }else{
        cout<<"Not amstrong number ";
    }
}