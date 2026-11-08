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

M2C_UNK func_003770A0(void *, s32, void *, M2C_UNK, s32); /* extern */

void func_00377378(void *arg0, void *arg1) {
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_5;
    void **temp_3_2;
    void *temp_2;
    void *temp_4_2;
    void *temp_6;
    void *var_6;

    temp_6 = M2C_FIELD(arg1, void **, 0x14);
    M2C_FIELD(arg1, void **, 0x14) = NULL;
    M2C_FIELD(M2C_FIELD(temp_6, void **, 8), void **, 4) = (void *) M2C_FIELD(temp_6, void **, 4);
    M2C_FIELD(M2C_FIELD(temp_6, void **, 4), void **, 8) = (void *) M2C_FIELD(temp_6, void **, 8);
    temp_3 = M2C_FIELD(arg0, s32 *, 0x1C20C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C20C) = temp_3;
    if (temp_6 != (arg0 + ((temp_3 * 0x10) + 0x1420C))) {
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($a2) */);
        M2C_FIELD(M2C_FIELD(temp_6, void **, 0), void **, 0x14) = temp_6;
        M2C_FIELD(M2C_FIELD(temp_6, void **, 8), void **, 4) = temp_6;
        M2C_FIELD(M2C_FIELD(temp_6, void **, 4), void **, 8) = temp_6;
    }
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x1C20C);
    if (temp_4 == 0x800) {
        var_6 = NULL;
    } else {
        temp_2 = arg0 + ((temp_4 * 0x10) + 0x1420C);
        M2C_FIELD(arg0, s32 *, 0x1C20C) = (s32) (temp_4 + 1);
        M2C_FIELD(temp_2, s32 *, 4) = 0;
        M2C_FIELD(temp_2, s32 *, 0xC) = 0xFFFFFFFF;
        var_6 = temp_2;
        M2C_FIELD(temp_2, s32 *, 8) = 0;
        M2C_FIELD(temp_2, s32 *, 0) = 0;
    }
    M2C_FIELD(arg1, s32 *, 0x10) = 2;
    M2C_FIELD(var_6, void **, 0) = arg1;
    M2C_FIELD(arg1, void **, 0x14) = var_6;
    temp_2_2 = M2C_FIELD(arg1, s32 *, 4) * 0x10;
    temp_3_2 = arg0 + 8 + temp_2_2;
    temp_4_2 = *temp_3_2;
    *temp_3_2 = var_6;
    M2C_FIELD(temp_4_2, void **, 4) = var_6;
    M2C_FIELD(var_6, void **, 8) = temp_4_2;
    M2C_FIELD(var_6, void **, 4) = (void *) (arg0 + temp_2_2);
    temp_5 = M2C_FIELD(arg1, s32 *, 0x18);
    if (temp_5 != 0) {
        func_003770A0(arg0, temp_5, var_6, 0x1420C, arg0 + 0x18000);
    }
    M2C_FIELD(arg0, s32 *, 0x14208) = (s32) (M2C_FIELD(arg0, s32 *, 0x14208) - 1);
}
