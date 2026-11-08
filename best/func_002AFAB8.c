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

M2C_UNK func_002B2028(s32, void **);                /* extern */
void *func_003F7300(void **);                       /* extern */
extern void *D_00494CD0;

void *func_002AFAB8(s32 arg0) {
    void **var_5;
    void *temp_16;
    void *temp_2;

    var_5 = &D_00494CD0;
    if (D_00494CD0 != NULL) {
loop_2:
        temp_16 = *var_5;
        temp_2 = M2C_FIELD(temp_16, void **, 0x14);
        if (M2C_FIELD(temp_16, s32 *, 8) == arg0) {
            *var_5 = temp_2;
            if (M2C_FIELD(temp_16, s32 *, 0) != 0) {
                func_002B2028(M2C_FIELD(temp_16, s32 *, 0xC), var_5);
            }
            return temp_16;
        }
        var_5 = temp_16 + 0x14;
        if (temp_2 == NULL) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return func_003F7300(var_5);
        }
        goto loop_2;
    }
    return func_003F7300(var_5);
}
