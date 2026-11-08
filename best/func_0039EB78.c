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

u32 func_0039E598(void *);                          /* extern */
M2C_UNK func_0039E8B0(s32, s32, s32);               /* extern */
s32 func_0039E930(void *, u32, s32, s32);           /* extern */
s32 func_0039EB08(s32, s32, s32);                   /* extern */
M2C_UNK func_003A9E88(void *, s32, s32);            /* extern */
M2C_UNK func_003A9F78(s32, s32);                    /* extern */
s32 func_003AA1C0(void *);                          /* extern */
s32 func_003AA1F8(void *);                          /* extern */
u32 func_003AA230(void *);                          /* extern */
s32 func_003AA2B0(void *);                          /* extern */

void *func_0039EB78(void *arg0, void *arg1) {
    void *sp0;
    u32 sp4;
    s32 sp8;
    s32 temp_18;
    s32 temp_18_2;
    s32 temp_18_3;
    s32 temp_18_4;
    s32 temp_18_5;
    s32 temp_19;
    s32 temp_19_2;
    s32 temp_2;

    sp0 = arg1;
    if (sp0 != arg0) {
        sp4 = func_003AA230(sp0);
        if (func_0039E598(arg0) < sp4) {
            temp_18 = func_003AA1C0(sp0);
            temp_2 = func_0039E930(arg0, sp4, temp_18, func_003AA1F8(sp0));
            sp8 = temp_2;
            func_003A9F78(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
            func_003A9E88(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) ((M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) * 0xAAAAAAAB) >> 2);
            M2C_FIELD(arg0, s32 *, 0) = temp_2;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0) + (sp4 * 0xC));
        } else if (func_003AA230(arg0) >= sp4) {
            temp_18_2 = func_003AA1C0(sp0);
            temp_19 = func_003AA1F8(sp0);
            sp8 = func_0039EB08(temp_18_2, temp_19, func_003AA2B0(arg0));
            func_003A9F78(sp8, M2C_FIELD(arg0, s32 *, 4));
        } else {
            temp_18_3 = func_003AA1C0(sp0);
            temp_19_2 = func_003AA1C0(sp0);
            func_0039EB08(temp_18_3, temp_19_2 + (func_003AA230(arg0) * 0xC), M2C_FIELD(arg0, s32 *, 0));
            temp_18_4 = func_003AA1C0(sp0);
            temp_18_5 = temp_18_4 + (func_003AA230(arg0) * 0xC);
            func_0039E8B0(temp_18_5, func_003AA1F8(sp0), M2C_FIELD(arg0, s32 *, 4));
        }
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0) + (sp4 * 0xC));
    }
    return arg0;
}
