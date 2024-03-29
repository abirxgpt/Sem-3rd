#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node* next;
};
struct Node* reverseList(struct Node* head) {
 struct Node* prev = NULL;
 struct Node* current = head;
 struct Node* next = NULL;
 while (current != NULL) {
 next = current->next;
 current->next = prev;
 prev = current;
 current = next;
 }
 head = prev;
 return head;
}
void printList(struct Node* head) {
 while (head != NULL) {
 printf("%d ", head->data);
 head = head->next;
 }
 printf("\n");
}
int main() {
 struct Node* head = NULL;
 struct Node* second = NULL;
 struct Node* third = NULL;
 head = (struct Node*)malloc(sizeof(struct Node));
 second = (struct Node*)malloc(sizeof(struct Node));
 third = (struct Node*)malloc(sizeof(struct Node));
 head->data = 1;
 head->next = second;
 second->data = 2;
 second->next = third;
 third->data = 3;
 third->next = NULL;
 printf("Original linked list: ");
 printList(head);
 head = reverseList(head);
 printf("Reversed linked list: ");
 printList(head);
 return 0;
}
