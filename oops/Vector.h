#pragma once
class Vector
{
public:
    int size;
    int capa;
    int *arr;
    int begin;
    int end;
    Vector()
    {
        size = 0;
        capa = 1;
        arr = new int[1];
        begin = 0;
        
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
        end = size;
    }
    
    int get(int idx){
        return arr[idx];
    }
    void remove(){
        size--;
    }
    
    

};
