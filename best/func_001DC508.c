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

M2C_UNK func_001DCC78(void *, s32, s32, s32);       /* extern */

void func_001DC508(void *arg0, s32 arg1) {
    s32 var_16;
    s32 var_17;
    s32 var_5;

    var_17 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) > 0) {
loop_2:
        var_16 = 0;
        if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
            var_5 = 0;
            __repair_rows: {
                func_001DCC78(arg0, var_5, var_17, arg1);
                var_16 += 1;
                var_5 = var_16;
            }
if (var_16 < M2C_FIELD(arg0, s32 *, 0xC)) goto __repair_rows;
        }
        var_17 += 1;
        if (var_17 < M2C_FIELD(arg0, s32 *, 0x10)) {
            goto loop_2;
        }
    }
}
