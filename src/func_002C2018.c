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

M2C_UNK func_002B8938(M2C_UNK *, s32, s32);         /* extern */
s32 func_002B8A20(M2C_UNK *);                       /* extern */
extern s32 D_00428C90;
extern M2C_UNK D_004969A0;

s32 func_002C2018(s32 arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = func_002B8A20(&D_004969A0);
    D_00428C90 = 1;
    func_002B8938(&D_004969A0, arg0, arg1);
    D_00428C90 = 0;
    return func_002B8A20(&D_004969A0) - temp_2;
}
