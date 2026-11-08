/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_0026C1B0(f32 *, f32, f32, f32);        /* extern */

void func_0026C0E0(void *arg3, void *arg4, void *arg5, f32 fparg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    s32 sp34;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    s32 sp74;
    f32 temp_f10;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f9;

    temp_f5 = M2C_FIELD(arg4, f32 *, 0);
    temp_f9 = M2C_FIELD(arg5, f32 *, 0);
    temp_f10 = M2C_FIELD(arg3, f32 *, 8);
    temp_f6 = M2C_FIELD(arg3, f32 *, 0);
    temp_f4 = M2C_FIELD(arg3, f32 *, 4);
    sp14 = M2C_FIELD(arg4, f32 *, 4);
    sp18 = M2C_FIELD(arg4, f32 *, 8);
    sp1C = M2C_FIELD(arg4, f32 *, 0xC);
    sp24 = M2C_FIELD(arg5, f32 *, 4);
    sp28 = M2C_FIELD(arg5, f32 *, 8);
    sp2C = M2C_FIELD(arg5, f32 *, 0xC);
    sp40 = temp_f6;
    sp44 = temp_f4;
    sp48 = temp_f10;
    sp50 = temp_f5;
    sp34 = 0;
    sp10 = temp_f5;
    sp20 = temp_f9;
    sp30 = fparg0;
    sp54 = M2C_FIELD(&sp10, f32 *, 4);
    sp58 = M2C_FIELD(&sp10, f32 *, 8);
    sp5C = M2C_FIELD(&sp10, f32 *, 0xC);
    sp60 = temp_f9;
    sp64 = M2C_FIELD(&sp20, f32 *, 4);
    sp68 = M2C_FIELD(&sp20, f32 *, 8);
    sp70 = fparg0;
    sp6C = M2C_FIELD(&sp20, f32 *, 0xC);
    sp74 = 0;
    func_0026C1B0(&sp40, temp_f6, temp_f4, temp_f10);
}
