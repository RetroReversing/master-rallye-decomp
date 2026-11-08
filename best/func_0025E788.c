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

M2C_UNK func_0023E538(void *);                      /* extern */
M2C_UNK func_0023E668(void *, f32 *);               /* extern */
M2C_UNK func_0023E6A0(void *, f32 *);               /* extern */
M2C_UNK func_0023E968(void *);                      /* extern */

void func_0025E788(void *arg1, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f3;
    f32 var_f2;
    s32 var_2;
    void *temp_2;

    temp_f1 = fabsf(fparg0);
    temp_f0 = fabsf(M2C_FIELD(arg1, f32 *, 0x1C));
    var_f2 = temp_f1;
    if (temp_f0 < temp_f1) {
        var_f2 = temp_f0;
    }
    var_2 = -1;
    if (fparg0 > 0.0f) {
        var_2 = 1;
    }
    temp_f20 = var_f2 * (f32) var_2;
    func_0023E538(arg1);
    temp_2 = arg1 + 0xC;
    temp_f0_2 = M2C_FIELD(arg1, f32 *, 0xC) * temp_f20;
    temp_f3 = M2C_FIELD(temp_2, f32 *, 8) * temp_f20;
    temp_f1_2 = M2C_FIELD(temp_2, f32 *, 4) * temp_f20;
    sp0 = temp_f0_2;
    sp8 = temp_f3;
    sp4 = temp_f1_2;
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), s32 *, 0x1C8) != 0) {
        sp10 = temp_f0_2;
        sp14 = temp_f1_2;
        sp18 = temp_f3;
        func_0023E668(arg1, &sp10);
    }
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x50), s32 *, 0x1C8) != 0) {
        sp10 = -sp0;
        sp14 = -sp4;
        sp18 = -sp8;
        func_0023E6A0(arg1, &sp10);
    }
    func_0023E968(arg1);
    func_0023E538(arg1);
}
