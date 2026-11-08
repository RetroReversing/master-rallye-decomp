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

M2C_UNK func_0021E3C8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0021F880(s32);                         /* extern */

void func_0021EF50(void *arg0) {
    s32 *temp_2_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 var_2;
    s32 var_4;
    void *temp_16;
    void *temp_16_2;
    void *temp_17;
    void *temp_2;
    void *temp_3;

    if (M2C_FIELD(arg0, s32 *, 0x78) == 0) {
        temp_17 = arg0 + 0x10;
        func_0021F880(M2C_FIELD(arg0, s32 *, 0x1C));
        M2C_FIELD(arg0, s32 *, 0) = 0;
        temp_2 = arg0 + 4;
        if (M2C_FIELD(temp_2, s32 **, 4) != temp_2) {
loop_3:
            temp_4 = *M2C_FIELD(temp_2, s32 **, 4);
            if (temp_4 != 0) {
                func_0021E3C8(temp_4, 3);
            }
            if (M2C_FIELD(temp_2, s32 **, 4) != temp_2) {
                goto loop_3;
            }
        }
loop_11:
        temp_2_2 = M2C_FIELD(temp_17, s32 **, 4);
loop_12:
        if (temp_2_2 != temp_17) {
            temp_4_2 = *temp_2_2;
            if (temp_4_2 != 0) {
                func_0021E3C8(temp_4_2, 3);
                goto loop_11;
            }
            goto loop_12;
        }
        var_4 = 0;
        var_2 = 0 * 0xC;
        do {
            temp_3 = var_2 + arg0 + 0x24;
            if (M2C_FIELD(temp_3, s32 *, 4) != temp_3) {
                temp_16 = (var_4 * 0xC) + arg0;
                temp_16_2 = temp_16 + 0x24;
loop_16:
                temp_4_3 = *M2C_FIELD((temp_16 + 0x24), s32 **, 4);
                if (temp_4_3 != 0) {
                    func_0021E3C8(temp_4_3, 3);
                }
                if (M2C_FIELD(temp_16_2, s32 *, 4) != temp_16_2) {
                    goto loop_16;
                }
            }
            var_4 += 1;
            var_2 = var_4 * 0xC;
        } while (var_4 < 7);
    }
}
