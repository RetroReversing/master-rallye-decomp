extern void *D_002AD408(int);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2C08(void*,const char*,float);
extern void func_001E2EA8(void*,const char*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern char D_00444D40[],D_00444D60[],D_00444D70[],D_00444D80[],D_00444D90[],D_00444DA0[],D_0044DD18[];
typedef struct {u32 x[5];float c[8];u32 active;} A;
typedef struct {u32 a,b,c,d;void *vt;u32 v[3];u32 key;} B;
static inline void zero3(u32*p){p[0]=0;p[1]=0;p[2]=0;}
void *func_001024F8(A*a){
 union {u32 key[8];float c[4];} t;
 u32 ctx[4]; B*b=D_002AD408(36);
 u32 key; float x,y,z,w,i,j,k,l;
 func_001D4040(&t,D_00444D40);
 key=t.key[0];
 b->c=0;b->vt=D_0044DD18;b->d=0;b->b=0;b->a=0;
 zero3(b->v);b->key=key;
 func_001E2460(ctx,b);
 x=a->c[0];y=a->c[1];z=a->c[2];w=a->c[3];
 i=a->c[4];j=a->c[5];k=a->c[6];l=a->c[7];
 func_001E2C08(ctx,D_00444D60,1.f);
 func_001E2C08(ctx,D_00444D70,0.f);
 t.c[0]=x;t.c[1]=y;t.c[2]=z;t.c[3]=w;
 func_001E2EA8(ctx,D_00444D80,&t);
 t.c[0]=i;t.c[1]=j;t.c[2]=k;t.c[3]=l;
 func_001E2EA8(ctx,D_00444D90,&t);
 func_001E2E38(ctx,D_00444DA0,&a->active);return b;
}
