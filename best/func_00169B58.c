typedef struct __attribute__((aligned(16))) { float x,y,z; } V;
static inline void cp(V *a,const V*b){a->x=b->x;a->z=b->z;a->y=b->y;}
static inline void sub(V*a,const V*b,const V*c){a->x=b->x-c->x;a->y=b->y-c->y;a->z=b->z-c->z;}
extern void func_001685F0(V*,void*);
extern void func_00168448(V*,void*);
extern void func_00167FD0(V*,void*,V*,V*);
extern int func_00168380(void*);
extern int func_00169DC0(int*,void*,int);
extern int func_00169F18(int*,void*,int);
extern void func_00168F78(void*,int,int);
extern float func_003F3E80(float);
int func_00169B58(int *out,void *obj) {
 V p,d,n,delta,old; int a=0,b=0; int id=func_00168380(obj);
 if(func_00169DC0(out,obj,id)) {
 if(id>=0) {
 func_001685F0(&p,obj); func_00168448(&d,obj); d.y=0;
 func_00167FD0(&n,obj,&p,&d);
 { float l=n.x*n.x+n.y*n.y+n.z*n.z;
 if(l<=1.1920929e-7f) {n.x=0;n.y=0;n.z=0;}
 else {float r=1.0f/__builtin_sqrtf(l); n.x*=r;n.y*=r;n.z*=r;}
 }
 if(n.x*d.x+n.y*d.y+n.z*d.z<0.6f) *out=1;
 else {
 V *v=(V*)((char*)obj+0xb4); old.x=v->x;old.y=v->y;old.z=v->z;sub(&delta,&p,&old);
 *out=delta.x*delta.x+delta.y*delta.y+delta.z*delta.z>2.0f?2:3;
 cp(v,&p);
 }
 *(int*)((char*)obj+0xcc)=0;a=1;
 }
 } else if(func_00169F18(out,obj,id)) {if(id<0){*out=0;b=1;}}
 func_00168F78(obj,a,b); return a||b;
}
