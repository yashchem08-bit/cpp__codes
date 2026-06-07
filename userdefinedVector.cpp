// #include<bits/stdc++.h>
// using namespace std;
// class Vector{
//     public:

//     int size;
//     int capacity;
//     int *arr;

//     Vector(){
//         size = 0;
//         capacity = 1;
//         arr = new int[1];
//     }

//     void add(int ele){
//         if(size == capacity){
//             capacity *= 2;
//             int* arr2 = new int[capacity];

//             for(int i=0;i<size;i++){
//                 arr2[i] = arr[i];
//             }

//             arr = arr2;
//         }
//         arr[size++] = ele;
//     }

//     void print(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

//     int get(int idx){
//         if(size ==0){
//             cout<<"ARRAY IS EMPTY"<<endl;
//             return -1;
//         }
//         if(idx >= size || idx<0){
//             cout<<"Invalid index "<<endl;
//             return -1;
//         }
//         return arr[idx];
//     }

//     void remove(){
//         if(size == 0){
//             cout<<"ARRAY IS EMPTY"<<endl;
//         }
//         size--;
//     }
// };
// int main(){
//     Vector v;
//     v.add(10);
//     // cout<<v.size<<" "<<v.capacity<<endl;
//     v.print();
//     v.add(15);
//     // cout<<v.size<<" "<<v.capacity<<endl;
//     v.print();
//     v.add(19);
//     // cout<<v.size<<" "<<v.capacity<<endl;
//     v.print();
//    // cout<<v.get(2)<<endl;
//     v.remove();
//     //cout<<v.get(2)<<endl;
//     v.print();
//     v.remove();
//     v.print();

// }

































#include<bits/stdc++.h>
using namespace std;
class Vector{
public :
    int size;
    int capacity;
    int *arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele){

        if (size == capacity){
        capacity *= 2;
        int* arr2 = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            arr2[i] = arr[i];
        }
        arr2 = arr;
        
        }

        arr[size++] = ele;
    }

    int get(int idx){
        if(idx>=size || idx<0){
            cout<<"INVALID INDEX"<<endl;
            return -1;
        }
        if(size == 0){
            cout<<"ARRAY IS EMPTY"<<endl;
            return -1;
        }

        return arr[idx];
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void remove(){
        if(size == 0){
            cout<<"ARRAY IS EMPTY"<<endl;
        }
        size--;
    }
};
int main(){
    Vector v;
    v.add(0);
    v.add(2560);
    v.add(2560);
    v.add(2560);
    v.add(2560);
    v.add(2560);
    v.add(2560);
    v.add(2560);
    v.add(2560);
    v.print();
   // cout<<v.size<<" "<<v.capacity<<endl;
    v.remove();
    v.print();
     v.remove();
    v.print();
     v.remove();
    v.print();
     v.remove();
    v.print();
     v.remove();
    v.print();
     v.remove();
    v.print();
     v.remove();
    v.print();
     v.remove();
    v.print();
     v.remove();
    v.print();
}