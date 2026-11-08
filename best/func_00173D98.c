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

M2C_UNK func_0016E498(void *, s32);                 /* extern */
M2C_UNK func_0023A6D0(s32);                         /* extern */
extern f32 D_00479C9C;

void func_00173D98(void *arg0, f32 fparg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x50) = (f32) (D_00479C9C * 0.0f * fparg0);
    func_0023A6D0(M2C_FIELD(arg0, s32 *, 0x2C));
    func_0016E498(M2C_FIELD(arg0, void **, 0x34), M2C_FIELD(arg0, s32 *, 0x2C));
}
