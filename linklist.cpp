#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void display(Node *n)
{
    while (n != '\0')
    {
        cout << n->value << endl;
        n = n->next;
    }
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->value = 1;
    second->value = 4;
    third->value = 7;
    fourth->value = 9;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    display(head);

    return 0;
}