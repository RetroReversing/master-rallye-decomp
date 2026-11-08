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

M2C_UNK func_002B2028(void *, void *, void *, void *); /* extern */

void func_00229C98(void **arg0) {
    void *sp30;
    void **temp_2_2;
    void *temp_16;
    void *temp_2;
    void *temp_3;

    temp_2 = *arg0;
    temp_3 = M2C_FIELD(temp_2, void **, 4);
    sp30 = temp_3;
    temp_16 = M2C_FIELD(temp_3, void **, 0);
    temp_2_2 = M2C_FIELD(temp_3, void ***, 4);
    *temp_2_2 = temp_16;
    M2C_FIELD(temp_16, void ***, 4) = temp_2_2;
    func_002B2028(sp30, temp_3, temp_2, temp_2);
}
