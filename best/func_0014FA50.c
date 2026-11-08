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

void func_0014FA50(void *arg0, s32 arg1, s32 arg2, s8 arg3, f32 fparg0) {
    s32 temp_3;
    s32 var_6;
    void *temp_2;

    var_6 = arg2;
    if (arg1 < var_6) {
        do {
            temp_3 = var_6 * 8;
            var_6 -= 1;
            temp_2 = M2C_FIELD(arg0, s32 *, 0x2C) + temp_3;
            M2C_FIELD(temp_2, f32 *, 0) = fparg0;
            M2C_FIELD(temp_2, s8 *, 4) = arg3;
        } while (arg1 < var_6);
    }
}
