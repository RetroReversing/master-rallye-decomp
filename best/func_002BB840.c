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

s32 func_002B6360(s32);                             /* extern */
M2C_UNK func_002BB448(s32, s32, s32);               /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_004800F8;

void func_002BB840(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 var_2;

    temp_2 = func_002B6360(arg2);
    if (temp_2 != 3) {
        var_2 = 1;
        if (temp_2 >= 4) {
            var_2 = 7;
        }
        if (temp_2 != var_2) {
            func_003F9698(&D_004800F8);
        }
    }
    func_002BB448(M2C_FIELD(arg0, s32 *, 0x10), arg1, arg2);
}
