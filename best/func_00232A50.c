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

M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */

void func_00232A50(void *arg0, s32 arg1) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    M2C_UNK **temp_2_3;
    M2C_UNK *temp_16;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_3;

    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0x14);
    temp_3 = *temp_2;
    sp10 = temp_2;
    sp0 = temp_3;
    if (temp_3 != temp_2) {
        do {
            if (M2C_FIELD(sp0, s32 *, 8) != arg1) {
                sp30 = sp0;
                sp10 = sp0;
                sp0 = M2C_FIELD(sp0, M2C_UNK **, 0);
            } else {
                sp20 = sp0;
                temp_2_3 = M2C_FIELD(sp0, M2C_UNK ***, 4);
                temp_16 = M2C_FIELD(sp0, M2C_UNK **, 0);
                *temp_2_3 = temp_16;
                M2C_FIELD(temp_16, M2C_UNK ***, 4) = temp_2_3;
                func_002B2028(sp20);
                sp0 = temp_16;
                sp10 = temp_16;
            }
            temp_2_2 = M2C_FIELD(arg0, M2C_UNK **, 0x14);
            sp10 = temp_2_2;
        } while (sp0 != temp_2_2);
    }
}
