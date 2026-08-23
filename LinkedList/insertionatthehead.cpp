#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data , node* next){
        this->data = data;
        this->next = next;
    }
    node(){

    }
};
void print(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    
}
node* insert_head(node* head , int ele){
    node* temp = new node(ele,head);
    return temp;
}
node* insert_tail(node* head , int ele){
    node* temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newnode = new node(ele,NULL);
    temp->next = newnode;
    return head;
}
node* insert_at_k(node* head , int ele , int k){
    
    if(k == 1){
        node* newnode = new node(ele,head);
        return head;
    }

    if(head == NULL){
        return new node(ele,head);
    }

    node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            node* x = new node(ele, temp->next);
            temp->next = x;
            return head;
        }
        temp = temp->next;
    }
}
int main(){
    node a;
    node b;
    node c;
    a.data = 5;
    a.next = &b;
    b.data = 4 ;
    b.next = &c;
    c.data = 3;
    c.next = NULL;

    node* head = &a;

    // head = insert_head(head,2);
    // head = insert_tail(head,6);
    head = insert_at_k(head , 7 , 2);
    // node* t = head;
    print(head);
}
