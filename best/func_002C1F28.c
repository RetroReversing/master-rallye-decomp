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

M2C_UNK func_002C1C58(void *);                      /* extern */
M2C_UNK func_002C1CC8();                            /* extern */
s32 func_002C1E40(M2C_UNK, M2C_UNK *);              /* extern */
extern s32 D_0043C000;
extern M2C_UNK D_004813D8;
extern M2C_UNK D_004813E8;
extern M2C_UNK D_004813F8;

s32 func_002C1F28(void *arg0) {
    s32 temp_18;
    s32 temp_2;

    temp_18 = D_0043C000;
    D_0043C000 = 1;
    func_002C1CC8();
    temp_2 = func_002C1E40(0x91768, &D_004813D8);
    M2C_FIELD(arg0, s32 *, 4) = 0x91768;
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
    M2C_FIELD(arg0, s32 *, 8) = func_002C1E40(0x80000, &D_004813E8);
    M2C_FIELD(arg0, s32 *, 0xC) = func_002C1E40(0x30000, &D_004813F8);
    M2C_FIELD(arg0, s32 *, 0x10) = 0x30000;
    D_0043C000 = temp_18;
    func_002C1C58(arg0);
    return 0;
}
