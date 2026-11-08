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

void *func_00376DE8(void *arg0, void *arg1, u32 arg2) {
    s32 temp_11;
    s32 temp_2_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_3_5;
    s32 temp_3_6;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    u32 temp_12;
    void **temp_3_8;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_4;
    void *temp_3_7;
    void *temp_3_9;
    void *temp_4;
    void *var_13;
    void *var_5;
    void *var_5_2;
    void *var_5_3;
    void *var_7;
    void *var_9;

    var_9 = arg1;
loop_1:
    temp_11 = M2C_FIELD(var_9, s32 *, 4) - 1;
    temp_12 = 1 << temp_11;
    if ((temp_12 >= arg2) && (temp_12 >= 2U)) {
        temp_5 = M2C_FIELD(arg0, s32 *, 0x1C20C);
        if (temp_5 == 0x800) {
            var_5 = NULL;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C20C) = (s32) (temp_5 + 1);
            temp_2 = arg0 + ((temp_5 * 0x10) + 0x1420C);
            M2C_FIELD(temp_2, s32 *, 4) = 0;
            M2C_FIELD(temp_2, s32 *, 0xC) = 0xFFFFFFFF;
            var_5 = temp_2;
            M2C_FIELD(temp_2, s32 *, 8) = 0;
            M2C_FIELD(temp_2, s32 *, 0) = 0;
        }
        M2C_FIELD(var_9, s32 *, 0x10) = 3;
        M2C_FIELD(var_5, void **, 0) = var_9;
        M2C_FIELD(var_9, void **, 0x14) = var_5;
        temp_3 = M2C_FIELD(arg0, void **, 0x1E8);
        M2C_FIELD(arg0, void **, 0x1E8) = var_5;
        M2C_FIELD(temp_3, void **, 4) = var_5;
        M2C_FIELD(var_5, void **, 8) = temp_3;
        M2C_FIELD(var_5, void **, 4) = (void *) (arg0 + 0x1E0);
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0x14200);
        temp_3_3 = temp_3_2 - 1;
        if (temp_3_2 == 0) {
            var_13 = NULL;
        } else {
            M2C_FIELD(arg0, s32 *, 0x14200) = temp_3_3;
            temp_3_4 = M2C_FIELD((arg0 + 0x10000 + (temp_3_3 * 4)), void **, 0x2200);
            M2C_FIELD(temp_3_4, s32 *, 0xC) = -1;
            var_13 = temp_3_4;
            M2C_FIELD(temp_3_4, s32 *, 0) = 0;
            M2C_FIELD(temp_3_4, s32 *, 4) = 0;
            M2C_FIELD(temp_3_4, s32 *, 8) = 0;
            M2C_FIELD(temp_3_4, s32 *, 0x10) = 0;
            M2C_FIELD(temp_3_4, s32 *, 0x14) = 0;
            M2C_FIELD(temp_3_4, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_3_4, s32 *, 0x20) = 0;
            M2C_FIELD(temp_3_4, void **, 0x18) = var_9;
            M2C_FIELD(arg0, s32 *, 0x14204) = (s32) (M2C_FIELD(arg0, s32 *, 0x14204) + 1);
        }
        temp_3_5 = M2C_FIELD(arg0, s32 *, 0x14200);
        temp_3_6 = temp_3_5 - 1;
        if (temp_3_5 == 0) {
            var_7 = NULL;
        } else {
            M2C_FIELD(arg0, s32 *, 0x14200) = temp_3_6;
            temp_3_7 = M2C_FIELD((arg0 + 0x10000 + (temp_3_6 * 4)), void **, 0x2200);
            M2C_FIELD(temp_3_7, s32 *, 0xC) = -1;
            var_7 = temp_3_7;
            M2C_FIELD(temp_3_7, s32 *, 0) = 0;
            M2C_FIELD(temp_3_7, s32 *, 4) = 0;
            M2C_FIELD(temp_3_7, s32 *, 8) = 0;
            M2C_FIELD(temp_3_7, s32 *, 0x10) = 0;
            M2C_FIELD(temp_3_7, s32 *, 0x14) = 0;
            M2C_FIELD(temp_3_7, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_3_7, s32 *, 0x20) = 0;
            M2C_FIELD(temp_3_7, void **, 0x18) = var_9;
            M2C_FIELD(arg0, s32 *, 0x14204) = (s32) (M2C_FIELD(arg0, s32 *, 0x14204) + 1);
        }
        M2C_FIELD(var_13, s32 *, 4) = temp_11;
        M2C_FIELD(var_13, s32 *, 0) = (s32) M2C_FIELD(var_9, s32 *, 0);
        M2C_FIELD(var_7, s32 *, 4) = temp_11;
        M2C_FIELD(var_7, s32 *, 0) = (s32) (M2C_FIELD(var_9, s32 *, 0) + temp_12);
        temp_5_2 = M2C_FIELD(arg0, s32 *, 0x1C20C);
        if (temp_5_2 == 0x800) {
            var_5_2 = NULL;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C20C) = (s32) (temp_5_2 + 1);
            temp_2_2 = arg0 + ((temp_5_2 * 0x10) + 0x1420C);
            M2C_FIELD(temp_2_2, s32 *, 4) = 0;
            M2C_FIELD(temp_2_2, s32 *, 0xC) = 0xFFFFFFFF;
            var_5_2 = temp_2_2;
            M2C_FIELD(temp_2_2, s32 *, 8) = 0;
            M2C_FIELD(temp_2_2, s32 *, 0) = 0;
        }
        M2C_FIELD(var_7, s32 *, 0x10) = 2;
        M2C_FIELD(var_5_2, void **, 0) = var_7;
        M2C_FIELD(var_7, void **, 0x14) = var_5_2;
        temp_2_3 = M2C_FIELD(var_7, s32 *, 4) * 0x10;
        temp_3_8 = arg0 + 8 + temp_2_3;
        temp_4 = *temp_3_8;
        *temp_3_8 = var_5_2;
        M2C_FIELD(temp_4, void **, 4) = var_5_2;
        M2C_FIELD(var_5_2, void **, 8) = temp_4;
        M2C_FIELD(var_5_2, void **, 4) = (void *) (arg0 + temp_2_3);
        M2C_FIELD(var_9, void **, 0x20) = var_7;
        M2C_FIELD(var_9, void **, 0x1C) = var_13;
        var_9 = var_13;
        goto loop_1;
    }
    temp_5_3 = M2C_FIELD(arg0, s32 *, 0x1C20C);
    if (temp_5_3 == 0x800) {
        var_5_3 = NULL;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C20C) = (s32) (temp_5_3 + 1);
        temp_2_4 = arg0 + ((temp_5_3 * 0x10) + 0x1420C);
        M2C_FIELD(temp_2_4, s32 *, 4) = 0;
        M2C_FIELD(temp_2_4, s32 *, 0xC) = 0xFFFFFFFF;
        var_5_3 = temp_2_4;
        M2C_FIELD(temp_2_4, s32 *, 8) = 0;
        M2C_FIELD(temp_2_4, s32 *, 0) = 0;
    }
    M2C_FIELD(var_9, s32 *, 0x10) = 4;
    M2C_FIELD(var_5_3, void **, 0) = var_9;
    M2C_FIELD(var_9, void **, 0x14) = var_5_3;
    temp_3_9 = M2C_FIELD(arg0, void **, 0x1E8);
    M2C_FIELD(arg0, void **, 0x1E8) = var_5_3;
    M2C_FIELD(temp_3_9, void **, 4) = var_5_3;
    M2C_FIELD(var_5_3, void **, 8) = temp_3_9;
    M2C_FIELD(var_5_3, void **, 4) = (void *) (arg0 + 0x1E0);
    return var_9;
}
