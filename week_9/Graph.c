#include "Graph.h"
#include <stdio.h>
#include <stdlib.h>


///// Adjacency matrix graph representation

struct graphRep {
   int nV;       // #vertices
   int nE;       // #edges
   int **edges;  // matrix of booleans (0 or 1)
};

void getEdges(Graph g, Edge* result){
  int i = 0;
  int j = 0;
  int ei = 0;
  for(i=0; i < g->nV; i++) {
    for(j=0; j < g->nV; j++) {
      if (i <= j) continue;
      if(g->edges[i][j] > 0) {
        result[ei].v = i;
        result[ei].w = g->edges[i][j];
        result[ei].t = j;
        ei++;
      }
    }
  }
}

Graph newGraph(int max){
  Graph g = malloc(sizeof(struct graphRep));
  g->nV = max;
  g->nE = 0;
  g->edges = malloc(sizeof(int*)*max);
  int i = 0;
  for(i=0;i<max;i++)
    g->edges[i] = calloc(sizeof(int),max);
  return g;
}

void killGraph(Graph g) {
  int i = 0;
  for(i=0;i<g->nV;i++)
    free(g->edges[i]);
  free(g->edges);
  free(g);
}

void addEdge(Graph g, int v, int t, int w) {
  if (!g->edges[v][t]) g->nE++;
  g->edges[v][t] = w;
  g->edges[t][v] = w;
}

int hasEdge(Graph g, int v, int t) {
  return g->edges[v][t] > 0;
}

int edgeWeight(Graph g, int v, int t) {
  return g->edges[v][t];
}

int numEdges(Graph g) {
  return g->nE;
}
