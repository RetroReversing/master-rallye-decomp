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

M2C_UNK func_002BCA28(void *, M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_002BCAC0(void *, void *);              /* extern */
s32 func_002BCD80(s32);                             /* extern */
void *func_002BCE08();                              /* extern */
void *func_002BCE88();                              /* extern */
M2C_UNK func_002BD0A8(s32, void *, s32);            /* extern */
M2C_UNK func_002BE550();                            /* extern */
M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
s32 func_003FA9B8(s32);                             /* extern */
extern s32 D_00428C90;
extern s32 D_0042D440;

void *func_002BD648(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_2_2;
    void *temp_17;
    void *temp_2;

    if (D_00428C90 == 0) {
        D_0042D440 = 1;
    }
    func_002BE550();
    temp_2 = func_002BCE88();
    M2C_FIELD(temp_2, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_17 = func_002BCE08();
    temp_16 = func_003FA9B8(arg1) + 1;
    temp_2_2 = func_002BCD80(temp_16);
    func_003F931C(temp_2_2, arg1, temp_16);
    func_002BCAC0(temp_17, temp_2);
    func_002BCA28(temp_17, 3, temp_16, 0, 0, temp_2_2, temp_16);
    M2C_FIELD(temp_17, void **, 0x60) = temp_2;
    func_002BD0A8(M2C_FIELD(arg0, s32 *, 0x18), temp_17, arg2);
    return temp_2;
}
