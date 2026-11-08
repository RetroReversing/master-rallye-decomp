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

void func_002857A8(void *arg0, void *arg1, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f5;

    temp_f2 = M2C_FIELD(arg3, f32 *, 4);
    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    temp_f4 = M2C_FIELD(arg1, f32 *, 0);
    sp14 = temp_f2;
    sp10 = M2C_FIELD(arg3, f32 *, 0);
    sp18 = M2C_FIELD(arg3, f32 *, 8);
    sp0 = temp_f4;
    sp4 = temp_f5;
    sp8 = temp_f1;
    sp20 = temp_f4;
    sp28 = temp_f1;
    M2C_FIELD(arg1, f32 *, 8) = temp_f1;
    temp_f2_2 = temp_f2 - ((temp_f2 - temp_f5) * M2C_FIELD(arg0, f32 *, 0x64));
    M2C_FIELD(arg1, f32 *, 4) = temp_f2_2;
    sp24 = temp_f2_2;
}
