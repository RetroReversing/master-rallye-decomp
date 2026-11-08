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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001E2460(M2C_UNK *, void *);           /* extern */
M2C_UNK func_001E2B98(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_001E2C08(M2C_UNK *, M2C_UNK *, f32);   /* extern */
M2C_UNK func_001E2C78(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_001E2E38(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK D_0044DD18;
extern M2C_UNK D_00472930;
extern M2C_UNK D_00472940;
extern M2C_UNK D_00472950;
extern M2C_UNK D_00472960;
extern M2C_UNK D_00472978;
extern M2C_UNK D_00472990;
extern M2C_UNK D_004729A0;
extern M2C_UNK D_004729B8;
extern M2C_UNK D_004729D0;
extern M2C_UNK D_004729E0;
extern M2C_UNK D_004729E8;

void *func_001A7C50(void *arg0) {
    M2C_UNK sp10;
    s32 temp_lo;
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
    func_001E2E38(&sp10, &D_00472930, arg0 + 0xC);
    func_001E2B98(&sp10, &D_00472940, M2C_FIELD(arg0, s32 *, 0x1C));
    func_001E2B98(&sp10, &D_00472950, M2C_FIELD(arg0, s32 *, 0x28));
    func_001E2B98(&sp10, &D_00472960, M2C_FIELD(arg0, s32 *, 0x2C));
    func_001E2C08(&sp10, &D_00472978, M2C_FIELD(arg0, f32 *, 0x38));
    func_001E2C08(&sp10, &D_00472990, M2C_FIELD(arg0, f32 *, 0x40));
    func_001E2C08(&sp10, &D_004729A0, M2C_FIELD(arg0, f32 *, 0x44));
    func_001E2B98(&sp10, &D_004729B8, M2C_FIELD(arg0, s32 *, 0x30));
    temp_lo = (s32) M2C_FIELD(arg0, s32 *, 0x58) / 30;
    M2C_FIELD(arg0, s32 *, 0x58) = temp_lo;
    func_001E2C78(&sp10, &D_004729D0, temp_lo);
    func_001E2C08(&sp10, &D_004729E0, M2C_FIELD(arg0, f32 *, 0x50));
    func_001E2C78(&sp10, &D_004729E8, M2C_FIELD(arg0, s32 *, 0x120));
    return temp_2;
}
