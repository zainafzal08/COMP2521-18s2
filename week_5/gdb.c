#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
  int temp = *a;
  a = temp;
  *b = *a;
}

int main(int argc, char* argv[]) {
  int a = 8;
  int b = 9;
  int *addrA = NULL;
  int *addrB = NULL;
  addrA = &a;
  printf("a,b is (%d,%d)\n",a,b);
  swap(addrA,addrB);
  printf("a,b is (%d,%d)\n",a,b);
  return EXIT_SUCCESS;
}
