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

M2C_UNK D_002AD390(void *);                         /* extern */
extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_0047C938;

void func_002A9C90(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0047C938;
    D_002AD390(M2C_FIELD(arg0, void **, 0x3C));
    D_002AD390(M2C_FIELD(arg0, void **, 0x38));
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
