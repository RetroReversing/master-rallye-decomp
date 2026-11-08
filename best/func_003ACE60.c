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

void func_003ACE60(void *arg0, void **arg1) {
    void *sp0;
    void *temp_4;

    temp_4 = M2C_FIELD(arg0, void **, 8);
    sp0 = temp_4;
    M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(temp_4, void **, 0xC);
    if (M2C_FIELD(temp_4, void **, 0xC) != NULL) {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0xC), void **, 4) = arg0;
    }
    M2C_FIELD(sp0, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    if (arg0 == *arg1) {
        *arg1 = sp0;
    } else if (arg0 == M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC) = sp0;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 8) = sp0;
    }
    M2C_FIELD(sp0, void **, 0xC) = arg0;
    M2C_FIELD(arg0, void **, 4) = sp0;
}
