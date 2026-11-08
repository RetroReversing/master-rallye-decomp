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

M2C_UNK func_003A8160(s32, s32);                    /* extern */
s32 func_003A8230(void *);                          /* extern */
M2C_UNK func_003A8390(void *, s32, s32);            /* extern */
u32 func_003AF008(void *);                          /* extern */
s32 func_003AF198(void *, u32, s32, s32);           /* extern */

void func_003A83F0(void *arg0, u32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 temp_2;

    if (func_003AF008(arg0) < arg1) {
        sp0 = func_003A8230(arg0);
        temp_2 = func_003AF198(arg0, arg1, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        sp4 = temp_2;
        func_003A8160(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        func_003A8390(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) ((M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) * 0xAAAAAAAB) >> 4);
        M2C_FIELD(arg0, s32 *, 0) = temp_2;
        M2C_FIELD(arg0, s32 *, 4) = (s32) (sp4 + (sp0 * 0x30));
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0) + (arg1 * 0x30));
    }
}
