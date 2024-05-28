#include <iostream>
using namespace std;


/*
struct Node {
    int data;
    Node * next;
};


void LinkedlistTraversal(Node * ptr) {
    while(ptr != nullptr) {
        cout << "element :"<< ptr -> data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    Node * head;
    Node * second;
    Node * third;
    Node * fourth;

    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;


    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 24;
    third->next = fourth;

    fourth->data= 39;
    fourth->next= nullptr;

    LinkedlistTraversal(head);
    
    return 0;
}
*/

/*
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node*head;

public:
    LinkedList() {
        head = nullptr;
    }

    void LinkedlistTraversal(Node * ptr) {
        while(ptr != nullptr){
            cout << "element :"<< ptr -> data << endl;
            ptr = ptr->next;
        }
    }


    void func(class Node * head){
        if (head ==NULL) {
            return; func(head->next);
            cout << head->data <<" ";
        }
    }

};



int main()
{
    Node* head = new Node(7);
    Node* second = new Node(11);
    Node* third = new Node(24);
    Node* fourth = new Node(39);


    head->next = second;
    second->next = third;
    third->next = fourth;

    LinkedList lst;

    //lst.LinkedlistTraversal(head);
     
    lst.func(head);
    return 0;
}
*/



/*---------------------------------------------------------------------------------------------------*/

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void addNode(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void LinkedListTraversal() {
        Node* ptr = head;
        while (ptr != nullptr) {
            std::cout << "Element: " << ptr->data << std::endl;
            ptr = ptr->next;
        }
    }
};

int main() {
    LinkedList myList;
    myList.addNode(7);
    myList.addNode(11);
    myList.addNode(24);
    myList.addNode(39);

    myList.LinkedListTraversal();

    return 0;
}
