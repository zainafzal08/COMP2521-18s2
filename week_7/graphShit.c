///// Adjacency list graph representation

struct graphRep {
    int nV;       // #vertices
    int nE;       // #edges
    int **matrix;  // array of Vertex lists
};

struct Edge { Vertex v; Vertex w; };

// (e.v < e.w)
void putIntoArray(Edge* array, int i, int j, int count) {
  if(v > w) return;
  array[count].v = i;
  array[count].w = j;
}

Edge *edges(Graph g, int *nE) {
  int i = 0;
  int j = 0;
  int count = 0;
  Edge *array = malloc(sizeof(Edge)*g->nE);
  for (i=0;i<g->nV; i++) {
    for (j=0;j<g->nV; j++) {
      if(g->matrix[i][j]){
        putIntoArray(array,i,j, count);
        count++;
      }
    }
  }
  *nE = count;
  return array;
}



// =============================================================================


// Upper-triangluar adjacency matrix graph representation

struct graphRep {
    int   nV;     // #vertices
    int   nE;     // #edges
    bool *edges;  // array of booleans (0 or 1)
};


int indexOf(Graph g, Vertex v, Vertex w)
{
  if (w > v) {
    int temp = w;
    w = v;
    v = w;
  }
  int i = 0;
  int index = 0;
  int subArrayLen = n-1;
  for(i=0; i < v) {
    index += subArrayLen;
    subArrayLen-=1;
    w-=1;
  }

  index += w;
}
