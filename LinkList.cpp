#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* n;

    node(){

    }

    node(int val){
        data = val;
        n = NULL;
    }
    // void display(){
    //     cout<<data<<" "<<n<<endl;
    // }
};

class List{
    node* head;
    node* tail;

public:
    
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        node* NewNode = new node(val);

        if(head == NULL){
            head = tail = NewNode;
            return ;
        }else{
            NewNode->n = head;
            head = NewNode;
        }
        
    }

    void push_back(int val){
        node* Newnode = new node(val);

        if(head == NULL){
            head = tail = Newnode;
        }else{
            tail->n = Newnode;
            tail = Newnode;
        }
    }
    void display(){
        node* disp = head;

        while(disp != NULL){
            cout<<disp->data<<"->";
            disp = disp->n;
        }
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.display();
}