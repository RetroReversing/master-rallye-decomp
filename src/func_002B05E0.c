/* identical to func_002AEE30 (matched), with its names changed by decompdecomp */
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

M2C_UNK func_002B0008(s32 *, M2C_UNK *);            /* extern */
extern M2C_UNK D_0047DBF0;
extern s32 D_0048D508;

s32 *func_002B05E0(void) {
    if (D_0048D508 == 0) {
        func_002B0008(&D_0048D508, &D_0047DBF0);
    }
    return &D_0048D508;
}
