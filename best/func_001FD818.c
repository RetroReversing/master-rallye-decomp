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

M2C_UNK func_00216D98(s32, s32, M2C_UNK, s32);      /* extern */
M2C_UNK func_002176B0(s32, s32);                    /* extern */
extern s32 D_00426428;

void func_001FD818(void *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_17;
    s32 var_3;
    s32 var_7;

    temp_17 = M2C_FIELD(arg0, s32 *, 0);
    temp_16 = M2C_FIELD(arg0, s32 *, 4);
    D_00426428 = arg1;
    if (temp_17 != temp_16) {
        var_3 = (s32) ((temp_16 - temp_17) * 0xCCCCCCCD) >> 4;
        var_7 = 0;
        if (var_3 != 1) {
            do {
                var_3 = var_3 >> 1;
                var_7 += 1;
            } while (var_3 != 1);
        }
        func_00216D98(temp_17, temp_16, 0, var_7 * 2);
        func_002176B0(temp_17, temp_16);
    }
    D_00426428 = 0;
}
