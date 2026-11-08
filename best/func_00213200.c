typedef struct Tree {u32 tag;struct Tree*parent,*left,*right;u32 key;} Tree;
typedef struct {Tree*n;} TI;extern void func_002B2028(void*);
Tree **func_00212688(Tree**out,Tree**head,u32*key){Tree*h=*head,*p=h->parent;if(p){do{if(p->key>=*key){h=p;p=h->left;}else p=p->right;}while(p);}*out=h;return out;}
void func_00212628(void*a,Tree*p){while(p){Tree*n;func_00212628(a,p->right);n=p->left;func_002B2028(p);p=n;}}
static inline TI*bound(TI*out,Tree**head,u32*key){Tree*h=*head,*p=h->parent;if(p){do{if(p->key>=*key){h=p;p=h->left;}else p=p->right;}while(p);}out->n=h;return out;}
typedef struct {Tree*n;char pad[12];} TP;
TI *func_00212D50(TI*out,Tree**head,u32*key){Tree*h=*head,*p=h->parent;volatile TP found,end;if(p){do{if(p->key>=*key){h=p;p=h->left;}else p=p->right;}while(p);}Tree*e=*head;found.n=h;end.n=e;if(h!=e){if(*key>=h->key){out->n=h;}else goto missing;}else{missing:out->n=e;}return out;}
typedef struct Node{struct Node*next,*prev;void*data;}Node;typedef struct{Node*n;}LI;typedef struct{Node*n;char pad[12];} LP;extern void D_002AD390(void*);
static inline void erase(volatile LP*out,void*ctx,Node*n){volatile LP cur;cur.n=n;Node*next=n->next,*prev=n->prev;prev->next=next;next->prev=prev;D_002AD390(cur.n->data);func_002B2028(cur.n);out->n=next;}
LI*func_00213200(LI*out,void*ctx,LI*first,LI*last){if(first->n!=last->n){do{Node*n=first->n;volatile LP result;volatile LP old;old.n=n;first->n=n->next;erase(&result,ctx,n);}while(first->n!=last->n);}*out=*last;return out;}
