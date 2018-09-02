#include <stdio.h>
#include <stdlib.h>

int getMin(int* array, int size) {
  int i = 0;
  int m = array[0];
  while(i < size) {
    if (m > array[i]) m = array[i];
    i++;
  }
  return m;
}
int* selectionSort(int* array, int size) {
  int j = 0;
  int* newArray = malloc(sizeof(int)*size);
  while (j < size ){
    newArray[j] = getMin(array, size);
    j++;
  }
  return newArray;
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
