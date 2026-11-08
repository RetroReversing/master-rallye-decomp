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

extern s32 D_0043C0EC;
extern void *D_004A9950;

void *func_003EEDB0(s32 arg0) {
    s32 *temp_11_2;
    s32 *temp_11_3;
    s32 *temp_9;
    s32 *temp_9_2;
    s32 temp_14;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3_4;
    s32 temp_6;
    s32 var_4;
    s32 var_6;
    u32 temp_11;
    u32 temp_12;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_5;
    u32 temp_5_2;
    u32 var_7;
    void **temp_13;
    void **temp_4;
    void **var_8;
    void *temp_10;
    void *temp_3_3;
    void *var_12;

    var_4 = -1;
    temp_11 = (((arg0 != 0) ? arg0 : 1) + 0x8B) & 0xFFFFFF80;
    var_7 = 0xFFFFFFFF;
    var_6 = 0;
    var_12 = NULL;
    if (D_0043C0EC > 0) {
        var_8 = &D_004A9950;
        do {
            temp_5 = M2C_FIELD(*var_8, u32 *, 4);
            if ((temp_11 < temp_5) && (temp_5 < var_7)) {
                var_7 = temp_5;
                var_4 = var_6;
            }
            var_6 += 1;
            var_8 += 4;
        } while (var_6 < D_0043C0EC);
    }
    temp_14 = D_0043C0EC;
    if (var_4 >= 0) {
        temp_6 = temp_14 - 1;
        temp_4 = &(&D_004A9950)[var_4];
        temp_10 = *temp_4;
        temp_13 = &(&D_004A9950)[temp_6];
        D_0043C0EC = temp_6;
        *temp_4 = *temp_13;
        temp_5_2 = M2C_FIELD(temp_10, u32 *, 4);
        temp_12 = temp_5_2 - temp_11;
        if (temp_12 > 0x7FFFU) {
            temp_3 = M2C_FIELD(temp_10, u32 *, 0);
            M2C_FIELD(temp_10, u32 *, 4) = temp_11;
            temp_3_2 = (temp_3 & 0x3FFFFFFF) | (((temp_3 >> 0x1E) | 2) << 0x1E);
            M2C_FIELD(temp_10, u32 *, 0) = temp_3_2;
            temp_9 = temp_10 - (temp_3_2 & 0x3FFFFFFF);
            temp_3_3 = temp_10 + temp_11;
            temp_2 = *temp_9;
            temp_11_2 = temp_3_3 + temp_12;
            *temp_9 = (temp_2 & 0x3FFFFFFF) | (temp_2 & 0x40000000);
            M2C_FIELD(temp_3_3, s32 *, 0) = (s32) (temp_11 & 0x3FFFFFFF);
            M2C_FIELD(temp_3_3, s32 *, 8) = 0xDEAFBEEF;
            M2C_FIELD(temp_3_3, u32 *, 4) = temp_12;
            *temp_11_2 = (*temp_11_2 & 0xC0000000) | (temp_12 & 0x3FFFFFFF);
            *temp_13 = temp_3_3;
            D_0043C0EC = temp_14;
        } else {
            temp_11_3 = temp_10 + temp_5_2;
            temp_9_2 = temp_10 - (M2C_FIELD(temp_10, u32 *, 0) & 0x3FFFFFFF);
            temp_2_2 = *temp_9_2;
            *temp_9_2 = (temp_2_2 & 0x3FFFFFFF) | (temp_2_2 & 0x40000000);
            temp_3_4 = *temp_11_3;
            *temp_11_3 = (temp_3_4 & 0x3FFFFFFF) | (temp_3_4 & 0x80000000);
        }
        var_12 = temp_10 + 0xC;
        M2C_FIELD(temp_10, s32 *, 8) = 0xDEADF00D;
    }
    return var_12;
}
