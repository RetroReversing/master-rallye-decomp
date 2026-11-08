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

s32 func_002C2018();
s32 func_003E0138();
extern s32 D_00428F18;
extern char D_00496AC0[];
extern s32 D_0049AAC0;

s32 func_002C2100(s32 arg0, s32 arg1) {
    s32 *var_5;
    s32 temp_2;
    s32 var_2;
    s32 var_3;

    if (D_0049AAC0 != 0) {
        var_5 = (D_00496AC0 + 0x4000) - D_0049AAC0;
        goto block_9;
    }
loop_3:
    temp_2 = func_002C2018(&D_00496AC0, 0x4000);
    D_0049AAC0 = temp_2;
    if ((temp_2 != 0) || (var_2 = 0, (arg1 != 0))) {
        var_3 = 0x270F;
        do {
            var_3 -= 1;
            D_00428F18 += 1;
        } while (var_3 >= 0);
        if (D_0049AAC0 != 0) {
            var_5 = &D_00496AC0;
block_9:
            var_2 = func_003E0138(arg0, var_5, D_0049AAC0);
            D_0049AAC0 -= var_2;
        } else {
            goto loop_3;
        }
    }
    return var_2;
}
