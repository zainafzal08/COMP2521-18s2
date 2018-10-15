

int isConnected(int ** matrix) {
  return dfs(matrix,0,0);
}


int dfs(int **matrix, int i, int j) {
  int result = 1;
  // update some visited counter. 
  if(i+1 < matrixSize && matrix[i+1][j] == 1) result += dfs(matrix, i+1,j);
  if(i-1 < matrixSize && matrix[i+1][j] == 1) result += dfs(matrix, i+1,j);
  if(j+1 < matrixSize && matrix[i+1][j] == 1) result += dfs(matrix, i+1,j);
  if(j-1 < matrixSize && matrix[i+1][j] == 1) result += dfs(matrix, i+1,j);
  return result;
}
