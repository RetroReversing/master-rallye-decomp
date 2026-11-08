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

M2C_UNK func_002313D0(u32, M2C_UNK);                /* extern */
M2C_UNK func_00231EB0(u32, M2C_UNK);                /* extern */
M2C_UNK func_00233068(u32, M2C_UNK);                /* extern */

void func_0022EBD8(void *arg0) {
    s32 temp_18_2;
    s32 temp_18_3;
    s32 temp_22;
    u32 temp_17;
    u32 temp_17_2;
    u32 temp_17_3;
    u32 var_16;
    u32 var_16_2;
    u32 var_16_3;
    u32 var_4;
    u32 var_4_2;
    u32 var_4_3;
    void *temp_18;
    void *temp_20;
    void *temp_21;

    temp_18 = arg0 + 0x10;
    temp_17 = M2C_FIELD(temp_18, u32 *, 4);
    var_16 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_22 = temp_17 - var_16;
    temp_20 = arg0 + 0x1C;
    temp_21 = arg0 + 0x28;
    if (var_16 < temp_17) {
        var_4 = var_16;
        do {
            func_00231EB0(var_4, 2);
            var_16 += 0x1C;
            var_4 = var_16;
        } while (var_16 < temp_17);
    }
    M2C_FIELD(temp_18, u32 *, 4) = (u32) (M2C_FIELD(temp_18, u32 *, 4) - temp_22);
    temp_17_2 = M2C_FIELD(temp_20, u32 *, 4);
    var_16_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    temp_18_2 = temp_17_2 - var_16_2;
    if (var_16_2 < temp_17_2) {
        var_4_2 = var_16_2;
        do {
            func_002313D0(var_4_2, 2);
            var_16_2 += 0x3C;
            var_4_2 = var_16_2;
        } while (var_16_2 < temp_17_2);
    }
    M2C_FIELD(temp_20, u32 *, 4) = (u32) (M2C_FIELD(temp_20, u32 *, 4) - temp_18_2);
    temp_17_3 = M2C_FIELD(temp_21, u32 *, 4);
    var_16_3 = M2C_FIELD(arg0, u32 *, 0x28);
    temp_18_3 = temp_17_3 - var_16_3;
    if (var_16_3 < temp_17_3) {
        var_4_3 = var_16_3;
        do {
            func_00233068(var_4_3, 2);
            var_16_3 += 0x10;
            var_4_3 = var_16_3;
        } while (var_16_3 < temp_17_3);
    }
    M2C_FIELD(temp_21, u32 *, 4) = (u32) (M2C_FIELD(temp_21, u32 *, 4) - temp_18_3);
}
