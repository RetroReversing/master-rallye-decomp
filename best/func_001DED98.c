typedef struct{int*b,*e,*c;} V;typedef struct{V**p;int n;} T;
extern void*func_002B1FC0(int),*D_002AD408(int);extern void func_00152720(V*,int*,int*);
T*func_001DED98(T*t,int n){int bytes=n*4;V**p=func_002B1FC0(bytes),**end=(V**)((char*)p+bytes);t->p=p;t->n=n;while(p<end){*p=0;p++;}return t;}
int func_001DEE60(T*t,int i,int j){if(i>=0&&i<t->n){V*v=t->p[i];if(v&&j>=0){int*b=v->b;if((u32)j<(u32)(v->e-b))return b[j];}}return -1;}
typedef struct{char pad[32];s16 off;u16 pad2;void(*fn)(void*);} VT;
typedef struct{int x;VT*vt;} Item;
typedef struct{int n;Item**b,**e;} Stack;
void func_001DECC8(Stack*s){Item**b=s->b;if(s->e-b){int n=s->n;if(n>0){Item*p;s->n=n-1;p=b[n-1];p->vt->fn((char*)p+p->vt->off);}}}
void func_001DEEC8(T*t,int i,int x){int val=x;if(i>=0&&i<t->n){V**slot=t->p+i,*v=*slot;int*e;if(!v){v=D_002AD408(12);v->b=0;v->e=0;v->c=0;*slot=v;}e=v->e;if(e!=v->c){if(e)*e=val;v->e++;}else func_00152720(v,e,&val);}}
