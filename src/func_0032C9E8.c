/* identical to func_00153B78 (matched), with its names changed by decompdecomp */
extern void func_002B2028(void*);
typedef struct Node {struct Node *next,*prev;} Node;
void func_001515C8(Node **p){Node *n=(*p)->next;while(n!=*p){Node *q=n->next;func_002B2028(n);n=q;}(*p)->next=*p;(*p)->prev=*p;}
typedef struct {u64 x;} __attribute__((packed)) Eight;
Eight *func_0032C9E8(Eight *p,u32 n,const Eight *v){for(;n;n--,p++)if(p)*p=*v;return p;}
extern int func_003F9288(void*,void*,u32);
int func_00153E78(char **p,void *q,u32 off,u32 n){char *s=*p;u32 len=*(u32*)(s-16)-off;int r=func_003F9288(s+off,q,n<len?n:len);if(!r)r=*(u32*)(*p-16)-off-n;return r;}
typedef struct Tree {u32 a,b;struct Tree *left,*right;} Tree;
void func_00153EE0(void *a,Tree *p){while(p){Tree *n;func_00153EE0(a,p->right);n=p->left;func_002B2028(p);p=n;}}
