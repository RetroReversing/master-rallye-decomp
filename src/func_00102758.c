typedef struct{float r,g,b,a;}Color;
typedef struct{char pad[12];float period,phase;Color start,end;u32 key[4];}Obj;
typedef struct{char pad[16];Color color;char pad2[104];int dirty;}Mat;
typedef struct{char pad[76];Mat*mat;}Target;
extern int func_001E38C8(int,void*),func_001E3598(int,void*);
extern int**func_001D5900(void);
extern float func_0015ACB0(void),func_003F3140(float);
static inline void copy(Color*d,Color*s){d->r=s->r;d->g=s->g;d->b=s->b;d->a=s->a;}
void func_00102758(Obj*o,Target*t){int exists,value;float ticks,scale;Color c;
if(t&&t->mat){exists=func_001E38C8(func_001E4280(),o->key);value=func_001E3598(func_001E4280(),o->key);
if(!exists||value){ticks=(float)(*func_001D5900())[4]/30.0f;
{float rate=func_0015ACB0();scale=(func_003F3140((ticks+o->phase*(rate+rate)*o->period)/o->period)+1.0f)*0.5f;}
{
 float red=o->start.r+(o->end.r-o->start.r)*scale;
 float green=o->start.g+(o->end.g-o->start.g)*scale;
 float blue=o->start.b+(o->end.b-o->start.b)*scale;
 float alpha=o->start.a+(o->end.a-o->start.a)*scale;
 if(alpha>=1.0f)alpha=1.0f;
 c.r=red;c.g=green;c.b=blue;c.a=alpha;
 {Mat*m=t->mat;copy(&m->color,&c);m->dirty++;}
}}}}
