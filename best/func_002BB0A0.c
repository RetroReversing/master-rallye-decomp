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

M2C_UNK func_002BB1B8(u32);                         /* extern */
M2C_UNK func_003F9698(M2C_UNK *, u32, s32);         /* extern */
extern M2C_UNK D_0047FEC0;

s32 func_002BB0A0(u32 arg0) {
    s32 var_16;
    s32 var_6;
    u32 temp_5;
    u32 var_4;

    var_6 = 0;
    temp_5 = arg0 + 0x300;
    var_16 = 0xFFFFFFFF;
    if (arg0 < temp_5) {
        var_4 = arg0 + 0xC;
        if (M2C_FIELD(arg0, s32 *, 4) == 0xFFFFFFFF) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
            var_16 = 0;
            M2C_FIELD(arg0, s32 *, 8) = 0;
        } else {
loop_3:
            var_6 += 1;
            if (var_4 < temp_5) {
                if (M2C_FIELD(var_4, s32 *, 4) != 0xFFFFFFFF) {
                    var_4 += 0xC;
                    goto loop_3;
                }
                M2C_FIELD(var_4, s32 *, 8) = 0;
                var_16 = var_6;
                M2C_FIELD(var_4, s32 *, 4) = 0;
            }
        }
    }
    if (var_16 == 0xFFFFFFFF) {
        func_003F9698(&D_0047FEC0, temp_5, var_6);
        func_002BB1B8(arg0);
    }
    return var_16;
}
