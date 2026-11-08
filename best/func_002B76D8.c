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

M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
s32 func_004074E8(s32, s32, s32);                   /* extern */
extern M2C_UNK D_0047F478;
extern M2C_UNK D_0047F4C0;

s32 func_002B76D8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 var_19;
    void *temp_3;

    var_19 = 0;
    if (func_004074E8(arg1, arg2, arg3) != -1) {
        if (*arg4 != 1) {
            temp_3 = M2C_FIELD(arg0, void **, 8);
            if (M2C_FIELD(temp_3, s32 (**)(void *, s32), 0x64)(arg0 + M2C_FIELD(temp_3, s16 *, 0x60), arg1) != 0) {
                var_19 = 1;
            } else {
                func_003F9698(&D_0047F478, arg1);
            }
        } else {
            var_19 = 1;
        }
    } else {
        func_003F9698(&D_0047F4C0, arg1);
    }
    return var_19;
}
