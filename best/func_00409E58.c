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

s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_004411BC;
extern M2C_UNK D_004A1300;
extern s32 D_004A1340;
extern M2C_UNK D_004A13C0;

s32 func_00409E58(u8 *arg0, s32 arg1) {
    s32 var_2;
    s32 var_8;
    u8 temp_2;
    u8 temp_4;

    if (D_004411BC < 0) {
        return 0;
    }
    temp_2 = *arg0;
    M2C_FIELD(&D_004A13C0, u8 *, 4) = temp_2;
    var_8 = 0;
    if ((temp_2 << 0x18) != 0) {
        var_8 = 1;
loop_4:
        if (var_8 < 0xFC) {
            temp_4 = *(arg0 + var_8);
            M2C_FIELD((&D_004A13C0 + var_8), u8 *, 4) = temp_4;
            if ((temp_4 << 0x18) != 0) {
                var_8 += 1;
                goto loop_4;
            }
        }
    }
    if (var_8 == 0xFC) {
        var_8 = 0xFB;
        M2C_FIELD(&D_004A13C0, s8 *, 0xFF) = 0;
    }
    M2C_FIELD(&D_004A13C0, s32 *, 0) = arg1;
    M2C_FIELD(&D_004A13C0, s8 *, 0xFF) = 0;
    var_2 = D_004A1340;
    if (func_00405E90(&D_004A1300, 3, 0, &D_004A13C0, var_8 + 5, &D_004A1340, 4, 0, 0) < 0) {
        var_2 = -1;
    }
    return var_2;
}
