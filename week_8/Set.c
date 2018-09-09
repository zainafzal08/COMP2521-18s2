#include "Set.h"
#include <stdlib.h>
#include <stdio.h>

Set newSet(int max) {
  Set s = malloc(sizeof(struct setRep));
  s->elements = malloc(sizeof(int)*max);
  s->len = 0;
  return s;
}

void setAdd(Set s, int e) {
  int i = 0;
  for(i=0;i<s->len;i++) {
    if (s->elements[i] == e) return;
  }
  // assume we don't exceed max cause i'm lazy
  s->elements[s->len] = e;
  s->len++;
}

void killSet(Set s) {
  free(s->elements);
  free(s);
}

void show(Set s) {
  int i = 0;
  for(i=0;i<s->len;i++) {
    printf("%d ",s->elements[i]);
  }
  printf("\n");
}
