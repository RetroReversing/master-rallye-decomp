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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 *D_002AD5A8(M2C_UNK);                           /* extern */
M2C_UNK func_002C7358(s32);                         /* extern */
s32 func_002CA138(s32, s32);                        /* extern */

void *func_002C89F0(void *arg0) {
    s32 *temp_2;
    s32 temp_19;
    s32 var_16;
    s32 var_18;

    var_18 = 7;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_2 = D_002AD5A8(0x4D0);
    temp_19 = temp_2 + 0x10;
    *temp_2 = 8;
    var_16 = temp_19;
    do {
        var_18 -= 1;
        func_002C7358(var_16);
        var_16 += 0x98;
    } while (var_18 != -1);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_19;
    M2C_FIELD(arg0, s32 *, 8) = func_002CA138(D_002AD408(0xA0), M2C_FIELD(arg0, s32 *, 0xC));
    return arg0;
}
