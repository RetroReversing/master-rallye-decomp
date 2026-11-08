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

void *func_001E3820(s32, s32, s32);                 /* extern */

void func_00168F78(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_2;
    void *temp_3;

    temp_2 = func_001E3820(func_001E4280(), arg0 + 0x80, arg0 + 0x84);
    if (temp_2 != NULL) {
        temp_3 = M2C_FIELD(temp_2, void **, 8);
        if (temp_3 != NULL) {
            if (arg1 != 0) {
                M2C_FIELD(temp_3, s32 *, 0x30) = 1;
            } else {
                M2C_FIELD(temp_3, s32 *, 0x30) = 0;
            }
            if (arg2 != 0) {
                M2C_FIELD(temp_3, s32 *, 0x2C) = 1;
            } else {
                M2C_FIELD(temp_3, s32 *, 0x2C) = 0;
            }
        }
    }
}
