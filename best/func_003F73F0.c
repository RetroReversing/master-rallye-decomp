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
extern void *D_004404DC;

s32 func_003F73F0(void *arg0) {
    s32 (*temp_2)(s32);
    s32 temp_5;
    s32 temp_5_2;
    s32 var_17;
    s32 var_2;
    void *var_3;

    if (arg0 != NULL) {
        var_3 = M2C_FIELD(arg0, void **, 0x54);
        if (var_3 != NULL) {
            var_2 = M2C_FIELD(var_3, s32 *, 0x38);
        } else {
            var_3 = D_004404DC;
            M2C_FIELD(arg0, void **, 0x54) = var_3;
            var_2 = M2C_FIELD(var_3, s32 *, 0x38);
        }
        if (var_2 == 0) {
            func_003F7820(var_3);
        }
        if (M2C_FIELD(arg0, s16 *, 0xC) == 0) {
            goto block_8;
        }
        var_17 = 0;
        if ((u16) M2C_FIELD(arg0, s16 *, 0xC) & 8) {
            var_17 = func_003F74F8(arg0);
        }
        temp_2 = M2C_FIELD(arg0, s32 (**)(s32), 0x2C);
        if (temp_2 != NULL) {
            var_17 = (temp_2(M2C_FIELD(arg0, s32 *, 0x1C)) <= -1) ? -1 : var_17;
        }
        if ((u16) M2C_FIELD(arg0, s16 *, 0xC) & 0x80) {
            func_003F79D0(M2C_FIELD(arg0, void **, 0x54), M2C_FIELD(arg0, s32 *, 0x10));
        }
        temp_5 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_5 != 0) {
            if (temp_5 != (arg0 + 0x40)) {
                func_003F79D0(M2C_FIELD(arg0, void **, 0x54), temp_5);
            }
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
        temp_5_2 = M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_5_2 != 0) {
            func_003F79D0(M2C_FIELD(arg0, void **, 0x54), temp_5_2);
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
        }
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        return var_17;
    }
block_8:
    return 0;
}
