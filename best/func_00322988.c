/* machine draft (m2c), tried by autopilot */
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

extern s32 D_0042DA18;

void func_00322988(s32 arg0) {
    s32 temp_6;
    s32 var_2;
    s32 var_4;

    temp_6 = D_0042DA18 + arg0;
    if ((temp_6 - D_0042DA18) > 0) {
        do {
            var_2 = 0x64;
loop_8:
            if (var_2 >= 0) {
                var_2 -= 1;
                var_4 = 0x30;
loop_5:
                var_4 -= 1;
                if (var_4 >= 0) {
                    goto loop_5;
                }
                goto loop_8;
            }
        } while ((temp_6 - D_0042DA18) > 0);
    }
}
