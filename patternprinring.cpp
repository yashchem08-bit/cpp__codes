#include<iostream>       // pattern for printing table of any number
using namespace std;
int main(){
    int n;
    cout<<"Enter n :: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
}




// #include<iostream>       //pattren for   //1 
                                            // 1 2
                                            // 1 2 3
                                            // 1 2 3 4
                                            // 1 2 3 4 5
                                            // 1 2 3 4 5 6
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n :: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }




// #include<iostream>          Enter n :5
//                                 // 1 2 3 4 
//                                 // 1 2 3 
//                                 // 1 2 
//                                 // 1 
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n :";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>         
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n :";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             if(i == j || i >=j){
//                 cout<<"*"<<" ";
//             }
//         }
//         }
//         cout<<endl;
//     }
