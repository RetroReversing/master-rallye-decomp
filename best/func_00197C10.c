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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 *D_002AD5A8(M2C_UNK);                           /* extern */
M2C_UNK func_00198450(s32);                         /* extern */
M2C_UNK func_001984C8(s32, s32);                    /* extern */
s32 func_00198980(s32);                             /* extern */
M2C_UNK func_00198A18(s32, void *);                 /* extern */

void *func_00197C10(void *arg0, void *arg1) {
    s32 *temp_2;
    s32 temp_19;
    s32 temp_2_2;
    s32 temp_4;
    s32 var_16;
    s32 var_16_2;
    s32 var_18;
    s32 var_18_2;
    s32 var_19;

    var_18 = 3;
    M2C_FIELD(arg0, void **, 0) = arg1;
    temp_2 = D_002AD5A8(0x100);
    temp_19 = temp_2 + 0x10;
    *temp_2 = 4;
    var_16 = temp_19;
    do {
        var_18 -= 1;
        func_00198450(var_16);
        var_16 += 0x3C;
    } while (var_18 != -1);
    M2C_FIELD(arg0, s32 *, 4) = temp_19;
    var_18_2 = 0;
    var_19 = 0;
    var_16_2 = 3;
    do {
        var_16_2 -= 1;
        temp_4 = M2C_FIELD(arg0, s32 *, 4) + var_18_2;
        var_18_2 += 0x3C;
        func_001984C8(temp_4, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x10) + var_19);
        var_19 += 0x190;
    } while (var_16_2 >= 0);
    temp_2_2 = func_00198980(D_002AD408(0x58));
    M2C_FIELD(arg0, s32 *, 8) = temp_2_2;
    func_00198A18(temp_2_2, arg1);
    return arg0;
}
