typedef struct {float x,y,z,w;} V; typedef struct {V r[4];} M;
float func_003F3140(float); float func_003F2F50(float); void func_00152108(M*,M*,M*); extern V D_00425E98;
static inline __attribute__((always_inline)) V *vi(V*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;return p;}
static inline void vc(V*p,const V*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=q->w;}
static inline void vs(V*p,float x,float y,float z){p->x=x;p->w=1;p->y=y;p->z=z;}
static inline void vp(V*p,V*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=1;}
static inline void qa(V*q,V*axis,float angle){float h=angle*0.5f;float s=func_003F3140(h);q->x=s*axis->x;q->y=s*axis->y;q->z=s*axis->z;q->w=func_003F2F50(h);}
#define F(p,o) (*(float*)((char*)(p)+(o)))
#define P(p,o) (*(char**)((char*)(p)+(o)))
static inline M *qm(M*m,V*q){float x2=q->x+q->x,y2=q->y+q->y,z2=q->z+q->z;
float xx=x2*q->x,yy=y2*q->y,zz=z2*q->z;
float xy=y2*q->x,xz=z2*q->x,yz=z2*q->y,wx=x2*q->w,wy=y2*q->w,wz=z2*q->w;
vi(&m->r[0],1-(yy+zz),xy-wz,xz+wy,0);
vi(&m->r[1],xy+wz,1-(xx+zz),yz-wx,0);
vi(&m->r[2],xz-wy,yz+wx,1-(xx+yy),0);
vi(&m->r[3],0,0,0,1);return m;}
static inline void identity(M*dst,V*qptr){char*obj=(char*)dst-32;vi(qptr,1,0,0,0);vc((V*)(obj+32),qptr);vi(qptr,0,1,0,0);vc((V*)(obj+48),qptr);vi(qptr,0,0,1,0);vc((V*)(obj+64),qptr);vi(qptr,0,0,0,1);vc((V*)(obj+80),qptr); }
typedef struct {char pad[32];M mat;} Obj; typedef struct {char pad[80];Obj*obj;} B;
float func_0015ACC8(void);void func_001525D8(M*,M*,float);extern V D_00425E88,D_00425EA8;
void func_0010B2F0(void*a,B*b){V q;M mx,my,mz;M*dst;char*o;V *ax,*ay,*az;
if(*(int*)((char*)a+12))*(int*)((char*)a+12)=0;
*(int*)((char*)a+16)=1;F(a,36)+=0.008725f;if(func_0015ACC8()<F(a,36))F(a,36)-=func_0015ACC8();
ax=&D_00425E88;ay=&D_00425E98;az=&D_00425EA8;identity(&b->obj->mat,&q);
qa(&q,ax,F(a,32));func_00152108(&b->obj->mat,qm(&mx,&q),&b->obj->mat);
qa(&q,ay,F(a,36));func_00152108(&b->obj->mat,qm(&my,&q),&b->obj->mat);
qa(&q,az,F(a,40));func_00152108(&b->obj->mat,qm(&mz,&q),&b->obj->mat);
dst=&b->obj->mat;func_001525D8(dst,dst,F(a,44));o=(char*)b->obj;vp((V*)(o+80),(V*)((char*)a+20));}
