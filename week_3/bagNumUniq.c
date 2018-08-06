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

int inList(Link head, int v, Link stop) {
  Link curr = head;
  while(curr != NULL && curr != stop) {
    if(curr->value == v) return TRUE;
    curr = curr->next;
  }
  return FALSE;
}

int bagNumUniq(Bag b) {
  Link curr = b->list;
  Link head = b->list;
  int c = 0;
  while (curr != NULL) {
    if (!inList(head,curr->value,curr)) c++;
    curr = curr->next;
  }
  return c;
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
