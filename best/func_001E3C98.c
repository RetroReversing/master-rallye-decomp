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

M2C_UNK func_001E4ED0(void *);                      /* extern */

void func_001E3C98(void *arg0, s32 arg1) {
    s32 var_2;
    void *var_16;

    var_16 = M2C_FIELD(arg0, void **, 0);
    if (var_16 != M2C_FIELD(arg0, s32 *, 4)) {
        var_2 = M2C_FIELD(var_16, s32 *, 8);
loop_2:
        if (((var_2 ^ 0xC) != 0) && (M2C_FIELD(var_16, s32 *, 0x14) == arg1)) {
            func_001E4ED0(var_16);
        }
        var_16 += 0x1C;
        if (var_16 != M2C_FIELD(arg0, s32 *, 4)) {
            var_2 = M2C_FIELD(var_16, s32 *, 8);
            goto loop_2;
        }
    }
}
