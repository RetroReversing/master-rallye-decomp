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

s64 func_002ABEC8(s64, s64);                        /* extern */
s64 func_002ABF88(s64, s64);                        /* extern */
s64 func_002AC230(s64, s64);                        /* extern */
s32 func_002AC4B0(s64, s32);                        /* extern */
s64 func_002AC500(s32);                             /* extern */
s32 func_002AD350(f32);                             /* extern */

s32 func_001DC5A8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, s32 arg6, s32 arg7, f32 fparg0) {
    void *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    void *sp14;
    s32 sp18;
    s32 sp1C;
    s64 sp20;
    s32 sp28;
    s32 sp2C;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_16_4;
    s32 temp_16_5;
    s32 temp_2;
    s32 var_23;
    s32 var_3;
    s32 var_4;
    s64 temp_16;
    s64 temp_16_6;
    s64 temp_16_7;
    s64 temp_17_2;
    s64 temp_17_3;
    s64 temp_18_2;
    s64 temp_19;
    s64 temp_19_2;
    s64 temp_20;
    s64 temp_30;
    s64 var_2;
    s64 var_2_2;
    s64 var_2_3;
    s64 var_2_4;
    u32 *var_21;
    u32 *var_22;
    u32 temp_17;
    u32 temp_18;

    sp4 = arg1;
    spC = arg3;
    sp0 = arg0;
    sp8 = arg2;
    sp10 = arg4;
    sp14 = arg5;
    sp18 = arg6;
    sp1C = arg7;
    if (((M2C_FIELD(arg0, s32 *, 0xC) - (arg1 + arg3)) < 0) || ((M2C_FIELD(sp0, s32 *, 0x10) - (sp8 + sp10)) < 0) || (temp_2 = M2C_FIELD(sp14, s32 *, 0xC), sp28 = temp_2, ((temp_2 - (sp18 + spC)) < 0)) || ((M2C_FIELD(sp14, s32 *, 0x10) - (sp1C + sp10)) < 0)) {
        return 0;
    }
    sp20 = 0;
    var_3 = 0;
    if (sp10 > 0) {
        var_4 = 1;
        do {
            sp2C = var_4;
            if (spC > 0) {
                var_23 = spC;
                var_22 = ((sp18 + ((sp1C + var_3) * sp28)) * 4) + M2C_FIELD(sp14, s32 *, 8);
                var_21 = ((sp4 + ((sp8 + var_3) * M2C_FIELD(sp0, s32 *, 0xC))) * 4) + M2C_FIELD(sp0, s32 *, 8);
                do {
                    temp_17 = *var_21;
                    temp_18 = *var_22;
                    temp_16_2 = (temp_17 & 0xFF) - (temp_18 & 0xFF);
                    var_2 = func_002AC500(temp_16_2);
                    if (temp_16_2 < 0) {
                        var_2 = func_002ABEC8(var_2, 0x83E0 << 0x2F);
                    }
                    temp_30 = func_002AC230(var_2, ((0x80DF << 0x10) | 0xC000) << 0x1F);
                    temp_16_3 = ((temp_17 >> 8) & 0xFF) - ((temp_18 >> 8) & 0xFF);
                    var_2_2 = func_002AC500(temp_16_3);
                    if (temp_16_3 < 0) {
                        var_2_2 = func_002ABEC8(var_2_2, 0x83E0 << 0x2F);
                    }
                    temp_19 = func_002AC230(var_2_2, ((0x80DF << 0x10) | 0xC000) << 0x1F);
                    temp_16_4 = ((temp_17 >> 0x10) & 0xFF) - ((temp_18 >> 0x10) & 0xFF);
                    var_2_3 = func_002AC500(temp_16_4);
                    if (temp_16_4 < 0) {
                        var_2_3 = func_002ABEC8(var_2_3, 0x83E0 << 0x2F);
                    }
                    temp_20 = func_002AC230(var_2_3, ((0x80DF << 0x10) | 0xC000) << 0x1F);
                    temp_16_5 = (temp_17 >> 0x18) - (temp_18 >> 0x18);
                    var_2_4 = func_002AC500(temp_16_5);
                    if (temp_16_5 < 0) {
                        var_2_4 = func_002ABEC8(var_2_4, 0x83E0 << 0x2F);
                    }
                    var_22 += 4;
                    var_21 += 4;
                    var_23 -= 1;
                    temp_17_2 = func_002AC230(var_2_4, ((0x80DF << 0x10) | 0xC000) << 0x1F);
                    temp_19_2 = func_002ABF88(temp_30, temp_30);
                    temp_18_2 = func_002ABF88(temp_19, temp_19);
                    temp_16_6 = func_002ABF88(temp_20, temp_20);
                    temp_17_3 = func_002ABF88(temp_17_2, temp_17_2);
                    sp20 = func_002ABEC8(sp20, func_002ABF88(func_002ABEC8(func_002ABEC8(func_002ABEC8(temp_19_2, temp_18_2), temp_16_6), temp_17_3), 0xFF40 << 0x2E));
                } while (var_23 != 0);
            }
            var_3 = sp2C;
            var_4 = var_3 + 1;
        } while (var_3 < sp10);
    }
    temp_16_7 = func_002AC500(spC);
    temp_16 = func_002AC230(sp20, func_002ABF88(temp_16_7, func_002AC500(sp10)));
    return func_002AC4B0(temp_16, func_002AD350(fparg0)) <= 0;
}
