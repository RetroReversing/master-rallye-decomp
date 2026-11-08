/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s64 func_002ABEC8(s64, s64);                        /* extern */
s64 func_002ABF88(s64, s64);                        /* extern */
s64 func_002AC500(s64);                             /* extern */
M2C_UNK func_002AC758(s64);                         /* extern */

void func_0040C7F0(s64 arg0) {
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_18;
    s64 var_17;
    s64 var_2;

    var_17 = arg0;
    if (((u64) ((u64) (-1 << 0xB) >> 0xA) < (u32) (var_17 + (-1U >> 0xB))) && (((s64) (var_17 << 0x20) >> 0x20) & 0x7FF)) {
        var_17 |= 0x800;
    }
    temp_16 = 0x81E0 << 0x2F;
    temp_18 = func_002ABF88(func_002ABF88(func_002AC500(var_17 >> 0x20), temp_16), temp_16);
    temp_16_2 = (s64) ((var_17 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
    var_2 = func_002AC500(temp_16_2);
    if (temp_16_2 < 0) {
        var_2 = func_002ABEC8(var_2, 0x83E0 << 0x2F);
    }
    func_002AC758(func_002ABEC8(temp_18, var_2));
}
