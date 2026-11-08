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

M2C_UNK func_003D82C8(void *, void *, void *, M2C_UNK); /* extern */

void *func_003D8690(void *arg0, void *arg1, s64 arg2) {
    s32 temp_2;
    void *var_2;

    var_2 = NULL;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 (**)(), 0x5C)() != -1) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0);
        if ((arg1 == NULL) || (arg2 == 0)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_2 | 2);
            func_003D82C8(arg0, arg0 + 0x4B, arg0 + 0x4C, 0);
        } else {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_2 & ~2);
            func_003D82C8(arg0, arg1, arg1 + ((s64) (arg2 << 0x20) >> 0x20), 0);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        var_2 = arg0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return var_2;
}
