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

void *func_0034D6F0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = 0.122499995f;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.1f;
    M2C_FIELD((unsigned)arg0, f32 *, 0x14) = 0.040000003f;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    M2C_FIELD(arg0, f32 *, 0x18) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = 2.0f;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    return arg0;
}
