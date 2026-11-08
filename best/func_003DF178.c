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

M2C_UNK func_003DA7E0(void *, s32);                 /* extern */
M2C_UNK func_003DAB38(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_003F7600(s32);                             /* extern */
extern M2C_UNK D_004898C8;

void *func_003DF178(void *arg0, s32 arg1) {
    func_003DA7E0(arg0, func_003F7600(arg1));
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x50) = &D_004898C8;
    func_003DAB38(arg0, 0, 0);
    return arg0;
}
