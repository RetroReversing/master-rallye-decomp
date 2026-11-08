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
M2C_UNK func_001DCDA8(s32, s32);                    /* extern */

void *func_001DCA78(void *arg0, void *arg1) {
    s32 *temp_2;
    s32 temp_5;
    s32 var_16;
    s32 var_17;

    var_17 = 0;
    func_001DCDA8(M2C_FIELD(arg1, s32 *, 0xC), M2C_FIELD(arg1, s32 *, 0x10));
    if (M2C_FIELD(arg0, s32 *, 0x10) > 0) {
loop_2:
        var_16 = 0;
        if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
            do {
                temp_5 = var_16;
                temp_2 = (((var_17 * M2C_FIELD(arg1, s32 *, 0xC)) + var_16) * 4) + M2C_FIELD(arg1, s32 *, 8);
                var_16 += 1;
                func_001DCC78(arg0, temp_5, var_17, *temp_2);
            } while (var_16 < M2C_FIELD(arg0, s32 *, 0xC));
        }
        var_17 += 1;
        if (var_17 < M2C_FIELD(arg0, s32 *, 0x10)) {
            goto loop_2;
        }
    }
    return arg0;
}
