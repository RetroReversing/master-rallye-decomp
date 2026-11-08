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

s32 func_002BE260(s32, s32, M2C_UNK);               /* extern */
s32 *func_002BE550();                               /* extern */
s32 func_002BE8C0(s32 *, M2C_UNK, void *, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_004805E8;
extern M2C_UNK D_00480630;

s32 func_002BD110(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_4;

    if ((M2C_FIELD(arg1, s32 *, 0x40) != 0) && (M2C_FIELD(arg1, s32 *, 0x48) != 0)) {
        func_003F9698(&D_004805E8);
        M2C_FIELD(arg1, s32 *, 0x44) = func_002BE260(*func_002BE550(), M2C_FIELD(arg1, s32 *, 0x48), 1);
        func_003F9698(&D_00480630);
    }
    temp_4 = func_002BE8C0(func_002BE550(), 0, arg1, 0x30, M2C_FIELD(arg1, s32 *, 0x40), M2C_FIELD(arg1, s32 *, 0x44), M2C_FIELD(arg1, s32 *, 0x48));
    temp_2 = temp_4 != 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    M2C_FIELD(arg1, s32 *, 0x38) = temp_4;
    return temp_2;
}
