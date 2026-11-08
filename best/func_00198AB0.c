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

s32 func_001E9558(s32, s32);                        /* extern */
s32 func_001EA098(s32);                             /* extern */
s32 func_002C3C48();                                /* extern */
extern f32 D_00425D88;

void func_00198AB0(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f2;
    s32 temp_20;
    s32 temp_21;
    s32 temp_2_2;
    s32 temp_4_2;
    s32 var_22;
    s32 var_23;
    s32 var_5;
    void *temp_18;
    void *temp_19;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;

    temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC);
    temp_2 = M2C_FIELD(temp_3, void **, 0x14);
    temp_18 = temp_2 + 4;
    if (temp_2 != NULL) {
        temp_19 = M2C_FIELD(temp_3, void **, 4);
        temp_20 = M2C_FIELD(temp_18, s32 *, 0x18);
        var_23 = 0;
        temp_21 = M2C_FIELD(temp_18, s32 *, 0x1C);
        var_22 = 0;
        temp_2_2 = func_001EA098(func_002C3C48());
        if (temp_2_2 != 0) {
            var_23 = func_001E9558(temp_2_2, temp_20);
            var_22 = func_001E9558(temp_2_2, temp_21);
        }
        temp_4 = temp_19 + 0xEC;
        temp_f0 = fabsf(M2C_FIELD(temp_18, f32 *, 0x24));
        temp_2_3 = temp_19 + 0xA0;
        temp_3_2 = temp_19 + 0xF8;
        if ((D_00425D88 < temp_f0) && (var_23 != 0) && (var_22 != 0)) {
            temp_f2 = temp_f0 / D_00425D88;
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + (temp_f2 * M2C_FIELD(arg0, f32 *, 0x40)));
            M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + (temp_f2 * M2C_FIELD(arg0, f32 *, 8)));
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + (temp_f2 * M2C_FIELD(arg0, f32 *, 0x24)));
        } else {
            var_5 = 0;
            if (((((M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_19, f32 *, 0xA0)) * M2C_FIELD(temp_19, f32 *, 0xF8)) + ((M2C_FIELD(temp_18, f32 *, 4) - M2C_FIELD(temp_2_3, f32 *, 4)) * M2C_FIELD(temp_3_2, f32 *, 4)) + ((M2C_FIELD(temp_18, f32 *, 8) - M2C_FIELD(temp_2_3, f32 *, 8)) * M2C_FIELD(temp_3_2, f32 *, 8))) > 0.0f) && (var_23 != 0)) {
                var_5 = var_22 != 0;
            }
            temp_2_4 = temp_18 + 0xC;
            if (var_5 != 0) {
                temp_f0_2 = fabsf(M2C_FIELD(temp_18, f32 *, 0x24) * ((M2C_FIELD(temp_18, f32 *, 0xC) * M2C_FIELD(temp_19, f32 *, 0xF8)) + (M2C_FIELD(temp_2_4, f32 *, 4) * M2C_FIELD(temp_3_2, f32 *, 4)) + (M2C_FIELD(temp_2_4, f32 *, 8) * M2C_FIELD(temp_3_2, f32 *, 8)))) - M2C_FIELD(arg0, f32 *, 4);
                var_f2 = temp_f0_2;
                if (temp_f0_2 < 0.0f) {
                    var_f2 = 0.0f;
                }
                M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + var_f2);
            }
            if (var_23 != 0) {
                temp_2_5 = temp_18 + 0xC;
                if (var_22 != 0) {
                    temp_f0_3 = fabsf(M2C_FIELD(temp_18, f32 *, 0x24) * ((M2C_FIELD(temp_18, f32 *, 0xC) * M2C_FIELD(temp_19, f32 *, 0xEC)) + (M2C_FIELD(temp_2_5, f32 *, 4) * M2C_FIELD(temp_4, f32 *, 4)) + (M2C_FIELD(temp_2_5, f32 *, 8) * M2C_FIELD(temp_4, f32 *, 8)))) - M2C_FIELD(arg0, f32 *, 0x20);
                    var_f1 = temp_f0_3;
                    if (temp_f0_3 < 0.0f) {
                        var_f1 = 0.0f;
                    }
                    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + var_f1);
                }
            }
            goto block_19;
        }
    } else {
block_19:
        temp_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x14);
        temp_4_2 = M2C_FIELD(temp_5, s32 *, 0x80);
        switch (temp_4_2) {                         /* irregular */
        case 2:
            break;
        default:
            temp_f0_4 = M2C_FIELD(temp_5, f32 *, 0xE4) - M2C_FIELD(arg0, f32 *, 0x3C);
            var_f1_2 = temp_f0_4;
            if (temp_f0_4 < 0.0f) {
                var_f1_2 = 0.0f;
            }
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + var_f1_2);
            /* fallthrough */
        case 1:
        case 0:
            break;
        }
    }
}
