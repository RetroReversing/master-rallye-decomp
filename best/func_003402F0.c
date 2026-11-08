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

s32 func_003E7650();                                /* extern */
M2C_UNK func_003E7660(s32);                         /* extern */
M2C_UNK func_003E76B8(s32);                         /* extern */
M2C_UNK func_003E7748(s32);                         /* extern */
M2C_UNK func_003E7FE8(f32 *);                       /* extern */
M2C_UNK func_003E80A8(f32 *, f32);                  /* extern */
M2C_UNK func_003E8150(f32 *);                       /* extern */
extern s32 D_0042DD24;
extern f32 D_0049B328;

void func_003402F0(void) {
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f12;
    s32 var_2;
    s32 var_3;

    if (D_0042DD24 == 0) {
        func_003E7FE8(&D_0049B328);
        D_0042DD24 = 1;
    }
    func_003E8150(&D_0049B328);
    if (!(D_0049B328 < 0.033333335f)) {
        temp_f1 = D_0049B328 - 0.033333335f;
        var_f12 = 0.0066666673f;
        if (temp_f1 < 0.0066666673f) {
            var_f12 = temp_f1;
        }
        func_003E80A8(&D_0049B328, var_f12);
        return;
    }
    func_003E7660(func_003E7650());
    func_003E76B8(func_003E7650());
    func_003E7748(func_003E7650());
    func_003E8150(&D_0049B328);
    temp_f0 = D_0049B328;
    if (temp_f0 < 0.033333335f) {
        do {
            var_2 = 0x64;
loop_13:
            if (var_2 >= 0) {
                var_2 -= 1;
                var_3 = 0x30;
loop_10:
                var_3 -= 1;
                if (var_3 >= 0) {
                    goto loop_10;
                }
                goto loop_13;
            }
            func_003E8150(&D_0049B328);
        } while (D_0049B328 < 0.033333335f);
    }
    func_003E80A8(&D_0049B328, temp_f0 - 0.033333335f);
}
