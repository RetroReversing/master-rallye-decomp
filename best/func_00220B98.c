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

f32 func_001D5E70(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_001D5F70();                                /* extern */
M2C_UNK func_00221048(void *);                      /* extern */
M2C_UNK func_0026DFC8(void *, u32, s32, M2C_UNK *); /* extern */
f32 func_003F3E80(f32);                             /* extern */
M2C_UNK func_003F96E8(M2C_UNK);                     /* extern */
extern M2C_UNK D_004922F8;
extern M2C_UNK D_00492EF8;
extern f32 D_00493B18;

void *func_00220B98(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    M2C_UNK sp40;
    f32 *var_16;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_3;
    s32 temp_4;
    s32 var_16_2;
    s32 var_16_3;
    s32 var_18;
    s32 var_18_2;
    s32 var_18_3;
    u32 temp_3_2;
    u32 temp_5;
    u32 var_3;
    void *temp_2;
    void *temp_2_3;

    var_18 = 0x3FF;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, u32 *, 4) = 0U;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    func_003F96E8(0x30FF);
    var_16 = &D_00493B18;
    do {
        var_18 -= 1;
        *var_16 = func_001D5E70(func_001D5F70(), 0, 0x3F800000);
        var_16 += 4;
    } while (var_18 >= 0);
    var_18_2 = 0;
    do {
        var_16_2 = 0;
loop_4:
        temp_f21 = func_001D5E70(func_001D5F70(), 0xBF800000, 0x3F800000);
        temp_f20 = func_001D5E70(func_001D5F70(), 0xBF800000, 0x3F800000);
        var_f0 = func_001D5E70(func_001D5F70(), 0xBF800000, 0x3F800000);
        sp28 = var_f0;
        sp18 = var_f0;
        sp20 = temp_f21;
        sp24 = temp_f20;
        sp10 = temp_f21;
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        sp14 = temp_f20;
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80((temp_f21 * temp_f21) + (temp_f20 * temp_f20) + (var_f0 * var_f0));
        }
        if (var_f0 <= 1.0f) {
            var_16_2 = 1;
        }
        temp_3 = var_18_2 * 0xC;
        if (var_16_2 == 0) {
            goto loop_4;
        }
        var_18_2 += 1;
        temp_2 = temp_3 + &D_004922F8;
        M2C_FIELD(temp_2, f32 *, 8) = sp18;
        M2C_FIELD(temp_2, f32 *, 0) = sp10;
        M2C_FIELD(temp_2, f32 *, 4) = sp14;
    } while (var_18_2 < 0x100);
    var_18_3 = 0;
    do {
        var_16_3 = 0;
loop_12:
        temp_f21_2 = func_001D5E70(func_001D5F70(), 0xBF800000, 0x3F800000);
        temp_f20_2 = func_001D5E70(func_001D5F70(), 0xBF800000, 0x3F800000);
        var_f0_2 = func_001D5E70(func_001D5F70(), 0xBF800000, 0x3F800000);
        sp38 = var_f0_2;
        sp18 = var_f0_2;
        sp30 = temp_f21_2;
        sp34 = temp_f20_2;
        sp10 = temp_f21_2;
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        sp14 = temp_f20_2;
        if (var_f0_2 != var_f0_2) {
            var_f0_2 = func_003F3E80((temp_f21_2 * temp_f21_2) + (temp_f20_2 * temp_f20_2) + (var_f0_2 * var_f0_2));
        }
        if (var_f0_2 <= 1.0f) {
            var_16_3 = 1;
        }
        if (var_16_3 == 0) {
            goto loop_12;
        }
        var_f0_3 = (sp10 * sp10) + (sp14 * sp14);
        temp_f12 = var_f0_3 + (sp18 * sp18);
        if (!(temp_f12 <= 1.1920929e-7f)) {
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            if (var_f0_3 != var_f0_3) {
                var_f0_3 = func_003F3E80(temp_f12);
            }
            temp_f1 = 1.0f / var_f0_3;
            sp10 *= temp_f1;
            sp18 *= temp_f1;
            sp14 *= temp_f1;
        } else {
            sp10 = 0.0f;
            sp14 = 0.0f;
            sp18 = 0.0f;
        }
        temp_2_2 = var_18_3 * 0xC;
        var_18_3 += 1;
        temp_2_3 = temp_2_2 + &D_00492EF8;
        M2C_FIELD(temp_2_3, f32 *, 0) = sp10;
        M2C_FIELD(temp_2_3, f32 *, 4) = sp14;
        M2C_FIELD(temp_2_3, f32 *, 8) = sp18;
    } while (var_18_3 < 0x100);
    temp_5 = M2C_FIELD(arg0, u32 *, 4);
    temp_4 = M2C_FIELD(arg0, s32 *, 0);
    temp_2_4 = (s32) ((temp_5 - temp_4) * 0xAAAAAAAB) >> 5;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x400;
    if ((u32) temp_2_4 > 0x400U) {
        temp_3_2 = temp_4 + 0x18000;
        if (temp_3_2 < temp_5) {
            var_3 = temp_3_2 + 0x60;
            do {
                var_3 += 0x60;
            } while (var_3 < temp_5);
        }
        M2C_FIELD(arg0, u32 *, 4) = (u32) (temp_5 - (temp_5 - temp_3_2));
    } else {
        func_0026DFC8(arg0, temp_5, 0x400 - temp_2_4, &sp40);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_00221048(arg0);
    return arg0;
}
