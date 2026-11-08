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

M2C_UNK D_002AD390(s32);                            /* extern */
M2C_UNK func_001D1900(s32);                         /* extern */
M2C_UNK func_001D3250(s32, M2C_UNK);                /* extern */

void func_001D39A0(s32 arg0) {
    s32 var_16;
    void *temp_4;

    temp_4 = arg0 + 0xC;
    if (M2C_FIELD(temp_4, s32 **, 4) != temp_4) {
loop_2:
        var_16 = 0;
        if (M2C_FIELD(temp_4, s32 **, 4) != temp_4) {
            var_16 = *M2C_FIELD(temp_4, s32 **, 4);
        }
        if (var_16 != 0) {
            func_001D1900(var_16 + 4);
            func_001D3250(var_16, 2);
            D_002AD390(var_16);
        }
        if (M2C_FIELD(temp_4, s32 **, 4) != temp_4) {
            goto loop_2;
        }
    }
}
