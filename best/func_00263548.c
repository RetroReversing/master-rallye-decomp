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

s32 D_002AD408(M2C_UNK);                            /* extern */
M2C_UNK func_001577C8(void *, s32 *, s32 *);        /* extern */
s32 func_0021E290(s32);                             /* extern */
s32 func_0021E9C0(s32, s32 *);                      /* extern */
s32 func_0021F4B0(s32);                             /* extern */

void func_00263548(void *arg0, void *arg1) {
    s32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 *temp_5;
    s32 *temp_5_2;
    s32 temp_2_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_2;
    s32 var_3;
    u32 var_17;
    void *temp_2;
    void *temp_3;

    var_17 = 0;
    if (((s32) (M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) >> 5) != 0) {
        var_2 = 0 << 5;
        do {
            temp_3 = M2C_FIELD(arg1, s32 *, 0) + var_2;
            temp_4 = M2C_FIELD(temp_3, s32 *, 0);
            temp_2 = temp_3 + 4;
            sp0 = temp_4;
            sp4 = M2C_FIELD(temp_3, f32 *, 4);
            M2C_FIELD(&sp4, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
            M2C_FIELD(&sp4, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
            sp10 = M2C_FIELD(temp_3, f32 *, 0x10);
            sp14 = M2C_FIELD(temp_3, f32 *, 0x14);
            sp18 = M2C_FIELD(temp_3, f32 *, 0x18);
            sp1C = M2C_FIELD(temp_3, f32 *, 0x1C);
            temp_4_2 = func_0021F4B0(temp_4);
            sp20 = sp0;
            temp_2_2 = func_0021E9C0(temp_4_2, &sp20);
            var_3 = temp_2_2;
            sp30 = temp_2_2;
            if (var_3 != 0) {
                temp_5 = M2C_FIELD(arg0, s32 **, 4);
                if (temp_5 == M2C_FIELD(arg0, s32 *, 8)) {
                    func_001577C8(arg0, temp_5, &sp30);
                } else {
                    goto block_6;
                }
            } else {
                var_3 = func_0021E290(D_002AD408(0x7C));
                temp_5_2 = M2C_FIELD(arg0, s32 **, 4);
                sp34 = var_3;
                if (temp_5_2 != M2C_FIELD(arg0, s32 *, 8)) {
block_6:
                    if (M2C_FIELD(arg0, s32 **, 4) != NULL) {
                        *M2C_FIELD(arg0, s32 **, 4) = var_3;
                    }
                    M2C_FIELD(arg0, s32 **, 4) = (s32 *) (M2C_FIELD(arg0, s32 **, 4) + 4);
                } else {
                    func_001577C8(arg0, temp_5_2, &sp34);
                }
            }
            var_17 += 1;
            var_2 = var_17 << 5;
        } while (var_17 < (u32) ((s32) (M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) >> 5));
    }
}
