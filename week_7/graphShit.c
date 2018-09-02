///// Adjacency list graph representation

struct graphRep {
    int nV;       // #vertices
    int nE;       // #edges
    int **matrix;  // array of Vertex lists
};


// (e.v < e.w)
Edge *edges(Graph g, int *nE) {
  int i = 0;
  int j = 0;
  int coun t= 0;
  while(i<g->nv) {
    j=0;
    while(j<g->nv) {
      if(g->matrix[i][j]) {
        count++;
        // add to result array
      }
      j++;
    }
    i++;
  }
  *nE = count;
  return result;
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

}
