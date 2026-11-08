/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

s32 func_00152B80(s32, s32 *);                      /* extern */
s32 func_003A32A8(s32);                             /* extern */
extern M2C_UNK D_0040E618;

s32 func_00397048(s32 arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    M2C_UNK **spC;
    s32 sp10;
    M2C_UNK *sp14;
    M2C_UNK *sp18;
    s32 sp1C;
    M2C_UNK **temp_2;
    M2C_UNK *temp_3;

    sp0 = arg0;
    sp4 = 0x14;
    sp8 = func_00152B80(arg0, &sp4);
    if (sp4 == 1) {
        return sp8;
    }
    temp_2 = &D_0040E618 + (func_003A32A8(sp0) * 4);
    spC = temp_2;
    sp10 = sp8;
    temp_3 = sp8 + sp0;
    sp18 = temp_3;
    *temp_2 = temp_3;
    sp1C = 1;
loop_3:
    sp14 = sp18;
    sp18 += sp0;
    if ((sp4 - 1) != sp1C) {
        *sp14 = sp18;
        sp1C += 1;
        goto loop_3;
    }
    *sp14 = NULL;
    return sp10;
}
