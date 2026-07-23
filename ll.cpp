#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
    void print(){
        cout<<data<<endl;
    }
};
int main(){
    struct node ll1 , ll2 , ll3;
    ll1.data = 1;
    ll2.data = 2;
    ll3.data = 3;

    ll1.next = &ll2;
    ll2.next = &ll3;
    ll3.next = NULL;

    ll1.print();
    ll2.print();


    struct node ll4 = {4,NULL};   // insert ll at the end
    struct node* temp = &ll1;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = &ll4;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}