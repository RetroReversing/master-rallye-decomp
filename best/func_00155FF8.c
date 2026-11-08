typedef struct {float x,y,z,w;} S16;
typedef struct {S16 *begin,*end,*cap;} Vec;
extern u32 D_0040E618[];
S16 *func_00155FB0(S16 *,S16 *,S16 *,int);
void *func_002B1FC0(int);
void *func_003D2910(int);
void *func_00152D28(int);
void func_002B2028(void *);
void func_00155FF8(Vec *v,S16 *pos,S16 *val) {
S16 *e,*b,*p,*nb; u32 cap,bytes;
if(v->end!=v->cap){
 e=v->end; if(e) *e=e[-1];
 e=v->end; v->end=e+1; b=e-1;
 {S16 tmp=*val; int n=b-pos;
 for(;n>0;--n){--b;--e;e->x=b->x;e->y=b->y;e->z=b->z;e->w=b->w;}
 {float x=tmp.x,y=tmp.y,z=tmp.z,w=tmp.w;pos->w=w;pos->x=x;pos->z=z;pos->y=y;}}
}else{
 cap=v->end-v->begin;cap=cap?cap*2:1;bytes=0;
 if(cap){bytes=cap*16;if(bytes){nb=func_002B1FC0(bytes);if(!nb)nb=func_003D2910(bytes);}
 else {S16 *q=(S16 *)D_0040E618[-1];if(!q)nb=func_00152D28(0);else{nb=q;D_0040E618[-1]=*(u32*)q;}}}
 else{nb=0;bytes=0;}
 p=func_00155FB0(v->begin,pos,nb,0);if(p)*p=*val;
 pos=func_00155FB0(pos,v->end,p+1,0);
 {S16 *first=v->begin,*last=v->end;while(first<last){++first;}}
 {S16 *old=v->begin;cap=v->cap-old;if(cap){int n=cap*16;if(n)func_002B2028(old);else{*(u32*)old=D_0040E618[-1];D_0040E618[-1]=(u32)old;}}}
 v->begin=nb;v->end=pos;v->cap=(S16*)((char*)nb+bytes);
}
}
