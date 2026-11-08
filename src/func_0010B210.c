extern void func_001D4040(void*,const char*);
extern char D_00445BC8[],D_0044D970[];
typedef struct {float x,y,z;} V;
typedef struct {int id,key;void*vt;int active,zero;V pos,dir;float w;int state;float y;} O;
static inline void init(V*p,float x,float y,float z){p->x=x;p->y=y;p->z=z;}
static inline void copy(V*d,V*s){d->x=s->x;d->y=s->y;d->z=s->z;}
O*func_0010B210(O*o){u32 key[4];V v;
func_001D4040(key,D_00445BC8);
o->key=key[0];o->id=-1;o->vt=D_0044D970;
init(&v,8,-2,189);o->active=1;o->zero=0;copy(&o->pos,&v);
init(&v,0,0,0);copy(&o->dir,&v);o->w=1;o->state=0;o->y=o->dir.y;return o;}
