/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

void *func_001FDBA8(s32, s32);                      /* extern */
s32 func_001FDE60();                                /* extern */

s32 func_001FD058(void *arg0) {
    s32 temp_4;
    s32 temp_5;
    void *temp_2;

    temp_2 = func_001FDBA8(func_001FDE60(), arg0 + 8);
    if (temp_2 != NULL) {
        temp_4 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_4 >= 0) {
            temp_5 = M2C_FIELD(temp_2, s32 *, 0);
            if ((u32) temp_4 < (u32) ((s32) ((M2C_FIELD(temp_2, s32 *, 4) - temp_5) * 0xCCCCCCCD) >> 4)) {
                return (temp_4 * 0x50) + temp_5;
            }
        }
    }
    return 0;
}
