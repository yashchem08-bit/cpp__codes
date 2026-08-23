#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void print(node* temp){
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
        cout<<"->";
    }
}
node* deleteK(node* temp , int k){      // using  idx 
    if(temp == nullptr){
        return temp;
    }
    if(k == 1){
        node* t = temp;
        temp = temp->next;
        free(t);
        return temp;
    }
    int i = 0;
    node* t = temp;
    node* prev = NULL;
    while(t != NULL ){
         i++;
        if(i == k){
            prev->next = prev->next->next;
            break;
        }
        prev = t;
        t = t->next;
    }
    free(t);
}
node* deleteK(node* temp , int ele){    // using value of that idx
    if(temp == nullptr){
        return temp;
    }
    if(temp->data == ele){
        node* t = temp;
        temp = temp->next;
        free(t);
        return temp;
    }
    int i = 0;
    node* t = temp;
    node* prev = NULL;
    while(t != NULL ){
         i++;
        if(t->data == ele){
            prev->next = prev->next->next;
            break;
        }
        prev = t;
        t = t->next;
    }
    free(t);
}
node* delete_at_head(node* head){
    if(head == NULL){
        return head;
    }
    node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
node* delete_at_tail(node* temp){
    if(temp->next == NULL){
        return NULL;
    }
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node* t1 = temp->next;
    temp->next = NULL;
    free(t1);
}
int main()
{
    node ll1;
    node ll2;
    node ll3;
    node ll4;
    node ll5;

    ll1.data = 1;
    ll1.next = &ll2;

    ll2.data = 2;
    ll2.next = &ll3;

    ll3.data = 3;
    ll3.next = &ll4;

    ll4.data = 4;
    ll4.next = &ll5;

    ll5.data = 5;
    ll5.next = NULL;

    node* head = &ll1;

    head = delete_at_head(head); 
    node* t1 = head;
    delete_at_tail(t1);
    node* temp = head;
    print(temp);

}