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

void func_003CE2B8(void **arg0, u32 arg1, s8 arg2) {
    u32 temp_5;

    if (arg1 > 0xFFFFFFFEU) {
        func_003D16A8("n > max_size ()", (s32) arg1);
    }
    temp_5 = M2C_FIELD(*arg0, u32 *, -0x10);
    if (temp_5 < arg1) {
        func_003CDDB0(arg0, temp_5, 0U, arg1 - temp_5, arg2);
        return;
    }
    func_003CDDB0(arg0, arg1, 0xFFFFFFFFU, 0U, 0);
}
