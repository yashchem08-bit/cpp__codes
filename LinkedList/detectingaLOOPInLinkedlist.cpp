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
bool detect_loop(node* head){   // using hashing
    map<node*,int> m;
    node* temp = head;
    while(temp != nullptr){
        if(m.find(temp) != m.end()){
            return true;
        }
        m[temp] = 1;
        temp = temp->next;
    }
    return false;
}
bool find_loop(node* head){
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> arr = {6,8,4,5,8,3};
}