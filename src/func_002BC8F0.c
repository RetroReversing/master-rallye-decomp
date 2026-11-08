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

void func_002BC8F0(void *arg0, void **arg1) {
    void **temp_3;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, void ***, 4);
    if (temp_3 != NULL) {
        *temp_3 = M2C_FIELD(arg0, void **, 0);
    }
    temp_3_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_3_2 != NULL) {
        M2C_FIELD(temp_3_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    if (arg0 == *arg1) {
        *arg1 = M2C_FIELD(arg0, void **, 0);
    }
    M2C_FIELD(arg0, void ***, 4) = NULL;
    M2C_FIELD(arg0, void **, 0) = NULL;
}
