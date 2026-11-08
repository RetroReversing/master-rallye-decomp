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

M2C_UNK func_002DF508(void *, void *);              /* extern */

void func_0035E110(void *arg0, s32 arg1, void *arg2) {
    void *var_16;
    void *var_4;

    var_16 = arg0;
    if (var_16 != arg1) {
        var_4 = var_16;
        do {
            func_002DF508(var_4, arg2);
            M2C_FIELD(var_16, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
            M2C_FIELD(var_16, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 0x10);
            M2C_FIELD(var_16, s32 *, 0x14) = (s32) M2C_FIELD(arg2, s32 *, 0x14);
            M2C_FIELD(var_16, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 0x18);
            M2C_FIELD(var_16, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
            var_16 += 0x20;
            var_4 = var_16;
        } while (var_16 != arg1);
    }
}
