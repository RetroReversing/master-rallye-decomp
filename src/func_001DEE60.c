typedef struct{int*b,*e,*c;} V;typedef struct{V**p;int n;} T;
extern void*func_002B1FC0(int),*D_002AD408(int);extern void func_00152720(V*,int*,int*);
T*func_001DED98(T*t,int n){int bytes=n*4;V**p=func_002B1FC0(bytes),**end=(V**)((char*)p+bytes);t->p=p;t->n=n;while(p<end){*p=0;p++;}return t;}
static inline u32 size(V*v){return v->e-v->b;}
static inline int get(V*v,int i){return *(int*)((char*)v->b+(i<<2));}
int func_001DEE60(T*t,int i,int j){if(i>=0&&i<t->n){V*v=t->p[i];if(v&&j>=0){if((u32)j<size(v))return get(v,j);}}return -1;}
typedef struct{char pad[32];s16 off;u16 pad2;void(*fn)(void*);} VT;
typedef struct{int x;VT*vt;} Item;typedef struct{int n;Item**b,**e;} Stack;
void func_001DECC8(Stack*s){Item**b=s->b;if(s->e-b){int n=s->n;if(n>0){Item*p;n--;s->n=n;p=*(Item**)((char*)b+(n<<2));p->vt->fn((void*)((u32)p+p->vt->off));}}}
static inline void push(V*v,int*val){int*e=v->e;if(e!=v->c){if(e)*e=*val;v->e++;}else func_00152720(v,e,val);}
static inline V*init(V*v){v->b=0;v->e=0;v->c=0;return v;}
void func_001DEEC8(T*t,int i,int x){struct{int unused[4];int val;}local;local.val=x;if(i>=0&&i<t->n){V**slot=(V**)(i*4+(u32)t->p),*v=*slot;if(!v){V*nv=D_002AD408(12);init(nv);*slot=nv;v=nv;}push(v,&local.val);}}
