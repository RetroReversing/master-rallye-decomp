extern void func_001D4040(void *, const char *);
extern char D_0047B538[];
extern char D_0047CDF8[];
typedef struct {float x,y,z;} V;
typedef struct {s32 id; u32 name; void *vt; s32 a,b,c,d,e,h; float f24,f28,f2c; u32 f30; float f34,f38,f3c; V ones; float f4c,f50,f54,f58; V v[8];} T;
static inline void zero(V *p,V *t,float f) { t->x=f; t->y=f; t->z=f; p->x=t->x; p->y=t->y; p->z=t->z; }
T *func_0028D020(T *p) {
struct { u32 name[4]; V t; } local; float f; func_001D4040(local.name,D_0047B538);
p->name=local.name[0];p->id=-1;p->vt=D_0047CDF8;
p->h=0;p->a=0;p->b=0;p->c=1;p->d=0;p->e=0;
p->f24=1;p->f28=1;p->f2c=1;p->f30=0;p->f34=16;p->f38=0;
p->ones.z=1;p->ones.y=1;p->ones.x=1;p->f3c=1;
f=p->f38;p->f58=f;p->f54=f;p->f50=f;p->f4c=f;
zero(&p->v[0],&local.t,f);zero(&p->v[1],&local.t,f);zero(&p->v[2],&local.t,f);zero(&p->v[3],&local.t,f);zero(&p->v[4],&local.t,f);zero(&p->v[5],&local.t,f);zero(&p->v[6],&local.t,f);zero(&p->v[7],&local.t,f);
return p;
}
