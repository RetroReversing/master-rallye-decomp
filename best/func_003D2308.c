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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK func_002B2028(void *, void *, void *);      /* extern */
extern M2C_UNK D_00437E18;
extern M2C_UNK D_0047D9A8;

void func_003D2308(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    void **temp_2_2;
    void *temp_5;
    void *temp_6;

    temp_6 = M2C_FIELD(arg0, void **, 4);
    temp_5 = temp_6 - 0x10;
    temp_2 = M2C_FIELD(temp_5, s32 *, 8) - 1;
    M2C_FIELD(temp_5, s32 *, 8) = temp_2;
    if (temp_2 == 0) {
        temp_3 = M2C_FIELD(temp_5, s32 *, 4);
        if ((u32) (temp_3 + 0x10) >= 0x81U) {
            func_002B2028(temp_5, temp_5, temp_6);
        } else {
            temp_2_2 = ((((u32) (temp_3 + 0x17) >> 3) - 1) * 4) + &D_00437E18;
            M2C_FIELD(temp_6, void **, -0x10) = (void *) *temp_2_2;
            *temp_2_2 = temp_5;
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0047D9A8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
