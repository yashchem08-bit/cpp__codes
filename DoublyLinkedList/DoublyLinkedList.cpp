#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* prev;
    node* next;

    node(int data ,node* next, node* prev){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
node* array_DLL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* pre = head;
    for(int i = 1;i<arr.size();i++){
        node* temp = new node(arr[i],NULL,pre);
        pre->next = temp;
        pre = temp;
    }
    return head;
}   
int main(){
    vector<int> arr = {3,6,2,7};// array to DLL
    node* head = array_DLL(arr);
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
}