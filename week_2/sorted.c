#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int isSorted(int* a, int size);

int main(int argc, char* argv[]) {

  // test one
  int test[] = {1,2,3,4,5};
  if (isSorted(test,5))
    printf("[1,2,3,4,5] is sorted\n");
  else
    printf("[1,2,3,4,5] is not sorted\n");

  // test two
  int test2[] = {1,2,3,5,4};
  if (isSorted(test2,5))
    printf("[1,2,3,4,5] is sorted\n");
  else
    printf("[1,2,3,5,4] is not sorted\n");

  return EXIT_SUCCESS;
}

// Pre:
// - a[] is a valid pointer to the start of an array of ints
// - n is a positive int indicating how many elements in a[]
// Post:
// - return value = ∀ i ∈ {0..n-2} ( a[i] ≤ a[i+1] )
int isSorted(int* a, int size) {
  int i = 0;
  for(i = 0; i < size-1; i++) {
    if(a[i] > a[i+1]) {
      return FALSE;
    }
  }
  return TRUE;
}
