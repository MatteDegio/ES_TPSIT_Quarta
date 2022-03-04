//Pile

void push(struct node **head, struct node *element){
    if(is_empty(*head)){
        *head = element;
        element->next = NULL;
    }else{
        element->next = *head;
        *head = element;
    }
}

struct node* pop(struct node **head){
    struct node *ret = *head;
    if(is_empty(*head)){
        return NULL;
    }else{
        *head = ret->next;
    }
    return ret;
}

//Code

void enqueue(struct node **head, struct node **tail, struct node *element){
    if(is_empty(*head)){
        *head = element;
    }else{
        (*tail) -> next = element;
    }
    *tail = element;
    element -> next = NULL;
}

struct node *dequeue(struct node **head, struct node **tail){
    struct node *ret = *head;
    if(is_empty(*head)){
        return NULL;
    }else{
        *head = ret -> next;
    }
    if (*head == NULL) {
        *tail = NULL;
    }

    return ret;
}
