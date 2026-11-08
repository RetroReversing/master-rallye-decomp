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

M2C_UNK func_001FBFE8(void *);                      /* extern */

void func_001FBD18(u32 arg0) {
    s32 var_2;
    u32 temp_3;
    u32 var_16;

    var_16 = arg0;
    temp_3 = var_16 + 0x50;
    if (var_16 < temp_3) {
        do {
            func_001FBFE8((void *) var_16);
            var_2 = 1;
            if (!(M2C_FIELD(var_16, f32 *, 0x24) > 0.0f)) {
                var_2 = 0;
            }
            if (var_2 != 0) {
                func_001FBFE8(var_16 + 0x28);
            }
            var_16 += 0x50;
        } while (var_16 < temp_3);
    }
}
