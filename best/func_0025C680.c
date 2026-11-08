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

s32 func_0024C788(s32);                             /* extern */
M2C_UNK func_00250200(void *, void *);              /* extern */
M2C_UNK func_00250350(void *, s32);                 /* extern */
M2C_UNK func_00250410(void *, s32);                 /* extern */

void func_0025C680(void *arg1) {
    M2C_UNK **temp_2;
    M2C_UNK *var_18;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_2_2;
    void **temp_2_3;
    void *var_16;
    void *var_18_2;
    void *var_4;

    temp_16 = arg1 + 8;
    M2C_FIELD(M2C_FIELD(arg1, void **, 0x30), s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(M2C_FIELD(arg1, void **, 0x34), s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    func_00250410(M2C_FIELD(arg1, void **, 0x30), temp_16);
    func_00250410(M2C_FIELD(arg1, void **, 0x34), temp_16);
    temp_2 = M2C_FIELD(arg1, M2C_UNK ***, 0);
    var_18 = *temp_2;
    if (var_18 != temp_2) {
        var_16 = M2C_FIELD(var_18, void **, 8);
loop_2:
        temp_2_2 = M2C_FIELD(var_16, s32 *, 4);
        switch (temp_2_2) {                         /* irregular */
        case 0:
            func_00250200(M2C_FIELD(arg1, void **, 0x30), var_16);
            var_4 = M2C_FIELD(arg1, void **, 0x34);
block_8:
            func_00250200(var_4, var_16);
            break;
        case -1:
            var_4 = M2C_FIELD(arg1, void **, 0x30);
            goto block_8;
        default:
            func_00250200(M2C_FIELD(arg1, void **, 0x34), var_16);
            break;
        }
        var_18 = *var_18;
        if (var_18 != M2C_FIELD(arg1, M2C_UNK ***, 0)) {
            var_16 = M2C_FIELD(var_18, void **, 8);
            goto loop_2;
        }
    }
    temp_2_3 = M2C_FIELD(arg1, void ***, 4);
    var_18_2 = *temp_2_3;
    if (var_18_2 != temp_2_3) {
        do {
            temp_16_2 = M2C_FIELD(var_18_2, s32 *, 8);
            if (func_0024C788(temp_16_2) != -1) {
                func_00250350(M2C_FIELD(arg1, void **, 0x34), temp_16_2);
            } else {
                func_00250350(M2C_FIELD(arg1, void **, 0x30), temp_16_2);
            }
            var_18_2 = M2C_FIELD(var_18_2, void **, 0);
        } while (var_18_2 != M2C_FIELD(arg1, void ***, 4));
    }
}
