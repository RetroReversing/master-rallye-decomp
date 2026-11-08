/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK D_002AD530(s32);                            /* extern */
s32 D_002AD5A8(s32, u32);                           /* extern */
M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
extern s32 D_0043C000;

void func_0031DE48(void *arg0, void *arg1) {
    s32 temp_18;
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_6;
    s32 var_3;
    u32 temp_5;
    void *temp_16;
    void *temp_2_2;
    void *temp_3_2;
    void *temp_4_3;
    void *temp_5_2;
    void *temp_6_2;
    void *temp_7;
    void *temp_8;

    temp_16 = M2C_FIELD(arg0, void **, 0x10);
    temp_3 = M2C_FIELD(temp_16, s32 *, 8);
    if (temp_3 == M2C_FIELD(temp_16, s32 *, 0xC)) {
        temp_5 = ((temp_3 + 0x10) & ~0xF) + 2;
        D_0043C000 = M2C_FIELD(temp_16, s32 *, 0x10);
        var_3 = 0;
        if (temp_5 > 1U) {
            var_3 = 1;
loop_3:
            if ((u32) (1 << var_3) < temp_5) {
                var_3 += 1;
                goto loop_3;
            }
        }
        temp_4 = 1 << var_3;
        temp_2 = D_002AD5A8(temp_4 << 6, temp_5);
        temp_6 = M2C_FIELD(temp_16, s32 *, 0xC);
        temp_18 = (temp_2 + 0x7F) & 0xFFFFFF80;
        if (temp_6 > 0) {
            func_003F931C(temp_18, M2C_FIELD(temp_16, s32 *, 0), temp_6 << 6);
        }
        temp_4_2 = M2C_FIELD(temp_16, s32 *, 4);
        if (temp_4_2 != 0) {
            D_002AD530(temp_4_2);
        }
        M2C_FIELD(temp_16, s32 *, 4) = temp_2;
        M2C_FIELD(temp_16, s32 *, 0) = temp_18;
        M2C_FIELD(temp_16, s32 *, 8) = (s32) (temp_4 - 2);
        D_0043C000 = 0;
    }
    temp_5_2 = arg1 + 0x10;
    temp_6_2 = arg1 + 0x20;
    temp_8 = arg1 + 0x30;
    temp_3_2 = (M2C_FIELD(temp_16, s32 *, 0xC) << 6) + M2C_FIELD(temp_16, s32 *, 0);
    M2C_FIELD(temp_16, s32 *, 0xC) = (s32) (M2C_FIELD(temp_16, s32 *, 0xC) + 1);
    temp_4_3 = temp_3_2 + 0x10;
    temp_2_2 = temp_3_2 + 0x20;
    temp_7 = temp_3_2 + 0x30;
    M2C_FIELD(temp_3_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_3_2, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(temp_3_2, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(temp_4_3, f32 *, 4) = (f32) M2C_FIELD(temp_5_2, f32 *, 4);
    M2C_FIELD(temp_4_3, f32 *, 8) = (f32) M2C_FIELD(temp_5_2, f32 *, 8);
    M2C_FIELD(temp_4_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_5_2, f32 *, 0xC);
    M2C_FIELD(temp_3_2, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(temp_6_2, f32 *, 4);
    M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(temp_6_2, f32 *, 8);
    M2C_FIELD(temp_2_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_6_2, f32 *, 0xC);
    M2C_FIELD(temp_3_2, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
    M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_8, f32 *, 0xC);
}
