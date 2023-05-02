#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;
void main()
void insert_begin(int value) {
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    if(new_node == NULL) {
        printf("\nMemory allocation failed.\n");
        return;
    }
    new_node->data = value;
    if(head == NULL) {
        new_node->next = NULL;
    } else {
        new_node->next = head;
    }
    head = new_node;
    printf("\nOne node inserted at the beginning.\n");
}

void insert_end(int value) {
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    if(new_node == NULL) {
        printf("\nMemory allocation failed.\n");
        return;
    }
    new_node->data = value;
    new_node->next = NULL;
    if(head == NULL) {
        head = new_node;
    } else {
        struct Node *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("\nOne node inserted at the end.\n");
}

void insert_between(int value) {
    int key;
    printf("\nEnter the key value after which you want to insert the node: ");
    scanf("%d", &key);
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    if(new_node == NULL) {
        printf("\nMemory allocation failed.\n");
        return;
    }
    new_node->data = value;
    struct Node *temp = head;
    while(temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if(temp == NULL) {
        printf("\nKey not found.\n");
    } else {
        new_node->next = temp->next;
        temp->next = new_node;
        printf("\nOne node inserted after the key value.\n");
    }
}


