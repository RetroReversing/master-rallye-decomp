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

M2C_UNK func_003E1708(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK D_00489A08;

s32 func_003E0FF0(s32 arg0, void *arg1, s32 arg2, u32 arg3) {
    s32 temp_2;
    u32 temp_4;

    temp_2 = ((u32) ((M2C_FIELD(arg1, u32 *, 8) + arg3) - 1) / arg3) * arg3;
    temp_4 = temp_2 + arg2;
    if ((u32) (M2C_FIELD(arg1, s32 *, 0) + M2C_FIELD(arg1, s32 *, 4)) < temp_4) {
        func_003E1708(arg0, &D_00489A08, arg0);
        return 0;
    }
    M2C_FIELD(arg1, u32 *, 8) = temp_4;
    return temp_2;
}
