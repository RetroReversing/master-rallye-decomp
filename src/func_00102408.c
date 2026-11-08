extern void func_001D4040(void*,const char*);
extern char D_00444D40[],D_0044DAF0[];
typedef struct {float r,g,b,a;} Color;
typedef struct {int id;u32 key;void*vt;float time,offset;Color start,end;int active;} Fader;
static inline void white(Color*p){p->b=1;p->g=1;p->r=1;p->a=1;}
static inline void initcolor(Color*p,float r,float g,float b,float a){p->r=r;p->g=g;p->b=b;p->a=a;}
static inline void copycolor(Color*d,const Color*s){d->r=s->r;d->g=s->g;d->b=s->b;d->a=s->a;}
Fader*func_00102408(Fader*p){u32 key[4];Color temp;func_001D4040(key,D_00444D40);p->key=key[0];p->id=-1;p->vt=D_0044DAF0;white(&p->start);white(&p->end);initcolor(&temp,1,1,1,1);p->active=0;p->time=1;p->offset=0;copycolor(&p->start,&temp);initcolor(&temp,1,1,1,1);copycolor(&p->end,&temp);return p;}
