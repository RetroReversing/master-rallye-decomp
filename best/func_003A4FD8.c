/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_003401F0(s32, f32);                    /* extern */
M2C_UNK func_00340230(s32, f32);                    /* extern */
M2C_UNK func_00340270(s32, f32);                    /* extern */
M2C_UNK func_003402B0(s32, f32);                    /* extern */

s32 func_003A4FD8(s32 arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    func_003401F0(arg0, fparg0);
    func_00340230(arg0, fparg1);
    func_00340270(arg0, fparg2);
    func_003402B0(arg0, fparg3);
    return arg0;
}
