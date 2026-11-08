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

s32 func_002B6A50(void *, s32);                     /* extern */
M2C_UNK func_003F94D0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, s32);         /* extern */
s32 func_00406EA8(s32, s32);                        /* extern */
extern s32 D_00428890;
extern M2C_UNK D_0047EFA8;
extern M2C_UNK D_0047EFF8;

s32 func_002B6900(void *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_16;
    s32 var_20;
    void *temp_3;
    void *temp_3_2;

    var_20 = 0;
    if (arg7 != 0) {
        func_003F94D0(arg7, 0, 8);
    }
    var_16 = 3;
    if (arg6 != 0) {
        temp_2 = func_002B6A50(arg0, arg1);
        var_16 = 1;
        *arg4 = temp_2;
        D_00428890 = temp_2;
    }
    temp_3 = M2C_FIELD(arg0, void **, 8);
    temp_2_2 = M2C_FIELD(temp_3, s32 (**)(void *, s32), 0x7C)(arg0 + M2C_FIELD(temp_3, s16 *, 0x78), arg1);
    temp_2_3 = func_00406EA8(temp_2_2, ((arg5 != 0) ? (var_16 | 0x600) : var_16) | 0x8000);
    if (temp_2_3 >= 0) {
        *arg2 = temp_2_3;
        var_20 = 1;
        if (*arg3 != 1) {
            temp_3_2 = M2C_FIELD(arg0, void **, 8);
            if (M2C_FIELD(temp_3_2, s32 (**)(void *, s32), 0x64)(arg0 + M2C_FIELD(temp_3_2, s16 *, 0x60), temp_2_3) == 0) {
                func_003F9698(&D_0047EFA8, arg1, temp_2_2);
                var_20 = 0;
            }
        }
    }
    if (var_20 == 0) {
        func_003F9698(&D_0047EFF8, arg1, temp_2_2);
    }
    return var_20;
}
