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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001E2460(M2C_UNK *, void *);           /* extern */
M2C_UNK func_001E2B98(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_001E2C08(M2C_UNK *, M2C_UNK *, f32);   /* extern */
M2C_UNK func_001E2C78(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_001E2E38(M2C_UNK *, M2C_UNK *, void *); /* extern */
M2C_UNK func_001E2F18(M2C_UNK *, M2C_UNK *, void *); /* extern */
extern M2C_UNK D_0044DD18;
extern M2C_UNK D_0047B4A8;
extern M2C_UNK D_0047BB50;
extern M2C_UNK D_0047BC10;
extern M2C_UNK D_0047BCA8;
extern M2C_UNK D_0047C120;
extern M2C_UNK D_0047C128;
extern M2C_UNK D_0047C130;
extern M2C_UNK D_0047C140;
extern M2C_UNK D_0047C150;
extern M2C_UNK D_0047C160;
extern M2C_UNK D_0047C170;

void *func_0029DD18(void *arg0) {
    M2C_UNK sp10;
    void *temp_2;
    void *temp_2_2;

    temp_2 = D_002AD408(0x24);
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, M2C_UNK **, 0x10) = &D_0044DD18;
    temp_2_2 = temp_2 + 0x14;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2, s32 *, 0x14) = 0;
    M2C_FIELD(temp_2_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2, s32 *, 0x20) = 0;
    func_001E2460(&sp10, temp_2);
    func_001E2C78(&sp10, &D_0047BB50, M2C_FIELD(arg0, s32 *, 0x30));
    func_001E2E38(&sp10, &D_0047C120, arg0 + 0x40);
    func_001E2C78(&sp10, &D_0047C128, M2C_FIELD(arg0, s32 *, 0x48));
    func_001E2E38(&sp10, &D_0047BC10, arg0 + 0x50);
    func_001E2F18(&sp10, &D_0047BCA8, arg0 + 0x18);
    func_001E2C08(&sp10, &D_0047C130, M2C_FIELD(arg0, f32 *, 0x34));
    func_001E2C08(&sp10, &D_0047C140, M2C_FIELD(arg0, f32 *, 0x38));
    func_001E2C08(&sp10, &D_0047B4A8, M2C_FIELD(arg0, f32 *, 0x3C));
    func_001E2B98(&sp10, &D_0047C150, M2C_FIELD(arg0, s32 *, 0x28));
    func_001E2C78(&sp10, &D_0047C160, M2C_FIELD(arg0, s32 *, 0x2C));
    func_001E2E38(&sp10, &D_0047C170, arg0 + 0x64);
    return temp_2;
}
