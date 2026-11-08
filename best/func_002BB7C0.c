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

s32 D_002AD408(M2C_UNK, M2C_UNK);                   /* extern */
M2C_UNK func_002B6290(s32, s32, void *);            /* extern */
s32 func_002B62E0();                                /* extern */
s32 func_002BB6A0(s32);                             /* extern */
extern M2C_UNK D_004800F0;
extern M2C_UNK D_00480390;

void *func_002BB7C0(void *arg0) {
    s32 temp_2;

    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_004800F0;
    M2C_FIELD(arg0, s32 *, 4) = 8;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00480390;
    temp_2 = func_002BB6A0(D_002AD408(0x68, 8));
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_2;
    func_002B6290(func_002B62E0(), M2C_FIELD(arg0, s32 *, 4), arg0);
    return arg0;
}
