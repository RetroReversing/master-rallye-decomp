typedef struct Node{int a;struct Node*next;}Node;typedef struct{void **begin,**end,**cap;}V;typedef struct{Node*head;int pad[5];V nodes;int flag;V values;int tail;}Obj;
extern int func_003F93CC(void*,void*,int);extern void func_003C4AF8(V*,void**,Node**);extern void func_00157550(V*,void**,unsigned,int*);
static inline void erase(V*v,void**first,void**last){func_003F93CC(first,last,0);v->end=(void**)((char*)v->end-((char*)last-(char*)first));}
static inline void push(V*v,Node**n){void**p=v->end;if(p!=v->cap){if(p)*p=*n;v->end++;}else func_003C4AF8(v,p,n);}
static inline void resize(V*v,unsigned len,int*z,int*storage){void**end=v->end;unsigned count=end-v->begin;*storage=0;if(len<count)erase(v,v->begin+len,end);else func_00157550(v,end,len-count,z);}
void func_003C1EB0(Obj*o){struct {Node*n;int zero;} locals;int*z;V*v=&o->nodes;erase(v,v->begin,v->end);z=&locals.zero;locals.n=o->head;while(locals.n){push(&o->nodes,&locals.n);locals.n=locals.n->next;}{unsigned len=o->nodes.end-o->nodes.begin;resize(&o->values,len,z,&locals.zero);}o->tail=0;o->flag=1;}
