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

s32 func_002BD590();
void *func_002BD648();
s32 func_002BDB28();
s32 func_003F94D0();

s32 func_002B7CB8(void *arg0, s32 arg1, void **arg2, s32 arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_16;
    s32 temp_2;
    s32 var_2;
    void *temp_2_2;
    void *temp_3;

    if (arg7 != 0) {
        func_003F94D0(arg7, 0, 8);
    }
    temp_3 = M2C_FIELD(arg0, void **, 8);
    temp_16 = M2C_FIELD(temp_3, s32 (**)(void *, s32), 0x7C)(arg0 + M2C_FIELD(temp_3, s16 *, 0x78), arg1);
    temp_2 = func_002BDB28();
    temp_2_2 = func_002BD648(temp_2, temp_16, 1, 0);
    func_002BD590(temp_2, temp_2_2, 1);
    var_2 = 0;
    if (temp_2_2 != NULL) {
        var_2 = M2C_FIELD(temp_2_2, s32 *, 4);
    }
    *arg4 = var_2;
    *arg2 = temp_2_2;
    return 1;
}
