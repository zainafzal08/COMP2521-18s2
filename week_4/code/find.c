#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define head(L)  (empty(L) ? -1 : (L)->value)
#define tail(L)  (empty(L) ? NULL : (L)->next)
#define empty(L) ((L) == NULL)

// display the value contained in a ListNode
#define show(V) { printf("%d",(V)); }

typedef struct ListNode *Link;

typedef struct ListNode {
    int value;
    Link next;
} ListNode;

typedef Link List;

int findLength(List L);
void drop(List l);
List copy(List l);
int fold(List L, int (*f)(int,int), int z);
void map(List L, int (*f)(int));
int length(List L);
int one(int v);
int add(int a, int b);

// create a new ListNode containing supplied value
// prints error and exit()s if can't create a ListNode
Link newNode(int val) {
  Link n = malloc(sizeof(ListNode));
  n->next = NULL;
  n->value = val;
  return n;
}

int fold(List L, int (*f)(int,int), int z)
{
    if (empty(L))
        return z;
    else
        return f(head(L), fold(tail(L),f,z));
}

void map(List L, int (*f)(int))
{
    if (!empty(L)) {
        L->value = (*f)(head(L));
        map(tail(L), f);
    }
}

int length(List L)
{
   List L1 = copy(L);
   int n = findLength(L1);
   drop(L1);
   return n;
}

int one(int v) {
    return 1;
}

int add(int a, int b) {
    return a+b;
}

// implement these

int findLength(List l) {
  map(l,one);
  return fold(l,add,0);
}
void drop(List l) {

}
List copy(List l) {
  return NULL;
}

int main(int argc, char* argv[]) {
  List l = newNode(1);
  l->next = newNode(2);
  l->next->next = newNode(3);
  int len = length(l);
  printf("Length is %d\n",len);
  drop(l);
  return EXIT_SUCCESS;
}
