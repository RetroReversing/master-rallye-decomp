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

M2C_UNK func_001D6D88(s32, s32);                    /* extern */
M2C_UNK func_001D6D90(s32, s32);                    /* extern */
s32 func_001D6E40();                                /* extern */
s32 func_002C74A8(s32, s16, s16);                   /* extern */
M2C_UNK func_003C9EB0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern s32 D_00429038;
extern M2C_UNK D_00482168;

s32 func_002C8BA8(void *arg0) {
    s16 var_18;
    s16 var_5;
    s32 var_16;
    s32 var_20;
    s32 var_22;

    var_22 = 1;
    func_003F9698(&D_00482168);
    var_5 = 0;
    if (D_00429038 == 0) {
        func_003C9EB0(0, 0);
        D_00429038 = 1;
        var_5 = 0;
    }
    var_20 = 0;
    var_16 = 0 * 0x98;
    do {
        var_18 = 0;
loop_4:
        if (func_002C74A8(M2C_FIELD(arg0, s32 *, 0xC) + var_16, var_5, var_18) == 0) {
            var_22 = 0;
            var_18 += 1;
        } else {
            var_18 += 1;
            func_001D6D90(func_001D6E40(), M2C_FIELD(arg0, s32 *, 0xC) + var_16);
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
        }
        var_16 += 0x98;
        var_20 += 1;
        if (var_18 <= 0) {
            goto loop_4;
        }
        var_5 += 1;
        var_16 = var_20 * 0x98;
    } while (var_5 < 2);
    func_001D6D88(func_001D6E40(), M2C_FIELD(arg0, s32 *, 8));
    return var_22;
}
