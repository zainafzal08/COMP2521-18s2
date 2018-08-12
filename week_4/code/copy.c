#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct ListNode *Link;

typedef struct ListNode {
    int value;
    Link next;
} ListNode;

typedef Link List;

#define head(L)  (empty(L) ? -1 : (L)->value)
#define tail(L)  (empty(L) ? NULL : (L)->next)
#define empty(L) ((L) == NULL)

// display the value contained in a ListNode
#define show(V) { printf("%d",(V->value)); }

Link newNode(int val);
List copy(List l);
void showList(List l);

int main(int argc, char* argv[]) {
  List l = newNode(1);
  l->next = newNode(2);
  l->next->next = newNode(3);
  l->next->next->next = newNode(4);
  List l2 = copy(l);
  showList(l);
  showList(l2);
  return EXIT_SUCCESS;
}

// create a new ListNode containing supplied value
// prints error and exit()s if can't create a ListNode
Link newNode(int val) {
  Link n = malloc(sizeof(ListNode));
  n->next = NULL;
  n->value = val;
  return n;
}

void showList(List l) {
  for(;l;l=l->next,printf("->"))
    show(l);
  printf("X\n");
}

List copy(List l) {
  return NULL;
}
