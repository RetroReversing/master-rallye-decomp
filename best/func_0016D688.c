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

M2C_UNK func_00205628(void *, void *, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_002670B0(void *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK32); /* extern */
M2C_UNK func_0027C7A0(void *);                      /* extern */
extern M2C_UNK D_00426508;

void func_0016D688(void *arg0, void *arg1) {
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    M2C_UNK32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    M2C_UNK32 sp60;
    M2C_UNK32 temp_8;
    M2C_UNK32 temp_f8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_4;
    void *temp_4_2;
    void *temp_6;
    void *temp_7;

    temp_2 = arg1 + 0x30;
    temp_6 = arg1 + 0x20;
    temp_7 = arg1 + 0x10;
    temp_f2 = M2C_FIELD(arg1, f32 *, 0x30);
    temp_f1 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f0 = M2C_FIELD(temp_2, f32 *, 4);
    temp_2_2 = M2C_FIELD(arg0, void **, 4);
    sp4 = temp_f0;
    sp8 = temp_f1;
    temp_3 = temp_2_2 + 0xA0;
    M2C_FIELD(temp_2_2, f32 *, 0xA0) = temp_f2;
    M2C_FIELD(temp_3, f32 *, 4) = temp_f0;
    M2C_FIELD(temp_3, f32 *, 8) = temp_f1;
    temp_2_3 = M2C_FIELD(arg0, void **, 4);
    temp_3_2 = temp_2_3 + 0xA0;
    temp_4 = temp_2_3 + 0x144;
    M2C_FIELD(temp_2_3, f32 *, 0x144) = (f32) M2C_FIELD(temp_2_3, f32 *, 0xA0);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
    temp_f8 = M2C_FIELD(temp_6, M2C_UNK32 *, 8);
    temp_f6 = M2C_FIELD(temp_6, f32 *, 4);
    temp_f4 = M2C_FIELD(arg1, f32 *, 0x20);
    temp_f7 = M2C_FIELD(temp_7, f32 *, 8);
    temp_f5 = M2C_FIELD(temp_7, f32 *, 4);
    temp_f2_2 = M2C_FIELD(arg1, f32 *, 0x10);
    temp_f0_2 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 4);
    sp10 = temp_f4;
    sp14 = temp_f6;
    sp18 = temp_f8;
    sp20 = temp_f2_2;
    sp30 = temp_f0_2;
    sp24 = temp_f5;
    sp28 = temp_f7;
    sp34 = temp_f3;
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 8);
    temp_16 = M2C_FIELD(arg0, void **, 4);
    sp40 = temp_f0_2;
    sp58 = temp_f1_2;
    sp38 = temp_f1_2;
    sp44 = temp_f2_2;
    sp48 = temp_f4;
    sp4C = temp_f3;
    sp50 = temp_f5;
    sp54 = temp_f6;
    sp5C = temp_f7;
    sp60 = temp_f8;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x47($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x40($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x4f($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x48($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x57($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x50($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x5f($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x58($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0xc3($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0xbc($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xcb($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0xc4($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0xd3($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0xdb($s0) */);
    M2C_FIELD(temp_16, M2C_UNK32 *, 0xDC) = sp60;
    func_00205628(temp_16 + 0xAC, temp_16 + 0xBC, M2C_ERROR(/* unknown instruction: sdr $a2, 0xcc($s0) */), M2C_ERROR(/* unknown instruction: sdr $a3, 0xd4($s0) */), temp_f2);
    func_0027C7A0(temp_16);
    temp_4_2 = M2C_FIELD(arg0, void **, 4);
    temp_2_4 = temp_4_2 + 0xAC;
    temp_3_3 = temp_4_2 + 0x134;
    M2C_FIELD(temp_4_2, f32 *, 0x134) = (f32) M2C_FIELD(temp_4_2, f32 *, 0xAC);
    M2C_FIELD(temp_3_3, f32 *, 4) = (f32) M2C_FIELD(temp_2_4, f32 *, 4);
    M2C_FIELD(temp_3_3, f32 *, 8) = (f32) M2C_FIELD(temp_2_4, f32 *, 8);
    M2C_FIELD(temp_3_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_2_4, f32 *, 0xC);
    M2C_ERROR(/* unknown instruction: ldl $a4, 0xc3($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $a4, 0xbc($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0xcb($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0xc4($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xd3($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0xcc($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0xdb($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0xd4($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a4, 0x157($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a4, 0x150($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x15f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x158($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x167($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x160($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x16f($a0) */);
    temp_8 = M2C_FIELD(temp_4_2, M2C_UNK32 *, 0xDC);
    M2C_FIELD(temp_4_2, M2C_UNK32 *, 0x170) = temp_8;
    temp_2_5 = M2C_FIELD(arg0, void **, 4);
    temp_3_4 = temp_2_5 + 0x110;
    M2C_FIELD(temp_2_5, f32 *, 0x110) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_3_4, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_3_4, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    temp_2_6 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_2_6, f32 *, 0x104) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    temp_2_7 = temp_2_6 + 0x104;
    M2C_FIELD(temp_2_7, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_2_7, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    func_002670B0(M2C_FIELD(arg0, void **, 4), &D_00426508, &D_00426508, M2C_ERROR(/* unknown instruction: sdr $a3, 0x168($a0) */), temp_8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C4) = 0;
}
