/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_00409F48();                                /* extern */
extern M2C_UNK D_004A14C0;
extern M2C_UNK D_004A16C0;

s32 func_0040ABC8(s32 arg0, u8 *arg1, s32 arg2) {
    if (func_00409F48() < 0) {
        return 0xFFFF0000;
    }
    M2C_FIELD(&D_004A14C0, s32 *, 0) = arg0;
    M2C_FIELD(&D_004A14C0, s32 *, 4) = arg2;
    switch (arg2) {                                 /* irregular */
    case 0:
        M2C_FIELD(&D_004A14C0, u8 *, 8) = (u8) *arg1;
block_11:
        return (func_00405E90(&D_004A16C0, 2, 0, &D_004A14C0, 0x20, &D_004A14C0, 0x10, 0, 0) > -1) ? 0 : 0xFFFEFFFF;
    case 1:
        M2C_FIELD(&D_004A14C0, u8 *, 8) = (u16) *arg1;
        goto block_11;
    case 2:
        M2C_FIELD(&D_004A14C0, u8 *, 8) = (s32) *arg1;
        goto block_11;
    default:
        return 0xFFFEFFFE;
    }
}
