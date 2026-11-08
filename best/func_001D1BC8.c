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

M2C_UNK func_001D1F58(void *);                      /* extern */
s32 func_003FA9B8(s32);                             /* extern */
s32 func_003FABD0(u32, s32, s32);                   /* extern */

s32 func_001D1BC8(void *arg0, s32 arg1) {
    s32 temp_18;
    s32 var_2;
    u32 temp_4;

    temp_18 = func_003FA9B8(arg1);
    temp_4 = M2C_FIELD(arg0, u32 *, 4);
    var_2 = 0;
    if (temp_4 < (u32) M2C_FIELD(arg0, u32 *, 8)) {
        if (func_003FABD0(temp_4, arg1, temp_18) != 0) {
            return 0;
        }
        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + temp_18);
        func_001D1F58(arg0);
        var_2 = 1;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
