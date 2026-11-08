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

M2C_UNK func_002B2028(void *);                      /* extern */
extern M2C_UNK D_00437E18;

void func_003D11B0(void *arg0) {
    s32 temp_2;
    s32 temp_3;
    void **temp_2_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 8) - 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_2;
    if (temp_2 == 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 4);
        if ((u32) (temp_3 + 0x10) >= 0x81U) {
            func_002B2028(arg0);
            return;
        }
        temp_2_2 = ((((u32) (temp_3 + 0x17) >> 3) - 1) * 4) + &D_00437E18;
        M2C_FIELD(arg0, void **, 0) = (void *) *temp_2_2;
        *temp_2_2 = arg0;
    }
}
