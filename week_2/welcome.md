# Welcome!
---


#### Introduction

Who am i?

1. introduce yourself to the other people in the tute class
	- either 2 truths and a lie
	- on thing you are proud of yourself for
2. discuss what you learned from COMP1511
	- https://play.kahoot.it/#/k/5271ac47-788c-4944-b812-d60c70ad2ea4
3. discuss what parts you're still unsure of
4. choose lab partners (who you'll work with until week 6)

#### Group

Webcms will be your primary point of contact

> You can also email me at zain.afz@gmail.com

You should all make a facebook group or discord or slack.

# Admin
---

#### Resources

I will put help documents up as well as any code we write together up on
the class github (i've set up shorcuts you can use to get there below)

www.zainafzal.com/2521
www.zainafzal.com/cs2521
www.zainafzal.com/comp2521

#### Repel

So for certain activites i'll set up a repel so we you all can have a crack at coding
The code for those will be on the github repo as well under the repl folder

# Actual Work
---

**[W] Describe the difference in behaviour (and in the final result) of the following two switch statements:**

```c
// S1                                      // S2
switch (ch) {                              switch (ch) {
case 'a':  printf("eh? "); break;          case 'a':  printf("eh? ");
case 'e':  printf("eee "); break;          case 'e':  printf("eee ");
case 'i':  printf("eye "); break;          case 'i':  printf("eye ");
case 'o':  printf("ohh "); break;          case 'o':  printf("ohh ");
case 'u':  printf("you "); break;          case 'u':  printf("you ");
}                                          }
printf("\n");                              printf("\n");
```

What will be printed for each of the following values for ch: 'u', 'o', 'e'?


**[W] Consider the following function to convert a number in the range 0..6 into a weekday name. 0 returns "Sun", 1 returns "Mon", 2 returns "Tue", and so on.**

```c
char *numToDay(int n)
{
	assert(0 <= n && n <= 6);
	char *day;
	if (n == 0) {
		day = "Sun";
	}
	else if (n == 1) {
		day = "Mon";
	}
	else if (n == 2) {
		day = "Tue";
	}
	else if (n == 3) {
		day = "Wed";
	}
	else if (n == 4) {
		day = "Thu";
	}
	else if (n == 5) {
		day = "Fri";
	}
	else if (n == 6) {
		day = "Sat";
	}
	return day;
}
```

Suggest at least two alternative and more concise ways of achieving the same result. Include the assert(...) in each case.

For each function, including the one above, explain what would happen if the assert(...) was removed and the function was invoked via numToDay(7).

**Give an if statement equivalent to the following switch statement:**

```c
assert(islower(ch));
switch (ch) {
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
	printf("vowel"); break;
default:
	printf("consonant"); break;
}
```

**Use a conditional expression to replace the if in the following code:**

```c
ch = getchar();
if (isdigit(ch))
	type = "digit";
else
	type = "non-digit";
printf("'%c' is a %s\n", ch, type);
```

How should each of the variables (ch and type) be declared?


**[W] What while loop is equivalent to the following for statement:**

```c
for (ch = getchar(); ch != EOF; ch = getchar()) {
	putchar(ch);
}
```

** Consider a function to check whether the elements in an array occur in ascending order. Duplicates are allowed in the array, as long as they are adjacent.**

The condition we are testing for can be stated more formally as a post-condition on the function as below:

```
// Pre:
// - a[] is a valid pointer to the start of an array of ints
// - n is a positive int indicating how many elements in a[]
// Post:
// - return value = ∀ i ∈ {0..n-2} ( a[i] ≤ a[i+1] )
bool isSorted(int *a, int n)
{
	...
}
```

Implement this function in two styles:

1. using COMP1511 C Style
2. using for, break/return to exit the loop early

> Look in sorted.c

**[W] Consider the following simple linked-list representation and a function that sums the values in the list:**

```c
typedef struct _Node {
	int value;
	struct _Node *next;
} Node;

typedef Node *List;  // pointer to first Node
```

Write a function to sum the values in the list. Implement it first using while and then using for. Finally, implement it using recursion.

> Look at sum.c

**Consider the following program (adapted from Segdewick):**

```c
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	int i, j, *a;
	int N = 0;

	// initialisation
	assert(argc > 1);
	sscanf(argv[1], "%d", &N);
	assert(N > 0);
	a = malloc(N*sizeof(int));
	assert(a != NULL);
	for (i = 2; i < N; i++) a[i] = 1;

	// computation
	for (i = 2; i < N; i++) {
		if (a[i]) {
			for (j = i; i*j < N; j++) a[i*j] = 0;
		}
	}

	// results
	for (i = 2; i < N; i++) {
		if (a[i]) printf("%d\n",i);
	}
	exit(EXIT_SUCCESS);
}
```

Try to answer each of the following questions about this program:

1. there are no braces around the bodies of some for loops; does this matter?
2. what is the line of code sscanf(argv[1],"%d",&N); doing?
3. suggest an alternative for the sscanf(...) statement?
4. for each of the asserts ...
5. describe what error is being checked for and why
6. suggest a better error message than what you get from assert
7. what are the values of a[0] and a[1] during execution?
8. why don't the values of a[0] and a[1] matter?
9. what is the purpose of this program?

**[W] A C program has several means of interacting with its run-time envrionment. Describe what each of the following is and what it is used for:**

1. argc
2. argv
3. stdin
4. stdout
5. stderr
6. exit()

**[W] Consider a program called myprog which is invoked as:**

`$ ./myprog  hello there,  'John Shepherd'  >  myFile`

1. What are the values of argc and argv?

2. Where would the statement printf("%s",argv[1]) place its output?

3. Where would the statement ch = getchar(); get its input?


**Which of the following statements are equivalent? Which are incorrect? Assume that x is an int variable.**

```c
scanf("%d", x);

scanf("%d", &x);

printf("%d", x);

fscanf(stdin, "%d", &x);

fscanf(stderr, "%d", &x);

fprintf(stdout, "%d", x);

fprintf(stderr, "%d", x);
```

** Define a swap() function that exchanges two elements in an array. **

For an array a[] and two indexes i and j, we could exchange the i'th and j'th elements by the call:

swap(a, i, j)
