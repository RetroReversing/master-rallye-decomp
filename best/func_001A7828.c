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

void func_001A7828(void *arg0, void *arg1) {
    f32 var_3;
    f32 var_4;
    s32 temp_3;
    s32 temp_3_2;
    s32 var_2;
    s32 var_3_2;

    M2C_FIELD(arg1, s8 *, 0x6C) = 0;
    temp_3 = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    switch (temp_3) {                               /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_2 = 0x3F000000;
        var_3 = fabsf((M2C_FIELD(arg0, f32 *, 0x10) - 320.0f) * 0.5f) * 0.25f;
block_14:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (var_2 + M2C_BITWISE(s32, var_3));
        break;
    case 3:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        break;
    case 1:                                         /* switch 1 */
        var_2 = 0x3E800000;
        var_3 = fabsf((M2C_FIELD(arg0, f32 *, 0x10) - 640.0f) * 0.25f) / 30.0f;
        goto block_14;
    case 2:                                         /* switch 1 */
        var_2 = 0x3E800000;
        var_3 = fabsf(M2C_FIELD(arg0, f32 *, 0x10) * 0.25f) * 0.5f;
        goto block_14;
    }
    temp_3_2 = M2C_FIELD(arg0, s32 *, 0x38);
    switch (temp_3_2) {                             /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_3_2 = 0x3E000000;
        var_4 = fabsf((M2C_FIELD(arg0, f32 *, 0x10) - 320.0f) * 0.5f) * 0.125f;
block_29:
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + var_3_2 + M2C_BITWISE(s32, var_4));
        break;
    case 3:                                         /* switch 2 */
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, M2C_UNK32 *, 0x20) = 0x3F800000;
        break;
    case 1:                                         /* switch 2 */
        var_3_2 = 0x41A00000;
        var_4 = fabsf((M2C_FIELD(arg0, f32 *, 0x10) - 640.0f) * 0.25f) / 20.0f;
        goto block_29;
    case 2:                                         /* switch 2 */
        var_3_2 = 0x3E800000;
        var_4 = fabsf(M2C_FIELD(arg0, f32 *, 0x10) * 0.25f) * 0.0625f;
        goto block_29;
    }
    M2C_FIELD(arg0, f32 *, 0x1C) = 32.0f;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, f32 *, 0x18) = 32.0f;
}
