#include <iostream>
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
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        cout << head << endl;
        head = NULL; // Initialize head to NULL
        cout << head << endl;
    }

    // Method to add a new node to the list
    void add(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return; // Return after setting head
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Method to print the list
    void printList()
    {
        Node *temp = head;
        while (temp != NULL) // Ensure we process the last node
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void remove(int value)
    {
        // is empty
        if (head == NULL)
        {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        // If the node to be deleted is the head
        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp; // Free memory
            return;
        }

        // Traverse to find the node to delete
        Node *temp = head;
        while (temp->next != NULL && temp->next->data != value)
        {
            temp = temp->next;
        }

        // If the value is not found
        if (temp->next == NULL)
        {
            cout << "Value " << value << " not found in the list." << endl;
            return;
        }

        // Delete the node
        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete; // Free memory
    }
    // If the value is not found
    Node *reverseList()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        Node *temp = prev;
        while (temp != NULL) // Ensure we process the last node
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        return prev;
    }
};

int main()
{
    LinkedList l1;
    l1.add(1);
    l1.add(2);
    l1.add(3);
    l1.printList();
    l1.remove(1);
    l1.printList();
    l1.reverseList();
    return 0;
}
