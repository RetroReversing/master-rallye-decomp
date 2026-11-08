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

M2C_UNK func_0023E538();                            /* extern */

void func_0023E3E8(void *arg0, s32 arg1, s32 arg2, void *arg3, void *arg4, s32 arg5, void *arg6, void *arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, s32 arg_sp0, s32 arg_sp8) {
    void *temp_2;
    void *temp_3;
    void *temp_4;

    func_0023E538();
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    temp_2 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 0x50) = arg2;
    temp_3 = arg0 + 0x2C;
    temp_4 = arg0 + 0x38;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg3, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg4, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg4, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg4, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x1C) = fparg1;
    M2C_FIELD(arg0, f32 *, 0x20) = fparg2;
    M2C_FIELD(arg0, f32 *, 0x24) = fparg3;
    M2C_FIELD(arg0, s32 *, 0x28) = arg5;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg6, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg6, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg6, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg7, f32 *, 0);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(arg7, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(arg7, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x48) = arg_sp8;
    M2C_FIELD(arg0, s32 *, 0x44) = arg_sp0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
}
