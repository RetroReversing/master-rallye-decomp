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

s32 func_002971B0(s32);                             /* extern */
s32 func_00297340(s32, s32);                        /* extern */
s32 func_00297500();                                /* extern */

void func_0029B6A8(void *arg0) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_4;
    s32 var_2;

    if (func_00297340(func_00297500(), M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        if (func_002971B0(func_00297500()) != M2C_FIELD(arg0, s32 *, 0xC)) {
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x50);
            if (temp_3 == M2C_FIELD(arg0, s32 *, 0x1C)) {
                M2C_FIELD(arg0, s32 *, 0x44) = 0;
            } else if (temp_3 == 0) {
                goto block_10;
            }
        } else {
block_10:
            M2C_FIELD(arg0, s32 *, 0x44) = 1;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x50);
        var_2 = temp_2 - 1;
        if (temp_2 > 0) {
            goto block_17;
        }
    } else {
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0x50);
        var_2 = temp_3_2 + 1;
        if (temp_3_2 < M2C_FIELD(arg0, s32 *, 0x1C)) {
block_17:
            M2C_FIELD(arg0, s32 *, 0x50) = var_2;
        }
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x50);
    temp_3_3 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_4 >= temp_3_3) {
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) + (M2C_FIELD(arg0, f32 *, 0x4C) * (f32) (temp_4 - temp_3_3)));
    }
}
