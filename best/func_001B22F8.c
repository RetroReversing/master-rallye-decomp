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
M2C_UNK func_001B1D50(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_004731D8;

void func_001B22F8(void *arg0, s32 arg1) {
    void **temp_6;
    void *temp_2;

    M2C_FIELD(arg0, M2C_UNK **, 0xDC) = &D_004731D8;
    temp_6 = M2C_FIELD(arg0, void ***, 0xC8);
    if (temp_6 != NULL) {
        temp_2 = *temp_6;
        M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK, void **), 0xC)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
    }
    func_001B1D50(arg0 + 0xA4, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
