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

M2C_UNK func_001E3D10(s32, void *, M2C_UNK);        /* extern */

void func_0029CEA8(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        temp_f3 = (f32) M2C_FIELD(arg0, s32 *, 0x30);
        temp_f1_2 = temp_f1 + M2C_FIELD(arg0, f32 *, 0x2C);
        M2C_FIELD(arg0, f32 *, 0x24) = temp_f1_2;
        if (fabsf(temp_f3) <= fabsf(temp_f1_2)) {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x50) = temp_f3;
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x50) = temp_f1_2;
        }
        temp_f3_2 = (f32) M2C_FIELD(arg0, s32 *, 0x44);
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x40);
        M2C_FIELD(arg0, f32 *, 0x38) = temp_f1_3;
        if (fabsf(temp_f3_2) <= fabsf(temp_f1_3)) {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x54) = temp_f3_2;
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x54) = temp_f1_3;
        }
        if ((fabsf((f32) M2C_FIELD(arg0, s32 *, 0x30)) <= fabsf(M2C_FIELD(arg0, f32 *, 0x24))) && (fabsf((f32) M2C_FIELD(arg0, s32 *, 0x44)) <= fabsf(M2C_FIELD(arg0, f32 *, 0x38)))) {
            func_001E3D10(func_001E4280(), arg0 + 0x10, 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    } else {
        temp_f3_3 = M2C_FIELD(arg0, f32 *, 0x20);
        temp_f1_4 = temp_f1 - M2C_FIELD(arg0, f32 *, 0x2C);
        M2C_FIELD(arg0, f32 *, 0x24) = temp_f1_4;
        if (fabsf(temp_f1_4) <= fabsf(temp_f3_3)) {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x50) = temp_f3_3;
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x50) = temp_f1_4;
        }
        temp_f3_4 = M2C_FIELD(arg0, f32 *, 0x34);
        temp_f1_5 = M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x40);
        M2C_FIELD(arg0, f32 *, 0x38) = temp_f1_5;
        if (fabsf(temp_f1_5) <= fabsf(temp_f3_4)) {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x54) = temp_f3_4;
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x54) = temp_f1_5;
        }
        if ((fabsf(M2C_FIELD(arg0, f32 *, 0x24)) <= fabsf(M2C_FIELD(arg0, f32 *, 0x20))) && (fabsf(M2C_FIELD(arg0, f32 *, 0x38)) <= fabsf(M2C_FIELD(arg0, f32 *, 0x34)))) {
            func_001E3D10(func_001E4280(), arg0 + 0xC, 0);
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
    }
}
