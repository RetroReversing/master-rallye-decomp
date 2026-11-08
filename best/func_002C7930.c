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

M2C_UNK func_002C7598(void *);                      /* extern */
M2C_UNK func_002C76A0(void *);                      /* extern */
M2C_UNK func_002C76C0(void *);                      /* extern */
M2C_UNK func_002C7720(void *);                      /* extern */
M2C_UNK func_002C7788(void *);                      /* extern */
s32 func_002C77A0(void *);                          /* extern */
s32 func_002C7880(void *);                          /* extern */
s16 func_003CA4E0(s16, s16);                        /* extern */
s32 func_003CA5F8(s16, s16);                        /* extern */
s32 func_003CA680(s16, s16, M2C_UNK, M2C_UNK);      /* extern */
u16 func_003CA8C0(s16, s16, M2C_UNK, M2C_UNK);      /* extern */
s32 func_003CA9F8(s16, s16, M2C_UNK, M2C_UNK);      /* extern */
s32 func_003CADB0(s16, s16);                        /* extern */
s32 func_003CAE10(s16, s16);                        /* extern */

s32 func_002C7930(void *arg0) {
    s16 temp_2;
    s16 temp_2_4;
    s16 temp_3;
    s16 temp_3_2;
    s32 var_17;
    s32 var_2;
    s32 var_2_2;
    u16 temp_2_2;
    u16 temp_2_3;

    var_17 = 0;
    temp_2 = func_003CA4E0(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16));
    M2C_FIELD(arg0, s16 *, 0x24) = temp_2;
    if ((temp_2 << 0x10) == 0) {
        M2C_FIELD(arg0, u16 *, 0x2E) = 0U;
        M2C_FIELD(arg0, s32 *, 4) = 1;
        M2C_FIELD(arg0, s16 *, 0x26) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    temp_3 = M2C_FIELD(arg0, s16 *, 0x26);
    switch (temp_3) {                               /* switch 1 */
    case 0x0:                                       /* switch 1 */
        func_002C7598(arg0);
        temp_3_2 = M2C_FIELD(arg0, s16 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        if ((temp_3_2 == 6) || (var_2 = 0, (temp_3_2 == 2))) {
            temp_2_2 = func_003CA8C0(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16), 1, 0);
            M2C_FIELD(arg0, u16 *, 0x28) = temp_2_2;
            if ((temp_2_2 << 0x10) == 0) {
                M2C_FIELD(arg0, u16 *, 0x2A) = 0U;
            } else {
                temp_2_3 = func_003CA8C0(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16), 2, 0);
                M2C_FIELD(arg0, u16 *, 0x2A) = temp_2_3;
                if ((temp_2_3 << 0x10) > 0) {
                    M2C_FIELD(arg0, u16 *, 0x28) = temp_2_3;
                }
                temp_2_4 = M2C_FIELD(arg0, u16 *, 0x28) - 2;
                switch (temp_2_4) {                 /* switch 2 */
                case 0:                             /* switch 2 */
                case 3:                             /* switch 2 */
                case 4:                             /* switch 2 */
                    break;
                case 2:                             /* switch 2 */
                    M2C_FIELD(arg0, s16 *, 0x26) = 0x28;
                    break;
                case 5:                             /* switch 2 */
                    M2C_FIELD(arg0, s16 *, 0x26) = 0x46;
                    break;
                default:                            /* switch 2 */
                case 1:                             /* switch 2 */
                    M2C_FIELD(arg0, s16 *, 0x26) = 0x63;
                    break;
                }
            }
block_55:
            var_2 = var_17;
        }
        return var_2;
    case 0x28:                                      /* switch 1 */
        if (func_003CA8C0(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16), 4, -1) != 0) {
            M2C_FIELD(arg0, s16 *, 0x26) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x26) + 1);
        case 0x29:                                  /* switch 1 */
            var_2_2 = func_003CA9F8(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16), 1, 0);
block_29:
            var_2 = 0;
            if (var_2_2 == 1) {
                M2C_FIELD(arg0, s16 *, 0x26) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x26) + 1);
                goto block_55;
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0x26) = 0x63;
            func_002C76A0(arg0);
            goto block_55;
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
        return var_2;
    case 0x2A:                                      /* switch 1 */
        if (func_003CA5F8(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16)) == 1) {
            M2C_FIELD(arg0, s16 *, 0x26) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x26) - 1);
        }
        var_2 = 0;
        if (func_003CA5F8(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16)) == 0) {
            M2C_FIELD(arg0, s16 *, 0x26) = 0;
            return 0;
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
        return var_2;
    case 0x46:                                      /* switch 1 */
        func_002C76C0(arg0);
        if (func_003CADB0(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16)) == 1) {
            M2C_FIELD(arg0, s16 *, 0x26) = 0x4C;
        } else {
block_43:
            M2C_FIELD(arg0, s16 *, 0x26) = 0x50;
        }
        goto block_55;
    case 0x4C:                                      /* switch 1 */
        var_2_2 = func_003CAE10(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16));
        goto block_29;
    case 0x4D:                                      /* switch 1 */
        if (func_003CA5F8(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16)) == 1) {
            M2C_FIELD(arg0, s16 *, 0x26) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x26) - 1);
        }
        var_2 = 0;
        if (func_003CA5F8(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16)) == 0) {
            M2C_FIELD(arg0, s16 *, 0x26) = 0x50;
            func_002C7720(arg0);
            goto block_55;
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
        return var_2;
    case 0x50:                                      /* switch 1 */
        if (func_003CA680(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16), -1, 0) == 0) {
            M2C_FIELD(arg0, s16 *, 0x26) = 0x63;
            M2C_FIELD(arg0, s64 *, 0x30) = (s64) (M2C_FIELD(arg0, s64 *, 0x30) & ((0xBFFFFFFF << 5) | 0x1F));
        } else if (func_002C77A0(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x26) = 0x51;
        }
        goto block_55;
    case 0x51:                                      /* switch 1 */
        if (func_003CA5F8(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16)) != 1) {
            var_2 = 0;
            if (func_003CA5F8(M2C_FIELD(arg0, s16 *, 0x14), M2C_FIELD(arg0, s16 *, 0x16)) == 0) {
                M2C_FIELD(arg0, s16 *, 0x26) = 0x63;
                func_002C7788(arg0);
                goto block_55;
            }
        } else {
            goto block_43;
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
        return var_2;
    default:                                        /* switch 1 */
        if (M2C_FIELD(arg0, s16 *, 0x24) == 7) {
            M2C_FIELD(arg0, u16 *, 0x2E) = (u16) (M2C_FIELD(arg0, u16 *, 0x2E) + 1);
        }
        if ((M2C_FIELD(arg0, s16 *, 0x24) == 6) || (var_2 = 0, (M2C_FIELD(arg0, s16 *, 0x24) == 2))) {
            var_2 = 0;
            if (func_002C7880(arg0) != 0) {
                if (M2C_FIELD(arg0, s16 *, 0x2C) != (s16) M2C_FIELD(arg0, u16 *, 0x28)) {
                    M2C_FIELD(arg0, s16 *, 0x26) = 0;
                } else {
                    var_17 = 1;
                }
                goto block_55;
            }
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
        return var_2;
    }
}
