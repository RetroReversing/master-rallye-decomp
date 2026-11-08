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
void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK D_002AD530(s32);                            /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */

void func_00327D08(void *arg0) {
    s32 temp_4;
    void *temp_16;
    void *temp_16_2;
    void *temp_2;
    void *temp_2_2;

    temp_16 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_16 != NULL) {
        temp_4 = M2C_FIELD(temp_16, s32 *, 4);
        if (temp_4 != 0) {
            D_002AD530(temp_4);
        }
        D_002AD390(temp_16);
    }
    temp_2 = D_002AD408(0x14);
    temp_16_2 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(arg0, void **, 0x14) = temp_2;
    M2C_FIELD(temp_2, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(temp_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    if (temp_16_2 != NULL) {
        func_002B2028(M2C_FIELD(temp_16_2, s32 *, 4));
        D_002AD390(temp_16_2);
    }
    temp_2_2 = D_002AD408(0x14);
    M2C_FIELD(arg0, void **, 0x10) = temp_2_2;
    M2C_FIELD(temp_2_2, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(temp_2_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2_2, s32 *, 0xC) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0xC) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
}
