/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_003E6070(void *arg0, s32 arg1) {
    s32 temp_10;
    s32 temp_4;
    s32 temp_9;
    s32 var_13;
    s32 var_4;
    s32 var_4_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_6;
    void *var_2;
    void *var_3;
    void *var_8;

    temp_9 = M2C_FIELD(arg0, s32 *, 0x174);
    temp_10 = M2C_FIELD(arg0, s32 *, 0x150);
    var_8 = NULL;
    var_13 = 0;
    if (temp_10 == 3) {
        M2C_FIELD(arg0, void **, 0x1C0) = (void *) M2C_FIELD(arg0, void **, 0x1C4);
        M2C_FIELD(arg0, void **, 0x1D0) = (void *) M2C_FIELD(arg0, void **, 0x1D4);
        M2C_FIELD(arg0, void **, 0x1E0) = (void *) M2C_FIELD(arg0, void **, 0x1E4);
        if ((M2C_FIELD(arg0, s32 *, 0xA0) + M2C_FIELD(arg0, s32 *, 0xA4)) >= (((temp_9 ^ 3) == 0) ? 2 : 4)) {
            M2C_FIELD(arg0, s32 *, 0xE8) = 0;
            M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
            M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
        }
        if (((M2C_FIELD(arg0, s32 *, 0xE8) != 0) || (M2C_FIELD(arg0, s32 *, 0x1A8) != 0)) && (M2C_FIELD(arg0, s32 *, 0x1A4) == 0)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1B8), s32 *, 0x28) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x28) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D8), s32 *, 0x28) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0xE8) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x174) == 3) {
            var_4 = 1;
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1B8), s32 *, 0x28) == 1) {
                var_3 = M2C_FIELD(arg0, void **, 0x1BC);
                goto block_18;
            }
            if (M2C_FIELD(arg0, s32 *, 0x1A4) != 0) {
                var_3 = M2C_FIELD(arg0, void **, 0x1BC);
                goto block_18;
            }
        } else {
            temp_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x28);
            if (((temp_4 == 1) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D8), s32 *, 0x28) == temp_4)) || (M2C_FIELD(arg0, s32 *, 0x1A4) != 0)) {
                var_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1CC), s32 *, 0x28);
                if (var_4 == 1) {
                    var_3 = M2C_FIELD(arg0, void **, 0x1DC);
block_18:
                    var_13 = ((M2C_FIELD(var_3, s32 *, 0x28) ^ 1) != 0) ? 0 : var_4;
                }
            }
        }
    } else {
        if (arg1 == 0) {
            temp_4_2 = M2C_FIELD(arg0, void **, 0x1BC);
            M2C_FIELD(arg0, void **, 0x1BC) = (void *) M2C_FIELD(arg0, void **, 0x1B8);
            temp_3 = M2C_FIELD(arg0, void **, 0x1CC);
            M2C_FIELD(arg0, void **, 0x1CC) = (void *) M2C_FIELD(arg0, void **, 0x1C8);
            temp_6 = M2C_FIELD(arg0, void **, 0x1D8);
            M2C_FIELD(arg0, void **, 0x1B8) = temp_4_2;
            M2C_FIELD(arg0, void **, 0x1C8) = temp_3;
            M2C_FIELD(arg0, void **, 0x1D8) = (void *) M2C_FIELD(arg0, void **, 0x1DC);
            M2C_FIELD(arg0, void **, 0x1DC) = temp_6;
        }
        temp_4_3 = M2C_FIELD(arg0, void **, 0x1CC);
        temp_3_2 = M2C_FIELD(arg0, void **, 0x1DC);
        M2C_FIELD(arg0, void **, 0x1C0) = (void *) M2C_FIELD(arg0, void **, 0x1BC);
        M2C_FIELD(arg0, void **, 0x1D0) = temp_4_3;
        M2C_FIELD(arg0, void **, 0x1E0) = temp_3_2;
        if (temp_9 == 3) {
            if (temp_10 == 2) {
                var_2 = M2C_FIELD(arg0, void **, 0x1B8);
                var_4_2 = 1;
                goto block_29;
            }
            goto block_30;
        }
        if ((temp_10 == 2) && ((arg1 == 0) || (M2C_FIELD((((temp_9 ^ 1) != 0) ? temp_4_3 : temp_3_2), s32 *, 0x28) != 1))) {
            var_4_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x28);
            if (var_4_2 == 1) {
                var_2 = M2C_FIELD(arg0, void **, 0x1D8);
block_29:
                if (M2C_FIELD(var_2, s32 *, 0x28) == var_4_2) {
                    goto block_30;
                }
            }
        } else {
block_30:
            var_13 = 1;
        }
    }
    switch (M2C_FIELD(arg0, s32 *, 0x174)) {        /* irregular */
    case 1:
        var_8 = M2C_FIELD(arg0, void **, 0x1D0);
        break;
    case 3:
        var_8 = M2C_FIELD(arg0, void **, 0x1C0);
        break;
    case 2:
        var_8 = M2C_FIELD(arg0, void **, 0x1E0);
        break;
    }
    M2C_FIELD(var_8, s32 *, 0x28) = 0;
    M2C_FIELD(var_8, s64 *, 0x18) = (s64) M2C_FIELD(arg0, s64 *, 0x828);
    M2C_FIELD(var_8, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x150);
    M2C_FIELD(var_8, s64 *, 0x20) = (s64) M2C_FIELD(arg0, s64 *, 0x830);
    M2C_FIELD(var_8, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x174);
    M2C_FIELD(var_8, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x13C);
    M2C_FIELD(var_8, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    M2C_FIELD(var_8, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x178);
    M2C_FIELD(var_8, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(var_8, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x18C);
    M2C_FIELD(var_8, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x190);
    M2C_FIELD(var_8, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x194);
    M2C_FIELD(var_8, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x198);
    M2C_FIELD(var_8, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x19C);
    M2C_FIELD(var_8, s32 *, 0x58) = (s32) M2C_FIELD(arg0, s32 *, 0x1A0);
    M2C_FIELD(var_8, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x148);
    M2C_FIELD(var_8, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x14C);
    return var_13;
}
