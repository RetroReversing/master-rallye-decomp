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

f32 func_001E3610(s32, s32);                        /* extern */
extern s32 D_004267B0;

void func_00261E10(void *arg0) {
    f32 temp_f1;
    s32 var_2;
    void *temp_4;

    temp_f1 = func_001E3610(func_001E4280(), arg0 + 0x10) * M2C_FIELD(arg0, f32 *, 0x20);
    temp_4 = M2C_FIELD(arg0, void **, 0xC);
    if ((temp_f1 >= 0.05f) && (M2C_FIELD(temp_4, f32 *, 0x20) < 0.05f)) {
        var_2 = D_004267B0 + 1;
        goto block_6;
    }
    if ((temp_f1 < 0.05f) && (M2C_FIELD(temp_4, f32 *, 0x20) >= 0.05f)) {
        var_2 = D_004267B0 - 1;
block_6:
        D_004267B0 = var_2;
    }
    M2C_FIELD(temp_4, f32 *, 0x20) = temp_f1;
    M2C_FIELD(temp_4, s32 *, 8) = 1;
}
