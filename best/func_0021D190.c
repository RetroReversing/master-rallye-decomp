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

s32 func_001D2488();
s32 func_00213410();
s32 *func_002B1FC0();
s32 *func_003D2910();

void *func_0021D190(void *arg0, void *arg1) {
    s32 *sp20;
    s32 *sp40;
    s32 *sp50;
    s32 *temp_2;
    s32 *temp_2_3;
    s32 *temp_9;
    s32 *temp_9_2;
    s32 *var_2;
    s32 *var_2_2;
    s32 *temp_2_2;
    s32 *temp_2_4;

    func_001D2488();
    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, s32 **, 4) = var_2;
    *var_2 = var_2;
    temp_2 = M2C_FIELD(arg0, s32 **, 4);
    M2C_FIELD(temp_2, s32 **, 4) = temp_2;
    temp_2_2 = M2C_FIELD(arg1, s32 **, 4);
    temp_9 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 4), s32 **, 0);
    sp20 = temp_9;
    func_00213410(arg0 + 4, &sp20, *temp_2_2, temp_2_2, 0, temp_9, temp_9);
    var_2_2 = func_002B1FC0(0xC);
    if (var_2_2 == NULL) {
        var_2_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, s32 **, 8) = var_2_2;
    *var_2_2 = var_2_2;
    temp_2_3 = M2C_FIELD(arg0, s32 **, 8);
    M2C_FIELD(temp_2_3, s32 **, 4) = temp_2_3;
    temp_2_4 = M2C_FIELD(arg1, s32 **, 8);
    temp_9_2 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 8), s32 **, 0);
    sp40 = temp_9_2;
    sp50 = temp_9_2;
    func_00213410(arg0 + 8, &sp50, *temp_2_4, temp_2_4, 0, temp_9_2);
    return arg0;
}
