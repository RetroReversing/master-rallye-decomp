/* identical to func_0021B358 (matched), with its names changed by decompdecomp */
typedef struct {int tag;u32*p;int bit;} It;typedef struct {u32*p;u32 mask;} Ref;
static inline Ref deref(It*t){Ref r;r.p=t->p;r.mask=1<<t->bit;return r;}
static inline void set(Ref*r,int v){if(v)*r->p|=r->mask;else *r->p&=~r->mask;}
static inline void next(It*t){if(++t->bit==32){t->bit=0;t->p++;}}
static inline It *fill(It*t,int n,int*v){if(n){do{u32*p=t->p;u32 mask=1<<t->bit;Ref r;r.p=p;r.mask=mask;if(*v)*p|=mask;else *p&=~mask;n--;next(t);}while(n);}return t;}
It *func_001ED0E8(It*out,It*in,int n,int*v){It t=*in;*out=*fill(&t,n,v);return out;}
typedef struct {float x,y,z;} Vec;
typedef struct {int tag;Vec a,b;float x,y;} E;
extern void func_0021C370(E*,E*);
static inline void vc(Vec*d,Vec*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void ec(E*d,E*s){d->tag=s->tag;vc(&d->a,&s->a);vc(&d->b,&s->b);d->x=s->x;d->y=s->y;}
void func_0021C648(E*p,E*end,int unused){E v;{E *cur=p;for(;cur!=end;cur++){ec(&v,cur);func_0021C370(cur,&v);}}}
extern void func_0021C460(E*,E*);
void func_0021C700(E*p,E*end){if(end-p>16){E*q=p+16;func_0021C460(p,q);func_0021C648(q,end,0);}else func_0021C460(p,end);}
extern int D_00478DE8;extern void func_00204BA8(void*,void*);
typedef struct {void*vt;int v[9];} O;
typedef struct {int *begin,*end,*cap;} V;
typedef struct {void*vt;V a,b,c;} O2;
static inline V *vi(V*v){v->begin=0;v->cap=0;v->end=0;return v;}
O2 *func_0021C770(O2*p){volatile int alloc[12];p->vt=&D_00478DE8;vi(&p->a);vi(&p->b);func_00204BA8(p,vi(&p->c));return p;}
