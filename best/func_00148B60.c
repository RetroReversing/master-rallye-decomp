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

M2C_UNK func_00148C88(void *, void *, s32);         /* extern */
s32 func_001E3598(s32, s32);                        /* extern */
s32 func_001E38F0(s32, s32);                        /* extern */

void func_00148B60(void *arg0, void *arg1) {
    f32 sp4;
    f32 sp8;
    M2C_UNK32 spC;
    s32 temp_17;
    s32 temp_3_2;
    s32 var_17;
    void *temp_3;
    void *temp_4;

    if (M2C_FIELD(arg1, void **, 0x4C) != NULL) {
        temp_17 = arg0 + 0x14;
        if (func_001E38F0(func_001E4280(), temp_17) != 0) {
            temp_4 = M2C_FIELD(arg1, void **, 0x4C);
            sp4 = 1.0f;
            sp8 = 1.0f;
            temp_3 = temp_4 + 0x10;
            spC = 0;
            M2C_FIELD(temp_4, f32 *, 0x10) = 1.0f;
            M2C_FIELD(temp_3, f32 *, 4) = sp4;
            M2C_FIELD(temp_3, f32 *, 8) = 1.0f;
            M2C_FIELD(temp_3, M2C_UNK32 *, 0xC) = spC;
            M2C_FIELD(temp_4, s32 *, 0x88) = (s32) (M2C_FIELD(temp_4, s32 *, 0x88) + 1);
        } else {
            var_17 = func_001E3650(func_001E4280(), temp_17);
            if (func_001E3598(func_001E4280(), arg0 + 0x18) != 0) {
                var_17 = -1;
                M2C_FIELD(arg0, s32 *, 0xD0) = 1;
            }
            temp_3_2 = M2C_FIELD(arg0, s32 *, 0xBC);
            if (temp_3_2 == -1) {
                if (var_17 != temp_3_2) {
                    M2C_FIELD(arg0, s32 *, 0xBC) = var_17;
                    M2C_FIELD(arg0, f32 *, 0xCC) = 0.03333333f;
                    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
                    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
                    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
                }
            } else {
                func_00148C88(arg0, arg1, var_17);
            }
        }
    }
}
