#include<iostream>
using namespace std;

const int pen{10};
const int marker{53};
const int circle{43};
const int chocolate{20};
const int dog{5};

int main(){
   int tool = pen ;
    switch (tool){
        case pen :{
            cout<<"Active tool is pen"<<endl;
        }
        break;
        case marker:{
            cout<<"Active tool is marker"<<endl;
        }
        break;
        default : {
            cout<<"can't indentified any tool"<<endl;
        }
    }
    // int a ;
    // cin>>a;
    // switch (a)
    // {
    // case 1:{
    //     cout<<"Monday"<<endl;
    // }
    //     /* code */
    //     break;
    
    // default:{
    //     cout<<"Invalid input";
    // }
    //     break;
    // }


}
