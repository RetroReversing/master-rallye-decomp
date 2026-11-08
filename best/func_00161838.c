/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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
M2C_UNK func_00262B00(s32, M2C_UNK);                /* extern */
M2C_UNK func_00262D58(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_00473600;

void func_00161838(void *arg0, s32 arg1) {
    s32 temp_4;
    void *temp_16;
    void *temp_4_2;
    void *temp_6;
    void *var_16;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00473600;
    temp_6 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_6 != NULL) {
        temp_16 = (M2C_FIELD(temp_6, s32 *, -0x10) * 0x70) + temp_6;
        if (temp_6 != temp_16) {
            var_16 = temp_16 - 0x70;
loop_3:
            func_00262D58(var_16, 0);
            if (M2C_FIELD(arg0, void **, 0x10) != var_16) {
                var_16 -= 0x70;
                goto loop_3;
            }
        }
        D_002AD530(M2C_FIELD(arg0, void **, 0x10) - 0x10);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_4 != 0) {
        func_00262B00(temp_4, 3);
    }
    temp_4_2 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_4_2 != NULL) {
        func_00262D58(temp_4_2, 3);
    }
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
