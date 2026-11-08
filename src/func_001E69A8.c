/* identical to func_001FC438 (matched), with its names changed by decompdecomp */
/* identical to func_0021F4F8 (matched), with its names changed by decompdecomp */
typedef struct {u32 *begin,*end,*cap;} V;
extern void func_001E6BE8(void*);extern void func_002B2028(void*);extern void D_002AD390(void*);extern u32 D_0040E618[];
extern V *func_0021F6C8(void*);
void func_001E69A8(V*p,int f){u32*b;int n;func_001E6BE8(p);b=p->begin;n=p->cap-b;if(n){if(n*4)func_002B2028(b);else{*b=D_0040E618[-1];D_0040E618[-1]=(u32)b;}}if(f&1)D_002AD390(p);}
void func_0021EA00(char*p){func_0021F6C8(*(void**)(p+28));}
u32 func_0021E9C0(char*p){V*v=func_0021F6C8(*(void**)(p+28));if(!v)return 0;if(v->begin==v->end)return 0;return *v->begin;}
typedef struct L {int n;struct L *next,*prev;} L;
extern void *D_002AD408(int);extern void *func_0021FDF8(void*);extern void func_0021F580(void*,int);
void *func_0021E838(char*p){L*x=(L*)(p+4),*y=(L*)(p+16),*z=(L*)(p+36);int i=6;V*v;volatile int allocator;
x->n=0;x->prev=x;x->next=x;y->n=0;y->prev=y;y->next=y;
do{z->n=0;i--;z->prev=z;z->next=z;z++;}while(i!=-1);
*(int*)p=0;*(int*)(p+120)=0;v=D_002AD408(12);*(V**)(p+28)=v;v->end=0;v->cap=0;v->begin=0;
*(void**)(p+32)=func_0021FDF8(D_002AD408(56));func_0021F580(*(void**)(p+28),0x1400);return p;}
