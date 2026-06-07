#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * (n - i) - 1; k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         int N = (i % 2) == 0 ? 2 : 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(N + 64) << " ";
//             if (N == 1)
//             {
//                 N++;
//             }
//             else
//             {
//                 N--;
//             }
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1 ; j<=n ; j++){
//             if(i >1 && i<n && j>1 && j<n){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }