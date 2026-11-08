/* identical to func_00325678 (matched), with its names changed by decompdecomp */
typedef struct {int *begin,*end,*cap;int a,b,c,d,e;} V;
extern void *func_00152D28(unsigned);extern void *func_002B1FC0(unsigned);extern void *func_003D2910(unsigned);extern void func_003F93CC(void*,const void*,unsigned);extern u32 D_0040E618[];
static inline void *alloc(unsigned z){void*q=func_002B1FC0(z);if(!q)q=func_003D2910(z);return q;}
static inline void *zeroalloc(void){int*q=(int*)D_0040E618[-1];if(!q)return func_00152D28(0);D_0040E618[-1]=*q;return q;}
V *func_002DF260(V*a,V*b){unsigned n,bytes;int*p;int diff;volatile int allocator;
n=b->end-b->begin;a->begin=0;a->end=0;a->cap=0;
if(n){bytes=n*4;if(bytes)p=alloc(bytes);else p=zeroalloc();}else{p=0;bytes=0;}
a->begin=p;a->end=p;a->cap=(int*)((char*)p+bytes);
diff=(char*)b->end-(char*)b->begin;func_003F93CC(p,b->begin,(diff>>2)*4);a->end=(int*)((char*)p+diff);
a->a=b->a;a->b=b->b;a->c=b->c;a->d=b->d;a->e=b->e;return a;}
