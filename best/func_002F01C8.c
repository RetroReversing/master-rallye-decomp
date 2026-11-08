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

M2C_UNK FlushCache_2(M2C_UNK);                      /* extern */
M2C_UNK func_002EFDC0();                            /* extern */
M2C_UNK func_002EFED0(void *, M2C_UNK *, void *, M2C_UNK, s64, s16, s64, s16); /* extern */
M2C_UNK func_002F0060(void *, M2C_UNK *);           /* extern */
M2C_UNK func_003C75C0();                            /* extern */
M2C_UNK func_003C76F0(M2C_UNK, s16, s16, s16);      /* extern */
M2C_UNK func_003C7890(M2C_UNK *, s16, s16, s16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_003C8820(void *, s16, s16, s16, M2C_UNK, s16, M2C_UNK); /* extern */
extern M2C_UNK D_0042D2D0;
extern M2C_UNK D_0042D2E8;
extern s8 D_0043AFB0;
extern M2C_UNK D_0049B1E8;

void func_002F01C8(void *arg0) {
    s16 temp_10_3;
    s16 temp_11_2;
    s16 temp_11_3;
    s16 temp_13;
    s16 temp_17;
    s16 temp_4_2;
    s16 temp_5_2;
    s16 temp_6_3;
    s16 temp_8;
    s16 temp_8_4;
    s16 temp_9_2;
    s16 var_3_2;
    s16 var_8;
    s32 temp_10_2;
    s32 temp_2_3;
    s32 temp_3_2;
    s32 temp_5_3;
    s32 temp_5_4;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_8_2;
    s32 temp_8_3;
    s32 temp_8_5;
    s32 temp_9;
    s32 temp_9_3;
    s32 temp_9_4;
    s32 temp_9_5;
    s32 var_10;
    s32 var_15;
    s32 var_22;
    s32 var_23;
    s32 var_4;
    s32 var_9;
    s64 temp_10;
    s64 temp_22;
    s64 temp_23;
    s64 temp_4;
    s64 temp_5;
    s64 temp_8_6;
    u32 temp_12;
    u32 temp_2_2;
    u32 temp_2_4;
    u32 temp_3;
    u32 temp_3_3;
    u32 temp_3_4;
    u32 temp_6_4;
    u32 temp_6_5;
    u32 temp_6_6;
    u32 temp_7_2;
    void *temp_11;
    void *temp_14;
    void *temp_21;
    void *temp_2;
    void *temp_7;
    void *var_13;
    void *var_3;

    temp_21 = arg0 + 0x24F0;
    func_003C75C0();
    func_003C76F0(0, M2C_FIELD(arg0, s16 *, 0x2960), M2C_FIELD(arg0, s16 *, 0x295C), M2C_FIELD(arg0, s16 *, 0x2964));
    func_003C8820(arg0 + 0x2600, M2C_FIELD(M2C_FIELD(arg0, void **, 0x296C), s16 *, 0x1C), M2C_FIELD(arg0, s16 *, 0x294C), M2C_FIELD(arg0, s16 *, 0x2950), 1, M2C_FIELD(M2C_FIELD(arg0, void **, 0x2970), s16 *, 0x1C), 0);
    M2C_FIELD(arg0, s64 *, 0x26C0) = 0;
    M2C_FIELD(arg0, s64 *, 0x2740) = 0;
    M2C_FIELD(arg0, s32 *, 0x264C) = 0xFFFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x2624) = 0xFFFFFFFF;
    temp_2 = M2C_FIELD(arg0, void **, 0x2978);
    M2C_FIELD(arg0, s64 *, 0x2830) = 0;
    M2C_FIELD(arg0, s64 *, 0x28B0) = 0;
    M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0xC)(arg0 + M2C_FIELD(temp_2, s16 *, 8));
    func_003C7890(&D_0049B1E8, M2C_FIELD(M2C_FIELD(arg0, void **, 0x2968), s16 *, 0x1C), M2C_FIELD(arg0, s16 *, 0x2940), M2C_FIELD(arg0, s16 *, 0x2944), 0, 0);
    func_002EFDC0();
    temp_7 = arg0 + 0x470;
    temp_6 = (0x800FFFFF << 0xC) | 0xFFF;
    temp_5 = ((s32) M2C_FIELD(arg0, s16 *, 0x2940) & 0x7FF) << 0x10;
    temp_6_2 = (((((0xF800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
    temp_4 = ((s32) M2C_FIELD(arg0, s16 *, 0x2944) & 0x7FF) << 0x30;
    M2C_FIELD(temp_7, s64 *, 0x30) = (s64) ((((M2C_FIELD(temp_7, s64 *, 0x30) & ~0x7FF & temp_6 & 0xF800FFFF) | temp_5) & temp_6_2) | temp_4);
    M2C_FIELD(temp_7, s64 *, 0x20) = (s64) ((((M2C_FIELD(temp_7, s64 *, 0x20) & ~0x7FF & temp_6 & 0xF800FFFF) | temp_5) & temp_6_2) | temp_4);
    temp_3 = (u32) M2C_FIELD(arg0, s16 *, 0x2940);
    temp_11 = arg0 + 0x23A0;
    temp_2_2 = (u32) M2C_FIELD(arg0, s16 *, 0x2944);
    temp_14 = arg0 + 0x23F0;
    var_9 = 0x20;
    temp_2_3 = (s32) (temp_2_2 + (temp_2_2 >> 0x1F)) >> 1;
    var_10 = 0;
    var_8 = (0x810 - ((s32) (temp_3 + (temp_3 >> 0x1F)) >> 1)) * 0x10;
    do {
        temp_3_2 = (var_9 <= 8) ? var_9 : 8;
        var_9 -= temp_3_2;
        if (temp_3_2 > 0) {
            var_4 = temp_3_2;
            var_3 = var_10 + (arg0 + 0x1D80);
            do {
                M2C_FIELD(var_3, s16 *, 0x30) = var_8;
                M2C_FIELD(var_3, s16 *, 0x40) = (s16) (var_8 + 0xA0);
                var_8 += 0xC0;
                M2C_FIELD(var_3, s16 *, 0x32) = (s16) ((0x80A - temp_2_3) * 0x10);
                var_10 += 0x30;
                M2C_FIELD(var_3, s16 *, 0x42) = (s16) ((0x80F - temp_2_3) * 0x10);
                var_4 -= 1;
                var_3 += 0x30;
            } while (var_4 != 0);
        }
        var_8 += 0x20;
    } while (var_9 != 0);
    temp_3_3 = (u32) M2C_FIELD(arg0, s16 *, 0x2940);
    temp_2_4 = (u32) M2C_FIELD(arg0, s16 *, 0x2944);
    temp_5_2 = (0x810 - ((s32) (temp_3_3 + (temp_3_3 >> 0x1F)) >> 1)) * 0x10;
    temp_6_3 = (0x814 - ((s32) (temp_2_4 + (temp_2_4 >> 0x1F)) >> 1)) * 0x10;
    M2C_FIELD(temp_11, s16 *, 0x40) = (s16) (temp_5_2 + 0x400);
    M2C_FIELD(temp_11, s16 *, 0x30) = temp_5_2;
    M2C_FIELD(temp_11, s16 *, 0x42) = (s16) (temp_6_3 + 0x200);
    M2C_FIELD(temp_11, s16 *, 0x32) = temp_6_3;
    var_13 = arg0;
    temp_7_2 = (u32) M2C_FIELD(arg0, s16 *, 0x294C);
    var_15 = 0x1F;
    temp_6_4 = (u32) M2C_FIELD(arg0, s16 *, 0x2950);
    temp_5_3 = (s32) (temp_6_4 + (temp_6_4 >> 0x1F)) >> 1;
    temp_4_2 = (0x800 - ((s32) (temp_7_2 + (temp_7_2 >> 0x1F)) >> 1)) * 0x10;
    temp_8 = (0x800 - temp_5_3) * 0x10;
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) ((((M2C_FIELD(arg0, s64 *, 0x40) & ~0x7FF & ((0x800FFFFF << 0xC) | 0xFFF) & 0xF800FFFF) | ((temp_7_2 & 0x7FF) << 0x10)) & ((((((0xF800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((temp_6_4 & 0x7FF) << 0x30));
    M2C_FIELD(arg0, s16 *, 0x20) = temp_4_2;
    M2C_FIELD(arg0, s16 *, 0x24) = temp_8;
    var_3_2 = temp_4_2;
    M2C_FIELD(arg0, s16 *, 0x30) = temp_4_2;
    M2C_FIELD(arg0, s16 *, 0x34) = temp_8;
    do {
        M2C_FIELD(var_13, s16 *, 0x70) = var_3_2;
        var_15 -= 1;
        var_3_2 += ((s32) (((s32) temp_7_2 > -1) ? temp_7_2 : (temp_7_2 + 0x1F)) >> 5) * 0x10;
        M2C_FIELD(var_13, s16 *, 0x72) = temp_8;
        M2C_FIELD(var_13, s16 *, 0x80) = var_3_2;
        M2C_FIELD(var_13, s16 *, 0x82) = (s16) ((temp_5_3 + 0x800) * 0x10);
        var_13 += 0x20;
    } while (var_15 >= 0);
    temp_3_4 = (u32) M2C_FIELD(arg0, s16 *, 0x294C);
    var_23 = 0;
    temp_6_5 = (u32) M2C_FIELD(arg0, s16 *, 0x2950);
    if (temp_3_4 > 1U) {
        do {
            var_23 += 1;
        } while ((u32) (1 << var_23) < temp_3_4);
    }
    var_22 = 0;
    if (temp_6_5 > 1U) {
        var_22 = 1;
loop_12:
        if ((u32) (1 << var_22) < temp_6_5) {
            var_22 += 1;
            goto loop_12;
        }
    }
    temp_5_4 = temp_3_4 + 0x3F;
    temp_23 = (var_23 & 0xF) << 0x1A;
    temp_22 = (var_22 & 0xF) << 0x1E;
    M2C_FIELD(temp_14, s64 *, 0x70) = (s64) ((((((((M2C_FIELD(temp_14, s64 *, 0x70) & ~0x3FFF & 0xFFF03FFF) | ((((s32) ((temp_5_4 > -1) ? temp_5_4 : (temp_3_4 + 0x7E)) >> 6) & 0x3F) << 0xE)) & 0xFC0FFFFF) | (((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x296C), s16 *, 0x1C) & 0x3F) << 0x14)) & 0xC3FFFFFF) | temp_23) & ((0x87FFFFFF * 8) | 7)) | temp_22);
    temp_11_2 = (0x800FFFFF << 0xC) | 0xFFF;
    M2C_FIELD(temp_14, s64 *, 0xE0) = (s64) ((((M2C_FIELD(temp_14, s64 *, 0xE0) & ~0x3FFF) | ((temp_3_4 * 0x10) & 0x3FF0)) & 0xC000FFFF) | (((temp_6_5 * 0x10) & 0x3FF0) << 0x10));
    M2C_FIELD(temp_14, s64 *, 0xC0) = (s64) (M2C_FIELD(temp_14, s64 *, 0xC0) & ~0x3FFF & 0xC000FFFF);
    temp_8_2 = (s32) M2C_FIELD(arg0, s16 *, 0x2940);
    temp_6_6 = (u32) M2C_FIELD(arg0, s16 *, 0x2944);
    temp_8_3 = (s32) (temp_8_2 + ((u32) temp_8_2 >> 0x1F)) >> 1;
    temp_9 = (s32) (temp_6_6 + (temp_6_6 >> 0x1F)) >> 1;
    temp_10 = ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2968), s16 *, 0x1C) & 0x3F) << 0x18;
    temp_8_4 = (0x800 - temp_8_3) * 0x10;
    M2C_FIELD(temp_14, s64 *, 0x60) = (s64) ((((((M2C_FIELD(temp_14, s64 *, 0x60) & ~0x1FF) | (M2C_FIELD(arg0, u32 *, 0x293C) & 0x1FF)) & 0xFFC0FFFF) | ((((s32) ((temp_8_2 > -1) ? temp_8_2 : (temp_8_2 + 0x3F)) >> 6) & 0x3F) << 0x10)) & 0xC0FFFFFF) | temp_10);
    temp_9_2 = (0x800 - temp_9) * 0x10;
    M2C_FIELD(temp_14, s16 *, 0xD0) = temp_8_4;
    M2C_FIELD(temp_14, s16 *, 0x40) = temp_8_4;
    M2C_FIELD(temp_14, s64 *, 0x50) = (s64) ((((M2C_FIELD(temp_14, s64 *, 0x50) & ~0x7FF & temp_11_2 & 0xF800FFFF) | ((temp_8_2 & 0x7FF) << 0x10)) & ((((((0xF800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((temp_6_6 & 0x7FF) << 0x30));
    M2C_FIELD(temp_14, s16 *, 0xD2) = temp_9_2;
    M2C_FIELD(temp_14, s16 *, 0xF0) = (s16) ((temp_8_3 + 0x800) * 0x10);
    M2C_FIELD(temp_14, s16 *, 0xF2) = (s16) ((temp_9 + 0x800) * 0x10);
    M2C_FIELD(temp_14, s16 *, 0x44) = temp_9_2;
    M2C_FIELD(temp_14, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s8 *, 0x2494) = 0x80;
    M2C_FIELD(&D_0042D2D0, s32 *, 0xC) = 0;
    func_002EFED0(arg0, &D_0042D2D0, temp_14, 0x100, 0x80, temp_9_2, temp_10, temp_11_2);
    func_002F0060(arg0, &D_0042D2D0);
    temp_8_5 = (s32) M2C_FIELD(arg0, s16 *, 0x294C);
    temp_9_3 = temp_8_5 + 0x3F;
    M2C_FIELD(temp_21, s64 *, 0x70) = (s64) ((((((((M2C_FIELD(temp_21, s64 *, 0x70) & ~0x3FFF & 0xFFF03FFF) | ((((s32) ((temp_9_3 > -1) ? temp_9_3 : (temp_8_5 + 0x7E)) >> 6) & 0x3F) << 0xE)) & 0xFC0FFFFF) | (((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x296C), s16 *, 0x1C) & 0x3F) << 0x14)) & 0xC3FFFFFF) | temp_23) & ((0x87FFFFFF * 8) | 7)) | temp_22);
    M2C_FIELD(temp_21, s64 *, 0xC0) = (s64) (M2C_FIELD(temp_21, s64 *, 0xC0) & ~0x3FFF & 0xC000FFFF);
    M2C_FIELD(temp_21, s64 *, 0xE0) = (s64) ((((M2C_FIELD(temp_21, s64 *, 0xE0) & ~0x3FFF) | ((temp_8_5 * 0x10) & 0x3FF0)) & 0xC000FFFF) | ((((s32) M2C_FIELD(arg0, s16 *, 0x2950) * 0x10) & 0x3FF0) << 0x10));
    temp_9_4 = (s32) M2C_FIELD(arg0, s16 *, 0x2940);
    temp_12 = (u32) M2C_FIELD(arg0, s16 *, 0x2944);
    temp_10_2 = (s32) (temp_12 + (temp_12 >> 0x1F)) >> 1;
    temp_9_5 = (s32) (temp_9_4 + ((u32) temp_9_4 >> 0x1F)) >> 1;
    temp_13 = (0x800 - temp_10_2) * 0x10;
    temp_8_6 = (((((M2C_FIELD(temp_21, s64 *, 0x60) & ~0x1FF) | (M2C_FIELD(arg0, u32 *, 0x293C) & 0x1FF)) & 0xFFC0FFFF) | ((((s32) ((temp_9_4 > -1) ? temp_9_4 : (temp_9_4 + 0x3F)) >> 6) & 0x3F) << 0x10)) & 0xC0FFFFFF) | (((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2968), s16 *, 0x1C) & 0x3F) << 0x18);
    M2C_FIELD(temp_21, s64 *, 0x60) = temp_8_6;
    temp_17 = (0x800 - temp_9_5) * 0x10;
    temp_11_3 = (temp_9_5 + 0x800) * 0x10;
    temp_10_3 = (temp_10_2 + 0x800) * 0x10;
    M2C_FIELD(temp_21, s16 *, 0x44) = (s16) (temp_13 + 8);
    M2C_FIELD(temp_21, s64 *, 0x50) = (s64) ((((M2C_FIELD(temp_21, s64 *, 0x50) & ~0x7FF & ((0x800FFFFF << 0xC) | 0xFFF) & 0xF800FFFF) | ((temp_9_4 & 0x7FF) << 0x10)) & ((((((0xF800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((temp_12 & 0x7FF) << 0x30));
    M2C_FIELD(temp_21, s16 *, 0xD2) = temp_13;
    M2C_FIELD(temp_21, s16 *, 0xF0) = temp_11_3;
    M2C_FIELD(temp_21, s16 *, 0xF2) = temp_10_3;
    M2C_FIELD(temp_21, s16 *, 0xD0) = temp_17;
    M2C_FIELD(temp_21, s16 *, 0x40) = temp_17;
    M2C_FIELD(temp_21, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s8 *, 0x2594) = 0x80;
    M2C_FIELD(&D_0042D2E8, s32 *, 0xC) = 0;
    func_002EFED0(arg0, &D_0042D2E8, temp_21, 0x100, temp_8_6, (s16) temp_9_5, (s64) temp_10_3, temp_11_3);
    func_002F0060(arg0, &D_0042D2E8);
    M2C_FIELD(arg0, s32 *, 0x2930) = 0;
    D_0043AFB0 = 0;
    FlushCache_2(0);
}
