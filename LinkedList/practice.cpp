#include <bits/stdc++.h>
using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         int val = this->data;
//         if (this->next != NULL)
//         {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "memory is freed from " << val << endl;
//     }
// };

// void insertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// void inserAtTail(Node *&tail, int d)
// {
//     Node *temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }

// void print(Node *&head)
// {
//     if(head==NULL){
//         cout<<"List is empty"<<endl;
//         return;
//     }
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     insertAtHead(head, 5);
// }

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// void insertAtAnyPosition(Node *&head, Node *&tail, int pos, int d){
//     if(pos==1){
//         insertAtHead(head,d);
//         return;
//     }
//     Node *temp=head;
//     int cnt=1;

//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }

//     if(temp->next=NULL){
//         insertAtTail(tail,d);
//         return;
//     }

//     Node*nodeToInsert=new Node(d);
//     nodeToInsert->next=temp->next;
//     temp->next=nodeToInsert;
// }

void insertAtAnyPosition(Node *&head, Node *&tail, int pos, int d)
{
    Node *temp = head;
    int cnt = 1;
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 5);
    insertAtTail(tail, 20);
    print(head);
}