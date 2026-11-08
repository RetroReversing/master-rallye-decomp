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

s32 func_0023C5A0(s32, s32, s32);                   /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00479B18;

void func_0023C1A0(s32 arg0, void *arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    s32 temp_19;
    s32 var_16;
    s32 var_20;

    temp_19 = (s32) ((M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) * 0xAAAAAAAB) >> 2;
    var_16 = 0;
    if (temp_19 > 0) {
        var_20 = 0;
        do {
            if (func_0023C5A0(arg0, M2C_FIELD(arg1, s32 *, 0) + var_20, arg2) != 0) {
                if (*arg3 >= 0) {
                    if (*arg4 < 0) {
                        *arg4 = var_16;
                    } else {
                        func_003F9698(&D_00479B18);
                    }
                } else {
                    *arg3 = var_16;
                }
            }
            var_16 += 1;
            var_20 += 0xC;
        } while (var_16 < temp_19);
    }
}
