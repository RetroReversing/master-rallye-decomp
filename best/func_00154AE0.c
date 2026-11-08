typedef struct{float x,y,z;} V3;
typedef struct{s32 a;V3 b;float c,d;s32 e;u8 f;u8 pad[3];} R;
typedef struct{R *begin,*end,*cap;} Vec;
extern u32 D_0040E618[];extern void *func_002B1FC0(u32),*func_003D2910(u32),*func_00152D28(u32);extern void func_002B2028(void*);
extern R *func_00154A60(R*,R*,R*,s32);
static inline void vcopy(V3*d,const V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void ctor(R*d,const R*s){d->a=s->a;vcopy(&d->b,&s->b);d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;}
static inline void assign(R*d,const R*s){d->a=s->a;vcopy(&d->b,&s->b);d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;}
static inline void *alloc(u32 n){u32 bytes=n*32;void*p;if(bytes){p=func_002B1FC0(bytes);if(p)return p;return func_003D2910(bytes);}p=(void*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}
void func_00154AE0(Vec*v,R*pos,R*value){if(v->end!=v->cap){R temp;R *old;old=v->end;if(old)ctor(old,old-1);old=v->end;v->end=old+1;{R*last=old-1,*dest=old;s32 n=last-pos;ctor(&temp,value);for(;n>0;n--){--last;--dest;assign(dest,last);}}assign(pos,&temp);}else{u32 oldn=v->end-v->begin,n=oldn?oldn*2:1,bytes;R*p,*cur,*result;if(n){bytes=n*32;p=alloc(n);}else{p=0;bytes=0;}cur=func_00154A60(v->begin,pos,p,0);if(cur)ctor(cur,value);result=func_00154A60(pos,v->end,cur+1,0);{R*i=v->begin,*e=v->end;for(;i<e;i++);} {R*b=v->begin;s32 n=v->cap-b;if(n){if(n*32)func_002B2028(b);else{*(u32*)b=D_0040E618[-1];D_0040E618[-1]=(u32)b;}}}v->end=result;v->cap=(R*)((char*)p+bytes);v->begin=p;}}
