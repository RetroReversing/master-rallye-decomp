typedef struct {int *begin,*end,*cap;} VI;
extern void *func_00152D28(int),*func_002B1FC0(unsigned),*func_003D2910(unsigned);
extern void func_002B2028(void*);
extern int func_003F93CC(void*,const void*,unsigned);
extern u32 D_0040E618[];
static inline void *allocate(unsigned n){void*p;unsigned bytes=n*4;if(n){if(bytes){p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);}else{void*q=(void*)D_0040E618[-1];if(q){p=q;D_0040E618[-1]=*(u32*)q;}else p=func_00152D28(0);}}else p=0;return p;}
static inline void deallocate(int*p,unsigned n){if(n){if(n*4)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
VI *func_00156C38(VI*d,VI*s){if(s!=d){int *se=s->end,*sb=s->begin;int *db=d->begin;unsigned n=(int)((u32)se-(u32)sb)>>2;if((unsigned)((int)((u32)d->cap-(u32)db)>>2)<n){int*p=allocate(n);func_003F93CC(p,sb,((int)((u32)se-(u32)sb)>>2)<<2);deallocate(d->begin,d->cap-d->begin);d->begin=p;d->cap=p+n;}else if((unsigned)(d->end-d->begin)>=n){func_003F93CC(d->begin,sb,n*4);}else{func_003F93CC(d->begin,sb,((int)((u32)d->end-(u32)d->begin)>>2)<<2);func_003F93CC(d->end,s->begin+(d->end-d->begin),((int)((u32)s->end-(u32)(s->begin+(d->end-d->begin)))>>2)<<2);}d->end=d->begin+n;}return d;}
