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

M2C_UNK func_0017A100();                            /* extern */
M2C_UNK func_0017B680(s32, f32, f32);               /* extern */
M2C_UNK func_0017BDC8(s32, f32, f32);               /* extern */
M2C_UNK func_0017BF20(s32, f32, f32);               /* extern */
M2C_UNK func_0017C1C0(s32, f32, f32);               /* extern */
M2C_UNK func_0017C378(s32, f32, f32);               /* extern */
M2C_UNK func_0017C440(s32, f32, f32);               /* extern */
M2C_UNK func_0017C4E8(s32, f32, f32);               /* extern */
M2C_UNK func_0017CFD0(s32, f32, f32);               /* extern */

void func_00179E08(s32 arg0, f32 fparg0, f32 fparg1) {
    func_0017A100();
    func_0017B680(arg0, fparg0, fparg1);
    func_0017BDC8(arg0, fparg0, fparg1);
    func_0017BF20(arg0, fparg0, fparg1);
    func_0017C1C0(arg0, fparg0, fparg1);
    func_0017C378(arg0, fparg0, fparg1);
    func_0017C440(arg0, fparg0, fparg1);
    func_0017C4E8(arg0, fparg0, fparg1);
    func_0017CFD0(arg0, fparg0, fparg1);
}
