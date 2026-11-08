/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK D_002AD390(s32);                            /* extern */
M2C_UNK func_0026FFC8(void *);                      /* extern */

void func_002296D0(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    void *var_16;
    void *var_16_2;

    var_16 = *M2C_FIELD(arg0, void ***, 0);
loop_5:
    if (var_16 != M2C_FIELD(arg0, void ***, 0)) {
        temp_4 = M2C_FIELD(var_16, s32 *, 8);
        if (temp_4 != 0) {
            D_002AD390(temp_4);
        }
        var_16 = M2C_FIELD(var_16, void **, 0);
        goto loop_5;
    }
    func_0026FFC8(arg0);
    var_16_2 = *M2C_FIELD(arg0, void ***, 4);
loop_10:
    if (var_16_2 != M2C_FIELD(arg0, void ***, 4)) {
        temp_4_2 = M2C_FIELD(var_16_2, s32 *, 8);
        if (temp_4_2 != 0) {
            D_002AD390(temp_4_2);
        }
        var_16_2 = M2C_FIELD(var_16_2, void **, 0);
        goto loop_10;
    }
    func_0026FFC8(arg0 + 4);
}
