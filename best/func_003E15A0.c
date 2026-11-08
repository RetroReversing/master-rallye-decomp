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

M2C_UNK func_003E3D68(M2C_UNK);                     /* extern */

void func_003E15A0(void *arg0) {
    func_003E3D68(1);
    M2C_FIELD(arg0, s32 *, 0x590) = 0x70000000;
    M2C_FIELD(arg0, s32 *, 0x594) = 0x70001800;
    M2C_FIELD(arg0, s32 *, 0x6D0) = 0x70001B00;
    M2C_FIELD(arg0, s32 *, 0x6D4) = 0x70003300;
    M2C_FIELD(arg0, s32 *, 0x810) = 0;
}
