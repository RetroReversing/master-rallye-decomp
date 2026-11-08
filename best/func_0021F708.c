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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001577C8(void *, void **, void **);    /* extern */
M2C_UNK func_0026C9C8(s32, s32, s32 *);             /* extern */

void func_0021F708(void *arg0, void *arg1) {
    s32 sp10;
    void *sp14;
    s32 temp_17;
    s32 temp_2;
    s32 temp_5;
    void **temp_16;
    void **temp_5_2;
    void *temp_2_2;
    void *var_4;

    temp_17 = M2C_FIELD(arg1, s32 *, 0x5C);
    sp14 = arg1;
    if (temp_17 > 0) {
        temp_5 = M2C_FIELD(arg0, s32 *, 4);
        temp_2 = (s32) (temp_5 - M2C_FIELD(arg0, s32 *, 0)) >> 2;
        if ((u32) temp_17 >= (u32) temp_2) {
            sp10 = 0;
            func_0026C9C8(temp_5, (temp_17 - temp_2) + 1, &sp10);
        }
        temp_16 = M2C_FIELD(arg0, s32 *, 0) + (temp_17 * 4);
        var_4 = *temp_16;
        if (var_4 == NULL) {
            temp_2_2 = D_002AD408(0xC);
            M2C_FIELD(temp_2_2, s32 *, 0) = 0;
            var_4 = temp_2_2;
            M2C_FIELD(temp_2_2, s32 *, 4) = 0;
            M2C_FIELD(temp_2_2, s32 *, 8) = 0;
            *temp_16 = temp_2_2;
        }
        temp_5_2 = M2C_FIELD(var_4, void ***, 4);
        if (temp_5_2 != M2C_FIELD(var_4, s32 *, 8)) {
            if (temp_5_2 != NULL) {
                *temp_5_2 = sp14;
            }
            M2C_FIELD(var_4, void ***, 4) = (void **) (M2C_FIELD(var_4, void ***, 4) + 4);
            return;
        }
        func_001577C8(var_4, temp_5_2, &sp14);
    }
}
