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

M2C_UNK func_002B2028(s32);                         /* extern */

void func_002BAFB0(void *arg0) {
    M2C_UNK (*temp_6)(void *, s32, M2C_UNK);
    s32 temp_2;
    s32 temp_2_2;
    s32 var_17;

    temp_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_2 != 0) {
        var_17 = 0;
        if (temp_2 > 0) {
loop_3:
            temp_2_2 = var_17 << 5;
            var_17 += 1;
            temp_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), M2C_UNK (**)(void *, s32, M2C_UNK), 0x2C);
            temp_6(arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s16 *, 0x28), M2C_FIELD((temp_2_2 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 8), temp_6);
            if (var_17 < M2C_FIELD(arg0, s32 *, 0)) {
                goto loop_3;
            }
        }
        func_002B2028(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}
