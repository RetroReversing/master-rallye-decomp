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

void func_002BAE10(void *arg0, void *arg1) {
    void *temp_2;
    void *temp_3;
    void *temp_3_2;

    if (M2C_FIELD(arg0, void **, 0xC) != arg1) {
        temp_3 = M2C_FIELD(arg1, void **, 0x14);
        if (temp_3 != NULL) {
            M2C_FIELD(temp_3, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
        }
        temp_3_2 = M2C_FIELD(arg1, void **, 0x18);
        if (temp_3_2 != NULL) {
            M2C_FIELD(temp_3_2, void **, 0x14) = (void *) M2C_FIELD(arg1, void **, 0x14);
        }
        temp_2 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(arg1, void **, 0x14) = temp_2;
        if (temp_2 != NULL) {
            M2C_FIELD(temp_2, void **, 0x18) = arg1;
        }
        M2C_FIELD(arg1, void **, 0x18) = NULL;
        M2C_FIELD(arg0, void **, 0xC) = arg1;
    }
}
