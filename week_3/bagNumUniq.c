#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

typedef struct BagRep *Bag;
typedef struct Node *Link;
typedef struct Node { int value; Link next; } Node;
typedef struct BagRep { Node *list; } BagRep;

Link newNode(int val) {
  Link n = malloc(sizeof(Node));
  n->value = val;
  n->next = NULL;
  return n;
}

int bagNumUniq(Bag b) {
  return 0;
}

int main(void) {
  Bag b = malloc(sizeof(BagRep));
  b->list = newNode(1);
  Link curr = b->list;
  curr->next = newNode(4);
  curr = curr->next;
  curr->next = newNode(1);
  curr = curr->next;
  curr->next = newNode(2);
  curr = curr->next;
  curr->next = newNode(3);
  curr = curr->next;
  curr->next = newNode(4);
  curr = curr->next;
  curr->next = newNode(1);
  printf("We got %d elements!\n",bagNumUniq(b));
  return 0;
}

