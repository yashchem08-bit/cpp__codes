#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = next;
    }
    node(int data , node*next){
        this->data = data;
        this->next = next;
    }
};
node* arr2LL(vector<int> arr){
    node* head = new node(arr[0]);
    node* temp = head;
    for(int i = 1;i<arr.size();i++){
        node* newnode  = new node(arr[i],NULL);
        temp->next = newnode;
        temp = newnode;
    }
    temp->next = head;
    return head;
}
node* push(node* head , int val){
    node* newnode = new node(val);
    if(head == NULL){   
        head = newnode;
        return head;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    return head;
}
void print(node* head){
    node* temp = head;
    while(temp->next != head){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){ 
    vector<int> arr = {1,2,3,4,5};
    node* head = arr2LL(arr);
    print(head);
    head = push(head,10);
    print(head);
}