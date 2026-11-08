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

f32 func_003F2F50();                                /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_00203F80(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f24 = func_003F2F50();
    temp_f0 = func_003F3140(fparg0);
    temp_f1 = 1.0f - temp_f24;
    temp_f22 = fparg1 * temp_f0;
    temp_f21 = fparg2 * temp_f0;
    temp_f20 = fparg3 * temp_f0;
    temp_f3 = fparg1 * fparg2 * temp_f1;
    temp_f5 = fparg2 * fparg3 * temp_f1;
    temp_f4 = fparg1 * fparg3 * temp_f1;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_f3 - temp_f20);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f4 + temp_f21);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f5 - temp_f22);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((fparg3 * fparg3 * temp_f1) + temp_f24);
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((fparg1 * fparg1 * temp_f1) + temp_f24);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((fparg2 * fparg2 * temp_f1) + temp_f24);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f3 + temp_f20);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f4 - temp_f21);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f5 + temp_f22);
}
