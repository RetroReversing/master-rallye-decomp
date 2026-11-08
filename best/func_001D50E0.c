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

M2C_UNK func_001D4F68(void *);                      /* extern */
s32 func_002B1FC0(s32, s32);                        /* extern */

s32 func_001D50E0(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_5;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_2;

    var_2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 1) {
        var_2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x14) >= 0) {
            var_2 = 0;
            if (M2C_FIELD(arg0, s32 *, 0x18) >= 0) {
                temp_2 = M2C_FIELD(arg0, s32 *, 0x1C);
                if (temp_2 <= 0) {
                    return 0;
                }
                temp_3 = M2C_FIELD(arg0, s32 *, 0x20);
                if (temp_3 <= 0) {
                    return 0;
                }
                temp_4 = M2C_FIELD(arg0, s32 *, 0x24);
                if (temp_4 <= 0) {
                    return 0;
                }
                temp_5 = M2C_FIELD(arg0, s32 *, 0x28);
                if (temp_5 <= 0) {
                    return 0;
                }
                temp_lo = temp_2 / temp_4;
                temp_lo_2 = temp_3 / temp_5;
                M2C_FIELD(arg0, s32 *, 0x34) = temp_lo;
                M2C_FIELD(arg0, s32 *, 0x38) = temp_lo_2;
                temp_2_2 = func_002B1FC0(temp_lo * temp_lo_2, temp_5);
                M2C_FIELD(arg0, s32 *, 0x3C) = temp_2_2;
                if (temp_2_2 == 0) {
                    return 0;
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                func_001D4F68(arg0);
                var_2 = 1;
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return var_2;
            }
        }
    }
    return var_2;
}
