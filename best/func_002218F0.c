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

s32 *func_0021F4B0();                               /* extern */
M2C_UNK func_00221378(void *, M2C_UNK, s32);        /* extern */
s32 *func_00222CF8();                               /* extern */

void func_002218F0(void *arg0) {
    f32 temp_f0;
    s32 *temp_2;
    s32 temp_2_2;
    s32 var_16;
    s32 var_17;
    void *temp_3;

    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, s32 *, 0xA4) + 1);
    if (*func_0021F4B0() == 0) {
        temp_2 = func_00222CF8();
        var_16 = ((s32) ((M2C_FIELD(temp_2, s32 *, 4) - M2C_FIELD(temp_2, s32 *, 0)) * 0xE9BD37A7) >> 4) - 1;
        if (var_16 >= 0) {
            var_17 = var_16 * 0x170;
            do {
                var_16 -= 1;
                temp_3 = *func_00222CF8() + var_17;
                temp_f0 = M2C_FIELD(temp_3, f32 *, 0x18);
                var_17 -= 0x170;
                M2C_FIELD(temp_3, f32 *, 0x148) = (f32) (M2C_FIELD(temp_3, f32 *, 0x100) * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x14C) = (f32) (M2C_FIELD(temp_3, f32 *, 0x2C) * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x150) = (f32) (M2C_FIELD(temp_3, f32 *, 0x1C) * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x154) = (f32) (M2C_FIELD(temp_3, f32 *, 0x20) * temp_f0 * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x158) = (f32) (M2C_FIELD(temp_3, f32 *, 0x24) * temp_f0 * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x15C) = (f32) (M2C_FIELD(temp_3, f32 *, 0x28) * temp_f0 * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x160) = (f32) (M2C_FIELD(temp_3, f32 *, 0xB4) * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x16C) = (f32) (M2C_FIELD(temp_3, f32 *, 0x34) * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x168) = (f32) (M2C_FIELD(temp_3, f32 *, 0x5C) * 0.033333335f);
                M2C_FIELD(temp_3, f32 *, 0x164) = (f32) (M2C_FIELD(temp_3, f32 *, 0xDC) * 0.033333335f);
            } while (var_16 >= 0);
        }
        temp_2_2 = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x84) = temp_2_2;
        M2C_FIELD(arg0, s32 *, 0x80) = temp_2_2;
        func_00221378(arg0, 0, M2C_FIELD(arg0, s32 *, 0x10));
    }
}
