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

M2C_UNK func_002BC9F8(void *, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002BCAC0(void *, s32);                 /* extern */
void *func_002BCE08();                              /* extern */
M2C_UNK func_002BD0A8(s32, void *, M2C_UNK);        /* extern */
extern s32 D_00428C90;
extern s32 D_0042D440;

void *func_002BD750(void *arg0, s32 arg1, s32 arg2) {
    void *temp_2;

    if (D_00428C90 == 0) {
        D_0042D440 = 1;
    }
    temp_2 = func_002BCE08();
    func_002BCAC0(temp_2, arg1);
    func_002BC9F8(temp_2, 2, arg2, 0, 0);
    M2C_FIELD(temp_2, s32 *, 0x60) = arg1;
    func_002BD0A8(M2C_FIELD(arg0, s32 *, 0x18), temp_2, 1);
    return temp_2;
}
