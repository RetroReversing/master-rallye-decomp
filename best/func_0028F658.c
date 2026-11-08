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

s32 func_001D4010(s32);                             /* extern */
M2C_UNK func_001D6588(M2C_UNK *, s32);              /* extern */
s32 func_001D65A0(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_001D65D0(s32);                         /* extern */
M2C_UNK func_002060F8(s32);                         /* extern */
M2C_UNK func_002062A8(s32, s32);                    /* extern */
extern M2C_UNK D_004262B0;

s32 func_0028F658(void *arg1, s32 arg2, s32 arg3) {
    s32 temp_17;
    s32 temp_18;

    if (arg1 != NULL) {
        temp_18 = M2C_FIELD(arg1, s32 *, 0x4C);
        if (temp_18 != 0) {
            temp_17 = func_001D65A0(&D_004262B0, temp_18);
            func_002062A8(temp_18, arg2);
            func_002060F8(temp_18);
            func_001D65D0(func_001D4010(arg3));
            func_001D6588(&D_004262B0, temp_17);
            return 1;
        }
    }
    return 0;
}
