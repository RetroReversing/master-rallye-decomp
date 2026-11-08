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

M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK func_003CC9A0(M2C_UNK);                     /* extern */
s32 func_00406080(M2C_UNK *);                       /* extern */
extern s32 D_004361F0;
extern s32 D_004361F4;
extern M2C_UNK D_0049BC40;
extern s32 D_0049D200;

s32 func_003CC9E8(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_16;
    s32 var_16;

    if (D_004361F0 == 0) {
        return -1;
    }
    var_16 = func_00406080(&D_0049BC40);
    if ((arg0 == 0) && (var_16 != 0)) {
loop_7:
        var_16 = 0;
        if (func_00406080(&D_0049BC40) != 0) {
            func_003CC9A0(0x3C);
            goto loop_7;
        }
    }
    temp_16 = var_16 == 0;
    if (arg1 != NULL) {
        *arg1 = D_004361F0;
    }
    if (temp_16 != 0) {
        D_004361F0 = 0;
        if (arg2 != NULL) {
            *arg2 = D_0049D200;
        }
        SignalSema_2(D_004361F4);
    }
    return temp_16;
}
