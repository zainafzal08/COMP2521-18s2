#include <stdio.h>
#include <stdlib.h>

typedef struct _item {
  int key;
  char value;
} item;

int less(item a, item b) {
  return a.key < b.key;
}
void swap(item* array, int i, int j) {
  item tmp;
  tmp = array[i];
  array[i] = array[j];
  array[j] = tmp;
}

void sort(item* a, int lo, int hi){
  int i, j, min;
  for (i = lo; i < hi; i++) {
     min = i;
     for (j = i+1; j <= hi; j++) {
        if (less(a[j],a[min])) min = j;
     }
     swap(a,i,min);
  }
}


int isStableSort(item* a, item* b, int size) {
  return 0;
}
int main(int argc, char* argv[]) {
  item a[6];
  a[0].key = 0; a[0].value='A';
  a[1].key = 0; a[1].value='B';
  a[2].key = 0; a[2].value='C';
  a[3].key = 1; a[3].value='D';
  a[4].key = 2; a[4].value='E';
  item b[6];
  b[0].key = 0; b[0].value='A';
  b[1].key = 0; b[1].value='B';
  b[2].key = 0; b[2].value='C';
  b[3].key = 1; b[3].value='D';
  b[4].key = 2; b[4].value='E';

  sort(b,0,6);

  printf("stable: %d\n",isStableSort(a,b,6));
  return EXIT_SUCCESS;
}
