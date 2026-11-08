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

s32 func_002C1EB8();                                /* extern */
M2C_UNK func_003F9698(M2C_UNK *, u32, s32);         /* extern */
extern M2C_UNK D_00481368;
extern M2C_UNK D_00481398;

s32 func_002C1E40(u32 arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = func_002C1EB8();
    if (temp_2 == 0) {
        func_003F9698(&D_00481368, arg0, arg1);
    } else {
        func_003F9698(&D_00481398, arg0 >> 0xA, arg1);
    }
    return temp_2;
}
