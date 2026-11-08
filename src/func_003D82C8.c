/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_002B2028(s32);                         /* extern */

void func_003D82C8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_4;
    s32 var_2;

    temp_4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_4 != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0) & 1)) {
            func_002B2028(temp_4);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (arg3 != 0) {
        var_2 = M2C_FIELD(arg0, s32 *, 0) & ~1;
    } else {
        var_2 = M2C_FIELD(arg0, s32 *, 0) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0) = var_2;
}
