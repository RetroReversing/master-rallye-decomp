typedef struct V4 {float x,y,z,w;} V4;
typedef struct Mat {V4 x,y,z,t;} Mat;
static inline void vi(V4*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;}
static inline void identity(Mat*p){vi(&p->x,1,0,0,0);vi(&p->y,0,1,0,0);vi(&p->z,0,0,1,0);vi(&p->t,0,0,0,1);}
static inline void qtom(Mat*m,float*q)    {
    float x=q[0]+q[0], y=q[1]+q[1], z=q[2]+q[2];
    float xx=x*q[0],yy=y*q[1],zz=z*q[2];
    float xy=y*q[0],xz=z*q[0],yz=z*q[1],wx=x*q[3],wy=y*q[3],wz=z*q[3];
    vi(&m->x,1-(yy+zz),xy-wz,xz+wy,0);vi(&m->y,xy+wz,1-(xx+zz),yz-wx,0);vi(&m->z,xz-wy,yz+wx,1-(xx+yy),0);vi(&m->t,0,0,0,1);
    }

/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_00152108(void *, f32 *, void *);       /* extern */
f32 func_0015ACB0();                                /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_001B1AF8(void *arg0, void *arg1) {
    struct {f32 x,y,z;} t;
    Mat m;float q[4];
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f11;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 angle;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    s32 temp_2;
    void *temp_17;

    temp_17 = arg1 + 0x30;
    angle=func_0015ACB0();
    temp_f20 = (angle+angle) / (f32) M2C_FIELD(arg0, s32 *, 0xC);
    t.x = M2C_FIELD(arg1, f32 *, 0x30);
    t.y = M2C_FIELD(temp_17, f32 *, 4);
    t.z = M2C_FIELD(temp_17, f32 *, 8);
    temp_f20_2=temp_f20*(float)M2C_FIELD(arg0,s32*,16)*0.5f;
    identity(&m);
    temp_f0 = func_003F3140(temp_f20_2);
    q[0] = temp_f0 * M2C_FIELD(arg1, f32 *, 0);
    q[1] = temp_f0 * M2C_FIELD(arg1, f32 *, 4);
    q[2] = temp_f0 * M2C_FIELD(arg1, f32 *, 8);
    temp_f0_2 = func_003F2F50(temp_f20_2);
    q[3]=temp_f0_2;
    qtom(&m,q);
    func_00152108(arg1, (float*)&m, arg1);
    vi(temp_17,t.x,t.y,t.z,1);
    temp_2 = M2C_FIELD(arg0, s32 *, 0x10) + 1;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_2;
    if (temp_2 >= M2C_FIELD(arg0, s32 *, 0xC)) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
}
