#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0


int fib(int n) {
   assert(n > 0);
   if (n == 1) return 1;
   if (n == 2) return 1;
   return (fib(n-1) + fib(n-2));
}

int main(int argc, char* argv[]) {
  int i = 10;
  printf("fib(%d) is %d\n",i,fib(i));
  return EXIT_SUCCESS;
}
