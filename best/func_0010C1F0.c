typedef struct {float x,y,z,w;} V; typedef struct {V r[4];} M;
float func_003F3140(float); float func_003F2F50(float); int func_00152108(M*,M*,M*); extern V D_00425E98;
static inline __attribute__((always_inline)) V *vi(V*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;return p;}
static inline void vc(V*p,const V*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=q->w;}
static inline void vs(V*p,float x,float y,float z){p->x=x;p->w=1;p->y=y;p->z=z;}
static inline void vp(V*p,V*q){vs(p,q->x,q->y,q->z);}
static inline void qa(V*q,V*axis,float angle){float h=angle*0.5f;float s=func_003F3140(h);q->x=s*axis->x;q->y=s*axis->y;q->z=s*axis->z;q->w=func_003F2F50(h);}
#define F(p,o) (*(float*)((char*)(p)+(o)))
#define P(p,o) (*(char**)((char*)(p)+(o)))
static inline void qm(M*m,V*q){float x2=q->x+q->x,y2=q->y+q->y,z2=q->z+q->z;
float xx=x2*q->x,yy=y2*q->y,zz=z2*q->z;
float xy=y2*q->x,xz=z2*q->x,yz=z2*q->y,wx=x2*q->w,wy=y2*q->w,wz=z2*q->w;
vi(&m->r[0],1-(yy+zz),xy-wz,xz+wy,0);
vi(&m->r[1],xy+wz,1-(xx+zz),yz-wx,0);
vi(&m->r[2],xz-wy,yz+wx,1-(xx+yy),0);
vi(&m->r[3],0,0,0,1);}
static inline void identity(M*dst,V*qptr){char*obj=(char*)dst-32;vi(qptr,1,0,0,0);vc((V*)(obj+32),qptr);vi(qptr,0,1,0,0);vc((V*)(obj+48),qptr);vi(qptr,0,0,1,0);vc((V*)(obj+64),qptr);vi(qptr,0,0,0,1);vc((V*)(obj+80),qptr); }
typedef struct {char pad[32];M mat;} Obj; typedef struct {char pad[80];Obj*obj;} B;
void func_0010C1F0(void*a,B*b){
struct {float x,y,z;} pos; V q; M m; char *obj; float angle,s,c;
{V*t=(V*)((char*)b->obj+80);pos.x=t->x;pos.y=t->y;pos.z=t->z;} F(a,24)+=F(a,20);
identity((M*)((char*)b->obj+32),&q);
qa(&q,&D_00425E98,F(a,24));
qm(&m,&q);
func_00152108((M*)((char*)b->obj+32),&m,(M*)(P(b,80)+32));obj=P(b,80);vi((V*)(obj+80),pos.x,pos.y,pos.z,1);
}
