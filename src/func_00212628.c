typedef struct Tree {u32 tag;struct Tree*parent,*left,*right;u32 key;} Tree;
typedef struct {Tree*n;} TI;extern void func_002B2028(void*);
Tree **func_00212688(Tree**out,Tree**head,u32*key){Tree*h=*head,*p=h->parent;if(p){do{if(p->key<*key)p=p->right;else{h=p;p=h->left;}}while(p);}*out=h;return out;}
void func_00212628(void*a,Tree*p){while(p){Tree*n;func_00212628(a,p->right);n=p->left;func_002B2028(p);p=n;}}
static inline TI*bound(TI*out,Tree**head,u32*key){Tree*h=*head,*p=h->parent;if(p){do{if(p->key<*key)p=p->right;else{h=p;p=h->left;}}while(p);}out->n=h;return out;}
TI *func_00212D50(TI*out,Tree**head,u32*key){TI found,end;bound(&found,head,key);end.n=*head;if(found.n!=end.n && *key>=found.n->key)*out=found;else *out=end;return out;}
typedef struct Node{struct Node*next,*prev;void*data;}Node;typedef struct{Node*n;}LI;extern void D_002AD390(void*);
static inline LI*erase(LI*out,void*ctx,LI*pos){LI cur=*pos;Node*n=cur.n,*next=n->next,*prev=n->prev;prev->next=next;next->prev=prev;D_002AD390(n->data);func_002B2028(cur.n);out->n=next;return out;}
LI*func_00213200(LI*out,void*ctx,LI*first,LI*last){while(first->n!=last->n){LI old=*first,result;first->n=old.n->next;erase(&result,ctx,&old);}*out=*last;return out;}
