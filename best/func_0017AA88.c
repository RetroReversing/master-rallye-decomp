typedef struct {float x,y,z; } __attribute__((aligned(16))) V;
typedef struct {float x,y,z,d; int tag;} P;
/* machine draft (m2c), tried by autopilot */
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

void func_0017A010(f32 *, void *); /* extern */
void *func_001A12E0();                              /* extern */
void func_001CF448(f32 *, void *);               /* extern */
void func_001E9D80(s32, s32, f32 *, void *);  /* extern */
s32 func_0021E9C0(s32, void *);                     /* extern */
s32 func_0021F4B0();                                /* extern */
s32 func_002C3C48();                                /* extern */
typedef struct {u32 begin,end,cap;} Arr;
extern Arr D_0040E900;
extern f32 D_004264A0;
extern V D_00426528;
extern f32 D_0044FE8C;

static inline __attribute__((always_inline)) P *plane(P *p, V *n, V *a) { p->x=n->x;p->y=n->y;p->z=n->z;p->d=-(n->x*a->x+n->y*a->y+n->z*a->z);p->tag=-1;return p; }
void func_0017AA88(void *arg0) {
    struct { float a[4]; union {P p; struct {float b[4]; V v20;} q;} u; V v30,v40,v50,v60,v70,v80,v90;} frame;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f21;
    s32 temp_16_3;
    s32 temp_19;
    s32 temp_19_2;
    s32 temp_4;
    s32 temp_6;
    u32 oldend;
    s32 var_17;
    s32 var_3_2;
    u32 var_3;
    void *temp_16;
    void *temp_16_2;
    void *temp_2;
    void *temp_3;
    void *temp_5;

    temp_16 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(arg0, s32 *, 0xE8) = -1;
    M2C_FIELD(arg0, f32 *, 0x168) = 0.0f;
    if (M2C_FIELD(temp_16, s32 *, 0x28) == 0) {
        M2C_FIELD(temp_16, s32 *, 0x28) = func_0021E9C0(func_0021F4B0(), temp_16 + 0x24);
    }
    temp_19 = M2C_FIELD(temp_16, s32 *, 0x28);
    if (temp_19 != 0) {
        oldend=D_0040E900.end;
        temp_6 = oldend - D_0040E900.begin;
        if ((u32) D_0040E900.begin < (u32) D_0040E900.end) {
            var_3 = D_0040E900.begin;
            do {
                var_3 += 0x2C;
            } while (var_3 < (u32) D_0040E900.end);
        }
        D_0040E900.end = oldend - temp_6;
        func_0017A010(&frame.u.p.x, arg0);
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x44);
        temp_f4 = D_00426528.x * temp_f0;
        temp_f1 = D_00426528.y * temp_f0;
        temp_f6 = D_00426528.z * temp_f0;
        var_17 = 0;
        frame.u.q.v20.y = temp_f1;
        frame.u.q.v20.z = temp_f6;
        frame.u.q.v20.x = temp_f4;
        frame.a[1] = frame.u.p.y - temp_f1;
        frame.a[2] = frame.u.p.z - temp_f6;
        frame.a[0] = frame.u.p.x - temp_f4;
        temp_4 = func_002C3C48();
        frame.u.p.x = frame.a[0];
        frame.u.p.y = frame.a[1];
        frame.u.p.z = frame.a[2];
        func_001E9D80(temp_4, temp_19, &frame.u.p.x, &D_0040E900);
        temp_19_2 = (s32) ((D_0040E900.end - D_0040E900.begin) * 0xBA2E8BA3) >> 2;
        var_f21 = D_0044FE8C;
        if (temp_19_2 > 0) {
            do {
                temp_16_2 = D_0040E900.begin + (var_17 * 0x2C);
                temp_f8 = M2C_FIELD(temp_16_2, f32 *, 8);
                temp_2 = temp_16_2 + 8;
                temp_3 = temp_16_2 + 0x20;
                temp_5 = temp_16_2 + 0x14;
                frame.v30.x = temp_f8;
                temp_f2 = M2C_FIELD(temp_2, f32 *, 4);
                frame.v30.y = temp_f2;
                temp_f5 = M2C_FIELD(temp_2, f32 *, 8);
                frame.v30.z = temp_f5;
                temp_f7 = M2C_FIELD(temp_16_2, f32 *, 0x20);
                frame.v40.x = temp_f7;
                temp_f7_2 = temp_f8 - temp_f7;
                temp_f3 = M2C_FIELD(temp_3, f32 *, 4);
                frame.v40.y = temp_f3;
                temp_f3_2 = temp_f2 - temp_f3;
                temp_f4_2 = M2C_FIELD(temp_3, f32 *, 8);
                frame.v40.z = temp_f4_2;
                temp_f4_3 = temp_f5 - temp_f4_2;
                temp_f0_2 = M2C_FIELD(temp_16_2, f32 *, 0x14);
                frame.v50.x = temp_f0_2;
                temp_f8_2 = temp_f8 - temp_f0_2;
                temp_f1_2 = M2C_FIELD(temp_5, f32 *, 4);
                temp_f2_2 = temp_f2 - temp_f1_2;
                frame.v50.y = temp_f1_2;
                temp_f0_3 = M2C_FIELD(temp_5, f32 *, 8);
                frame.v70.y = temp_f3_2;
                temp_f5_2 = temp_f5 - temp_f0_3;
                frame.v50.z = temp_f0_3;
                frame.v70.z = temp_f4_3;
                frame.v80.y = temp_f2_2;
                frame.v80.z = temp_f5_2;
                frame.u.p.x = 0.0f;
                frame.v90.z = (temp_f7_2 * temp_f2_2) - (temp_f3_2 * temp_f8_2);
                frame.u.p.y = 0.0f;
                frame.u.p.z = 0.0f;
                frame.v70.x = temp_f7_2;
                frame.v80.x = temp_f8_2;
                frame.v90.y = (temp_f4_3 * temp_f8_2) - (temp_f7_2 * temp_f5_2);
                frame.v90.x = (temp_f3_2 * temp_f5_2) - (temp_f4_3 * temp_f2_2);
                func_001CF448(&frame.v90.x, temp_5);
                plane(&frame.u.p, &frame.v90, &frame.v40);
                frame.v60=frame.v90;
                temp_f1_3 = (frame.u.p.x * frame.a[0]) + (frame.u.p.y * frame.a[1]) + (frame.u.p.z * frame.a[2]) + frame.u.p.d;
                var_3_2 = 0;
                if (D_004264A0 <= temp_f1_3) {
                    var_3_2 = 1;
                } else if (temp_f1_3 <= -D_004264A0) {
                    var_3_2 = -1;
                }
                if (var_3_2 == -1) {
                    temp_16_3 = M2C_FIELD(temp_16_2, s32 *, 4);
                    temp_f20 = -((frame.u.p.x * frame.a[0]) + (frame.u.p.y * frame.a[1]) + (frame.u.p.z * frame.a[2]) + frame.u.p.d);
                    if (temp_16_3 == M2C_FIELD(func_001A12E0(), s32 *, 0x24)) {
                        M2C_FIELD(arg0, f32 *, 0x168) = temp_f20;
                    } else if (temp_f20 < var_f21) {
                        M2C_FIELD(arg0, s32 *, 0xE8) = temp_16_3;
                        var_f21 = temp_f20;
                    }
                }
                var_17 += 1;
            } while (var_17 < temp_19_2);
        }
    }
}
