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

void *func_003E77A0(void *);                        /* extern */

void func_003E7828(void **arg0, void *arg1) {
    void *temp_2;

    temp_2 = func_003E77A0(*arg0);
    if (temp_2 == NULL) {
        *arg0 = arg1;
    } else {
        M2C_FIELD(temp_2, void **, 0xC) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
}
