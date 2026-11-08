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

s64 D_002BFA80(s32);                                /* extern */
s32 func_002BF920();                                /* extern */
s64 func_0040C530(f32);                             /* extern */
extern s32 D_0043BFCC;
extern f32 D_0043BFD0;

void func_003E80A8(void *arg0, f32 fparg0) {
    s32 temp_3;
    s64 temp_16;
    s64 temp_2;
    s64 var_2;

    if (D_0043BFCC == 0) {
        temp_2 = D_002BFA80(func_002BF920());
        temp_3 = M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg0, f32 *, 0) = fparg0;
        temp_16 = (temp_3 == 0) ? temp_2 : (temp_2 >> temp_3);
        if (fparg0 != 0.0f) {
            var_2 = temp_16 - func_0040C530(fparg0 * M2C_FIELD(arg0, f32 *, 0x10));
            goto block_5;
        }
        M2C_FIELD(arg0, s64 *, 8) = temp_16;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0) = fparg0;
    var_2 = func_0040C530((D_0043BFD0 - fparg0) * M2C_FIELD(arg0, f32 *, 0x10));
block_5:
    M2C_FIELD(arg0, s64 *, 8) = var_2;
}
