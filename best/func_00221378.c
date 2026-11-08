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

M2C_UNK func_00221180(void *, s32);                 /* extern */
M2C_UNK func_00221B88(void *, s32);                 /* extern */
s32 *func_00222CF8();                               /* extern */
extern char D_00492EF8[];
extern s32 D_00493B0C;
extern s32 D_00493B14;
extern float D_00493B18[];

typedef struct P3{float x,y,z;}P3;
static inline P3*scale3(P3*out,P3*in,float s){out->x=in->x*s;out->y=in->y*s;out->z=in->z*s;return out;}
static inline void add3(P3*p,P3*v){float x=p->x,y=p->y,z=p->z;p->x=x+v->x;p->y=y+v->y;p->z=z+v->z;}
static inline void addScaled(P3*p,P3*v,float s){float x=p->x,y=p->y,z=p->z;p->x=x+v->x*s;p->y=y+v->y*s;p->z=z+v->z*s;}
void func_00221378(void *arg0, s32 arg1, s32 arg2) {
    P3 random;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 var_f2;
    f32 var_f2_2;
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_3_4;
    s32 temp_3_5;
    s32 temp_4;
    s32 var_19;
    s32 var_20;
    s32 var_21;
    s32 var_3;
    s32 var_5;
    void *temp_16_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_7;
    void *var_17;

    temp_2 = arg2 - arg1;
    var_21 = -1;
    var_19 = temp_2 - 1;
    var_17 = NULL;
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x88) = arg2;
    M2C_FIELD(arg0, s32 *, 0x90) = temp_2;
    if (var_19 >= 0) {
        do {
            temp_16 = var_19 * 0x60;
            temp_2_2 = M2C_FIELD((temp_16 + M2C_FIELD(arg0, s32 *, 0x84)), s32 *, 0x54);
            if (var_21 != temp_2_2) {
                var_21 = temp_2_2;
                var_17 = *func_00222CF8() + (var_21 * 0x170);
            }
            var_20 = 0;
            temp_16_2 = M2C_FIELD(arg0, s32 *, 0x84) + temp_16;
            temp_7 = temp_16_2 + 0x18;
            temp_f0 = M2C_FIELD(temp_16_2, f32 *, 0x30) - M2C_FIELD(var_17, f32 *, 0x164);
            M2C_FIELD(temp_16_2, f32 *, 0x30) = temp_f0;
            if (temp_f0 <= 0.0f) {
                M2C_FIELD(temp_16_2, f32 *, 0x30) = 0.0f;
                if (M2C_FIELD(var_17, f32 *, 0xE0) != 0.0f) {
                    var_20 = 1;
                }
            }
            temp_f0_2 = M2C_FIELD(temp_16_2, f32 *, 0x3C) - M2C_FIELD(var_17, f32 *, 0x168);
            M2C_FIELD(temp_16_2, f32 *, 0x3C) = temp_f0_2;
            if (temp_f0_2 <= 0.015625f) {
                M2C_FIELD(temp_16_2, f32 *, 0x3C) = 0.0f;
                if (M2C_FIELD(var_17, f32 *, 0x60) != M2C_FIELD(temp_16_2, f32 *, 0x3C)) {
                    var_20 = 1;
                }
            }
            temp_f1 = M2C_FIELD(temp_16_2, f32 *, 0x48);
            if (0.0f < temp_f1) {
                M2C_FIELD(temp_16_2, f32 *, 0x48) = (f32) (temp_f1 - M2C_FIELD(var_17, f32 *, 0x148));
            }
            if (M2C_FIELD(temp_16_2, f32 *, 0x48) < 0.0f) {
                temp_f3 = M2C_FIELD(temp_16_2, f32 *, 0x48) / M2C_FIELD(var_17, f32 *, 0x100);
                addScaled((P3*)temp_16_2,(P3*)temp_7,temp_f3);
                M2C_FIELD(temp_16_2,f32*,0x48)=0.0f;
            }
            if (M2C_FIELD(temp_16_2, f32 *, 0x48) == 0.0f) {
                temp_3 = D_00493B0C + 1;
                addScaled((P3*)temp_16_2,(P3*)temp_7,0.033333335f);
                temp_f1_2 = M2C_FIELD(temp_7, f32 *, 0);
                temp_f2 = M2C_FIELD(temp_7, f32 *, 4);
                temp_f3_2 = M2C_FIELD(temp_7, f32 *, 8);
                temp_f1_3 = temp_f1_2 - (temp_f1_2 * M2C_FIELD(var_17, f32 *, 0x150));
                M2C_FIELD(temp_7, f32 *, 0) = temp_f1_3;
                temp_f2_2 = temp_f2 - (temp_f2 * M2C_FIELD(var_17, f32 *, 0x150));
                M2C_FIELD(temp_7, f32 *, 4) = temp_f2_2;
                temp_f3_3 = temp_f3_2 - (temp_f3_2 * M2C_FIELD(var_17, f32 *, 0x150));
                M2C_FIELD(temp_7, f32 *, 8) = temp_f3_3;
                M2C_FIELD(temp_7, f32 *, 0) = (f32) (temp_f1_3 - M2C_FIELD(var_17, f32 *, 0x154));
                M2C_FIELD(temp_7, f32 *, 4) = (f32) (temp_f2_2 - M2C_FIELD(var_17, f32 *, 0x158));
                M2C_FIELD(temp_7, f32 *, 8) = (f32) (temp_f3_3 - M2C_FIELD(var_17, f32 *, 0x15C));
                D_00493B0C = temp_3;
                if (D_00493B18[temp_3 & 0x3FF] < M2C_FIELD(var_17, f32 *, 0x160)) {
                    temp_f1_4 = M2C_FIELD(var_17, f32 *, 0xB8);
                    temp_3_2 = D_00493B14 + 1;
                    D_00493B14 = temp_3_2;
                    temp_2_3 = ((temp_3_2 & 0xFF) * 0xC) + D_00492EF8;
                    add3((P3*)temp_7,scale3(&random,(P3*)temp_2_3,temp_f1_4));
                }
                temp_2_4 = temp_16_2 + 0xC;
                temp_f0_4 = M2C_FIELD(temp_16_2, f32 *, 0xC) - M2C_FIELD(temp_16_2, f32 *, 0);
                temp_f3_4 = M2C_FIELD(temp_2_4, f32 *, 4) - M2C_FIELD(temp_16_2, f32 *, 4);
                temp_f1_5 = M2C_FIELD(temp_16_2, f32 *, 0x50);
                temp_f2_3 = M2C_FIELD(temp_2_4, f32 *, 8) - M2C_FIELD(temp_16_2, f32 *, 8);
                var_3 = 1;
                if (!((temp_f1_5 * temp_f1_5) < ((temp_f0_4 * temp_f0_4) + (temp_f3_4 * temp_f3_4) + (temp_f2_3 * temp_f2_3)))) {
                    var_3 = 0;
                }
                var_20 |= var_3;
                if (var_3 == 0) {
                    temp_4 = D_00493B0C;
                    temp_3_3 = temp_4 + 1;
                    D_00493B0C = temp_3_3;
                    var_5 = 0;
                    if (D_00493B18[temp_3_3 & 0x3FF] < M2C_FIELD(var_17, f32 *, 0x14C)) {
                        var_20 = 1;
                    }
                    if (var_20 == 1) {
                        temp_3_4 = temp_4 + 2;
                        D_00493B0C = temp_3_4;
                        if (D_00493B18[temp_3_4 & 0x3FF] < M2C_FIELD(var_17, f32 *, 0x30)) {
                            var_5 = 1;
                        }
                    }
                    temp_3_5 = D_00493B0C + 1;
                    D_00493B0C = temp_3_5;
                    if (((D_00493B18[temp_3_5 & 0x3FF] < M2C_FIELD(var_17, f32 *, 0x16C)) || (var_5 == 1)) && (M2C_FIELD(temp_16_2, s32 *, 0x4C) != M2C_FIELD(arg0, s32 *, 0xA4))) {
                        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
                        func_00221B88(arg0, M2C_FIELD(arg0, s32 *, 0x84) + (var_19 * 0x60));
                    }
                }
            }
            var_f2 = ((f32(*)(f32,f32,f32))func_0015ACE0)(M2C_FIELD(temp_16_2, f32 *, 0x30), 0.0f, 1.0f);
            if (1.01f < M2C_FIELD(var_17,f32*,0xD8)) {
                var_f2 *= var_f2;
            } else if (M2C_FIELD(var_17,f32*,0xD8) < 1.01f) {
                temp_f0_6 = 1.0f - var_f2;
                temp_f0_7 = temp_f0_6 * temp_f0_6;
                var_f2 = 1.0f - (temp_f0_7 * temp_f0_7);
            }
            M2C_FIELD(temp_16_2, f32 *, 0x34) = var_f2;
            M2C_FIELD(temp_16_2, f32 *, 0x38) = (f32) ((var_f2 * M2C_FIELD(var_17, f32 *, 0xD0)) + M2C_FIELD(var_17, f32 *, 0xD4));
            var_f2_2 = ((f32(*)(f32,f32,f32))func_0015ACE0)(M2C_FIELD(temp_16_2, f32 *, 0x3C), 0.0f, 1.0f);
            if (1.01f < M2C_FIELD(var_17,f32*,0x58)) {
                var_f2_2 *= var_f2_2;
            } else if (M2C_FIELD(var_17,f32*,0x58) < 1.01f) {
                temp_f0_9 = 1.0f - var_f2_2;
                temp_f0_10 = temp_f0_9 * temp_f0_9;
                var_f2_2 = 1.0f - (temp_f0_10 * temp_f0_10);
            }
            M2C_FIELD(temp_16_2, f32 *, 0x40) = var_f2_2;
            M2C_FIELD(temp_16_2, f32 *, 0x44) = (f32) ((var_f2_2 * M2C_FIELD(var_17, f32 *, 0x50)) + M2C_FIELD(var_17, f32 *, 0x54));
            if (var_20 != 0) {
                func_00221180(arg0, var_19);
            }
            var_19 -= 1;
        } while (var_19 >= 0);
    }
}
