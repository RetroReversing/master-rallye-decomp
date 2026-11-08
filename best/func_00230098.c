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

M2C_UNK func_002301A0(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0024F6E0(void **, s32 *);              /* extern */
M2C_UNK func_0024F770(s32 *, M2C_UNK *, void **);   /* extern */
extern M2C_UNK D_00426478;

void func_00230098(s32 arg0, void *arg1, s32 arg2) {
    s32 *sp0;
    void *sp10;
    s32 sp14;
    s32 sp18;
    s32 *temp_3;
    s32 temp_2;
    s32 temp_2_3;
    void *temp_2_2;
    void *temp_2_4;

    temp_3 = M2C_FIELD(arg1, s32 **, 0x24);
    sp0 = temp_3;
    if (temp_3 != NULL) {
        *temp_3 += 1;
    }
    sp10 = NULL;
    sp14 = 0;
    sp18 = 0;
    func_0024F770(sp0, &D_00426478, &sp10);
    func_0024F6E0(&sp10, sp0);
    func_002301A0(arg0, M2C_FIELD(sp10, s32 *, 8), M2C_FIELD(sp10, s32 *, 0x14), M2C_FIELD(sp10, s32 *, 0xC), M2C_FIELD(sp10, s32 *, 0x18), arg2);
    if (sp10 != NULL) {
        temp_2 = M2C_FIELD(sp10, s32 *, 0) - 1;
        M2C_FIELD(sp10, s32 *, 0) = temp_2;
        if (temp_2 == 0) {
            temp_2_2 = M2C_FIELD(sp10, void **, 4);
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(sp10 + M2C_FIELD(temp_2_2, s16 *, 8), 3, sp10);
        }
    }
    if (sp0 != NULL) {
        temp_2_3 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_3;
        if (temp_2_3 == 0) {
            temp_2_4 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_4, s16 *, 8), 3, sp0);
        }
    }
}
