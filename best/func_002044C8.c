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

M2C_UNK func_00156C38(void *, s32);                 /* extern */
M2C_UNK func_002029B8(void *, s32);                 /* extern */
M2C_UNK func_00204140();                            /* extern */
s32 func_00204270(void *, s32);                     /* extern */
M2C_UNK func_002042F0(void *, s32, s32);            /* extern */
M2C_UNK func_002043B0(void *, s32);                 /* extern */

void func_002044C8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_3;
    s32 var_18;
    s32 var_5;

    func_00204140(arg0);
    var_18 = 0;
    func_002029B8(arg0, arg1);
    func_00156C38(arg0 + 0xC, arg2);
    temp_3 = ((s32) ((M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0)) * 0xAAAAAAAB) >> 2) - 1;
    if (temp_3 > 0) {
        var_5 = 0;
        do {
            func_002042F0(arg0, var_18, func_00204270(arg0, var_5));
            func_002043B0(arg0, var_18);
            var_18 += 1;
            var_5 = var_18;
        } while (var_18 < temp_3);
    }
}
