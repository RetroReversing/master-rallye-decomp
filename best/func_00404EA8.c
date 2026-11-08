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

M2C_UNK func_004048A8(s64 *);                       /* extern */
extern M2C_UNK *D_00441118;
extern M2C_UNK func_004045C8;

void func_00404EA8(s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s64 sp90;
    s64 sp98;
    s64 spA0;
    s64 spA8;
    M2C_UNK *temp_17;

    temp_17 = D_00441118;
    sp78 = arg1;
    D_00441118 = &func_004045C8;
    sp80 = arg2;
    sp88 = arg3;
    sp90 = arg4;
    sp98 = arg5;
    spA0 = arg6;
    spA8 = arg7;
    func_004048A8(&sp78);
    D_00441118 = temp_17;
}
