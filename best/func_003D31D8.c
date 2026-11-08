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

M2C_UNK func_003D4D70(s32, void **, s32);           /* extern */
s32 func_003D8118(void *, void **);                 /* extern */

u8 func_003D31D8(void ***arg0) {
    s32 temp_6;
    u8 var_2;
    u8 var_5;
    void **temp_3;
    void **temp_5;
    void *temp_16;
    void *temp_2;

    temp_5 = *arg0;
    var_2 = -1U;
    if (M2C_FIELD(temp_5, u8 *, 0x1A) == 0) {
        temp_6 = M2C_FIELD(temp_5, s32 *, 4);
        if (temp_6 != 0) {
            temp_2 = M2C_FIELD(temp_5, void **, 0);
            if (M2C_FIELD(temp_2, s32 *, 8) == M2C_FIELD(temp_2, s32 *, 4)) {
                func_003D4D70(temp_6, temp_5, temp_6);
            }
        }
        temp_16 = M2C_FIELD(*arg0, void **, 0);
        if ((u32) M2C_FIELD(temp_16, u32 *, 4) >= (u32) M2C_FIELD(temp_16, u32 *, 8)) {
            var_5 = -1U;
            if (func_003D8118(temp_16, *arg0) != -1) {
                goto block_7;
            }
        } else {
block_7:
            var_5 = *(u8 *) M2C_FIELD(temp_16, u32 *, 4);
        }
        var_2 = var_5;
        if (var_5 == -1U) {
            temp_3 = *arg0;
            M2C_FIELD(temp_3, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3, u8 *, 0x1A) | 1);
            var_2 = var_5;
        }
    }
    return var_2;
}
