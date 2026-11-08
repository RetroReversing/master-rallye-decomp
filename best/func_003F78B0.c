/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
s32 func_003F9CB8(void *);                          /* extern */

u32 func_003F78B0(s32 arg0, u32 arg1, u32 arg2, void *arg3) {
    s32 temp_6;
    s32 var_16;
    s32 var_18;
    u32 temp_21;
    u32 var_19;

    var_19 = arg2 * arg1;
    if (var_19 == 0) {
        return 0U;
    }
    temp_6 = M2C_FIELD(arg3, s32 *, 4);
    var_16 = temp_6;
    if (temp_6 < 0) {
        M2C_FIELD(arg3, s32 *, 4) = 0;
        var_16 = 0;
    }
    var_18 = arg0;
    temp_21 = var_19;
    if ((u32) var_16 < var_19) {
loop_7:
        var_19 -= var_16;
        func_003F931C(var_18, M2C_FIELD(arg3, s32 *, 0), var_16);
        var_18 += var_16;
        M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg3, s32 *, 0) + var_16);
        if (func_003F9CB8(arg3) == 0) {
            var_16 = M2C_FIELD(arg3, s32 *, 4);
            if ((u32) var_16 < var_19) {
                goto loop_7;
            }
            goto block_11;
        }
        return (u32) (temp_21 - var_19) / arg1;
    }
block_11:
    func_003F931C(var_18, M2C_FIELD(arg3, s32 *, 0), (s32) var_19);
    M2C_FIELD(arg3, s32 *, 4) = (s32) (M2C_FIELD(arg3, s32 *, 4) - var_19);
    M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg3, s32 *, 0) + var_19);
    return arg2;
}
