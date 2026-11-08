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
M2C_UNK func_003F79D0(void *, s32);                 /* extern */
M2C_UNK func_003F8350(void *, M2C_UNK *);           /* extern */
M2C_UNK func_003F8488(void *);                      /* extern */
extern void *D_004404DC;
extern M2C_UNK func_003F9C98;

s32 func_003F9CB8(void *arg0) {
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_3_2;
    s32 temp_5;
    s32 var_2;
    s32 var_2_2;
    u16 temp_2_2;
    u16 temp_2_4;
    u16 temp_3;
    u16 var_2_3;
    u16 var_2_4;
    void *var_3;

    var_3 = M2C_FIELD(arg0, void **, 0x54);
    if (var_3 != NULL) {
        var_2_2 = M2C_FIELD(var_3, s32 *, 0x38);
    } else {
        var_3 = D_004404DC;
        M2C_FIELD(arg0, void **, 0x54) = var_3;
        var_2_2 = M2C_FIELD(var_3, s32 *, 0x38);
    }
    if (var_2_2 == 0) {
        func_003F7820(var_3);
    }
    temp_3 = M2C_FIELD(arg0, u16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (!(temp_3 & 0x20)) {
        if (temp_3 & 4) {
            temp_5 = M2C_FIELD(arg0, s32 *, 0x30);
            if (temp_5 != 0) {
                if (temp_5 != (arg0 + 0x40)) {
                    func_003F79D0(M2C_FIELD(arg0, void **, 0x54), temp_5);
                }
                temp_2 = M2C_FIELD(arg0, s32 *, 0x3C);
                M2C_FIELD(arg0, s32 *, 0x30) = 0;
                M2C_FIELD(arg0, s32 *, 4) = temp_2;
                if (temp_2 != 0) {
                    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
                    return 0;
                }
                goto block_21;
            }
            goto block_21;
        }
        if (!(temp_3 & 0x10)) {
            goto block_11;
        }
        var_2_3 = temp_3 | 4;
        if (temp_3 & 8) {
            var_2 = -1;
            if (func_003F74F8(arg0) == 0) {
                M2C_FIELD(arg0, s32 *, 8) = 0;
                temp_2_2 = M2C_FIELD(arg0, u16 *, 0xC) & 0xFFF7;
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                M2C_FIELD(arg0, u16 *, 0xC) = temp_2_2;
                var_2_3 = temp_2_2 | 4;
                goto block_15;
            }
            /* Duplicate return node #33. Try simplifying control flow for better match */
            return var_2;
        }
block_15:
        M2C_FIELD(arg0, u16 *, 0xC) = var_2_3;
block_21:
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            func_003F8488(arg0);
        }
        if (M2C_FIELD(arg0, u16 *, 0xC) & 3) {
            func_003F8350(M2C_FIELD(arg0, void **, 0x54), &func_003F9C98);
        }
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0) = temp_3_2;
        temp_2_3 = M2C_FIELD(arg0, s32 (**)(s32, s32, s32), 0x20)(M2C_FIELD(arg0, s32 *, 0x1C), temp_3_2, M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 4) = temp_2_3;
        temp_2_4 = M2C_FIELD(arg0, u16 *, 0xC) & 0xDFFF;
        M2C_FIELD(arg0, u16 *, 0xC) = temp_2_4;
        if (temp_2_3 <= 0) {
            if (temp_2_3 != 0) {
                var_2_4 = temp_2_4 | 0x40;
                M2C_FIELD(arg0, s32 *, 4) = 0;
            } else {
                var_2_4 = temp_2_4 | 0x20;
            }
            M2C_FIELD(arg0, u16 *, 0xC) = var_2_4;
            goto block_11;
        }
        var_2 = 0;
        return var_2;
    }
block_11:
    return -1;
}
