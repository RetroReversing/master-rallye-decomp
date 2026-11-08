typedef struct {int *begin,*end,*cap;} V;
extern void *func_00152D28(unsigned); extern void *func_002B1FC0(unsigned); extern void *func_003D2910(unsigned); extern void func_002B2028(void*); extern void func_003F93CC(void*,const void*,unsigned); extern u32 D_0040E618[];
static inline void *alloc(unsigned z){void *q=func_002B1FC0(z);if(!q)q=func_003D2910(z);return q;}
static inline void *zeroalloc(void){int *q=(int*)D_0040E618[-1];if(!q)return func_00152D28(0);D_0040E618[-1]=*q;return q;}
static inline void copywords(int *f,int *l,int *d){func_003F93CC(d,f,((s32)((u32)l-(u32)f)>>2)*4);}
static inline unsigned capacity(V *a){int *p=a->begin;return a->cap-p;}
V *func_0035D9F8(V *a,V *b){
s32 n;unsigned bytes; int *p,*first,*last; unsigned old;
if(a!=b){last=b->end;first=b->begin;n=last-first;
if(capacity(a)<(unsigned)n){
bytes=n*4;
if(n){if(bytes){p=alloc(bytes);}else{p=zeroalloc();}}
else {p=0;bytes=0;}
func_003F93CC(p,first,((s32)((u32)last-(u32)first)>>2)*4);
{int *q=a->begin;old=a->cap-q;if(old){if(old*4)func_002B2028(q);else{*q=D_0040E618[-1];D_0040E618[-1]=(u32)q;}}}
a->begin=p;a->cap=(int*)((char*)p+bytes);
}else{old=a->end-a->begin;if(old>=(unsigned)n){{s32 z=n*4;func_003F93CC(a->begin,first,z);bytes=z;}}else{func_003F93CC(a->begin,first,old*4);{int *q=a->end;bytes=n*4;copywords(b->begin+(q-a->begin),b->end,q);}}}
a->end=(int*)((char*)a->begin+bytes);
}return a;}
