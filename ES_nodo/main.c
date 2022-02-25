#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node;
    int num;
} Node;

int main() {
    int array[]= {1,2,3,4,5,6};

    Node *head == NULL;
    Node *cur == NULL;

    for(int i = 0;  i < 6; i++){
        cur = createNode(array[i], cur);
        if(head == NULL){
            head = cur;
        }
    }

    cur = head;
    while(cur != NULL){
        printf("%d\n", cur->num);
        cur = cur -> next;
    }
    return 0;
}
