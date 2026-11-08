typedef struct {int tag;u32*p;int bit;} It;typedef struct {u32*p;u32 mask;} Ref;
static inline Ref deref(It*t){Ref r;r.p=t->p;r.mask=1<<t->bit;return r;}
static inline void set(Ref*r,int v){if(v)*r->p|=r->mask;else *r->p&=~r->mask;}
static inline void next(It*t){if(++t->bit==32){t->bit=0;t->p++;}}
It *func_0021B358(It*out,It*in,int n,int*v){It t=*in;if(n){do{Ref r;r.p=t.p;r.mask=1<<t.bit;set(&r,*v);n--;next(&t);}while(n);}*out=t;return out;}
typedef struct {float x,y,z;} Vec;
typedef struct {int tag;Vec a,b;float x,y;} E;
extern void func_0021C370(E*,E*);
static inline void vc(Vec*d,Vec*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void ec(E*d,E*s){d->tag=s->tag;vc(&d->a,&s->a);vc(&d->b,&s->b);d->x=s->x;d->y=s->y;}
void func_0021C648(E*p,E*end,int unused){E v; if(p!=end){Vec*a=&v.a,*b=&v.b;char*x=(char*)p+16;do{E*old=p++;v.tag=*(int*)(x-16);v.a.x=*(float*)(x-12);a->y=*(float*)(x-8);a->z=*(float*)(x-4);v.b.x=*(float*)x;b->y=*(float*)(x+4);b->z=*(float*)(x+8);v.x=*(float*)(x+12);v.y=*(float*)(x+16);x+=36;func_0021C370(old,&v);}while(p!=end);}}
extern void func_0021C460(E*,E*);
void func_0021C700(E*p,E*end){if(end-p>16){E*q=p+16;func_0021C460(p,q);func_0021C648(q,end,0);}else func_0021C460(p,end);}
extern int D_00478DE8;extern void func_00204BA8(void*,void*);
typedef struct {void*vt;int v[9];} O;
typedef struct {int *begin,*end,*cap;} V;
typedef struct {void*vt;V a,b,c;} O2;
static inline V *vi(V*v){v->begin=0;v->cap=0;v->end=0;return v;}
O2 *func_0021C770(O2*p){volatile int alloc[12];p->vt=&D_00478DE8;vi(&p->a);vi(&p->b);func_00204BA8(p,vi(&p->c));return p;}
