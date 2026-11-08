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

M2C_UNK func_003D4D70(s32);                         /* extern */
s32 func_003D4EA0(void **);                         /* extern */
M2C_UNK func_003D6A38(s32, s32, s64 *, void *);     /* extern */

void **func_003D68D0(void **arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp70;
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s64 sp90;
    s64 sp98;
    s32 temp_4;
    s32 var_4;
    u8 temp_2;
    void *temp_3;
    void *temp_7;

    sp70 = arg2;
    sp78 = arg3;
    sp80 = arg4;
    sp88 = arg5;
    sp90 = arg6;
    sp98 = arg7;
    temp_3 = *arg0;
    temp_2 = M2C_FIELD(temp_3, u8 *, 0x1A);
    if (temp_2 != 0) {
        var_4 = 0;
        M2C_FIELD(temp_3, u8 *, 0x1A) = (u8) (temp_2 | 2);
    } else {
        temp_4 = M2C_FIELD(temp_3, s32 *, 4);
        if (temp_4 != 0) {
            func_003D4D70(temp_4);
        }
        var_4 = 1;
        if (((s64) ((M2C_FIELD(*arg0, s64 *, 0x10) & 1) << 0x20) >> 0x20) != 0) {
            var_4 = func_003D4EA0(arg0);
        }
    }
    if (var_4 != 0) {
        temp_7 = *arg0;
        func_003D6A38(M2C_FIELD(temp_7, s32 *, 0), arg1, &sp70, temp_7);
    }
    return arg0;
}
