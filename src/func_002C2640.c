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

M2C_UNK func_003E0158(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_003E0A60(s32, s32, s32);               /* extern */
M2C_UNK func_003E0E78(s32, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_002C21D0;
extern M2C_UNK func_002C2300;
extern M2C_UNK func_002C2308;
extern M2C_UNK func_002C2488;
extern M2C_UNK func_002C2548;

s32 func_002C2640(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_003E0A60(arg1, arg2, arg3);
    func_003E0158(arg1, 0, 0, &func_002C21D0, arg0);
    func_003E0158(arg1, 2, 0, &func_002C2300, arg0);
    func_003E0E78(arg1, 1, &func_002C2308, arg0);
    func_003E0E78(arg1, 4, &func_002C2488, arg0);
    func_003E0E78(arg1, 0, &func_002C2548, arg0);
    return 1;
}
