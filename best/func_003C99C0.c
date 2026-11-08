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
extern M2C_UNK D_FFFFFF;

void func_003C99C0(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_17;
    u32 temp_3;
    u32 var_4;

    if (M2C_FIELD(arg0, u32 *, 0) & 0x100) {
        var_17 = &D_FFFFFF;
        do {
            if ((s32) var_17 < 0) {
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
            var_17 -= 1;
        } while (M2C_FIELD(arg0, u32 *, 0) & 0x100);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0xFFFFFFFF) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0) = (u32) ((M2C_FIELD(arg0, u32 *, 0) & ~0xC & ~1) | 0x100);
}
