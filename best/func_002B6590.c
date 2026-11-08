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

s32 func_002AD408(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_002B6290(s32, s32, void *);            /* extern */
s32 func_002B62E0();                                /* extern */
s32 func_002B6438(s32, void *);                     /* extern */
extern M2C_UNK D_0047F208;

void *func_002B6590(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = "HOST0:";
    M2C_FIELD(arg0, s32 *, 4) = 3;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0047F208;
    M2C_FIELD(arg0, s32 *, 0x10) = func_002B6438(func_002AD408(0x18, 3), arg0);
    func_002B6290(func_002B62E0(), M2C_FIELD(arg0, s32 *, 4), arg0);
    return arg0;
}
