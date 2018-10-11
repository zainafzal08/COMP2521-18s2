int BSTreeMaxBranchLen(BSTree t) {
  if (t == NULL) return 0;
  return max(BSTreeMaxBranchLen(t->left)+1,BSTreeMaxBranchLen(t->right)+1);
}




typedef struct BSTNode *BSTree;
struct BSTNode {
  int key;
  int deleted;
  struct BSTNode * left;
  struct BSTNode * right;
}


int BSTreeFind(BSTree t, int v)
{
   if (t == NULL)
      return 0;
   else if (v < t->value)
      return BSTreeFind(t->left, v);
   else if (v > t->value)
      return BSTreeFind(t->right, v);
   else if (!t->deleted)
      return 1;
}


int BSTreeNumNodes(BSTree t)
{
   if (t == NULL)
      return 0;
   else
      return !t->deleted + BSTreeNumNodes(t->left)
               + BSTreeNumNodes(t->right);
}


void showBSTreeInfix(BSTree t) {
  if(t==NULL) return;
  showBSTreeInfix(t->left);
  printf("%d ",t->value);
  showBSTreeInfix(t->right);
}

BSTree BSTreeInsert(BSTree t, int v) {
  if(v > t->v && t->right != NULL) BSTreeInsert(t->right);
  else if(v < t->v && t->left != NULL) BSTreeInsert(t->left);
  else if(v > t->v && t->right == NULL) t->right = newNode(v);
  else if(v < t->v && t->left == NULL) t->left = newNode(v);
  else if(v == t && t->deleted) t->deleted = FALSE;
  
}
