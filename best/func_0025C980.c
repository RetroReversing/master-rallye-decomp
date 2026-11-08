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

M2C_UNK func_0025CA30(s32);                         /* extern */
M2C_UNK func_0025CA78(s32);                         /* extern */
M2C_UNK func_0025CD78(s32, s32);                    /* extern */
M2C_UNK func_0025DD60(s32, s32);                    /* extern */

void func_0025C980(s32 arg0, void *arg1) {
    s32 temp_2;
    s32 var_17;
    s32 var_18;

    temp_2 = (s32) ((M2C_FIELD(arg1, s32 *, 0x14) - M2C_FIELD(arg1, s32 *, 0x10)) * 0xAAAAAAAB) >> 2;
    if (temp_2 > 0) {
        var_17 = temp_2;
        var_18 = 0;
loop_2:
        var_17 -= 1;
        func_0025CD78(arg0, M2C_FIELD(arg1, s32 *, 0x10) + var_18);
        var_18 += 0xC;
        func_0025DD60(arg0, arg0 + 0x98);
        func_0025CA30(arg0);
        func_0025DD60(arg0, arg0 + 0x9C);
        func_0025CA78(arg0);
        if (var_17 != 0) {
            goto loop_2;
        }
    }
}
