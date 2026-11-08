/* identical to func_001EFA40 (matched), with its names changed by decompdecomp */
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

M2C_UNK func_00206E70();                            /* extern */
extern M2C_UNK D_00478518;

void *func_002076B0(void *arg0) {
    func_00206E70();
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_00478518;
    return arg0;
}
