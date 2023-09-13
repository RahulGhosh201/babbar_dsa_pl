#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freed " << value << endl;
    }
};

void insertAtHead(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void middleElement(Node *head)
{
    int size = 0;
    Node *temp = new Node(head->data);
    Node *n = new Node(head->data);
    while (temp->next != NULL)
    {
        temp = temp->next;
        size++;
    }
    int ans = 0;
    size = size / 2;
    while (size > 0)
    {
        n = n->next;
        ans = n->data;
        size--;
    }
    cout << "Ans: " << ans;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    middleElement(head);
    return 0;
}