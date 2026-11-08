/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_00233CA8();                            /* extern */
M2C_UNK func_0024F6E0(void **, s32);                /* extern */

s32 func_00233D98(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    void *sp10;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    s32 temp_2_2;
    s32 var_2;
    void *temp_2;
    void *temp_2_3;

    func_00233CA8();
    func_0024F6E0(&sp10, M2C_FIELD(arg0, s32 *, 0));
    temp_2 = M2C_FIELD(sp10, void **, 0x14);
    sp0 = M2C_FIELD(temp_2, f32 *, 0);
    sp4 = M2C_FIELD(temp_2, f32 *, 4);
    sp8 = M2C_FIELD(temp_2, f32 *, 8);
    if (sp10 != NULL) {
        temp_2_2 = M2C_FIELD(sp10, s32 *, 0) - 1;
        M2C_FIELD(sp10, s32 *, 0) = temp_2_2;
        if (temp_2_2 == 0) {
            temp_2_3 = M2C_FIELD(sp10, void **, 4);
            M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(sp10 + M2C_FIELD(temp_2_3, s16 *, 8), 3, sp10);
        }
    }
    temp_f0 = M2C_FIELD(arg1, f32 *, 0) - sp0;
    temp_f3 = M2C_FIELD(arg1, f32 *, 4) - sp4;
    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg1, f32 *, 8) - sp8;
    var_2 = 1;
    if (!(((temp_f0 * temp_f0) + (temp_f3 * temp_f3) + (temp_f2 * temp_f2)) < (temp_f1 * temp_f1))) {
        var_2 = 0;
    }
    return var_2;
}
