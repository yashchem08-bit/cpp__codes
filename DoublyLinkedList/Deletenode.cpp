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
node* del_at_front(node* head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    node* temp = head;
    head = head->next;
    free(temp);
    head->prev = NULL;
    return head;
}
node* del_tail(node* head){
    if(head == NULL || head->next == NULL){
        delete(head);
        return NULL;
    }
    node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node* tmp = temp->next;
    temp->next = NULL;
    tmp->prev = NULL;
    delete(tmp);
    return head;
}
node* del_Kth(node* head, int k){
    if(head == NULL || head->next == NULL){
        delete(head);
        return NULL;
    }
    int cnt = 0;
    node* temp = head;
    while(cnt != k && temp != NULL){
        cnt++;
        temp = temp->next;
    }
    if(temp->next == NULL){
        node* tmp = temp->prev;
        temp->prev = NULL;
        tmp->next = NULL;
        delete(temp);
        return head;
    }else if(temp->prev == NULL){
        node* tmp = temp->next;
        delete(temp);
        head = tmp;
        return head;
    }else{
        node* tmp = temp->next;
        node* pre = temp->prev;
        delete(temp);
        pre->next = tmp;
        return head;
    }
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {3,6,2,7};// array to DLL
    node* head = array_DLL(arr);
    // head = del_at_front(head);
    // head = del_at_front(head);
    // head = del_tail(head);
    head = del_Kth(head,0);
    print(head);
}