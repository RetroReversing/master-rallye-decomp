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

M2C_UNK func_002766C8();                            /* extern */
M2C_UNK func_00276838(s32, s32);                    /* extern */
M2C_UNK func_00276910(s32, s32);                    /* extern */

void *func_00250168(void *arg0, void *arg1) {
    void *temp_4;
    void *temp_5;

    func_002766C8();
    func_00276838(arg0 + 4, arg1 + 4);
    func_00276910(arg0 + 0x1C, arg1 + 0x1C);
    temp_4 = arg1 + 8;
    temp_5 = arg0 + 8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
    M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
    M2C_FIELD(temp_5, s32 *, 0x10) = (s32) M2C_FIELD(temp_4, s32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    return arg0;
}
