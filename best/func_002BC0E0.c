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

M2C_UNK func_002BC068(void *);                      /* extern */
M2C_UNK func_002BC1E8(void *, M2C_UNK *);           /* extern */
s32 func_002BC6C0(void *);                          /* extern */
extern M2C_UNK D_00428868;

void func_002BC0E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = arg3;
        M2C_FIELD(arg0, s32 *, 0x20) = arg4;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x13($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0xc($s0) */);
        if (arg5 != 0) {
            func_002BC068(arg0);
        }
        M2C_FIELD(arg0, s32 *, 4) = func_002BC6C0(arg0 + 0xC);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x13($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xc($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($s1) */);
        M2C_FIELD(arg0, s32 *, 0x14) = arg2;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_002BC1E8(arg0, &D_00428868);
            goto block_6;
        }
        goto block_8;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
block_6:
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = 1;
        return;
    }
block_8:
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
