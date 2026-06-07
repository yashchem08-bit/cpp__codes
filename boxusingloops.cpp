// #include <graphics.h>
// #include <conio.h>

// int main() {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");

//     rectangle(100, 100, 300, 200); // Draws a box from (100,100) to (300,200)

//     getch();
//     closegraph();
//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    // int width, height;
    // cout << "Enter width of box: ";
    // cin >> width;
    // cout << "Enter height of box: ";
    // cin >> height;

    // // Top border
    // for (int i = 0; i < width; i++) {
    //     cout << "*";
    // }
    // cout << endl;

    // // Middle part
    // for (int i = 0; i < height - 2; i++) {
    //     cout << "*"; // Left border
    //     for (int j = 0; j < width - 2; j++) {
    //         cout << " "; // Empty space inside
    //     }
    //     cout << "*"; // Right border
    //     cout << endl;
    // }

    // // Bottom border
    // for (int i = 0; i < width; i++) {
    //     cout << "*";
    // }
    // cout << endl;

    // return 0;

    int n = 5;
    for(int i = 1; i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i == 1 || i == n || j == 1 || j == n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}