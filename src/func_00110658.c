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

M2C_UNK func_001106C0();                            /* extern */
f32 func_001E3610(s32, M2C_UNK *);                  /* extern */
s32 func_002CDD48(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_002CE0A0(M2C_UNK *, s32, M2C_UNK, f32); /* extern */
extern s32 D_0040DC58;
extern f32 D_0040DC60;
extern M2C_UNK D_0040E788;
extern M2C_UNK D_00446598;

void func_00110658(void) {
    s32 temp_2;

    func_001106C0();
    D_0040DC60 = func_001E3610(func_001E4280(), &D_0040E788);
    temp_2 = func_002CDD48(0x18, 0x2F);
    D_0040DC58 = temp_2;
    func_002CE0A0(&D_00446598, temp_2, 0xAC44, D_0040DC60);
}
