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

M2C_UNK func_003F93CC(s32, void *, M2C_UNK, s32 *, void *, s32 *, s32 *); /* extern */
extern s32 D_0042DB58;
extern s32 D_0042DB64;

void func_0031DCE8(void *arg0) {
    s32 *temp_4;
    s32 *var_7;
    s32 temp_18;
    s32 temp_3;
    s32 temp_6;
    void *temp_16;

    var_7 = M2C_FIELD(arg0, s32 **, 0x10);
    temp_6 = *var_7 & 0x0FFFFFFF;
    if (((s32) (M2C_FIELD(&D_0042DB58, void **, 4) - M2C_FIELD(&D_0042DB58, s32 *, 0)) >> 2) != 0) {
        var_7 = &D_0042DB58;
        do {
            temp_3 = M2C_FIELD(M2C_FIELD(&D_0042DB58, void **, 4), s32 *, -4);
            M2C_FIELD(&D_0042DB58, void **, 4) = (void *) (M2C_FIELD(&D_0042DB58, void **, 4) - 4);
            temp_4 = *M2C_FIELD(arg0, s32 **, 0x14) + (temp_3 * 4);
            *temp_4 = temp_6 + (*temp_4 << 6);
        } while (((s32) (M2C_FIELD(&D_0042DB58, void **, 4) - M2C_FIELD(&D_0042DB58, s32 *, 0)) >> 2) != 0);
    }
    temp_18 = M2C_FIELD(&D_0042DB58, s32 *, 0);
    temp_16 = M2C_FIELD(&D_0042DB58, void **, 4);
    func_003F93CC(temp_18, temp_16, 0, var_7, arg0, &D_0042DB58, &D_0042DB58);
    D_0042DB64 = -1;
    M2C_FIELD(&D_0042DB58, void **, 4) = (void *) (M2C_FIELD(&D_0042DB58, void **, 4) - (temp_16 - temp_18));
}
