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

M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */
extern void **D_00428F24;

void func_002C39D8(void **arg0) {
    void **temp_17;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;

    func_0040AF58();
    temp_17 = D_00428F24;
    D_00428F24 = NULL;
    func_0040AFA0();
    if (temp_17 != NULL) {
        if (temp_17 != arg0) {
            temp_2 = *temp_17;
            M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0x1C)(temp_17 + M2C_FIELD(temp_2, s16 *, 0x18));
            if (arg0 != NULL) {
                temp_3 = *arg0;
                M2C_FIELD(temp_3, M2C_UNK (**)(void *), 0x14)(arg0 + M2C_FIELD(temp_3, s16 *, 0x10));
            }
        } else {
            temp_3_2 = *arg0;
            M2C_FIELD(temp_3_2, M2C_UNK (**)(void *), 0x44)(arg0 + M2C_FIELD(temp_3_2, s16 *, 0x40));
        }
    }
    func_0040AF58();
    D_00428F24 = arg0;
    func_0040AFA0();
}
