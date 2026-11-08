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

M2C_UNK func_002BD258(s32 *);                       /* extern */
s32 *func_002BDB28();                               /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_0047F610;

s32 func_002B79F8(void *arg0) {
    s32 *temp_2;

    temp_2 = func_002BDB28();
    if (*temp_2 == 0) {
        func_003F9698(&D_0047F610);
        func_002BD258(temp_2);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    return 1;
}
