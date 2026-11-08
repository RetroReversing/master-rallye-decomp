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

M2C_UNK func_00111FA0(void *, s32);                 /* extern */
M2C_UNK func_00111FC0(void *);                      /* extern */
M2C_UNK func_00111FE0(void *);                      /* extern */

void func_00112498(void *arg0) {
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 var_17;
    s32 var_18;
    s32 var_5;
    void *temp_4;

    temp_4 = M2C_FIELD(arg0, void **, 0x64);
    temp_3 = M2C_FIELD(temp_4, s32 *, 0x24);
    var_5 = 0;
    if (temp_3 != 0) {
        var_5 = M2C_FIELD(arg0, s32 *, 0x24) == 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = temp_3;
    temp_3_2 = M2C_FIELD(temp_4, s32 *, 0x20);
    var_18 = 0;
    if (temp_3_2 != 0) {
        var_18 = M2C_FIELD(arg0, s32 *, 0x28) == 0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = temp_3_2;
    temp_3_3 = M2C_FIELD(temp_4, s32 *, 0x1C);
    var_17 = 0;
    if (temp_3_3 != 0) {
        var_17 = M2C_FIELD(arg0, s32 *, 0x30) == 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = temp_3_3;
    if (var_5 != 0) {
        func_00111FA0(arg0, var_5);
    }
    if (var_18 != 0) {
        func_00111FC0(arg0);
    }
    if (var_17 != 0) {
        func_00111FE0(arg0);
    }
}
