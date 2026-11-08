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

M2C_UNK DeleteSema_2(s32);                          /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */

void func_002BEF80(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;

    temp_4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_4 != -1) {
        DeleteSema_2(temp_4);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0) = -1;
    if (temp_4_2 != 0) {
        func_002B2028(temp_4_2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}
