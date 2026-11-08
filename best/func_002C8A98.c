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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK D_002AD530(void *);                         /* extern */
M2C_UNK func_002C73C0(void *, M2C_UNK);             /* extern */
M2C_UNK func_002C8B38();                            /* extern */

void func_002C8A98(void *arg0, s32 arg1) {
    void *temp_16;
    void *temp_5;
    void *var_16;

    func_002C8B38();
    temp_5 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_5 != NULL) {
        temp_16 = (M2C_FIELD(temp_5, s32 *, -0x10) * 0x98) + temp_5;
        if (temp_5 != temp_16) {
            var_16 = temp_16 - 0x98;
            do {
                func_002C73C0(var_16, 0);
                var_16 -= 0x98;
            } while (M2C_FIELD(arg0, void **, 0xC) != var_16);
        }
        D_002AD530(M2C_FIELD(arg0, void **, 0xC) - 0x10);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
