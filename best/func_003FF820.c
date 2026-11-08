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

M2C_UNK func_003F9590();                            /* extern */
M2C_UNK func_003F9598(s32);                         /* extern */
extern s64 D_004408E8;
extern s64 D_004408F0;

s32 func_003FF820(s32 arg0, s32 arg1, s64 arg2) {
    func_003F9590();
    switch (arg1) {                                 /* irregular */
    case -1:
        D_004408E8 = arg2;
block_9:
        func_003F9598(arg0);
        return 1;
    case -2:
        D_004408F0 = arg2;
        goto block_9;
    case -3:
        goto block_9;
    case -4:
        func_003F9598(arg0);
        return arg2 == 0;
    default:
        func_003F9598(arg0);
        return 0;
    }
}
