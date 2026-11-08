/* identical to func_00155190 (matched), with its names changed by decompdecomp */
typedef struct{float x,y,z;} V3;
typedef struct{s32 a;V3 b;float c,d;s32 e;u8 f;u8 pad[3];} R;
static inline void vc(V3*d,const V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void copy(R*d,const R*s){d->a=s->a;vc(&d->b,&s->b);d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;}
R*func_00154A60(R*first,R*last,R*dest,s32 unused){R*cur=dest;while(first!=last){if(cur)copy(cur,first);first++;cur++;}return cur;}
void func_00155158(float*first,float*last,const float*value){while(first!=last){*first=*value;first++;}}
float*func_0026F248(float*first,u32 n,const float*value){float*p=first;if(n)do{--n;*p=*value;p++;}while(n);return p;}
extern char D_0044DCD8[];extern void D_002AD390(void*);
void func_001590F8(char*p,int flag){*(void**)(p+8)=D_0044DCD8;if(flag&1)D_002AD390(p);}
