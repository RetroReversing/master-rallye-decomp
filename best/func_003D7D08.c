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

extern void *D_0043A908;

void func_003D7D08(void *arg0) {
    s32 temp_6;
    void *temp_2;
    void *var_3;

    temp_6 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_6 & 0x80) {
        if (D_0043A908 != NULL) {
            if (D_0043A908 != arg0) {
                var_3 = D_0043A908;
loop_6:
                temp_2 = M2C_FIELD(var_3, void **, 0x34);
                if (temp_2 != NULL) {
                    if (temp_2 != arg0) {
                        var_3 = M2C_FIELD(var_3, void **, 0x34);
                        goto loop_6;
                    }
                    M2C_FIELD(var_3, void **, 0x34) = (void *) M2C_FIELD(arg0, void **, 0x34);
                }
            } else {
                D_0043A908 = M2C_FIELD(arg0, void **, 0x34);
            }
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_6 & ~0x80);
    }
}
