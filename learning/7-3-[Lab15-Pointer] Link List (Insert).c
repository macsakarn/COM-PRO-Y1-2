#include <stdio.h>
#include <stdlib.h>

struct list {
    int value;
    struct list *next;
};

void insert();

int main() {
    int count, value, index;
    scanf("%d", &count);
    struct list *ref = NULL, *tmpPointer = NULL;
    ref = malloc(sizeof(struct list));
    for(int i = 0; i < count; i++) {
        scanf("%d", &value);
        insert(ref, value, i);
    }

    scanf("%d", &index);
    scanf("%d", &value);
    insert(ref, value, index);
    
    tmpPointer = ref->next;

    while(tmpPointer != NULL) {
        printf("%d ", tmpPointer->value);
        tmpPointer = tmpPointer->next;
    }

    return 0;
}

void insert(struct list *ref, int value, int index) {
    struct list *newNode = malloc(sizeof(struct list));

    newNode->value = value;
    
    for(int j = 0; j < index; j++) {
        ref = ref->next;
    }

    newNode->next = ref->next;
    ref->next = newNode;
}