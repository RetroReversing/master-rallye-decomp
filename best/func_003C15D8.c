extern f32 sqrtf(f32);
typedef struct {f32 x,y,z;} Vec3;
typedef struct {Vec3 pos; s32 pad[3];s32 child;} Edge;
typedef struct {Edge *begin,*end,*cap;s32 pad[3];} Region;
extern void func_003C1E48(void*,s32,s32);
#define dot8(a,b) (((a).x*(b).x+(a).y*(b).y)+(a).z*(b).z)
static inline void sub8(Vec3*r,const Vec3*a,const Vec3*b){r->x=a->x-b->x;r->y=a->y-b->y;r->z=a->z-b->z;}
#define SUB8(r,a,b) sub8(&(r),&(a),&(b))
static inline Vec3*norm8(Vec3*v){f32 n=(v->x*v->x+v->y*v->y)+v->z*v->z;if(n<=1.1920929e-7f){v->x=0;v->y=0;v->z=0;}else{f32 s=1.0f/sqrtf(n);v->x*=s;v->y*=s;v->z*=s;}return v;}
static inline void copy8(Vec3*d,const Vec3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void clip8(Vec3*a,Vec3*b,Vec3*c,Vec3*dir,f32*t,f32*plane){f32 length,denom; s32 parallel;
SUB8((*dir),(*b),(*a));length=sqrtf(((*dir).x*(*dir).x+(*dir).y*(*dir).y)+(*dir).z*(*dir).z);norm8(&(*dir));
denom=(plane[0]*(*dir).x+plane[1]*(*dir).y)+plane[2]*(*dir).z;
parallel=0;if(-0.0000011920929f<=denom && denom<=0.0000011920929f)parallel=1;if(!parallel){
(*t)=-((((*a).x*plane[0]+(*a).y*plane[1])+(*a).z*plane[2])+plane[3])/denom;
(*c).x=(*dir).x*(*t);(*c).y=(*dir).y*(*t);(*c).z=(*dir).z*(*t);(*c).x=(*a).x+(*c).x;(*c).y=(*a).y+(*c).y;(*c).z=(*a).z+(*c).z;
if((*t)<=0 || length<=(*t)){if((*t)==0)copy8(c,a);else if((*t)==length)copy8(c,b);}}

}
void func_003C15D8(void*p,s32 arg,Region**regions,f32*plane,Vec3*origin,s32 extra,Vec3*look,s32 index,f32 low,f32 high){
struct {Vec3 a;s32 pa;Vec3 b;s32 pb;Vec3 c;s32 pc;Vec3 dir;s32 pd;Vec3 normal;s32 pn;Vec3 va;s32 pv;Vec3 vb;s32 pw;f32 t;} locals;Region*r=*regions+index;s32 count=r->end-r->begin,i=0;
if(count>0){do{Edge*e=r->begin+i; s32 next=i+1;
if(e->child!=-1){f32 da,db,lower,upper;
copy8(&locals.a,&e->pos);locals.a.y=0;
da=((locals.a.x*plane[0]+locals.a.y*plane[1])+locals.a.z*plane[2])+plane[3];
copy8(&locals.b,&r->begin[next%count].pos);locals.b.y=0;
db=((locals.b.x*plane[0]+locals.b.y*plane[1])+locals.b.z*plane[2])+plane[3];
if(da<0 || db<0){if(da<0&&db<0)goto skip;clip8(&locals.a,&locals.b,&locals.c,&locals.dir,&locals.t,plane);if(da<0)copy8(&locals.a,&locals.c);else if(db<0)copy8(&locals.b,&locals.c);}
SUB8(locals.c,locals.a,*origin);norm8(&locals.c);locals.normal.x=-(locals.b.z-locals.a.z);locals.normal.y=locals.b.y-locals.a.y;locals.normal.z=locals.b.x-locals.a.x;norm8(&locals.normal);
if(dot8(locals.normal,locals.c)>=0)goto skip;
SUB8(locals.va,locals.a,*origin);lower=-1.0f;if(dot8(locals.va,locals.va)>0.001f){norm8(&locals.va);lower=dot8(*look,locals.va);}if(lower<low)lower=low;
SUB8(locals.vb,locals.b,*origin);upper=1.0f;if(dot8(locals.vb,locals.vb)>0.001f){norm8(&locals.vb);upper=dot8(*look,locals.vb);}if(high<upper)upper=high;
if(!((upper-lower)<0.001f))func_003C15D8(p,arg,regions,plane,origin,extra,look,r->begin[i].child,lower,upper);
}skip:i=next;}while(i<count);}
func_003C1E48(p,arg,index);
}
