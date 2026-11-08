typedef struct {float x,y,z;} V;
static inline __attribute__((always_inline)) void copyv(V*a,const V*b){a->x=b->x;a->y=b->y;a->z=b->z;}
static inline __attribute__((always_inline)) void subv(V*c,const V*a,const V*b){c->x=a->x-b->x;c->y=a->y-b->y;c->z=a->z-b->z;}
extern void func_001683A8(V*,void*),func_00168448(V*,void*),func_00168B08(V*,void*),func_001685F0(V*,void*),func_00167FD0(V*,void*,V*,V*);
extern int func_00168AA0(void*);
extern float func_00168520(void*),sqrtf(float);
#define dot(a,b) ((a).x*(b).x+(a).y*(b).y+(a).z*(b).z)
static inline void normalize(V*t){float d=dot((*t),(*t));if(d<=1.1920929e-7f){t->x=0;t->y=0;t->z=0;}else{float f=1.0f/sqrtf(d);t->x*=f;t->y*=f;t->z*=f;}}
int func_00169F18(int*a,void*b,int c){
V v,p,q,r,t,u __attribute__((aligned(16)));float d,f; int mode;
if(*(int*)((char*)b+0xcc)==150)goto yes;
func_001683A8(&v,b);
if(dot(v,v)<4.0f){if(!func_00168AA0(b))return 0;func_00168448(&p,b);func_00168B08(&q,b);if(dot(p,q)>0.20000001f)goto yes;goto no;}
if(c!=-1)goto no;
func_001685F0(&p,b); mode=*a;
if(mode==1){func_00168448(&r,b);func_00167FD0(&t,b,&p,&r);normalize(&t);r.y=0;if(dot(r,t)>0.60000003f)goto yes;goto no;}
else if(mode==2){copyv(&r,(V*)((char*)b+0xb4));subv(&u,&p,&r);d=u.x*u.x;d+=u.y*u.y;d+=u.z*u.z;f=func_00168520(b);if(d>f*f)goto yes;return 0;
yes:return 1;
}else if(mode==3){copyv(&r,(V*)((char*)b+0xb4));subv(&t,&p,&r);d=t.x*t.x;d+=t.y*t.y;d+=t.z*t.z;f=2.0f*func_00168520(b);if(d>f*f)goto yes;goto no;}no:return 0;}
