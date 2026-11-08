typedef struct {u32 *b,*e,*c;} V;
typedef struct {V v;s32 x[5];} R;
typedef struct {R*b,*e,*c;} RV;
typedef struct {V*b,*e,*c;} VV;
typedef struct {u8 a,b,c,d;V v;s32 x;} H;
typedef struct {VV a;RV b;H h;s32 x,y;} O;
typedef struct {char pad[0x16c];O *o;} A;
extern u32 D_0040E618[];extern s64 D_00485520[];
extern void *D_002AD408(int),*func_002B1FC0(int),*func_003D2910(int),*func_00152D28(int);
extern void func_002B2028(void*),func_003F93CC(void*,void*,int),func_002DEF18(V*,u32*,s64,int*),func_002DF380(R*,R*,R*,int),func_00275B08(V*,V*,V*,int),func_002DF190(H*),func_003276C8(O*);
typedef struct {u8 b;} Cmp;
extern s64 *func_00152F00(s64*,s64*,s64*,int);
static inline s64* lookup(s64*a,s64*b,s64*c,Cmp cmp){return func_00152F00(a,b,c,0);}
static inline void dispose(void*p,s32 n,s32 size){if(n){if(n*size)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static inline void destroy(V*v){dispose(v->b,v->c-v->b,4);}
static inline void *alloc(int n){void*p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}
static inline void reserve(V*v,s64 count){u32 n=(u32)count;u32 *b=v->b;if((u32)(v->c-b)<(u32)count){u32 *e=v->e,*p;volatile int old=e-b;int bytes;
if(count){bytes=n*4;if(bytes)p=alloc(bytes);else{u32 *q=(u32*)D_0040E618[-1];if(!q)p=func_00152D28(0);else{u32 next=*q;p=q;D_0040E618[-1]=next;}}}else{p=0;bytes=0;}
func_003F93CC(p,b,((s32)((char*)e-(char*)b)>>2)<<2);destroy(v);v->b=p;v->c=(u32*)((char*)p+bytes);v->e=p+old;}}
static inline void reserveR(RV*v){R*b=v->b;if((u32)(v->c-b)<256){R*e=v->e,*p;int old=e-b; p=alloc(8192);func_002DF380(b,e,p,0);{R*q=v->b,*end=v->e;for(;q<end;q++)destroy(&q->v);}dispose(v->b,v->c-v->b,32);v->b=p;v->c=p+256;v->e=p+old;}}
static inline void reserveV(VV*v){V*b=v->b;if((u32)(v->c-b)<256){V*e=v->e,*p;int old=e-b;p=alloc(3072);func_00275B08(b,e,p,0);{V*q=v->b,*end=v->e;for(;q<end;q++)destroy(q);}dispose(v->b,v->c-v->b,12);v->c=p+256;v->b=p;v->e=p+old;}}
static inline void initV(V*v){v->b=0;v->c=0;v->e=0;}
static inline void initH(H*h){h->c=0;h->d=0;initV(&h->v);h->x=0;}
static inline void initO(O*p){p->a.b=0;p->a.e=0;p->a.c=0;initV((V*)&p->b);initH(&p->h);}
void func_003116D8(A*a){O*p;if(!a->o){s64 key,*found,value;int zero;Cmp cmp;
p=D_002AD408(52);initO(p);
key=100;cmp.b=p->h.b;found=lookup(D_00485520,D_00485520+28,&key,cmp);if(found!=D_00485520+28)value=*found;else value=D_00485520[27];
{s64 n=(s32)value;reserve(&p->h.v,n);zero=0;func_002DEF18(&p->h.v,p->h.v.e,n,&zero);}
p->h.x=0;p->x=0x7fffffff;p->y=99999;a->o=p;reserveR(&p->b);reserveV(&p->a);
}
p=a->o;{R*q=p->b.b,*end=p->b.e;int bytes=(char*)end-(char*)q;for(;q<end;q++)destroy(&q->v);p->b.e=(R*)((char*)p->b.e-bytes);}
func_002DF190(&p->h);func_003276C8(p);
}
