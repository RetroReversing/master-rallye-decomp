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

M2C_UNK func_003CA590(s32, s32, M2C_UNK);           /* extern */
s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_0049B980;
extern M2C_UNK D_0049BBC0;

s32 func_003CAEC0(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_2;

    M2C_FIELD(&D_0049BBC0, s32 *, 4) = arg0;
    M2C_FIELD(&D_0049BBC0, s32 *, 0) = 0xB;
    M2C_FIELD(&D_0049BBC0, s32 *, 8) = arg1;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x13($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0xc($s0) */);
    M2C_FIELD(&D_0049BBC0, M2C_UNK *, 0x14) = M2C_UNALIGNED32(M2C_FIELD(arg2, M2C_UNK *, 8));
    if (func_00405E90(&D_0049B980, 1, 0, &D_0049BBC0, 0x80, &D_0049BBC0, 0x80, 0, 0) >= 0) {
        temp_2 = M2C_FIELD(&D_0049BBC0, s32 *, 0x1C);
        if (M2C_FIELD(&D_0049BBC0, s32 *, 0x1C) == 1) {
            func_003CA590(arg0, arg1, 2);
        }
        return temp_2;
    }
    return 0;
}
