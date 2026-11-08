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

s32 func_00405CC0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_004411C0;
extern M2C_UNK D_004A14C0;
extern M2C_UNK D_004A16C0;
extern M2C_UNK D_004A16E8;
extern M2C_UNK D_FFFFF;

s32 func_00409F48(void) {
    M2C_UNK *var_2;

    if (D_004411C0 < 0) {
loop_2:
        if (func_00405CC0(&D_004A16C0, 0x80000006, 0) >= 0) {
            if (M2C_FIELD(&D_004A16C0, s32 *, 0x24) != 0) {
                D_004411C0 = 0;
                if (func_00405E90(&D_004A16C0, 0xFF, 0, 0, 0, &D_004A14C0, 4, 0, 0) < 0) {
                    return 0xFFFEFFFF;
                }
                D_004A16E8 = M2C_UNALIGNED32(M2C_FIELD(&D_004A14C0, M2C_UNK *, 0));
                goto block_13;
            }
            var_2 = &D_FFFFF;
            do {

            } while (var_2 != (M2C_UNK *)-1);
            goto loop_2;
        }
        return -1;
    }
block_13:
    return 0;
}
