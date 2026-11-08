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

M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00488AD0;

s32 func_003C9C68(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_16;
    u32 temp_3;
    u32 var_4;

    if (arg2 == 1) {
        return (u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1) {
        var_16 = ((arg3 == 0) ? 0x01000000 : arg3) - 1;
        do {
            if (var_16 < 0) {
                func_003F9698(&D_00488AD0);
                var_4 = M2C_FIELD(arg0, u32 *, 0);
                if ((var_4 >> 8) & 1) {
                    do {
                        temp_3 = var_4 & ~0x100;
                        var_4 = temp_3;
                    } while (0 != 0);
                    M2C_FIELD(arg0, u32 *, 0) = temp_3;
                }
            }
            var_16 -= 1;
        } while ((u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1);
    }
    return 0;
}
