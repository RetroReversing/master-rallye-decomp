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

M2C_UNK D_002AD390(void **);                        /* extern */

void func_003BF6C0(void **arg0, s32 arg1) {
    s32 temp_2;
    void *temp_2_2;
    void *temp_6;

    temp_6 = *arg0;
    if (temp_6 != NULL) {
        *arg0 = NULL;
        temp_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
        M2C_FIELD(temp_6, s32 *, 0) = temp_2;
        if (temp_2 == 0) {
            temp_2_2 = M2C_FIELD(temp_6, void **, 4);
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 8), 3, temp_6);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
