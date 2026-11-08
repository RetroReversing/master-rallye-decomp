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

s32 func_00233CA8();
s32 func_0024F6E0();

s32 func_0024F920(s32 arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    void *sp10;
    s32 temp_2_2;
    s32 var_2;
    void *temp_2;
    void *temp_2_3;

    func_00233CA8(arg1);
    func_0024F6E0(&sp10, M2C_FIELD(arg1, s32 *, 0));
    temp_2 = M2C_FIELD(sp10, void **, 0x14);
    sp0 = M2C_FIELD(temp_2, f32 *, 0);
    sp4 = M2C_FIELD(temp_2, f32 *, 4);
    sp8 = M2C_FIELD(temp_2, f32 *, 8);
    if (sp10 != NULL) {
        temp_2_2 = M2C_FIELD(sp10, s32 *, 0) - 1;
        M2C_FIELD(sp10, s32 *, 0) = temp_2_2;
        if (temp_2_2 == 0) {
            temp_2_3 = M2C_FIELD(sp10, void **, 4);
            M2C_FIELD(temp_2_3, s32 (**)(void *, s32, void *), 0xC)(sp10 + M2C_FIELD(temp_2_3, s16 *, 8), 3, sp10);
        }
    }
    var_2 = 1;
    if (!(fabsf((M2C_FIELD(arg2, f32 *, 0) * sp0) + (M2C_FIELD(arg2, f32 *, 4) * sp4) + (M2C_FIELD(arg2, f32 *, 8) * sp8) + M2C_FIELD(arg2, f32 *, 0xC)) < M2C_FIELD(arg1, f32 *, 4))) {
        var_2 = 0;
    }
    return var_2;
}
