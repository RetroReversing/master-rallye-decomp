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

s32 D_002AD5A8(M2C_UNK);                            /* extern */
M2C_UNK func_002626C0(s32, void *);                 /* extern */
s32 func_00262838();                                /* extern */
M2C_UNK func_00262B68(void *, s32, s32, u16);       /* extern */
extern M2C_UNK D_0047AAA8;
extern M2C_UNK D_0047AB20;

void *func_00262988(void *arg0, s32 *arg1) {
    s32 temp_2;
    s32 var_18;
    s32 var_22;
    u16 *var_16;
    u16 *var_17;

    var_22 = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, f32 *, 0x1C) = 9000.0f;
    M2C_FIELD(arg0, s32 *, 0) = (s32) *arg1;
    M2C_FIELD(arg0, f32 *, 0x10) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 1.5f;
    M2C_FIELD(arg0, f32 *, 0x18) = 8000.0f;
    M2C_FIELD(arg0, s32 *, 0x40) = D_002AD5A8(0xF0);
    M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x3C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    do {
        var_18 = 0;
        temp_2 = var_22 * 0x14;
        var_17 = temp_2 + &D_0047AAA8;
        var_16 = temp_2 + &D_0047AB20;
loop_2:
        func_00262B68(arg0, var_22, var_18, *var_17);
        var_17 += 2;
        func_00262B68(arg0, var_22 + 6, var_18, *var_16);
        var_18 += 1;
        var_16 += 2;
        if (var_18 < 0xA) {
            goto loop_2;
        }
        var_22 += 1;
    } while (var_22 < 6);
    func_002626C0(func_00262838(), arg0);
    return arg0;
}
