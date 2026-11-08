/* machine draft (m2c), tried by autopilot */
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

extern M2C_UNK D_00427E38;
extern M2C_UNK D_00427EB8;
extern M2C_UNK D_00427F38;
extern M2C_UNK D_00427FB8;
extern M2C_UNK D_00428038;
extern M2C_UNK D_004280B8;
extern M2C_UNK D_00428138;

M2C_UNK *func_002B25B0(s32 arg0, s32 arg1) {
    s32 sp0;

    sp0 = arg1;
    switch (sp0) {
    case -10:
        return &D_00427E38;
    case -1:
        return &D_00427EB8;
    case 0:
        return &D_00427F38;
    case 1:
        return &D_00427FB8;
    case 2:
        return &D_00428038;
    case 3:
        return &D_004280B8;
    default:
        return &D_00428138;
    }
}
