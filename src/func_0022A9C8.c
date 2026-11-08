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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_00226638(s32);                             /* extern */
M2C_UNK func_00228190();                            /* extern */
extern M2C_UNK D_0047A808;

void *func_0022A9C8(void *arg0) {
    func_00228190();
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &D_0047A808;
    M2C_FIELD(arg0, f32 *, 0x2C) = 25.0f;
    M2C_FIELD(arg0, s32 *, 4) = func_00226638(D_002AD408(0x24));
    return arg0;
}
