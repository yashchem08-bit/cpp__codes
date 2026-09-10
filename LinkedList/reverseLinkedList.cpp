#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
    node(int data,node* next){
        this->data = data;
        this->next = next;
    }

};
node* array_ll(vector<int> arr){
    node* head = new node(arr[0]);
    node* temp = head;
    for(int i = 1 ;i<arr.size();i++){
        node* tmp = new node(arr[i],NULL);
        temp->next = tmp;
        temp = tmp;
    }
    return head;
}
node* reverse_ll(node* head){   // iterative approach
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
node* reverse(node* head){  // recursive approach
   if(head == NULL){
    return head;
   }
   if(head->next == NULL){
    return head;
   }
    node* newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {1,2,3,4};
    node* head = array_ll(arr);
    print(head);
    head = reverse_ll(head);
    print(head);
    head = reverse(head);
    head = reverse(head);
    print(head);
}