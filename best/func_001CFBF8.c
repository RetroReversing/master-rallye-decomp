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

void *func_001A12E0(s32, s32);                      /* extern */

s32 func_001CFBF8(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;

    temp_5 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_5 >= 0) {
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0x174);
        if ((u32) (((s32) ((M2C_FIELD(arg0, s32 *, 0x178) - temp_4_2) * 0xAAAAAAAB) >> 4) - 1) >= (u32) temp_5) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0xE8);
            if (temp_4 != M2C_FIELD(func_001A12E0(temp_4_2, temp_5), s32 *, 0x24)) {
                return M2C_FIELD(arg0, s32 *, 0x174) + (temp_4 * 0x30);
            }
        }
    }
    return M2C_FIELD(arg0, s32 *, 0x174);
}
