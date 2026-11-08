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

M2C_UNK func_002BCA58(void *, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_002BCAC0(void *, s32);                 /* extern */
s32 func_002BCD80(s32);                             /* extern */
void *func_002BCE08();                              /* extern */
M2C_UNK func_002BD0A8(s32, void *, M2C_UNK);        /* extern */
extern s32 D_00428C90;
extern s32 D_0042D440;

void *func_002BD7F0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16;
    s32 temp_18;
    void *temp_17;

    if (D_00428C90 == 0) {
        D_0042D440 = 1;
    }
    temp_16 = arg3 << 0xB;
    temp_17 = func_002BCE08();
    temp_18 = func_002BCD80(temp_16);
    func_002BCAC0(temp_17, arg1);
    func_002BCA58(temp_17, 1, arg2, arg3, temp_18, temp_18, temp_16);
    M2C_FIELD(temp_17, s32 *, 0x60) = arg1;
    M2C_FIELD(temp_17, s32 *, 0x4C) = arg4;
    func_002BD0A8(M2C_FIELD(arg0, s32 *, 0x18), temp_17, 1);
    return temp_17;
}
