/* identical to func_0021C770 (matched), with its names changed by decompdecomp */
extern int D_0047ABF0;extern void func_00204BA8(void*);
typedef struct {int*begin,*end,*cap;} V;typedef struct {void*vt;V a,b,c;} O;
static inline V*vi(V*v){v->begin=0;v->end=0;v->cap=0;return v;}
O *func_002795E0(O*p){volatile int alloc[12];p->vt=&D_0047ABF0;vi(&p->a);vi(&p->b);vi(&p->c);func_00204BA8(p);return p;}
