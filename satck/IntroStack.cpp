#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    node(int data, node *next)
    {
        this->data = data;
        this->next = next;
    }
};
int top;
node *tmp;
node *push(node *&head, int val)
{
    top++;
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
    tmp = head;
    return head;
}
node *pop(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    if (head->next == NULL)
    {
        return 0;
    }
    top--;
    node *temp = head;
    head = head->next;
    tmp = head;
    delete (temp);
    return head;
}
int top_ele()
{
    return tmp->data;
}
node *arr_Stack(vector<int> &arr)
{
    node *newnode = new node(arr[arr.size() - 1], NULL);
    node *temp = newnode;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        node *curr = new node(arr[i], temp);
        temp = curr;
    }

    return temp;
}
void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << endl
             << "|" << endl;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {3, 4, 5, 22, 6, 5, 8, 5};
    node *head = arr_Stack(arr);
    //    print(head);
    head = push(head, 10);
    head = push(head, 20);
    head = pop(head);
    head = push(head, 40);
    head = pop(head);
    // cout<<top_ele();
    print(head);
}