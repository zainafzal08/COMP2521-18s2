#include <stdio.h>
#include <stdlib.h>

int* selectionSort(int* array, int size) {

}

int main(int argc, char* argv[]) {
  int array[10] = {9,3,8,5,6,7,1,0,2,4};

  int* sorted = selectionSort(array,10);
  int i = 0;
  printf("[ ");
  for(i=0;i<10;i++)
    printf("%d ",sorted[i])
  printf("]\n");
  return EXIT_SUCCESS;
}
