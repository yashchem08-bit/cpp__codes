#include <bits/stdc++.h>
using namespace std;
class Vector
{
public:
    int size;
    int capa;
    int *arr;
    Vector()
    {
        size = 0;
        capa = 1;
        arr = new int[1];
    }
    void push(int a)
    {
        if (size == capa)
        {
            capa *= 2;
            int *arr2 = new int[capa];
            for(int i = 0; i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = a;
    }
    void print(){
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int idx){
        return arr[idx];
    }
    void remove(){
        size--;
    }


};
int main()
{
    Vector v1;
    v1.push(10);
    v1.print();
    v1.push(15);
    v1.print();
}