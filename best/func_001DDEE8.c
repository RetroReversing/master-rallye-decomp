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

M2C_UNK func_001DCB48();                            /* extern */
M2C_UNK func_001DCC78(void *, s32, s32, M2C_UNK);   /* extern */

void *func_001DDEE8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_16;
    s32 var_18;
    s32 var_2;
    s32 var_5;

    func_001DCB48(arg0);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    var_2 = 0;
    do {
        var_2 -= 1;
    } while (var_2 != -1);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg1 - 1);
    var_18 = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (arg2 - 1);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) > 0) {
loop_4:
        var_16 = 0;
        if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
            var_5 = 0;
            do {
                func_001DCC78(arg0, var_5, var_18, 0);
                var_16 += 1;
                var_5 = var_16;
            } while (var_16 < M2C_FIELD(arg0, s32 *, 0xC));
        }
        var_18 += 1;
        if (var_18 < M2C_FIELD(arg0, s32 *, 0x10)) {
            goto loop_4;
        }
    }
    return arg0;
}
