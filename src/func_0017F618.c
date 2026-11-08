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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK D_002AD530(s32);                            /* extern */
extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_00473D50;

void func_0017F618(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00473D50;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_4 != 0) {
        D_002AD530(temp_4);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_4_2 != 0) {
        D_002AD530(temp_4_2);
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_4_3 != 0) {
        D_002AD530(temp_4_3);
    }
    temp_4_4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_4_4 != 0) {
        D_002AD530(temp_4_4);
    }
    temp_4_5 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_4_5 != 0) {
        D_002AD530(temp_4_5);
    }
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
