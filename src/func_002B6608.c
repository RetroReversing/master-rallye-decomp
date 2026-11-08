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

s32 func_002B9068(M2C_UNK *);                       /* extern */
M2C_UNK func_002B9128(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_004288A8;
extern M2C_UNK D_0047EF60;

s32 func_002B6608(void *arg0) {
    if (func_002B9068(&D_004288A8) == 0) {
        func_003F9698(&D_0047EF60);
        func_002B9128(&D_004288A8, 2);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    return 1;
}
