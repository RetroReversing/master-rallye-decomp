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

M2C_UNK func_002BF798(M2C_UNK);                     /* extern */
s32 sceSifDmaStat_2(s32);                           /* extern */

void func_002BE960(s32 arg1) {
    s32 var_18;
    s32 var_2;
    s32 var_3;

    var_18 = 0;
    if (sceSifDmaStat_2(arg1) >= 0) {
loop_2:
        var_2 = 0x64;
loop_7:
        if (var_2 >= 0) {
            var_2 -= 1;
            var_3 = 0x30;
loop_4:
            var_3 -= 1;
            if (var_3 >= 0) {
                goto loop_4;
            }
            goto loop_7;
        }
        var_18 += 1;
        if (sceSifDmaStat_2(arg1) >= 0) {
            if (var_18 >= 5) {
loop_13:
                if (sceSifDmaStat_2(arg1) >= 0) {
                    func_002BF798(4);
                    goto loop_13;
                }
            } else {
                goto loop_2;
            }
        }
    }
}
