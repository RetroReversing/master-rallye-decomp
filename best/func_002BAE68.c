/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

void *func_002B1FC0(s32);                           /* extern */
M2C_UNK func_002BAFB0(void *);                      /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, s32);        /* extern */

void func_002BAE68(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_2;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_2 != 0) {
        if ((arg1 != temp_2) || (arg2 != M2C_FIELD(arg0, s32 *, 4))) {
            func_002BAFB0(arg0);
        }
        if (M2C_FIELD(arg0, s32 *, 0) == 0) {
            goto block_5;
        }
    } else {
block_5:
        var_18 = 0;
        temp_2_2 = func_002B1FC0(M2C_FIELD(arg0, s32 *, 0) << 5);
        M2C_FIELD(arg0, void **, 8) = temp_2_2;
        func_003F94D0(temp_2_2, 0, M2C_FIELD(arg0, s32 *, 0) << 5);
        M2C_FIELD(arg0, s32 *, 4) = arg2;
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        if (arg1 > 0) {
            var_20 = -0x20;
            var_19 = 0x20;
            do {
                temp_16 = var_18 << 5;
                var_18 += 1;
                M2C_FIELD((temp_16 + M2C_FIELD(arg0, void **, 8)), s16 *, 0xC) = 0;
                temp_3 = M2C_FIELD(arg0, void **, 0x10);
                M2C_FIELD((temp_16 + M2C_FIELD(arg0, void **, 8)), s32 *, 8) = M2C_FIELD(temp_3, s32 (**)(void *, s32), 0x24)(arg0 + M2C_FIELD(temp_3, s16 *, 0x20), M2C_FIELD(arg0, s32 *, 4));
                temp_2_3 = M2C_FIELD(arg0, void **, 8);
                temp_3_2 = temp_2_3 + var_19;
                var_19 += 0x20;
                M2C_FIELD((temp_16 + temp_2_3), void **, 0x14) = temp_3_2;
                temp_2_4 = M2C_FIELD(arg0, void **, 8);
                M2C_FIELD((temp_16 + temp_2_4), void **, 0x18) = (void *) (temp_2_4 + var_20);
                var_20 += 0x20;
            } while (var_18 < M2C_FIELD(arg0, s32 *, 0));
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x18) = 0;
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0) << 5) + M2C_FIELD(arg0, void **, 8)), s32 *, -0xC) = 0;
        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 8);
    }
}
