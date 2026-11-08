/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s64 func_002AE6B8(s64, s64);                        /* extern */

void func_003E6660(void *arg0, void *arg1, s64 *arg2, s64 *arg3, s64 *arg4) {
    s64 *sp0;
    s32 temp_22;
    s32 temp_23;
    s64 temp_16;
    s64 temp_17;
    s64 temp_18;
    s64 temp_2;

    sp0 = arg4;
    if (M2C_FIELD(arg0, s32 *, 0x70) != 0) {
        if ((M2C_FIELD(arg1, s64 *, 0x18) < 0) && (temp_23 = M2C_FIELD(arg0, s32 *, 0x80), (temp_23 >= 0))) {
            temp_16 = (s64) (M2C_FIELD(arg0, s64 *, 0x88) << 0x20) >> 0x20;
            temp_18 = temp_16 & 1;
            temp_22 = M2C_FIELD(arg0, s32 *, 0x90);
            temp_17 = (s64) (func_002AE6B8(func_002AE6B8(temp_18, M2C_FIELD(arg0, s64 *, 0x78) & 1), temp_22 & 1) << 0x20) >> 0x20;
            *arg2 = temp_23 + (((s64) (func_002AE6B8(M2C_FIELD(arg0, s64 *, 0x78), temp_16) << 0x1F) >> 0x20) + temp_17);
            if (func_002AE6B8(temp_18, M2C_FIELD(arg0, s64 *, 0x78) & 1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x90) = (s32) (temp_22 + 1);
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        *arg2 = M2C_FIELD(arg1, s64 *, 0x18);
    }
    if (M2C_FIELD(arg0, s32 *, 0xF8) == 2) {
        temp_2 = M2C_FIELD(arg0, s64 *, 0xF0);
        if (temp_2 >= 0) {
            *arg2 = temp_2;
            M2C_FIELD(arg0, s32 *, 0xF8) = 0;
            M2C_FIELD(arg0, s64 *, 0xF0) = -1;
        }
    }
    *arg3 = M2C_FIELD(arg1, s64 *, 0x20);
    *sp0 = ((s64) M2C_FIELD(arg1, s32 *, 0x34) << 8) | M2C_FIELD(arg1, s32 *, 0x2C) | (((s64) M2C_FIELD(arg1, s32 *, 0x40) << 5) | ((s64) M2C_FIELD(arg1, s32 *, 0x3C) << 6)) | (((s64) M2C_FIELD(arg1, s32 *, 0x38) << 7) | ((s64) M2C_FIELD(arg1, s32 *, 0x30) * 8));
}
