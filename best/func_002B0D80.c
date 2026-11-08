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

extern M2C_UNK D_00427890;
extern M2C_UNK D_0047DC28;
extern M2C_UNK D_0047DCD8;

M2C_UNK *func_002B0D80(void) {
    if ((M2C_FIELD(&D_00427890, M2C_UNK **, 0) == NULL) && (&D_00427890 != NULL)) {
        M2C_FIELD(&D_00427890, M2C_UNK **, 4) = &D_0047DCD8;
        M2C_FIELD(&D_00427890, M2C_UNK **, 0) = &D_0047DC28;
    }
    return &D_00427890;
}
