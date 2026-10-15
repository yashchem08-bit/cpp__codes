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
class My_DLL{
    private:
    node* head;
    node* tail;
    int len;
public:
    My_DLL(){
        head = tail = NULL;
        len = 0;
    }
    void insert_tail(int val){
        node* newnode = new node(val);
        if(tail == NULL){
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        len++;
    }
    void insert_head(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }else{
            newnode->next = head;
            head->prev = head;
            head = newnode;
        }
        len++;
    }
    void remove_at_head(){
        if(head == NULL){
            return;
        }else{
            head = head->next;
            head->prev = NULL;
        }
        len--;
    }
    void remove_at_tail(){
        if(tail == NULL){
            return;
        }else{
            tail = tail->prev;
            tail->next = NULL;
        } 
        len--;
    }
    void insert_at_idx(int val , int idx){
        if(idx > len){
            return;
        }
        node* newnode = new node(val);
        if(idx == 0){
            insert_head(val);
            return;
        }
        if(idx == len){
            insert_tail(val);
            return;
        }
        node* tmp = head;
        for(int i = 0;i<idx;i++){
            tmp = tmp->next;
        }
        newnode->prev = tmp;
        newnode->next = tmp->next;
        tmp->next->prev = newnode;
        tmp->next = newnode;

    }
    void del_at_idx(int idx){
        node* tmp = head;
        for(int i = 0;i<idx;i++){
            tmp = tmp->next;
        }
        node* x = tmp->prev;
        x->next = tmp->next;
        tmp->next->next = 
        tmp->prev = x;
    }
    void print(){
        node* tmp = head;
        while(tmp){
            cout<<tmp->data<<"->";
            tmp = tmp->next;
        }
        cout<<endl;
    }
};
node* array_DLL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* pre = head;
    for(int i = 1;i<arr.size();i++){
        node* temp = new node(arr[i],NULL,pre);
        pre->next = temp;
        temp->prev = pre;
        pre = temp;
    }
    return head;
}   
int main(){
    vector<int> arr = {3,6,2,7};// array to DLL
    node* head = array_DLL(arr);
    My_DLL newhead ;
    newhead.insert_head(10);
    newhead.insert_tail(20);
    newhead.insert_tail(30);
    newhead.insert_tail(40);
    newhead.print();
    // newhead.insert_at_idx(50,1);
    newhead.del_at_idx(3);
    newhead.print();
}