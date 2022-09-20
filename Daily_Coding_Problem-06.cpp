#include "Daily_Coding_Problem.h"

/* MARK: - SOLUTION ✨ */

// Create a node class
struct Node {
    int val;
    Node* both;
    Node(int x) : val(x), both(NULL) {} // Constructor
};

class XORLinkedList { 
    public:
    Node* head; // head node of the list
    Node* tail; // tail node of the list
    int size; // size of the list
    XORLinkedList() { // initialize the list with empty head and tail nodes and size 0
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void add(int element) { // this function adds a new node to the end of the list with the value of element
        Node* node = new Node(element);
        if (head == NULL) { // IF the list is empty THEN set the head and tail to the new node
            head = node;
            tail = node;
        } else { // OTHERWISE set the tail's both to the XOR of the tail's both and the new node and set the new node's both to the XOR of the tail and NULL
            tail->both = (Node*)((uintptr_t)(tail->both) ^ (uintptr_t)(node));
            node->both = tail;
            tail = node;
        }
        size++; // incrementa the size of the list
    }
    Node* get(int index) { // this function returns the node at the index of the list
        if (index >= size) return NULL;
        Node* prev = NULL;
        Node* curr = head;
        Node* next;
        for (int i = 0; i < index; i++) { // for each node in the list from the head to the index node 
                                            // XOR the prev and next nodes and set the prev to the curr and 
                                            // the curr to the next
            next = (Node*)((uintptr_t)(curr->both) ^ (uintptr_t)(prev)); // convert the curr's both to a uintptr_t and XOR 
                                // it with the prev to get the next node because the curr's both is the XOR of the prev and next nodes
            prev = curr;
            curr = next;
        }
        return curr;
    }
};

// MARK: - Main func

int main() {
    XORLinkedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    cout << list.get(0)->val << endl;
    cout << list.get(1)->val << endl;
    cout << list.get(2)->val << endl;
    cout << list.get(3)->val << endl;
    cout << list.get(4)->val << endl;
}
