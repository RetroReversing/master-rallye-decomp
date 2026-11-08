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

s32 func_003F74F8(void *);                          /* extern */
M2C_UNK func_003F7820(void *);                      /* extern */
s32 func_00401A38(void *);                          /* extern */
extern void *D_004404DC;

u8 func_00401B28(s32 arg0, void *arg1) {
    s32 var_2_2;
    u16 temp_3;
    u32 temp_2;
    u8 temp_17;
    u8 var_2;
    void *temp_4;
    void *temp_7;
    void *var_3;

    var_2 = -1U;
    if (arg0 != -1) {
        var_3 = M2C_FIELD(arg1, void **, 0x54);
        if (var_3 != NULL) {
            var_2_2 = M2C_FIELD(var_3, s32 *, 0x38);
        } else {
            var_3 = D_004404DC;
            M2C_FIELD(arg1, void **, 0x54) = var_3;
            var_2_2 = M2C_FIELD(var_3, s32 *, 0x38);
        }
        if (var_2_2 == 0) {
            func_003F7820(var_3);
        }
        temp_3 = M2C_FIELD(arg1, u16 *, 0xC) & 0xFFDF;
        M2C_FIELD(arg1, u16 *, 0xC) = temp_3;
        if (!(temp_3 & 4)) {
            if (!(temp_3 & 0x10)) {
                return -1U;
            }
            if (temp_3 & 8) {
                var_2 = -1U;
                if (func_003F74F8(arg1) == 0) {
                    M2C_FIELD(arg1, s32 *, 8) = 0;
                    M2C_FIELD(arg1, s32 *, 0x18) = 0;
                    M2C_FIELD(arg1, u16 *, 0xC) = (u16) (M2C_FIELD(arg1, u16 *, 0xC) & 0xFFF7);
                    goto block_13;
                }
                /* Duplicate return node #24. Try simplifying control flow for better match */
                return var_2;
            }
block_13:
            M2C_FIELD(arg1, u16 *, 0xC) = (u16) (M2C_FIELD(arg1, u16 *, 0xC) | 4);
            goto block_14;
        }
block_14:
        temp_17 = arg0 & 0xFF;
        if (M2C_FIELD(arg1, void **, 0x30) != NULL) {
            if ((M2C_FIELD(arg1, s32 *, 4) < M2C_FIELD(arg1, s32 *, 0x34)) || (var_2 = -1U, (func_00401A38(arg1) == 0))) {
                temp_4 = M2C_FIELD(arg1, void **, 0);
                M2C_FIELD(arg1, void **, 0) = (void *) (temp_4 - 1);
                M2C_FIELD(temp_4, u8 *, -1) = temp_17;
                M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
                return temp_17;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_2;
        }
        temp_2 = M2C_FIELD(arg1, u32 *, 0x10);
        temp_7 = M2C_FIELD(arg1, void **, 0);
        if (temp_2 != 0) {
            if ((temp_2 < (u32) temp_7) && (M2C_FIELD(temp_7, u8 *, -1) == temp_17)) {
                M2C_FIELD(arg1, void **, 0) = (void *) (temp_7 - 1);
                M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
                return temp_17;
            }
            goto block_23;
        }
block_23:
        M2C_FIELD(arg1, s32 *, 4) = 1;
        M2C_FIELD(arg1, s32 *, 0x3C) = M2C_FIELD(arg1, s32 *, 4);
        var_2 = temp_17;
        M2C_FIELD(arg1, void **, 0x38) = temp_7;
        M2C_FIELD(arg1, void **, 0x30) = (void *) (arg1 + 0x40);
        M2C_FIELD(arg1, s32 *, 0x34) = 3;
        M2C_FIELD(arg1, void **, 0) = (void *) (arg1 + 0x42);
        M2C_FIELD(arg1, u8 *, 0x42) = temp_17;
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
