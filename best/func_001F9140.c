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

s32 func_001F9140(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_6;

    temp_6 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_3 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_6 >= temp_3) {
        if (temp_3 >= temp_6) {
            temp_2 = M2C_FIELD(arg1, s32 *, 0);
            if (M2C_FIELD(arg0, s32 *, 0) == -1) {
                if (temp_2 != -1) {
                    /* Duplicate return node #7. Try simplifying control flow for better match */
                    return 1;
                }
                goto block_9;
            }
            if (temp_2 != -1) {
block_9:
                temp_3_2 = M2C_FIELD(arg0, s32 *, 0x10);
                if ((temp_3_2 != -1) || (M2C_FIELD(arg1, s32 *, 0x10) == temp_3_2)) {
                    if ((temp_3_2 == -1) || (M2C_FIELD(arg1, s32 *, 0x10) != -1)) {
                        temp_3_3 = M2C_FIELD(arg0, s32 *, 0x28);
                        if ((temp_3_3 != -1) || (M2C_FIELD(arg1, s32 *, 0x28) == temp_3_3)) {
                            if ((temp_3_3 == -1) || (M2C_FIELD(arg1, s32 *, 0x28) != -1)) {
                                return M2C_FIELD(arg0, s32 *, 0x1C) < M2C_FIELD(arg1, s32 *, 0x1C);
                            }
                            /* Duplicate return node #4. Try simplifying control flow for better match */
                            return 0;
                        }
                        /* Duplicate return node #7. Try simplifying control flow for better match */
                        return 1;
                    }
                    /* Duplicate return node #4. Try simplifying control flow for better match */
                    return 0;
                }
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 1;
            }
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return 0;
        }
        return 0;
    }
    return 1;
}
