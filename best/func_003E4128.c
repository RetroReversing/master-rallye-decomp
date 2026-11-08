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

M2C_UNK func_003E16D0(void *, M2C_UNK *, u32);      /* extern */
u32 func_003E50C8(void *, M2C_UNK);                 /* extern */
s32 func_003E5240(void *, M2C_UNK);                 /* extern */
M2C_UNK func_003E5348(void *, M2C_UNK, u32);        /* extern */
extern M2C_UNK D_00489C90;

s32 func_003E4128(void *arg0) {
    s32 temp_3;
    s32 var_18;
    s32 var_2;
    u32 temp_2;

    var_18 = 0;
loop_1:
    temp_2 = func_003E50C8(arg0, 0);
    if (temp_2 != 0x22) {
        if (temp_2 < 0x23U) {
            if (temp_2 != 0) {
                var_18 += temp_2;
                goto block_15;
            }
            temp_3 = func_003E5240(arg0, 0xB);
            if (M2C_FIELD(arg0, s32 *, 0x848) != 0) {
                if (temp_3 == 0xF) {
                    func_003E5348(arg0, 0xB, temp_2);
                    goto block_12;
                }
                goto block_14;
            }
block_14:
            func_003E16D0(arg0, &D_00489C90, temp_2);
            M2C_FIELD(arg0, s32 *, 0x11C) = 1;
            return 1;
        }
        if (temp_2 != 0x23) {
            var_18 += temp_2;
block_15:
            var_2 = 0;
        } else {
            var_2 = 1;
            var_18 += 0x21;
        }
        goto block_16;
    }
block_12:
    var_2 = 1;
block_16:
    if (var_2 == 0) {
        return var_18;
    }
    goto loop_1;
}
