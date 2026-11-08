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
M2C_UNK func_001E2C78(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_001E2EA8(M2C_UNK *, M2C_UNK *, void *); /* extern */
extern M2C_UNK D_0044DD18;
extern M2C_UNK D_0047BA70;
extern M2C_UNK D_0047BAE0;
extern M2C_UNK D_0047BB90;
extern M2C_UNK D_0047BBA0;
extern M2C_UNK D_0047BBB0;
extern M2C_UNK D_0047BBC0;
extern M2C_UNK D_0047BBD0;
extern M2C_UNK D_0047BBD8;

void *func_00297F30(void *arg0) {
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
    func_001E2C78(&sp10, &D_0047BA70, M2C_FIELD(arg0, s32 *, 0xC));
    func_001E2EA8(&sp10, &D_0047BB90, arg0 + 0x10);
    func_001E2EA8(&sp10, &D_0047BBA0, arg0 + 0x20);
    func_001E2C78(&sp10, &D_0047BBB0, M2C_FIELD(arg0, s32 *, 0x30));
    func_001E2C78(&sp10, &D_0047BBC0, M2C_FIELD(arg0, s32 *, 0x34));
    func_001E2B98(&sp10, &D_0047BBD0, M2C_FIELD(arg0, s32 *, 0x38));
    func_001E2B98(&sp10, &D_0047BAE0, M2C_FIELD(arg0, s32 *, 0x5C));
    func_001E2B98(&sp10, &D_0047BBD8, M2C_FIELD(arg0, s32 *, 0x60));
    return temp_2;
}
