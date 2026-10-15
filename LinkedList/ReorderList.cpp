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
};
 node* reverse(node* tmp){
        node* curr = tmp;
        node* prev = NULL;
        while(curr != NULL){
            node* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    void reorderList(node* head) {
        if(head->next == NULL){
            return;
        }
        if(head->next->next == NULL){
            return;
        }
    node* tmp = head;
        node* slow = head;
        node* fast = head;
        while(fast->next != NULL && fast->next->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        node* temp = slow->next;
        slow->next = NULL;
    node* half_head = reverse(temp);
        while(half_head != NULL){
            node* fwd = tmp->next;
            node* newfwd = half_head->next;
            tmp->next = half_head;
            half_head->next = fwd;
            tmp = fwd;
            half_head = newfwd;
        }
       
       
    }
node* convert_vector_ll(vector<int>& arr){
    node* newnode = new node(arr[0]);
    node* head = newnode;
    node* ans = newnode;
    for(int i = 1 ;i<arr.size();i++){
        node* Node = new node(arr[i]);
        ans->next = Node;
        ans = Node;
    }
    ans->next = NULL;
    return head;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    node* head = convert_vector_ll(arr);
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
}