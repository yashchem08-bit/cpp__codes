#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= n; k++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
           cout<<char(j+64);
        }
        for(int l = i-1;l>=1;l--){
            cout<<char(l+64);
        }
        cout << endl;
    }
    
}