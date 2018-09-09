// vertices denoted by integers 0..N-1
typedef struct graphRep * Graph;
typedef int Vertex;
typedef struct edge Edge;

// edges are pairs of vertices (end-points)
struct edge { Vertex v; Vertex w; };

///// Adjacency matrix graph representation

struct graphRep {
   int nV;       // #vertices
   int nE;       // #edges
   int **edges;  // matrix of booleans (0 or 1)
};


Graph newGraph(int max);
void killGraph(Graph g);
void addEdge(Graph g, int v, int w);
int hasEdge(Graph g, int v, int w);
