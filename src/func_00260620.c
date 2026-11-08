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
s32 func_002778C8(s32, s32, s32);                   /* extern */

void func_00260620(void *arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1, f32 fparg2) {
    s32 temp_2;

    M2C_FIELD(arg0, f32 *, 0xC) = fparg0;
    temp_2 = func_002778C8(D_002AD408(0x1C), arg1, arg2);
    M2C_FIELD(arg0, f32 *, 8) = fparg2;
    M2C_FIELD(arg0, f32 *, 4) = fparg1;
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
}
