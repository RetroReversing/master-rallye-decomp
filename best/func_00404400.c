/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_004040D8(void *, M2C_UNK *);           /* extern */
extern M2C_UNK D_0049E150;
extern void *D_0049E168;

s32 func_00404400(s32 arg0, s32 arg1) {
    s32 temp_17;
    s32 var_3;
    s8 temp_3;
    u8 *temp_16;

    var_3 = 0;
    if (arg1 > 0) {
loop_2:
        temp_17 = var_3 + 1;
        temp_16 = arg0 + var_3;
        do {

        } while (M2C_FIELD(D_0049E168, s32 *, 4) == 0);
        *temp_16 = *M2C_FIELD(M2C_FIELD(&D_0049E150, void **, 0x18), u8 **, 8);
        func_004040D8(M2C_FIELD(&D_0049E150, void **, 0x18), &D_0049E150);
        temp_3 = (s8) *temp_16;
        if ((temp_3 == 0xA) || (var_3 = temp_17, (temp_3 == 0xD))) {
            return temp_17;
        }
        if (var_3 >= arg1) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    return var_3;
}
