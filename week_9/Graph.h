// vertices denoted by integers 0..N-1
typedef struct graphRep * Graph;
typedef int Vertex;

// edges are pairs of vertices (end-points)
typedef struct { Vertex v; Vertex t; int w; } Edge;


Graph newGraph(int max);
void killGraph(Graph g);
void addEdge(Graph g, int v, int t, int w);
int hasEdge(Graph g, int v, int t);
int edgeWeight(Graph g, int v, int t);
int numEdges(Graph g);
void getEdges(Graph g, Edge* result);
