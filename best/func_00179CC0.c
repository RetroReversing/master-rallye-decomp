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

s32 func_00268DE8();
extern s32 func_00179E08;
extern s32 func_00179EC8;
extern s32 func_00179ED0;

void func_00179CC0(s32 arg0, void *arg1) {
    s32 temp_20;
    s32 var_18;
    s32 var_19;
    void *temp_16;
    void *temp_16_2;
    void *temp_16_3;
    void *temp_5;

    var_19 = 0;
    var_18 = 3;
    temp_20 = M2C_FIELD(arg1, s32 *, 0x2C);
    temp_16 = M2C_FIELD(M2C_FIELD(arg1, void **, 0xC), void **, 4);
    M2C_FIELD(temp_16, s32 *, 0xC) = func_00268DE8(temp_20, temp_16, &func_00179E08, arg1);
    do {
        temp_16_2 = M2C_FIELD(arg1, s32 *, 0x10) + var_19;
        var_18 -= 1;
        temp_5 = temp_16_2;
        var_19 += 0x190;
        M2C_FIELD(temp_16_2, s32 *, 0xC) = func_00268DE8(temp_20, temp_5, &func_00179EC8, arg1);
    } while (var_18 >= 0);
    temp_16_3 = M2C_FIELD(arg1, void **, 0x14);
    M2C_FIELD(temp_16_3, s32 *, 0xC) = func_00268DE8(temp_20, temp_16_3, &func_00179ED0, arg1);
}
