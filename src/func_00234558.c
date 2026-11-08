typedef struct{float x,y,z;} Vec;
typedef struct{int pad[3];Vec*p;} Node;
typedef struct Obj{Vec*a,*b;Vec dir;float len;int x,y;struct Obj*self;int z;} Obj;
extern Vec D_00426508;
extern float D_00478468;extern float func_001CF4C0(Vec*);
static inline void init(Vec*r,float x,float y,float z){r->x=x;r->y=y;r->z=z;}
static inline void sub(Vec*r,Vec*a,Vec*b){init(r,a->x-b->x,a->y-b->y,a->z-b->z);}
static inline void copy(Vec*d,Vec*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline float normalize(Vec*v){float n=func_001CF4C0(v);if(n<D_00478468){v->x=0;v->y=0;v->z=0;}else{v->x/=n;v->y/=n;v->z/=n;}return n;}
Obj*func_00234558(Obj*p,Vec*a,Vec*b){Vec tmp;p->a=a;p->b=b;copy(&p->dir,&D_00426508);p->len=0;p->x=0;p->y=0;p->self=0;p->z=0;sub(&tmp,p->b,p->a);copy(&p->dir,&tmp);p->len=normalize(&p->dir);p->self=p;return p;}
