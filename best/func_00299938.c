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

s32 func_00296530(s32, s32);                        /* extern */
M2C_UNK func_002965B8(s32, s32, f32, f32);          /* extern */
s32 func_00296710();                                /* extern */

void func_00299938(void *arg0, s32 arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    void *temp_2;

    temp_2 = arg0 + 0x2C;
    if (func_00296530(func_00296710(), arg1) != 0) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x2C);
        sp0 = temp_f2;
        temp_f1 = M2C_FIELD(temp_2, f32 *, 4);
        sp4 = temp_f1;
        sp0 = temp_f2 + (f32) M2C_FIELD(arg0, s32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x10);
        sp8 = M2C_FIELD(temp_2, f32 *, 8);
        sp4 = temp_f1 + (f32) M2C_FIELD(arg0, s32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x14);
        func_002965B8(func_00296710(), arg1, sp0, sp4);
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
}
