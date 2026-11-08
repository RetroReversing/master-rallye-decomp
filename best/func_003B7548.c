typedef struct Tree {u32 a,b;struct Tree *left,*right;} Tree;
extern void func_002B2028(void *p);
void func_003B7548(void *a, Tree *p){while(p){Tree *n;func_003B7548(a,p->right);n=p->left;func_002B2028(p);p=n;}}
