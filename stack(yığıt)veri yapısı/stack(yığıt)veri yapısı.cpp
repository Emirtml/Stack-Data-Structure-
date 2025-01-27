#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL; // it is global variable

// funtion of add element to list
void push(int x) {
    struct node* temp = new struct node();
    
    //  list is if  empty
    if (top == NULL) {
        temp->data = x;
        temp->next = NULL;

        top = temp;
    }

    // list is if not empty
    else {
        temp->data = x;
        temp->next = top;

        top = temp;
    }
}

void listShow() {
    struct node* index = top;

    while (index) {
        printf("%d\n", index->data);
        index = index->next;
    }
}

int  pop() {

    // list is empty
    if (top == NULL) {
        printf("list is empty");
        return 1;
    }
    else {
		// (LIF0) last in first out
        struct node* t = top;
        top = top->next;
        free(t);

        return 0;
    }
}

int main() {
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);

    pop();
    pop(),pop();

    listShow();

}
