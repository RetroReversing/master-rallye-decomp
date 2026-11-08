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

s32 func_003CA460(s16, s16, M2C_UNK *);             /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s16, s16);         /* extern */
extern M2C_UNK D_00481E68;
extern M2C_UNK D_0049ABC0;

s32 func_002C7880(void *arg0) {
    s16 temp_3;
    s32 var_19;
    u16 temp_2;

    var_19 = 0;
    if (func_003CA460(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16), &D_0049ABC0) != 0) {
        if (M2C_FIELD(&D_0049ABC0, u8 *, 0) == 0) {
            var_19 = 1;
            temp_2 = ~M2C_FIELD(&D_0049ABC0, u16 *, 2) & 0xFFFF;
            temp_3 = temp_2 & ~M2C_FIELD(arg0, u16 *, 0x32);
            M2C_FIELD(arg0, u16 *, 0x32) = temp_2;
            M2C_FIELD(arg0, s16 *, 0x30) = temp_3;
            M2C_FIELD(arg0, s16 *, 0x2C) = (s16) ((u8) M2C_FIELD(&D_0049ABC0, u8 *, 1) >> 4);
        } else {
            func_003F9698(&D_00481E68, M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16));
        }
    }
    return var_19;
}
