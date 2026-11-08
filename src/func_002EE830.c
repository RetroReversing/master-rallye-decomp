typedef struct {int x,y,z;} E;typedef struct{E*begin,*end,*cap;}V;
extern void*func_00152D28(unsigned);extern void*func_002B1FC0(unsigned);extern void*func_003D2910(unsigned);extern u32 D_0040E618[];extern E*func_002EE7F0(E*,E*,E*,int);
static inline void *alloc(unsigned z){void*q=func_002B1FC0(z);if(!q)q=func_003D2910(z);return q;}
static inline void *za(void){u32*q=(u32*)D_0040E618[-1];if(!q)return func_00152D28(0);D_0040E618[-1]=*q;return q;}
V*func_002EE830(V*a,V*b){int n=b->end-b->begin;unsigned size;E*p;volatile int allocator;a->begin=0;a->end=0;a->cap=0;if(n){size=n*12;if(size)p=alloc(size);else p=za();}else p=0;a->begin=p;a->end=p;a->cap=p+n;a->end=func_002EE7F0(b->begin,b->end,p,0);return a;}
