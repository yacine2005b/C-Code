#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct doublyLinkedList {
    struct node* head;
    struct node* tail;
};

// Create a node
struct node* createNode(int newdata) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

// Add a node at the beginning of the linked list
void addAtStart(struct doublyLinkedList* ls, int data) {
    struct node* newnode = createNode(data);

    // Check if there is a head
    if (!ls->head) {
        ls->head = newnode;
        ls->tail = newnode;
    } else {
        newnode->next = ls->head;
        ls->head->prev = newnode;
        ls->head = newnode;
    }
}

// Add a node at the end of the linked list
void addAtEnd(struct doublyLinkedList* ls, int data) {
    struct node* newnode = createNode(data);

    // Check if there is a head
    if (!ls->head) {
        ls->head = newnode;
        ls->tail = newnode;
    } else {
        newnode->prev = ls->tail;
        ls->tail->next = newnode;
        ls->tail = newnode;
    }
}

// Print the linked list
void printLs(struct doublyLinkedList* ls) {
    struct node* current = ls->head;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct doublyLinkedList doubly = { NULL, NULL };

    addAtEnd(&doubly, 1);
    addAtEnd(&doubly, 2);
    addAtStart(&doubly, 0);
    printLs(&doubly);
}

