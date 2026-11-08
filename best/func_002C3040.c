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

s32 func_002AD350(M2C_UNK);                         /* extern */
s32 func_002B1FC0(M2C_UNK);                         /* extern */
M2C_UNK func_003E09C0();                            /* extern */
M2C_UNK func_003E0A60(void *, s32, s32);            /* extern */
s32 func_003F85D8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK D_004816D8;

s32 func_002C3040(void *arg0) {
    s32 temp_17;
    void *temp_2;

    temp_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0x1C)(arg0 + M2C_FIELD(temp_2, s16 *, 0x18));
    func_003E09C0();
    temp_17 = func_002AD350(0x44CB3B40);
    func_003F9698(&D_004816D8, temp_17, func_002AD350(0x44B40000));
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = func_003F85D8(0x40, 0x168000);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0x196768;
        M2C_FIELD(arg0, s32 *, 0x14) = func_002B1FC0(0x196768);
    }
    func_003E0A60(arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    return 1;
}
