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

M2C_UNK func_002B8800(void *);                      /* extern */
M2C_UNK func_002BC1C8(s32 *, s32, M2C_UNK *);       /* extern */
extern M2C_UNK D_00428868;

s32 func_002B8A78(void *arg0, s32 arg1) {
    s32 *temp_4;
    s32 temp_17;
    s32 temp_3;
    s32 temp_hi;
    s32 var_19;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_8;
    void *temp_8_2;

    var_19 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        temp_3 = arg1 - M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_3 < 0) {
            goto block_8;
        }
        if (temp_3 >= M2C_FIELD(arg0, s32 *, 0x34)) {
block_8:
            temp_hi = arg1 % M2C_FIELD(arg0, s32 *, 0x28);
            temp_4 = M2C_FIELD(arg0, s32 **, 0x10);
            temp_17 = arg1 - temp_hi;
            if (*temp_4 != 0) {
                func_002BC1C8(temp_4, temp_17, &D_00428868);
            } else {
                temp_8 = M2C_FIELD(arg0, void **, 0xC);
                temp_3_2 = M2C_FIELD(temp_8, void **, 8);
                M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, s32, s32, M2C_UNK *, void *), 0x54)(temp_8 + M2C_FIELD(temp_3_2, s16 *, 0x50), M2C_FIELD(arg0, s32 *, 0x14), temp_17, &D_00428868, temp_8);
            }
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_17;
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
            func_002B8800(arg0);
            M2C_FIELD(arg0, s32 *, 0x30) = temp_hi;
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = temp_3;
        }
    } else {
        temp_8_2 = M2C_FIELD(arg0, void **, 0xC);
        temp_3_3 = M2C_FIELD(temp_8_2, void **, 8);
        var_19 = M2C_FIELD(temp_3_3, s32 (**)(void *, s32, s32, M2C_UNK *, void *), 0x54)(temp_8_2 + M2C_FIELD(temp_3_3, s16 *, 0x50), M2C_FIELD(arg0, s32 *, 0x14), arg1, &D_00428868, temp_8_2);
    }
    return var_19;
}
