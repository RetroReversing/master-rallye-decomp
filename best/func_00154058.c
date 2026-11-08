typedef struct{float x,y,z;} V3;
typedef struct{u8 flag;float f;int i;V3 v;float last;} E;
typedef struct{E *begin,*end,*cap;} Vec;
extern E *func_00153FE0(E*,E*,E*,int);
extern void *func_002B1FC0(u32),*func_003D2910(u32),*func_00152D28(u32);
extern void func_002B2028(void*);
extern u32 D_0040E618[];
static inline void cp3(V3*d,const V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void ctor(E*d,const E*s){d->flag=s->flag;d->f=s->f;d->i=s->i;d->v.x=s->v.x;d->v.y=s->v.y;d->v.z=s->v.z;d->last=s->last;}
static inline E *alloc(u32 n){if(n){u32 bytes=n*28;if(bytes){E*p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);return p;}else{E*p=(E*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}}return 0;}
static inline void dealloc(E*p,u32 n){if(n){u32 bytes=n*28;if(bytes)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
void func_00154058(Vec*v,E*pos,const E*x){
if(v->end!=v->cap){
E tmp;E *old,*src,*dst;int n;
if(v->end)ctor(v->end,v->end-1);
old=v->end;v->end++;ctor(&tmp,x);
src=old-1;dst=old;n=src-pos;
for(;n>0;--n)ctor(--dst,--src);
pos->flag=tmp.flag;pos->i=tmp.i;pos->v.x=tmp.v.x;pos->f=tmp.f;pos->v.z=tmp.v.z;pos->v.y=tmp.v.y;pos->last=tmp.last;
}else{
u32 size=v->end-v->begin;u32 len=size?size*2:1;E*p=alloc(len);E*end=func_00153FE0(v->begin,pos,p,0);E*it;
if(end)ctor(end,x);end++;
x=func_00153FE0(pos,v->end,end,0);
for(it=v->begin;it<v->end;it++){}
dealloc(v->begin,v->cap-v->begin);
v->begin=p;v->end=(E*)x;v->cap=p+len;
}
}
