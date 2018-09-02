# Welcome!
---

#### Introduction

Whats up!

1. Any questions from last week
2. How you feeling

#### Graph Revision

1. What is a Graph
2. Why are they useful

#### Tute

refer to https://cgi.cse.unsw.edu.au/~cs2521/18s2/tutes/week07/index.php?view=qo

#### Lab

refer to http://cgi.cse.unsw.edu.au/~cs2521/18s2/labs/week07/Pics/map.png

```c
idToName(int)       // takes a location ID and returns the place's full name
idToType(int)       // takes a location ID and returns the place's location (LAND or SEA
nameToID(char \*)   // takes a place's name and returns its location ID
abbrevToID(char \*) // takes a place's two-char abbreviation and returns its location ID
```

```c
int connections(Map map, LocationID start, LocationID end, TransportID ways[]) {

}
```

> clearly, the maximum number edges that can exist between two places is determined by the number of transportation types.

>  Make sure that you conduct more extensive tests than just these (your tutor will ask to see your tests).

> Challenge: Speed up nameToID()
