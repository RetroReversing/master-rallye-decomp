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

M2C_UNK D_002AD530(s8 *);                           /* extern */
s8 *D_002AD5A8(s32);                                /* extern */

void func_001D2DE8(s8 **arg0, s32 arg1) {
    s8 *temp_2;
    s8 *temp_4;

    temp_4 = *arg0;
    if (temp_4 != NULL) {
        D_002AD530(temp_4);
    }
    temp_2 = D_002AD5A8(arg1 + 1);
    *arg0 = temp_2;
    *temp_2 = 0;
}
