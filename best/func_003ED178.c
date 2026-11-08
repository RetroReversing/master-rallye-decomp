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

s32 func_001D4010(M2C_UNK *);                       /* extern */
M2C_UNK func_002CE6E8();                            /* extern */
M2C_UNK func_002CEC78(s32);                         /* extern */
M2C_UNK func_002CF660(s32);                         /* extern */
s32 func_002D04D0();                                /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern s32 D_0043C070;
extern M2C_UNK D_0048A6D8;
extern M2C_UNK D_0048A6E8;
extern M2C_UNK D_0049D4B0;

void func_003ED178(void) {
    func_003F9698(&D_0048A6D8);
    if (D_0043C070 == 0) {
        func_003F9698(&D_0048A6E8);
        return;
    }
    func_002CEC78(func_001D4010(&D_0049D4B0));
    func_002CE6E8();
    func_002CF660(func_002D04D0());
    func_002CE6E8();
    func_002CF660(func_002D04D0());
}
