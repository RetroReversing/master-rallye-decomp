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

M2C_UNK func_002BC8F0(void *, void *);              /* extern */
M2C_UNK func_002BD110(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */

void func_002BD010(void *arg0) {
    s32 temp_5;
    void *temp_16;

loop_1:
    if ((M2C_FIELD(arg0, void **, 0x2C) != NULL) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        func_0040AF58();
        temp_16 = M2C_FIELD(arg0, void **, 0x2C);
        if (temp_16 != NULL) {
            func_002BC8F0(temp_16, arg0 + 0x2C);
        }
        func_0040AFA0();
        if (temp_16 != NULL) {
            temp_5 = M2C_FIELD(temp_16, s32 *, 8);
            if (temp_5 != 0) {
                func_002BD110(arg0, temp_5, 0);
            }
        }
        goto loop_1;
    }
}
