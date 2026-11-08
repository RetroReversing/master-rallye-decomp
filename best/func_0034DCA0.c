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

extern f32 D_00486054;

void func_0034DCA0(void **arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f3;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_7;

    temp_7 = *arg0;
    var_9 = -1;
    var_8 = 0;
    var_f3 = D_00486054;
    if (((s32) ((M2C_FIELD(temp_7, s32 *, 4) - M2C_FIELD(temp_7, s32 *, 0)) * 0xAAAAAAAB) >> 4) != 0) {
        var_7 = 0;
        do {
            temp_2 = M2C_FIELD(temp_7, s32 *, 0) + var_7;
            temp_2_2 = temp_2 + 0x20;
            temp_f2 = M2C_FIELD(temp_2, f32 *, 0x20) - M2C_FIELD(arg1, f32 *, 0);
            sp0 = temp_f2;
            temp_f0 = M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
            sp4 = temp_f0;
            temp_f1 = M2C_FIELD(temp_2_2, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8);
            temp_f2_2 = (temp_f2 * temp_f2) + (temp_f0 * temp_f0) + (temp_f1 * temp_f1);
            sp8 = temp_f1;
            if ((temp_f2_2 < var_f3) || (var_8 == 0)) {
                var_f3 = temp_f2_2;
                var_9 = var_8;
            }
            var_8 += 1;
            var_7 += 0x30;
        } while (var_8 != ((s32) ((M2C_FIELD(temp_7, s32 *, 4) - M2C_FIELD(temp_7, s32 *, 0)) * 0xAAAAAAAB) >> 4));
    }
    if (var_9 != -1) {
        temp_2_3 = M2C_FIELD(*arg0, s32 *, 0) + (var_9 * 0x30);
        temp_2_4 = temp_2_3 + 0x20;
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x20);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_2_4, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_2_4, f32 *, 8);
    }
}
