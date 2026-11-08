/* machine draft (m2c), tried by autopilot */
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

void *func_003C7880(s32, s32, s32, s32, s32);       /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s16, void *, u16); /* extern */
extern M2C_UNK D_00488738;

void func_003C7890(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s16 temp_5;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 var_3_2;
    s32 var_3_3;
    s32 var_4;
    s32 var_5;
    s64 var_10;
    s64 var_2;
    s64 var_2_2;
    s64 var_2_3;
    s64 var_3;
    s64 var_5_2;
    s64 var_6;
    s64 var_7;
    u16 temp_7;
    void *temp_6;

    temp_6 = func_003C7880(arg1 << 0x10, arg2 << 0x10, arg3 << 0x10, arg4 << 0x10, arg5 << 0x10);
    M2C_FIELD(arg0, s64 *, 0) = 0x66;
    temp_7 = (u16) M2C_FIELD(temp_6, s16 *, 0);
    if (M2C_FIELD(temp_6, s16 *, 0) != 0) {
        var_2 = 3;
        if (M2C_FIELD(temp_6, s16 *, 4) == 0) {
            var_2 = 1;
        }
    } else {
        var_2 = 2;
    }
    M2C_FIELD(arg0, s64 *, 8) = var_2;
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (((arg1 & 0xF) << 0xF) | ((((s32) (arg2 + 0x3F) >> 6) & 0x3F) << 9));
    temp_5 = M2C_FIELD(temp_6, s16 *, 2);
    if (temp_5 == 2) {
        temp_2 = arg2 + 0x9FF;
        if ((s16) temp_7 == 1) {
            temp_lo = temp_2 / arg2;
            var_7 = ((arg5 + 0x32) & 0xFFF) << 0xC;
            var_10 = (temp_lo - 1) << 0x17;
            var_5 = ((arg4 * temp_lo) + 0x27C) & 0xFFF;
            var_3 = ((temp_lo * arg2) - 1) << 0x20;
            if (M2C_FIELD(temp_6, s16 *, 4) != 0) {
                var_3_2 = var_10 | var_3;
                var_2_2 = (arg3 * 2) - 1;
            } else {
                goto block_13;
            }
            goto block_14;
        }
        temp_lo_2 = temp_2 / arg2;
        var_6 = (arg3 - 1) << 0x2C;
        var_5_2 = ((arg5 + 0x19) & 0xFFF) << 0xC;
        var_4 = temp_lo_2 * arg2;
        var_2_3 = temp_lo_2 - 1;
        var_3_3 = (arg4 * temp_lo_2) + 0x27C;
        goto block_16;
    }
    if (temp_5 == 3) {
        temp_2_2 = arg2 + 0x9FF;
        if ((s16) temp_7 == 1) {
            temp_lo_3 = temp_2_2 / arg2;
            var_7 = ((arg5 + 0x48) & 0xFFF) << 0xC;
            var_10 = (temp_lo_3 - 1) << 0x17;
            var_5 = ((arg4 * temp_lo_3) + 0x290) & 0xFFF;
            var_3 = ((temp_lo_3 * arg2) - 1) << 0x20;
            if (M2C_FIELD(temp_6, s16 *, 4) != 0) {
                var_3_2 = var_10 | var_3;
                var_2_2 = (arg3 * 2) - 1;
            } else {
block_13:
                var_2_2 = arg3 - 1;
                var_3_2 = var_10 | var_3;
            }
block_14:
            M2C_FIELD(arg0, s64 *, 0x18) = (s64) (var_3_2 | (var_5 | (var_2_2 << 0x2C)) | var_7);
        } else {
            temp_lo_4 = temp_2_2 / arg2;
            var_6 = (arg3 - 1) << 0x2C;
            var_5_2 = ((arg5 + 0x24) & 0xFFF) << 0xC;
            var_4 = temp_lo_4 * arg2;
            var_2_3 = temp_lo_4 - 1;
            var_3_3 = (arg4 * temp_lo_4) + 0x290;
block_16:
            M2C_FIELD(arg0, s64 *, 0x18) = (s64) ((var_2_3 << 0x17) | ((var_4 - 1) << 0x20) | ((var_3_3 & 0xFFF) | var_6) | var_5_2);
        }
    } else {
        func_003F9698(&D_00488738, temp_5, temp_6, temp_7);
    }
    M2C_FIELD(arg0, s64 *, 0x20) = 0;
}
