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

s8 func_002CA418(s8);                               /* extern */

s32 func_002CA4A0(void *arg0, s8 arg1) {
    M2C_UNK var_5_2;
    s32 temp_hi;
    s32 temp_lo;
    s32 var_18;
    s32 var_20;
    s32 var_2;
    s32 var_2_2;
    s32 var_5;
    s8 var_3;
    void **temp_6;
    void **temp_6_2;
    void **temp_6_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    var_3 = M2C_FIELD((arg0 + (arg1 & 0x7F)), s8 *, 4);
    if ((var_3 >= 0) || (var_3 = func_002CA418(arg1), var_2 = 0, (var_3 >= 0))) {
        temp_hi = var_3 % 6;
        temp_lo = var_3 / 6;
        var_20 = 0;
        switch (temp_hi) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            var_5 = 2;
            break;
        case 1:                                     /* switch 1 */
            var_5 = 3;
            break;
        case 2:                                     /* switch 1 */
            var_5 = 1;
            break;
        case 3:                                     /* switch 1 */
            var_5 = 0;
            break;
        case 4:                                     /* switch 1 */
            var_5 = 6;
            break;
        case 5:                                     /* switch 1 */
            var_5 = 7;
            break;
        default:                                    /* switch 1 */
            var_5 = -1;
            break;
        }
        if (var_5 >= 0) {
            temp_6 = M2C_FIELD(arg0, void ***, 0x9C);
            temp_3 = *temp_6;
            var_20 = M2C_FIELD(temp_3, s32 (**)(void *, s32, void **), 0x14)(temp_6 + M2C_FIELD(temp_3, s16 *, 0x10), var_5, temp_6);
        }
        switch ((s16) temp_lo) {                    /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_18 = 1;
block_23:
            var_2_2 = var_18 != 0;
            break;
        case 1:                                     /* switch 2 */
            var_5_2 = 4;
block_19:
            temp_3_2 = *M2C_FIELD(arg0, void ***, 0x9C);
            var_18 = M2C_FIELD(temp_3_2, s32 (**)(void *, M2C_UNK, void **), 0xC)(M2C_FIELD(arg0, void ***, 0x9C) + M2C_FIELD(temp_3_2, s16 *, 8), var_5_2, M2C_FIELD(arg0, void ***, 0x9C));
            goto block_23;
        case 2:                                     /* switch 2 */
            var_5_2 = 5;
            goto block_19;
        default:                                    /* switch 2 */
            var_2_2 = 0 != 0;
            if ((s16) temp_lo == 3) {
                temp_6_2 = M2C_FIELD(arg0, void ***, 0x9C);
                var_18 = 0;
                temp_3_3 = *temp_6_2;
                if (M2C_FIELD(temp_3_3, s32 (**)(void *, M2C_UNK, void **), 0xC)(temp_6_2 + M2C_FIELD(temp_3_3, s16 *, 8), 5, temp_6_2) != 0) {
                    temp_6_3 = M2C_FIELD(arg0, void ***, 0x9C);
                    temp_3_4 = *temp_6_3;
                    var_18 = (M2C_FIELD(temp_3_4, s32 (**)(void *, M2C_UNK, void **), 0xC)(temp_6_3 + M2C_FIELD(temp_3_4, s16 *, 8), 4, temp_6_3) != 0) ? 1 : 0;
                }
                goto block_23;
            }
            break;
        }
        var_2 = (var_20 != 0) ? var_2_2 : 0;
    }
    return var_2;
}
