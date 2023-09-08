// a linkedlist is a pair which contains a data and it holds a pointer which points to it's next node
// the last node always points to NULL and that's how we know it's the last node
// every linked list has head node and tail node, head node is the first node of a linked list and tail node is the last node of a linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// to insert a node in the head we have to pass the head node and the value of the inserting node
void insertAtHead(Node *&head, int d)
{
    // first we have to create a node which contains the given value
    Node *temp = new Node(d);
    // then to insert the node in the head position
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // to create a new node
    Node *node1 = new Node(10); // here we are passing 10 as data and it will create a node valued 10
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    insertAtHead(head, 5);
    print(head);
    Node *tail = node1;
    insertAtTail(tail, 15);
    print(head);
}