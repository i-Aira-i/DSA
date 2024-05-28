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

//insert at starting
    Node* insertAtFirst(int data) {
        Node * ptr = new Node(data);
        ptr->next = head;
        head = ptr;
        return head;
    }

    //iisert in between
    Node * insertAtIndext(int data, int index) {
        Node * ptr = new Node(data);
        Node * p = head;
        int i = 0;

        while (i != index-1) {
            p = p->next;
            i++;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;
        return head;    
    }


    //insert at end
    Node* insertAtEnd(int data) {
        Node * ptr = new Node(data);
        Node * p = head;

        while(p->next != nullptr){
            p = p->next;
        }
        p->next = ptr;
        ptr->next = nullptr;
        return head;
    }


    Node * insertAfterNode(Node * prevNode, int data) {
        Node * ptr = new Node(data);

        ptr->next = prevNode->next;
        prevNode->next = ptr;

        return getHead();   
    }

    Node* getHead() {
        return head;
    }

};



int main() {
    LinkedList myList;
    myList.addNode(7);
    myList.addNode(11);
    myList.addNode(24);
    myList.addNode(39);

    myList.LinkedListTraversal();

    //myList.insertAtFirst(56);
    //myList.LinkedListTraversal();

    //myList.insertAtIndext(67,3);
    //myList.LinkedListTraversal();

    //myList.insertAtEnd(99);
    //myList.LinkedListTraversal();


    Node * prevNode =myList.getHead();
    for(int i = 0; i<3; i++){
        prevNode = prevNode->next;
    }
    
    myList.insertAfterNode(prevNode,3);
    myList.LinkedListTraversal();


    return 0;
}
