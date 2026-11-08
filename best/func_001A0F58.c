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

M2C_UNK func_001D7428(M2C_UNK *, s32, f32 *, f32);  /* extern */
f32 func_001E3610(s32, s32);                        /* extern */
s32 func_001E38C8(s32, s32);                        /* extern */
f32 func_003F3E80(f32);                             /* extern */

void func_001A0F58(s32 arg0, void *arg1, void *arg2, void *arg3, s32 arg4, s32 arg5) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    M2C_UNK sp20;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f20;
    void *temp_2;
    void *temp_2_2;

    temp_2 = M2C_FIELD(arg2, void **, 8);
    temp_f2 = -M2C_FIELD(temp_2, f32 *, 0x18);
    var_f0 = M2C_FIELD((temp_2 + 0x18), f32 *, 8);
    sp14 = 0.0f;
    sp10 = var_f0;
    temp_f12 = (var_f0 * var_f0) + sp14 + (temp_f2 * temp_f2);
    sp18 = temp_f2;
    if (temp_f12 <= 1.1920929e-7f) {
        sp18 = sp14;
        sp10 = sp14;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        temp_f1 = 1.0f / var_f0;
        sp10 *= temp_f1;
        sp18 *= temp_f1;
        sp14 *= temp_f1;
    }
    var_f20 = 0.0f;
    if (func_001E38C8(arg4, arg5) != 0) {
        var_f20 = func_001E3610(arg4, arg5) * 0.25f;
    }
    sp10 *= 0.1f;
    sp14 *= 0.1f;
    sp18 *= 0.1f;
    func_001D7428(&sp20, arg3 + 0x2C, &sp10, var_f20);
    if (var_f20 > 0.0f) {
        temp_2_2 = M2C_FIELD(arg1, void **, 0xC);
        if (!(M2C_FIELD(arg3, f32 *, 0x44) > 0.0f)) {
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK *, s32), 0x14)(arg1 + M2C_FIELD(temp_2_2, s16 *, 0x10), &sp20, arg0 + 0xC);
            return;
        }
        goto block_11;
    }
block_11:
    M2C_FIELD(M2C_FIELD(arg1, void **, 0xC), M2C_UNK (**)(void *, M2C_UNK *, s32), 0x1C)(arg1 + M2C_FIELD(M2C_FIELD(arg1, void **, 0xC), s16 *, 0x18), &sp20, arg0 + 0xC);
}
