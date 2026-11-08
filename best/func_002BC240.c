/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_002BC1E8(void *, s32);                 /* extern */

s32 func_002BC240(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_lo;
    s32 var_16_2;
    s32 var_18;
    s32 var_3;
    u16 temp_3;
    u32 var_16;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_8;

    var_3 = 0;
    if (arg1 >= 0) {
        if ((u32) arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
            temp_3 = M2C_FIELD(arg0, u16 *, 0x12);
            temp_lo = arg1 / (s32) temp_3;
            var_16 = (u32) M2C_FIELD(arg0, u32 *, 0x1C) / temp_3;
            var_18 = M2C_FIELD(arg0, s32 *, 0x18);
            if ((s32) var_16 < temp_lo) {
                var_16_2 = temp_lo - var_16;
loop_4:
                var_16_2 -= 1;
                temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8);
                var_18 += M2C_FIELD(arg0, s32 *, 0x28);
                M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, s32, s32, s32, void *), 0x54)(M2C_FIELD(arg0, void **, 8) + M2C_FIELD(temp_3_2, s16 *, 0x50), M2C_FIELD(arg0, s32 *, 0x20), var_18, arg2, M2C_FIELD(arg0, void **, 8));
                func_002BC1E8(arg0, arg2);
                if (var_16_2 != 0) {
                    goto loop_4;
                }
            } else {
loop_9:
                if (temp_lo < (s32) var_16) {
                    temp_8 = M2C_FIELD(arg0, void **, 8);
                    var_16 -= 1;
                    temp_3_3 = M2C_FIELD(temp_8, void **, 8);
                    var_18 -= M2C_FIELD(arg0, s32 *, 0x24);
                    M2C_FIELD(temp_3_3, M2C_UNK (**)(void *, s32, s32, s32, void *), 0x54)(temp_8 + M2C_FIELD(temp_3_3, s16 *, 0x50), M2C_FIELD(arg0, s32 *, 0x20), var_18, arg2, temp_8);
                    func_002BC1E8(arg0, arg2);
                    goto loop_9;
                }
            }
            M2C_FIELD(arg0, u32 *, 0x1C) = (u32) arg1;
            var_3 = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = var_18;
        }
    }
    return var_3;
}
