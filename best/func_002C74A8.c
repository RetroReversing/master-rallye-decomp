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

M2C_UNK func_002C7410(void *);                      /* extern */
s32 func_003CA110(s16, s16, void *);                /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s16, s16);         /* extern */
extern M2C_UNK D_00481E10;
extern M2C_UNK D_00481E40;
extern M2C_UNK D_0049AC00;
extern M2C_UNK D_0049AE00;

s32 func_002C74A8(void *arg0, s16 arg1, s16 arg2) {
    s32 *temp_19;
    s32 var_20;
    s32 var_2;

    func_003F9698(&D_00481E10, arg1, arg2);
    var_20 = 0;
    func_002C7410(arg0);
    M2C_FIELD(arg0, s16 *, 0x14) = arg1;
    temp_19 = ((arg2 + arg1) * 4) + &D_0049AE00;
    M2C_FIELD(arg0, s16 *, 0x16) = arg2;
    var_2 = 0;
    if (*temp_19 == 0) {
        if (func_003CA110(arg1, arg2, (arg1 << 8) + ((arg2 << 8) + &D_0049AC00)) == 0) {
            func_003F9698(&D_00481E40, arg1, arg2);
        } else {
            var_20 = 1;
            *temp_19 = 1;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
        }
        var_2 = var_20;
    }
    return var_2;
}
