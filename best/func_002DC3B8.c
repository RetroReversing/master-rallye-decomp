/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK D_002AD390(s32);                            /* extern */
M2C_UNK func_001D6A68(s32);                         /* extern */
s32 func_001D6BB0();                                /* extern */
M2C_UNK func_002015C0(s32);                         /* extern */
s32 func_002015D8();                                /* extern */
M2C_UNK func_002FD0A8(s32, M2C_UNK);                /* extern */

void func_002DC3B8(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    void **temp_6;
    void **temp_6_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_6_3;

    if (M2C_FIELD(arg0, void ***, 4) != NULL) {
        func_002015C0(func_002015D8());
        temp_6 = M2C_FIELD(arg0, void ***, 4);
        if (temp_6 != NULL) {
            temp_2 = *temp_6;
            M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK, void **), 0xC)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
        }
        M2C_FIELD(arg0, void ***, 4) = NULL;
    }
    if (M2C_FIELD(arg0, void ***, 8) != NULL) {
        func_002015C0(func_002015D8());
        temp_6_2 = M2C_FIELD(arg0, void ***, 8);
        if (temp_6_2 != NULL) {
            temp_2_2 = *temp_6_2;
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, void **), 0xC)(temp_6_2 + M2C_FIELD(temp_2_2, s16 *, 8), 3, temp_6_2);
        }
        M2C_FIELD(arg0, void ***, 8) = NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_001D6A68(func_001D6BB0());
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_4 != 0) {
        func_002FD0A8(temp_4, 3);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    temp_6_3 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_6_3 != NULL) {
        temp_2_3 = M2C_FIELD(temp_6_3, void **, 0x148);
        M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_3 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6_3);
        M2C_FIELD(arg0, void **, 0x14) = NULL;
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_4_2 != 0) {
        D_002AD390(temp_4_2);
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
}
