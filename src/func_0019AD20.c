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

void *func_0019ABA8(void *);                        /* extern */

void func_0019AD20(void *arg0) {
    register unsigned temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x1E8);
    M2C_FIELD(arg0, s32 *, 0x1E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1E4) + 1);
    switch (temp_3) {                               /* irregular */
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x1E4) >= M2C_FIELD(func_0019ABA8(arg0), s32 *, 0xC)) {
            M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 1;
            return;
        }
        return;
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x1E4) >= M2C_FIELD(func_0019ABA8(arg0), s32 *, 0x10)) {
            M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        }
        break;
    }
}
