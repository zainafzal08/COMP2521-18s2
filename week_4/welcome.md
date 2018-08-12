# Welcome!
---

#### Introduction

Whats up!

1. Any questions
2. How you feeling
3. any questions from last week
4. anything you want a full lesson on (gdb github etc.)

##### questions

> consider this code

```c
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
#define show(V) { printf("%d",(V)); }

// create a new ListNode containing supplied value
// prints error and exit()s if can't create a ListNode
Link newNode(int val) { ... }
```

- why are these macros for head and tail different from the lecture ones
    - `#define head(L)  ((L)->value)`
    - `#define tail(L)  ((L)->next)`

> Write a recursive function which removes a List

1. how do you determine the direction of recursion
2. why does `if (!curr)` work?

look at `drop.c`

> Write a recursive function which makes a copy of a list.

Look at `copy.c`

> Trace the following program and describe what is a higher order function?

```c
void map(List L, int (*f)(int))
{
    if (!empty(L)) {
        head(L) = (*f)(head(L));
        map(tail(L), f);
    }
}
```
**

```
int square(int x) { return x*x; }
// ...
myList = [1,3,5,7,9];
map(myList, square);
```

> Trace this program (skip if time is low)

```c
int fold(List L, int (*f)(int,int), int z)
{
    if (empty(L))
        return z;
    else
        return f(head(L), fold(tail(L),f,z));
}
```

```c
int mult(int x, int y) { return x*y; }

int product = fold(myList, mult, 1);
```

> Write a one line findLength

look at `find.c`

> Trace fib(5) and implement recFic with caching

```c
int fib(int n) {
   assert(n > 0);
   if (n == 1) return 1;
   if (n == 2) return 1;
   return (fib(n-1) + fib(n-2));
}
```

look at `fib.c`

> The lab

The lab is all about testing the sorts and working out which 2 you have.
you actually don't work with any code, you just generate different inputs and run them.

Tips:

1. Invest in writing a script! It's easier to just write the script then go through it manually
2. build up a flowchart before you get results
	- if it's stable which sorts can i eliminate
	- what sorts are what time complexities
	    - how can i tell the time complexity of my program
	- how does my sort handle sorted, reverse sorted and random

> Stability

consider:
| course | name | program |
| ------ | ---- | ------- |
|COMP1927|Jane|3970|
|COMP1927|John|3978|
|COMP1927|Pete|3978|
|MATH1231|John|3978|
|MATH1231|Adam|3970|
|PSYC1011|Adam|3970|
|PSYC1011|Jane|3970|

Now we wish to sort it by student name, so that we can easily see what courses each student is studying. Show an example of what the final array would look like if

1. we used a stable sorting algorithm
2. we used a non-stable sorting algorithm

> isStable (skip is time is low)

`int isStableSort(int original[], int sorted[], int lo, int hi) { ... }`

> Sorting walkthrough

refer to https://cgi.cse.unsw.edu.au/~cs2521/18s1/tutes/week04/index.php?view=qo

> selection (skip if time is low)

(finds smallest puts it at the front)
(insertion: gets next one puts it in right place)

Write a version of selection sort that builds a new sorted list from an original unsorted linked list. The original list should not be modified during the sorting. Use the definition for linked lists from above. The function is defined as:
