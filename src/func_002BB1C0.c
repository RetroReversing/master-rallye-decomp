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

M2C_UNK D_002AD390(u32);                            /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_0047FF00;

void func_002BB1C0(u32 arg0, s32 arg1) {
    s32 temp_4;
    s32 var_20;
    u32 temp_19;
    u32 var_16;

    temp_19 = arg0 + 0x300;
    var_20 = 0;
    var_16 = arg0;
    if (arg0 < temp_19) {
        do {
            temp_4 = M2C_FIELD(var_16, s32 *, 4);
            if (temp_4 != 0xFFFFFFFF) {
                if (temp_4 != 0) {
                    func_002B2028(temp_4);
                    M2C_FIELD(var_16, s32 *, 4) = 0;
                }
                func_003F9698(&D_0047FF00, var_20);
            }
            var_16 += 0xC;
            var_20 += 1;
        } while (var_16 < temp_19);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
