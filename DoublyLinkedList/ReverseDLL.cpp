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
// node* reverse_DLL(node* head){   // uses stack to implement
//     stack<int> st;
//     node* temp = head;
//     int i = 0;
//     while(temp){
//         st.push(temp->data);
//         temp = temp->next;
//         i++;
//     } 
//    temp = head;
//     while(temp){ 
//         int x = st.top();
//         st.pop();
//         temp->data = x;
//         temp = temp->next;
//     }
//     return head;
// }
node* reverse_DLL(node* head){  // not using any auxillary space
    node* temp = head;
    node* last = NULL;
    while(temp != NULL){
        last = temp->prev;
        temp->prev = temp->next;
        temp->next = last;
        temp = temp->prev;
    }
    return last->prev;
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
    vector<int> arr = {3,6,2,7};// array to DLL
    node* head = array_DLL(arr);
    // head = reverse_DLL(head);
    // print(head);
    node* newhead = reverse_DLL(head);
    print(newhead);
}