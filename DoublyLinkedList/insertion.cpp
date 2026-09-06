#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* prev;
    node* next;

    node(int data , node* prev, node* next){
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
    node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};
node* convert_array2_DLL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* pre = head;
    for(int i = 1 ;i<arr.size();i++){
        node* temp = new node(arr[i],pre,NULL);
        pre->next = temp;
        pre = temp;
    }
    return head;
}
node* insert_front(node* head,int val){
    node* newnode = new node(val,NULL,head);
    if(head == NULL){
        return newnode;
    }
    head->prev = newnode;
    head = newnode;
    return head;
}
node* insertTail(node* head , int val){
    
    // node* temp = head;
    // while(temp->next->next != NULL){
    //     temp = temp->next;
    // }
    // node* x = temp->next;
    // temp->next = newnode;
    // newnode->prev = temp;
    // newnode->next = x;
    // x->prev = newnode;

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* pre = temp->prev;
    node* newnode = new node(val,pre,temp);
    pre->next = newnode;
    temp->prev = newnode;
    
    return head;
}
void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {6,4,8,2,7,5,6};
    node* head = convert_array2_DLL(arr);
    head = insert_front(head,30);
    head = insert_front(head,60);
    head = insertTail(head,90);
    head = insertTail(head,70);
    print(head);
}