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

M2C_UNK func_00269968(s32, M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK func_003F3E80(void *, void *, void *, f32); /* extern */

void func_001782C0(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f7;
    f32 temp_f8;
    s32 var_16;
    s32 var_4;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    var_4 = 1;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x84) == 0) {
        temp_3 = M2C_FIELD(arg0, void **, 0xC);
        if (M2C_FIELD(temp_3, s32 *, 0x14) == 0) {
            temp_2 = M2C_FIELD(temp_3, void **, 4);
            temp_3_2 = temp_2 + 0x11C;
            temp_4 = temp_2 + 0xF8;
            temp_f2 = M2C_FIELD(temp_2, f32 *, 0x11C);
            temp_5 = temp_2 + 0xEC;
            temp_f8 = M2C_FIELD(temp_3_2, f32 *, 4);
            temp_6 = temp_2 + 0xE0;
            temp_f7 = M2C_FIELD(temp_3_2, f32 *, 8);
            temp_f0 = (temp_f2 * M2C_FIELD(temp_2, f32 *, 0xF8)) + (temp_f8 * M2C_FIELD(temp_4, f32 *, 4)) + (temp_f7 * M2C_FIELD(temp_4, f32 *, 8));
            temp_f1 = (temp_f2 * M2C_FIELD(temp_2, f32 *, 0xEC)) + (temp_f8 * M2C_FIELD(temp_5, f32 *, 4)) + (temp_f7 * M2C_FIELD(temp_5, f32 *, 8));
            temp_f1_2 = temp_f1 * temp_f1;
            temp_f2_2 = (temp_f2 * M2C_FIELD(temp_2, f32 *, 0xE0)) + (temp_f8 * M2C_FIELD(temp_6, f32 *, 4)) + (temp_f7 * M2C_FIELD(temp_6, f32 *, 8));
            M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
            if (temp_f1_2 != temp_f1_2) {
                func_003F3E80(temp_4, temp_5, temp_6, (temp_f0 * temp_f0) + temp_f1_2 + (temp_f2_2 * temp_f2_2));
            }
            if (0x40800000 > 0) {

            }
            var_4 = 0x40800000;
        }
    }
    if (var_4 > 0) {
        var_16 = var_4;
loop_10:
        var_16 -= 1;
        func_00269968(M2C_FIELD(arg0, s32 *, 0x2C), 1, 0, fparg0 / (f32) var_4);
        if (var_16 != 0) {
            goto loop_10;
        }
    }
}
