// #include <bits/stdc++.h>
// using namespace std;
// void sec_lar(int arr[], int &n)
// {
//     int st = 0;
//     int end = n - 1;

//     int m = INT_MAX;
//     int n = INT_MIN;
//     while (st<end)
//     {
//         int q = INT_MIN;
//         int o = INT_MAX;
//         arr[st] = o;    // max = 3
//         if(arr[st+1] >= arr[st]){
            
//             if(m >= o){
                
//             }
//         }
//         if(m<arr[st+1]){ 
//             arr[st+1] = m;
//             arr[st] = n;
//             st++;
//         }else if(m>arr[st+1]){
//             arr[st+1] = n;
//             st++;
//         }else{
//             st++;
//         }
//     }
    
// }
// int main()
// {
//     int arr[] = {3, 7, 2, 6, 18, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
// }









// #include <bits/stdc++.h>               // NEW CORRECTED CODE .............
// using namespace std;
// void sec_lar(int arr[], int &n)
// {

//     if (n<2){
//         cout<<"ARRAY SHOULD HAVE ENTRIES GREATER THAN 2 ";
//         return ;
//     }

//     for(int i=0 ; i<n;i++){
//         if(arr[i] == arr[i+1]){
//             cout<<"PLEASE INPUT DIFFERENT ENTRIES INTO ARRAY--";
//             return ;
//         }
//     }


//     int lar = INT_MIN;
//     int seclar = INT_MIN;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > lar){
//            seclar = lar; 
//            lar = arr[i];
//         }else if(arr[i] > seclar && arr[i] != lar){
//             seclar = arr[i];
//         }
//     }

//     if(seclar == INT_MIN){
//         cout<<"NO SECOND LARGEST ELEMENT FOUND---";
//     }else{
//         cout<<"SECOND LARGEST NUMBER IS :: "<<seclar;
//     }
    
// }
// int main()
// {
//     int arr[] = {3, 7, 2, 6, 18, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sec_lar(arr,n);
// }









#include <bits/stdc++.h>            // CODE FOR ALL TEST CASES.................
using namespace std;

void sec_lar(int arr[], int n)
{
    if (n < 2) {
        cout << "ARRAY SHOULD HAVE ENTRIES GREATER THAN 2";
        return;
    }

    int lar = INT_MIN;
    int seclar = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > lar) {
            seclar = lar;   // old largest becomes second largest
            lar = arr[i];
        } else if (arr[i] > seclar && arr[i] != lar) {
            seclar = arr[i];
        }
    }

    if (seclar == INT_MIN) {
        cout << "NO SECOND LARGEST ELEMENT FOUND---";
    } else {
        cout << "SECOND LARGEST NUMBER IS :: " << seclar;
    }
}

int main()
{
    int arr1[] = {3, 7, 2, 6, 18, 9};       // normal case
    int arr2[] = {10, 20, 20, 30};          // duplicates
    int arr3[] = {5, 5, 5};                 // all equal

    cout << "Test 1: ";
    sec_lar(arr1, sizeof(arr1)/sizeof(arr1[0]));
    cout << "\n";

    cout << "Test 2: ";
    sec_lar(arr2, sizeof(arr2)/sizeof(arr2[0]));
    cout << "\n";

    cout << "Test 3: ";
    sec_lar(arr3, sizeof(arr3)/sizeof(arr3[0]));
    cout << "\n";
}