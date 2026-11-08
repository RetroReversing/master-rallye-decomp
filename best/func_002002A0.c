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

void func_002002A0(void *arg0) {
    M2C_UNK (*var_3)(s32, void **);
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    s16 var_4;
    s32 temp_3;
    void **temp_5;
    void **temp_5_2;
    void *temp_2;
    void *temp_2_2;

    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 8);
        switch (temp_3) {                           /* irregular */
        case 2:
            temp_f2 = M2C_FIELD(arg0, f32 *, 0x24);
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x20) + (M2C_FIELD(arg0, f32 *, 0) * 0.033333335f);
            M2C_FIELD(arg0, f32 *, 0x20) = temp_f1;
            if (temp_f2 <= temp_f1) {
                temp_5 = M2C_FIELD(arg0, void ***, 0x18);
                M2C_FIELD(arg0, f32 *, 0x20) = temp_f2;
                M2C_FIELD(arg0, s32 *, 8) = 4;
                if (temp_5 != NULL) {
                    temp_2 = *temp_5;
                    var_4 = M2C_FIELD(temp_2, s16 *, 8);
                    var_3 = M2C_FIELD(temp_2, M2C_UNK (**)(s32, void **), 0xC);
                    goto block_17;
                }
            }
            break;
        case 3:
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x20) - (M2C_FIELD(arg0, f32 *, 4) * 0.033333335f);
            M2C_FIELD(arg0, f32 *, 0x20) = temp_f1_2;
            if (temp_f1_2 <= 0.0f) {
                M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
                M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                M2C_FIELD(arg0, s32 *, 8) = 0;
            }
            break;
        case 0:
            M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
            break;
        case 4:
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
            break;
        }
    } else {
        temp_5_2 = M2C_FIELD(arg0, void ***, 0x18);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        if (temp_5_2 != NULL) {
            temp_2_2 = *temp_5_2;
            var_4 = M2C_FIELD(temp_2_2, s16 *, 0x10);
            var_3 = M2C_FIELD(temp_2_2, M2C_UNK (**)(s32, void **), 0x14);
block_17:
            var_3(M2C_FIELD(arg0, void ***, 0x18) + var_4, M2C_FIELD(arg0, void ***, 0x18));
        }
    }
}
