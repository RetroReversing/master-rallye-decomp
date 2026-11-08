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

s32 D_002AD408(M2C_UNK);                            /* extern */
M2C_UNK func_0016DF68(s32, void *);                 /* extern */
M2C_UNK func_001C6B58(void *, void **, void **);    /* extern */
M2C_UNK func_00205628(void *, void *, M2C_UNK, M2C_UNK, f32); /* extern */
void *func_002662F8(s32, s32);                      /* extern */
M2C_UNK func_00266838(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0027C7A0(void *);                      /* extern */

void *func_00171C78(void *arg0, void *arg1) {
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
    void *sp70;
    M2C_UNK32 temp_f7;
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
    f32 temp_f8;
    void **temp_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;
    void *temp_6;

    temp_2 = func_002662F8(D_002AD408(0x1DC), arg1 + 0x5C);
    temp_4 = arg0 + 0x20;
    temp_5 = M2C_FIELD(temp_4, void ***, 4);
    sp70 = temp_2;
    if (temp_5 != M2C_FIELD(temp_4, s32 *, 8)) {
        if (temp_5 != NULL) {
            *temp_5 = temp_2;
        }
        M2C_FIELD(temp_4, void ***, 4) = (void **) (M2C_FIELD(temp_4, void ***, 4) + 4);
    } else {
        func_001C6B58(temp_4, temp_5, &sp70);
    }
    temp_2_2 = M2C_FIELD(sp70, void **, 0x14);
    M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, void *), 0x2C)(sp70 + M2C_FIELD(temp_2_2, s16 *, 0x28), sp70);
    temp_2_3 = M2C_FIELD(arg1, void **, 0x50);
    temp_f2 = M2C_FIELD(temp_2_3, f32 *, 0x50);
    temp_2_4 = temp_2_3 + 0x50;
    temp_4_2 = sp70 + 0xA0;
    temp_f0 = M2C_FIELD(temp_2_4, f32 *, 4);
    sp4 = temp_f0;
    temp_f1 = M2C_FIELD(temp_2_4, f32 *, 8);
    sp8 = temp_f1;
    M2C_FIELD(sp70, f32 *, 0xA0) = temp_f2;
    M2C_FIELD(temp_4_2, f32 *, 4) = temp_f0;
    M2C_FIELD(temp_4_2, f32 *, 8) = temp_f1;
    temp_3 = sp70 + 0xA0;
    temp_4_3 = sp70 + 0x144;
    M2C_FIELD(sp70, f32 *, 0x144) = (f32) M2C_FIELD(sp70, f32 *, 0xA0);
    M2C_FIELD(temp_4_3, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_4_3, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    temp_2_5 = M2C_FIELD(arg1, void **, 0x50);
    temp_f8 = M2C_FIELD(temp_2_5, f32 *, 0x40);
    temp_3_2 = temp_2_5 + 0x40;
    temp_4_4 = temp_2_5 + 0x30;
    temp_6 = temp_2_5 + 0x20;
    sp10 = temp_f8;
    temp_f6 = M2C_FIELD(temp_3_2, f32 *, 4);
    sp14 = temp_f6;
    temp_f7 = M2C_FIELD(temp_3_2, M2C_UNK32 *, 8);
    sp18 = temp_f7;
    temp_f3 = M2C_FIELD(temp_2_5, f32 *, 0x30);
    sp20 = temp_f3;
    temp_f4 = M2C_FIELD(temp_4_4, f32 *, 4);
    sp24 = temp_f4;
    temp_f5 = M2C_FIELD(temp_4_4, f32 *, 8);
    sp28 = temp_f5;
    temp_f0_2 = M2C_FIELD(temp_2_5, f32 *, 0x20);
    sp30 = temp_f0_2;
    temp_f1_2 = M2C_FIELD(temp_6, f32 *, 4);
    sp34 = temp_f1_2;
    temp_f2_2 = M2C_FIELD(temp_6, f32 *, 8);
    sp40 = temp_f0_2;
    sp4C = temp_f1_2;
    sp44 = temp_f3;
    sp48 = temp_f8;
    sp50 = temp_f4;
    sp54 = temp_f6;
    sp58 = temp_f2_2;
    sp5C = temp_f5;
    sp60 = temp_f7;
    sp38 = temp_f2_2;
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
    M2C_FIELD(sp70, M2C_UNK32 *, 0xDC) = sp60;
    func_00205628(sp70 + 0xAC, sp70 + 0xBC, M2C_ERROR(/* unknown instruction: sdr $a2, 0xcc($s0) */), M2C_ERROR(/* unknown instruction: sdr $a3, 0xd4($s0) */), temp_f2);
    func_0027C7A0(sp70);
    temp_3_3 = sp70 + 0xAC;
    temp_4_5 = sp70 + 0x134;
    M2C_FIELD(sp70, f32 *, 0x134) = (f32) M2C_FIELD(sp70, f32 *, 0xAC);
    M2C_FIELD(temp_4_5, f32 *, 4) = (f32) M2C_FIELD(temp_3_3, f32 *, 4);
    M2C_FIELD(temp_4_5, f32 *, 8) = (f32) M2C_FIELD(temp_3_3, f32 *, 8);
    M2C_FIELD(temp_4_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_3_3, f32 *, 0xC);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xc3($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0xbc($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0xcb($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0xc4($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xd3($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0xcc($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0xdb($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0xd4($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x157($v0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x150($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x15f($v0) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x158($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x167($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x16f($v0) */);
    M2C_FIELD(sp70, M2C_UNK32 *, 0x170) = (M2C_UNK32) M2C_FIELD(sp70, M2C_UNK32 *, 0xDC);
    func_00266838(sp70, 1, M2C_ERROR(/* unknown instruction: sdr $a2, 0x160($v0) */), M2C_ERROR(/* unknown instruction: sdr $a3, 0x168($v0) */));
    func_0016DF68(M2C_FIELD(arg0, s32 *, 0x34), sp70);
    return sp70;
}
