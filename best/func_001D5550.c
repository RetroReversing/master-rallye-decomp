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

M2C_UNK func_001D56B0();                            /* extern */

void *func_001D5550(void *arg0, void *arg1) {
    void *temp_16;
    register void *temp_3;
    void *temp_4;

    temp_16 = arg0 + 4;
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(temp_16, void **, 8) = temp_16;
    M2C_FIELD(temp_16, void **, 4) = temp_16;
    func_001D56B0();
    M2C_FIELD(arg0, void **, 4) = arg0;
    temp_3 = M2C_FIELD(temp_16, void **, 8);
    temp_4 = M2C_FIELD(temp_16, void **, 4);
    M2C_FIELD(temp_4, void **, 8) = temp_3;
    M2C_FIELD(temp_3, void **, 4) = temp_4;
    M2C_FIELD(temp_16, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(temp_16, void **, 8) = arg1;
    M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 8) = temp_16;
    M2C_FIELD(arg1, void **, 4) = temp_16;
    return arg0;
}
