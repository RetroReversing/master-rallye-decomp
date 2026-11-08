typedef struct P{float x,y;}P;typedef struct V{P*b,*e,*c;}V;
extern P*func_00156260(P*,P*,P*,int);extern void*func_002B1FC0(int);extern void*func_003D2910(int);extern void*func_00152D28(int);extern void func_002B2028(void*);extern u32 D_0040E618[];
static inline void shift(P*src,P*dst,int n){while(n>0){--src;--dst;dst->x=src->x;--n;dst->y=src->y;}}
void func_001565D0(V*v,P*pos,P*value){P*b,*r,*ne,*d,*e=v->e;int n,cap,bytes;P tmp;
if(e!=v->c){if(e){P*prev=(P*)((u32)e-8);e->x=prev->x;e->y=((volatile P*)prev)->y;}e=v->e;v->e=e+1;d=(P*)((u32)e-8);n=((int)((u32)d-(u32)pos))>>3;tmp.x=value->x;tmp.y=value->y;
shift(d,e,n);pos->x=tmp.x;pos->y=tmp.y;
}else{n=e-v->b;cap=n?n*2:1;bytes=cap*8;if(cap){if(bytes){P*t=func_002B1FC0(bytes);if(!t)t=func_003D2910(bytes);b=t;}else {P*t=(P*)D_0040E618[-1];if(!t)b=func_00152D28(0);else {u32 next=*(u32*)t;D_0040E618[-1]=next;b=t;}}}else {b=0;bytes=0;}
r=func_00156260(v->b,pos,b,0);if(r){r->x=value->x;r->y=value->y;}ne=func_00156260(pos,v->e,r+1,0);
{P*p=v->b,*end=v->e;while((u32)p<(u32)end)++p;}
{P*p=v->b;int count=v->c-p;if(count){int size=count*8;if(size)func_002B2028(p);else {*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
v->e=ne;v->c=(P*)((char*)b+bytes);v->b=b;}}
