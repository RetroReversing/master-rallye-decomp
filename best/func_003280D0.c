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

M2C_UNK func_00328168(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32); /* extern */

void func_003280D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7) {
    func_00328168(arg0 + 0x10, arg0 + 0x50, arg0 + 0x90, arg1, arg2, arg3, fparg2, fparg3, fparg4, fparg5, fparg6, fparg7);
    M2C_FIELD(arg0, f32 *, 4) = fparg7;
    M2C_FIELD(arg0, f32 *, 0xC) = fparg1;
    M2C_FIELD(arg0, f32 *, 8) = fparg0;
    M2C_FIELD(arg0, f32 *, 0) = fparg6;
}
