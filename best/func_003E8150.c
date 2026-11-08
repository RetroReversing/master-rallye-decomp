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

s32 func_002BF920();
s64 func_002BFA80();
f32 func_0040C7F0();
extern s32 D_0043BFCC;
extern f32 D_0043BFD0;

void func_003E8150(void *arg0) {
    f32 var_f0;
    s32 temp_4;
    s64 temp_2;
    s64 temp_4_2;
    s64 temp_5;

    if (D_0043BFCC == 0) {
        temp_2 = func_002BFA80(func_002BF920());
        temp_4 = M2C_FIELD(arg0, s32 *, 0x18);
        temp_5 = M2C_FIELD(arg0, s64 *, 8);
        temp_4_2 = ((temp_4 == 0) ? temp_2 : (temp_2 >> temp_4)) - temp_5;
        if ((temp_4_2 >> 0x1F) != 0) {
            var_f0 = func_0040C7F0(temp_4_2, temp_5);
        } else {
            var_f0 = (f32) ((s64) (temp_4_2 << 0x20) >> 0x20);
        }
        M2C_FIELD(arg0, f32 *, 0) = (f32) (var_f0 * M2C_FIELD(arg0, f32 *, 0x14));
        return;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) (D_0043BFD0 - (func_0040C7F0(M2C_FIELD(arg0, s64 *, 8)) * M2C_FIELD(arg0, f32 *, 0x14)));
}
