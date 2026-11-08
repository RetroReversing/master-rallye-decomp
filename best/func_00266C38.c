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

extern M2C_UNK D_00426450;
extern M2C_UNK D_00426508;

void func_00266C38(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_2;
    void *temp_2_2;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_2 = arg0 + 0x28;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x28) = 1.0f;
    temp_7 = arg0 + 0x104;
    M2C_FIELD(temp_2, f32 *, 0x20) = 1.0f;
    temp_8 = arg0 + 0x110;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    temp_9 = arg0 + 0x11C;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_10 = arg0 + 0x128;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    temp_11 = arg0 + 0x18C;
    M2C_FIELD(temp_2, f32 *, 0x10) = 1.0f;
    temp_12 = arg0 + 0x198;
    M2C_FIELD(temp_2, s32 *, 0x14) = 0;
    temp_13 = arg0 + 0x1A4;
    M2C_FIELD(temp_2, s32 *, 0x18) = 0;
    M2C_FIELD(temp_2, s32 *, 0x1C) = 0;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0xf($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, 0x8($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $t3, 0x17($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $t3, 0x10($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x53($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x4c($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0x5b($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, 0x54($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t3, 0x63($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t3, 0x5c($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x1f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x18($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x6b($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x64($a0) */);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(&D_00426450, s32 *, 0x20);
    M2C_ERROR(/* unknown instruction: ldl $s1, 0x7($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $s1, ($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0xf($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, 0x8($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $t3, 0x17($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $t3, 0x10($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $s1, 0x77($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $s1, 0x70($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0x7f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, 0x78($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t3, 0x87($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t3, 0x80($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $s1, 0x1f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $s1, 0x18($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $s1, 0x8f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $s1, 0x88($a0) */);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(&D_00426450, s32 *, 0x20);
    temp_2_2 = arg0 + 0x1B0;
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x11C) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x128) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18C) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_11, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x198) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1A4) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1B0) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
}
