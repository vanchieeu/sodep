#include <stdio.h>
#include <stdlib.h>

typedef struct List {
    int ID;

    struct List *next;
} list;
list *head = NULL;

list *makeNode(int ID) {
    list *ptr = (list *)malloc(sizeof(list));

    ptr->ID = ID;
    ptr->next = NULL;

    return ptr;
}

void insertNode(int ID) {
    list *ptr = (list *)malloc(sizeof(list));

    ptr = makeNode(ID);

    ptr->next = head;
    head = ptr;
}

void printList() {
    list *ptr = (list *)malloc(sizeof(list));

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->ID);
        ptr = ptr->next;
    }
}

int checkNumber(int n) {
    int res = 0, sum = 0, temp = n;
    while (n != 0) {
        sum += n%10;
        res = res * 10 + n%10;
        n /= 10;
    }

    if (res == temp && sum%10==0)
        return 1;
    else
        return 0;
}

int main() {
    for (int i = 1000000; i <= 10000000; i++)   
        if (checkNumber(i) == 1)
            insertNode(i);

    printList();


    return 0;
}