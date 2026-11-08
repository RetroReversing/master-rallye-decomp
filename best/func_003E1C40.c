/* machine draft (m2c), tried by autopilot */
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

void func_003E1C40(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg_sp0, s32 arg_sp8, s32 arg_sp10, s32 arg_sp18, s32 arg_sp20, s32 arg_sp28) {
    s32 temp_15;
    s32 temp_17;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2; s32 off;

    temp_3 = arg_sp20 * arg_sp28;
    temp_2 = temp_3 / 512;
    off=temp_2*384;
    temp_17 = (arg_sp8 & 0x0FFFFFFF) | 0x20000000;
    *arg0 = temp_17;
    temp_15 = (arg_sp10 & 0x0FFFFFFF) | 0x20000000;
    *arg1 = temp_15;
    temp_3_2 = (arg_sp18 & 0x0FFFFFFF) | 0x20000000;
    *arg2 = temp_3_2;
    *arg3 = temp_17;
    *arg4 = temp_15;
    *arg5 = temp_3_2;
    *arg6 = ((off + arg_sp8) & 0x0FFFFFFF) | 0x20000000;
    *arg7 = ((off + arg_sp10) & 0x0FFFFFFF) | 0x20000000;
    *arg_sp0 = ((off + arg_sp18) & 0x0FFFFFFF) | 0x20000000;
}
