extern void func_0017A010(float*,void*);
extern void func_00152108(float*,float*,float*);
extern float func_003F3140(float),func_003F2F50(float);
extern int func_0021F4B0(void),func_0021E9C0(int,void*);
extern void func_001E3F50(int,void*,float*);
extern float D_00479C98;
#define F(p,n) (*(float*)((char*)(p)+(n)))
#define P(p,n) (*(void**)((char*)(p)+(n)))
#define I(p,n) (*(int*)((char*)(p)+(n)))
typedef struct {float m[16];} Mat;
typedef struct {float x,y,z;} Vec;
static inline float clampv(float v,float lo,float hi){if(v<lo)v=lo;else if(hi<v)v=hi;return v;}
static inline void scalev(Vec *r,Vec *a,float k){float x=a->x*k,y=a->y*k,z=a->z*k;r->x=x;r->z=z;r->y=y;}
static inline void dividev(Vec *r,Vec *a,float k){float z=a->z/k,y=a->y/k,x=a->x/k;r->z=z;r->y=y;r->x=x;}
static inline void transformv(Vec *r,Vec *a,float *m){float x=m[0]*a->x+m[1]*a->y+m[2]*a->z,y=m[3]*a->x+m[4]*a->y+m[5]*a->z,z=m[6]*a->x+m[7]*a->y+m[8]*a->z;r->z=z;r->x=x;r->y=y;}
static inline void setrow(float *p,Vec *v,float *q){float x=v->x,y=v->y,z=v->z;q[0]=x;q[1]=y;q[2]=z;p[0]=q[0];p[2]=q[2];p[1]=q[1];p[3]=0;}

static inline void row(float *p,float x,float y,float z,float w){p[0]=x;p[1]=y;p[2]=z;p[3]=w;}
static inline void ident(Mat *m) {row(m->m,1,0,0,0);row(m->m+4,0,1,0,0);row(m->m+8,0,0,1,0);row(m->m+12,0,0,0,1);}

static inline void rotation(Mat *m,float *v,float angle,float *q) {
float s=func_003F3140(angle);
float x,y,z,w,xx,yy,zz,xy,xz,yz,xw,yw,zw;
q[0]=s*v[0];q[1]=s*v[1];q[2]=s*v[2];q[3]=func_003F2F50(angle);
x=q[0]+q[0];y=q[1]+q[1];z=q[2]+q[2];w=q[3];
xx=x*q[0];xy=y*q[0];xz=z*q[0];yy=y*q[1];yz=z*q[1];zz=z*q[2];xw=x*w;yw=y*w;zw=z*w;

row(m->m,1-(yy+zz),xy-zw,xz+yw,0);
row(m->m+4,xy+zw,1-(xx+zz),yz-xw,0);
row(m->m+8,xz-yw,yz+xw,1-(xx+yy),0);
row(m->m+12,0,0,0,1);
}
void func_001751D8(void *a) {
float pos[3],q[4],delta[3],div[3],scaled[3];
Mat base,rot1,out1,rot2,out2,result,rot3;
void *b=P(P(P(a,0x18),0xc),4),*c;
float t=F(b,0xe4),v,angle,old;
if(t>0) v=clampv(F(a,0xec)*t,-F(a,0x58),F(a,0x54));else v=-clampv(-F(a,0xec)*t,-F(a,0x58),F(a,0x54));
func_0017A010(q,a);
scalev((Vec*)scaled,(Vec*)((char*)a+0x48),v);
dividev((Vec*)div,(Vec*)scaled,F(a,0x4c));
old=F(a,0x130);
transformv((Vec*)delta,(Vec*)div,(float*)((char*)b+0xbc));
F(a,0x134)=old;
pos[0]=q[0]+delta[0];pos[1]=q[1]+delta[1];pos[2]=q[2]+delta[2];
if(I(a,0x20))F(a,0x130)=old+D_00479C98*F(a,0x128);else F(a,0x130)=old-D_00479C98*F(a,0x128);
t=F(a,0x130);if(__builtin_fabsf(t)>6.28318023681640625f)F(a,0x130)=t-(float)(int)(t/6.28318023681640625f)*6.28318023681640625f;
ident(&base);
setrow(base.m,(Vec*)((char*)b+0xec),q);
setrow(base.m+4,(Vec*)((char*)b+0xe0),q);
setrow(base.m+8,(Vec*)((char*)b+0xf8),q);
angle=-(F(a,0x148)+F(a,0x14c));c=P(P(P(a,0x18),0xc),0x14);
if(c)angle*=1-__builtin_fabsf(F(c,0x10)*F(b,0xec)+F(c,0x14)*F(b,0xf0)+F(c,0x18)*F(b,0xf4));
ident(&rot1);rotation(&rot1,base.m+4,angle*0.5f,q);func_00152108(base.m,rot1.m,out1.m);
ident(&rot2);rotation(&rot2,out1.m+8,F(a,0x158)*0.5f,q);func_00152108(out1.m,rot2.m,out2.m);
if(I(a,0x20)){rotation(&rot3,out2.m+4,1.5707950592041015625f,q);func_00152108(out2.m,rot3.m,result.m);}else {float c0=out2.m[0];float c1=out2.m[1];float c2=out2.m[2];float c3=out2.m[3];float c4=out2.m[4];float c5=out2.m[5];float c6=out2.m[6];float c7=out2.m[7];float c8=out2.m[8];float c9=out2.m[9];float c10=out2.m[10];float c11=out2.m[11];float c12=out2.m[12];float c13=out2.m[13];float c14=out2.m[14];float c15=out2.m[15];result.m[0]=c0;result.m[1]=c1;result.m[2]=c2;result.m[3]=c3;result.m[4]=c4;result.m[5]=c5;result.m[6]=c6;result.m[7]=c7;result.m[8]=c8;result.m[9]=c9;result.m[10]=c10;result.m[11]=c11;result.m[12]=c12;result.m[13]=c13;result.m[14]=c14;result.m[15]=c15;}
setrow(result.m+12,(Vec*)pos,q);result.m[15]=1;
if(func_0021E9C0(func_0021F4B0(),(char*)a+0x188))func_001E3F50(func_001E4280(),(char*)a+0x184,result.m);
}
