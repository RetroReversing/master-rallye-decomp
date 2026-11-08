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

M2C_UNK func_002B2028(s32);                         /* extern */
M2C_UNK func_003E0C68(void *);                      /* extern */
M2C_UNK func_003E0DD0(void *);                      /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00481730;

void func_002C3130(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;

    temp_16 = arg0 + 0x38;
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        temp_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_2, s16 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        func_003E0DD0(temp_16);
        func_003E0C68(temp_16);
        if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            temp_2_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_2_2, s16 *, 0x28));
        }
        temp_4 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_4 != 0) {
            func_002B2028(temp_4);
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_4_2 != 0) {
            func_002B2028(temp_4_2);
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
        func_003F9698(&D_00481730);
    }
}
