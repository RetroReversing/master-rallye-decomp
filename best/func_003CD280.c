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

M2C_UNK FlushCache_2(M2C_UNK);                      /* extern */
s32 PollSema_2(s32);                                /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK func_003FAD88(void *, s8 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_004361F0;
extern s32 D_004361F4;
extern M2C_UNK D_0049BC40;
extern M2C_UNK D_0049BC80;
extern M2C_UNK D_0049BCF0;
extern M2C_UNK D_0049D200;

s32 func_003CD280(s32 arg0, s32 arg1, s8 *arg2, s32 arg3, s32 arg4) {
    s32 temp_2;

    if (PollSema_2(D_004361F4) < 0) {
        return -0xC8;
    }
    if (M2C_FIELD(&D_0049BC40, s32 *, 0x24) == 0) {
        SignalSema_2(D_004361F4);
        return -0x64;
    }
    if ((arg2 == NULL) || (*arg2 == 0)) {
        SignalSema_2(D_004361F4);
        return -0xD2;
    }
    M2C_FIELD(&D_0049BCF0, s32 *, 0) = arg0;
    M2C_FIELD(&D_0049BCF0, s32 *, 4) = arg1;
    M2C_FIELD(&D_0049BCF0, s32 *, 8) = (s32) (arg4 & 7);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, ($s6) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($s6) */);
    M2C_ERROR(/* unknown instruction: ldl $a4, 0x17($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a4, 0x10($s6) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a5) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, ($a5) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a5) */);
    M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a5) */);
    M2C_ERROR(/* unknown instruction: sdl $a4, 0x17($a5) */);
    M2C_ERROR(/* unknown instruction: sdr $a4, 0x10($a5) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x1f($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x18($s6) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x27($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x20($s6) */);
    M2C_ERROR(/* unknown instruction: ldl $a4, 0x2f($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a4, 0x28($s6) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x1f($a5) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x18($a5) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x27($a5) */);
    M2C_ERROR(/* unknown instruction: sdr $a3, 0x20($a5) */);
    M2C_ERROR(/* unknown instruction: sdl $a4, 0x2f($a5) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x37($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x30($s6) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x3f($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x38($s6) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x37($a5) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x30($a5) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x3f($a5) */);
    M2C_FIELD(&D_0049BCF0, M2C_UNK **, 0x10) = &D_0049BC80;
    func_003FAD88(&D_0049BCF0 + 0x14, arg2, 0x3FF, M2C_ERROR(/* unknown instruction: sdr $a3, 0x38($a5) */), M2C_ERROR(/* unknown instruction: sdr $a4, 0x28($a5) */), &D_0049BC80);
    M2C_FIELD(&D_0049BCF0, s8 *, 0x413) = 0;
    FlushCache_2(0);
    temp_2 = func_00405E90(&D_0049BC40, 0xE, 1, &D_0049BCF0, 0x414, &D_0049D200, 4, 0, 0);
    if (temp_2 == 0) {
        D_004361F0 = 0xE;
    } else {
        SignalSema_2(D_004361F4);
    }
    return temp_2;
}
