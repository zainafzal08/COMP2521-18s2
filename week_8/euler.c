int isEulerPath(Graph g, Edge e[], int nE) {
  // right number
  if( g->nE != nE ) return FALSE;
  // is a path
  int i = 0;
  for(i=0; i<nE-1;i++) {
    if(e[i].w != e[i+1].v) return FALSE;
  }
  // has no duplicates
  int j = 0;
  for(i=0; i<nE-1;i++) {
    for(j=0; j<nE-1;j++) {
      if(i == j) continue;
      if(e[i] == e[j]) return FALSE;
    }
  }
}
