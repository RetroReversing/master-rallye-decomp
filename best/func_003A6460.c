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

s32 func_002AFEB8(M2C_UNK, s32);                    /* extern */
M2C_UNK func_003A6420(s32, s32);                    /* extern */

void func_003A6460(s32 arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = func_002AFEB8(8, arg0);
    if (temp_2 != 0) {
        func_003A6420(temp_2, arg1);
    }
}
