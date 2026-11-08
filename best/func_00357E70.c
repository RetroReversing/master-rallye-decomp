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

s32 func_002D3540(s32, f32, f32, f32);              /* extern */
M2C_UNK func_00357628(void *, s32, f32, f32, f32, f32); /* extern */
M2C_UNK func_00357C38(void *, f32, f32, f32, f32);  /* extern */

s32 func_00357E70(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 sp0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f30_2;
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_9;
    s32 temp_9_2;
    s32 var_18;
    s32 var_3;
    s32 var_3_2;

    temp_f1 = 2.0f * M2C_FIELD(arg0, f32 *, 0x100C);
    temp_f12 = fparg0 / temp_f1;
    temp_9 = M2C_BITWISE(s32, temp_f12) >> 0x1F;
    temp_4 = M2C_BITWISE(s32, temp_f12) & 0x7FFFFF;
    temp_2 = ((s32) (M2C_BITWISE(s32, temp_f12) & 0x7FFFFFFF) >> 0x17) - 0x7F;
    temp_5 = ~(temp_2 >> 0x1F);
    var_3 = (((u32) ((temp_4 | 0x800000) << 8) >> (0x1F - temp_2)) & temp_5) ^ temp_9;
    if (!((temp_4 << 8) & ((1 << (0x1F - (temp_2 & temp_5))) - 1))) {
        var_3 -= temp_9;
    }
    temp_f13 = fparg1 / temp_f1;
    temp_f22 = (f32) var_3 * temp_f1;
    temp_9_2 = M2C_BITWISE(s32, temp_f13) >> 0x1F;
    temp_4_2 = M2C_BITWISE(s32, temp_f13) & 0x7FFFFF;
    temp_2_2 = ((s32) (M2C_BITWISE(s32, temp_f13) & 0x7FFFFFFF) >> 0x17) - 0x7F;
    temp_5_2 = ~(temp_2_2 >> 0x1F);
    var_3_2 = (((u32) ((temp_4_2 | 0x800000) << 8) >> (0x1F - temp_2_2)) & temp_5_2) ^ temp_9_2;
    if (!((temp_4_2 << 8) & ((1 << (0x1F - (temp_2_2 & temp_5_2))) - 1))) {
        var_3_2 -= temp_9_2;
    }
    temp_f21 = (f32) var_3_2 * temp_f1;
    if (fparg2 < 0.1f) {
        return 0;
    }
    temp_f20 = fparg2 * 0.5f;
    if (M2C_FIELD(arg0, s32 *, 0x1020) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1020) = 0;
        M2C_FIELD(arg0, f32 *, 0x1008) = fparg2;
        M2C_FIELD(arg0, f32 *, 0x1000) = (f32) (temp_f22 + fparg2);
        M2C_FIELD(arg0, f32 *, 0x1004) = (f32) (temp_f21 + fparg2);
    }
    temp_f26 = temp_f21 + temp_f20;
    temp_f29 = temp_f22 - temp_f20;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1000);
    temp_f28 = temp_f21 - temp_f20;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x1004);
    temp_f25 = temp_f22 + temp_f20;
    M2C_FIELD(arg0, f32 *, 0x1010) = temp_f22;
    temp_f20_2 = M2C_FIELD(arg0, f32 *, 0x1008) * 0.5f;
    M2C_FIELD(arg0, s32 *, 0x1014) = 0;
    M2C_FIELD(arg0, f32 *, 0x1018) = temp_f21;
    var_18 = 0;
    temp_f30 = temp_f0 - temp_f20_2;
    temp_f24 = temp_f0 + temp_f20_2;
    func_0015ACE0(temp_f2 - temp_f20_2, temp_f29, temp_f25);
    sp0 = M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(temp_f30, temp_f28, temp_f26);
    temp_f30_2 = M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(temp_f2 + temp_f20_2, temp_f29, temp_f25);
    temp_f27 = M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(temp_f24, temp_f28, temp_f26);
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x1000) - temp_f22;
    temp_f24_2 = M2C_ERROR(/* Read from unset register $f0 */);
    if (((temp_f1_2 * temp_f1_2) > 0.1f) || (temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x1004) - temp_f21, ((temp_f0_2 * temp_f0_2) > 0.1f)) || (temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x1008) - fparg2, ((temp_f0_3 * temp_f0_3) > 0.1f))) {
        var_18 = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x1008) = fparg2;
    M2C_FIELD(arg0, f32 *, 0x1000) = temp_f22;
    M2C_FIELD(arg0, f32 *, 0x1004) = temp_f21;
    temp_17 = func_002D3540(M2C_FIELD(M2C_FIELD(arg0, void **, 0x101C), s32 *, 0x2C), temp_f22, temp_f21, temp_f20_2);
    if (var_18 != 0) {
        func_00357C38(arg0, temp_f29, temp_f28, temp_f25, temp_f26);
        func_00357628(arg0, temp_17, temp_f27, temp_f28, temp_f25, temp_f24_2);
        func_00357628(arg0, temp_17, sp0, temp_f24_2, temp_f25, temp_f26);
        func_00357628(arg0, temp_17, temp_f29, temp_f30_2, sp0, temp_f26);
        func_00357628(arg0, temp_17, temp_f29, temp_f28, temp_f27, temp_f30_2);
    }
    return var_18;
}
