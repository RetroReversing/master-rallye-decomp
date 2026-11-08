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

M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_004262C8;
extern M2C_UNK D_00476138;

void func_001D7340(s32 arg0) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *temp_4;
    void **temp_16;
    void *temp_2;
    void *temp_3;

    temp_4 = *D_004262C8;
    sp10 = D_004262C8;
    sp0 = temp_4;
    if (temp_4 != D_004262C8) {
        do {
            temp_16 = M2C_FIELD(sp0, void ***, 8);
            sp20 = sp0;
            sp10 = sp0;
            sp0 = M2C_FIELD(sp0, M2C_UNK **, 0);
            if (temp_16 != NULL) {
                temp_3 = *temp_16;
                if (M2C_FIELD(temp_3, s32 (**)(void *), 0xC)(temp_16 + M2C_FIELD(temp_3, s16 *, 8)) == arg0) {
                    temp_2 = *temp_16;
                    M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK), 0x14)(temp_16 + M2C_FIELD(temp_2, s16 *, 0x10), 3);
                }
            } else {
                func_003F9698(&D_00476138);
            }
            sp10 = D_004262C8;
        } while (sp0 != D_004262C8);
    }
}
