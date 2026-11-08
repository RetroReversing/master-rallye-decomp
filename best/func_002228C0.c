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

M2C_UNK func_0027B878(s32, s32);                    /* extern */

void func_002228C0(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 var_16;
    s32 var_17;
    s32 var_18;

    if (arg1 >= 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 4);
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        if ((u32) arg1 < (u32) ((s32) ((temp_2 - temp_4) * 0xE9BD37A7) >> 4)) {
            temp_4_2 = (arg1 * 0x170) + temp_4;
            temp_5 = temp_4_2 + 0x170;
            var_17 = temp_5;
            if (temp_5 != temp_2) {
                var_16 = (s32) ((temp_2 - var_17) * 0xE9BD37A7) >> 4;
                var_18 = temp_4_2;
                if (var_16 > 0) {
                    do {
                        func_0027B878(var_18, var_17);
                        var_17 += 0x170;
                        var_16 -= 1;
                        var_18 += 0x170;
                    } while (var_16 > 0);
                }
            }
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 0x170);
        }
    }
}
