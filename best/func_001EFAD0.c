/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_0020FAF0(void *, s32, s32, s32 *);     /* extern */

void *func_001EFAD0(void *arg0, void *arg1, f32 fparg0) {
    s32 sp10;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_4;
    void *var_3;
    void *var_5;

    var_5 = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    var_3 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    var_4 = 2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    do {
        temp_f0 = M2C_FIELD(var_5, f32 *, 0);
        var_4 -= 1;
        M2C_FIELD(var_3, f32 *, -0x18) = (f32) (M2C_FIELD(var_5, f32 *, 0xC) - temp_f0);
        temp_2 = M2C_BITWISE(s32, temp_f0) + 1;
        M2C_FIELD(var_3, s32 *, 0) = temp_2;
        temp_f0_2 = M2C_FIELD(var_5, f32 *, 0);
        temp_f2 = M2C_FIELD(var_5, f32 *, 0xC);
        temp_f1 = (f32) temp_2 * fparg0;
        var_5 += 4;
        M2C_FIELD(var_3, f32 *, -0x18) = temp_f1;
        M2C_FIELD(var_3, f32 *, -0xC) = (f32) (((temp_f0_2 + temp_f2) * 0.5f) - (temp_f1 * 0.5f));
        var_3 += 4;
    } while (var_4 >= 0);
    temp_2_2 = M2C_FIELD(arg0, s32 *, 0x24) * M2C_FIELD(arg0, s32 *, 0x28);
    sp10 = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_2_2;
    func_0020FAF0(arg0, M2C_FIELD(arg0, s32 *, 0), temp_2_2 * M2C_FIELD(arg0, s32 *, 0x2C), &sp10);
    return arg0;
}
