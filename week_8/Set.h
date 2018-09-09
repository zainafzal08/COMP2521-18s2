// vertices denoted by integers 0..N-1
typedef struct setRep * Set;

struct setRep {
   // lol i'm lazy
   int *elements;
   int len;
};

Set newSet(int max);
void setAdd(Set s, int e);
void killSet(Set s);
void show(Set s);
