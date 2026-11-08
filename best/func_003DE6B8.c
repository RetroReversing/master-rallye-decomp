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

s32 func_003D89B0(s32, s32, s64);                   /* extern */

s32 func_003DE6B8(void *arg0, s32 arg1, s64 arg2) {
    s32 temp_2;
    s32 temp_2_4;
    s32 temp_4;
    s32 var_2;
    s32 var_4;
    s64 temp_18;
    s64 temp_2_2;
    u16 temp_2_3;

    var_2 = 0;
    if (arg2 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0) & 0x1000) {
            M2C_FIELD(arg0, s64 *, 0x40) = -1;
            goto block_6;
        }
        temp_4 = M2C_FIELD(arg0, s32 *, 8);
        temp_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_4 != temp_2) {
            temp_2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s64 (**)(void *, s32, M2C_UNK), 0x7C)(arg0, temp_2 - temp_4, 1);
            var_2 = -1;
            if (temp_2_2 != -1) {
                M2C_FIELD(arg0, s64 *, 0x40) = temp_2_2;
                goto block_6;
            }
        } else {
block_6:
            temp_18 = (s64) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s64 (**)(void *, s32, u64), 0x74)(arg0, arg1, (u64) (arg2 << 0x20) >> 0x20) << 0x20) >> 0x20;
            temp_2_3 = M2C_FIELD(arg0, u16 *, 0x48);
            if (temp_2_3 != 0) {
                M2C_FIELD(arg0, u16 *, 0x48) = (u16) (func_003D89B0(temp_2_3 - 1, arg1, arg2) + 1);
            }
            temp_2_4 = M2C_FIELD(arg0, s32 *, 0x1C);
            var_4 = temp_2_4;
            M2C_FIELD(arg0, s32 *, 0xC) = temp_2_4;
            M2C_FIELD(arg0, s32 *, 4) = temp_2_4;
            M2C_FIELD(arg0, s32 *, 8) = temp_2_4;
            M2C_FIELD(arg0, s32 *, 0x14) = temp_2_4;
            M2C_FIELD(arg0, s32 *, 0x10) = temp_2_4;
            if (!(M2C_FIELD(arg0, s32 *, 0) & 0x202)) {
                var_4 = M2C_FIELD(arg0, s32 *, 0x20);
            }
            M2C_FIELD(arg0, s32 *, 0x18) = var_4;
            var_2 = ((temp_18 ^ arg2) == 0) ? 0 : -1;
        }
    }
    return var_2;
}
