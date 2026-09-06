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
    node(int data , node* next){
        this->data = data;
        this->next = next;
    }
};
node* add_no(node* l1 , node* l2){
    node* dummy = new node(0);
    node* ans = dummy;
    node* t1 = l1;
    node* t2 = l2;
    int carr = 0;
    while(t1 != NULL || t2 != NULL){
        int sum = carr;
        if(t1) sum += t1->data;
        if(t2) sum += t2->data;
        node* sum_node = new node(sum%10);
        carr = sum/10;
        ans->next = sum_node;
        ans = ans->next;
        if(t1){
            t1 = t1->next;
        }
        if(t2){
            t2 = t2->next;
        }  
    }
    if(carr != 0){
        node* Node = new node(carr);
        ans->next = Node;
        ans = ans->next;
    }
    ans->next = NULL;
    return dummy->next;

}
node* arr_to_ll(vector<int> arr ){
    node* head = new node(arr[0]);
    node* temp = head;
    for(int i = 1 ;i<arr.size();i++){
        node* tmp = new node(arr[i],NULL);
        temp->next = tmp;
        temp = tmp;
    }
    return head;
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
    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {2,9,9,5};
    node* ll1 = arr_to_ll(arr1);
    // print(ll1);
    node* ll2 = arr_to_ll(arr2);
    // print(ll2);
    node* head = add_no(ll1,ll2);
    print(head);
}