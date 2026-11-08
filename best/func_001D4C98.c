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

s32 func_002B2078(s32, s32, u32);                   /* extern */
M2C_UNK func_003F931C(u32, s32, s32);               /* extern */

void func_001D4C98(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_16;
    u32 temp_3;
    u32 temp_5;
    u32 temp_6;

    temp_4 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_4 != 0) && (arg1 >= 0)) {
        temp_6 = M2C_FIELD(arg0, u32 *, 4);
        temp_5 = temp_4 + arg1 + arg3;
        if (temp_6 < temp_5) {
            var_16 = (temp_6 - temp_4) * 2;
            if ((u32) (temp_4 + var_16) < temp_5) {
                do {
                    var_16 *= 2;
                } while ((u32) (temp_4 + var_16) < temp_5);
            }
            temp_2 = func_002B2078(M2C_FIELD(arg0, s32 *, 8), var_16, temp_6);
            if (temp_2 != 0) {
                temp_4_2 = M2C_FIELD(arg0, s32 *, 8);
                M2C_FIELD(arg0, u32 *, 4) = (u32) (temp_2 + var_16);
                M2C_FIELD(arg0, u32 *, 0xC) = (u32) (temp_2 + (M2C_FIELD(arg0, u32 *, 0xC) - temp_4_2));
                M2C_FIELD(arg0, u32 *, 0x10) = (u32) (temp_2 + (M2C_FIELD(arg0, u32 *, 0x10) - temp_4_2));
                M2C_FIELD(arg0, s32 *, 8) = temp_2;
                goto block_8;
            }
        } else {
block_8:
            func_003F931C(M2C_FIELD(arg0, u32 *, 0xC), arg2, arg3);
            temp_3 = M2C_FIELD(arg0, u32 *, 0xC) + arg3;
            M2C_FIELD(arg0, u32 *, 0xC) = temp_3;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x10) < temp_3) {
                M2C_FIELD(arg0, u32 *, 0x10) = temp_3;
            }
        }
    }
}
