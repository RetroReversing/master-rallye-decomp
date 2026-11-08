/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_001D4040(void *, M2C_UNK *);           /* extern */
extern M2C_UNK D_004769B8;
extern M2C_UNK D_004769C0;
extern M2C_UNK D_004769C8;
extern M2C_UNK D_004769D0;
extern M2C_UNK D_004769D8;
extern M2C_UNK D_004769E8;
extern M2C_UNK D_004769F8;
extern M2C_UNK D_00476A00;
extern M2C_UNK D_00476A08;
extern M2C_UNK D_00476A10;
extern M2C_UNK D_00476A18;
extern M2C_UNK D_00476A20;
extern M2C_UNK D_00476A28;
extern M2C_UNK D_00476A30;
extern M2C_UNK D_00476A40;
extern M2C_UNK D_00476A48;
extern M2C_UNK D_00476A50;
extern M2C_UNK D_00476A58;
extern M2C_UNK D_00476A60;
extern M2C_UNK D_00476A68;
extern M2C_UNK D_00476A70;
extern M2C_UNK D_00476A78;
extern M2C_UNK D_00476A88;

void *func_001E00E8(void *arg0) {
    void *sp0;
    s32 *var_2;
    s32 var_4;

    var_4 = 3;
    var_2 = arg0 + 0x28;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    do {
        *var_2 = 0;
        var_4 -= 1;
        var_2 += 4;
    } while (var_4 != -1);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    sp0 = arg0 + 0x4C;
    func_001D4040(arg0 + 0xC, &D_004769B8);
    func_001D4040(arg0 + 0x10, &D_004769C0);
    func_001D4040(arg0 + 0x14, &D_004769C8);
    func_001D4040(arg0 + 0x18, &D_004769D0);
    func_001D4040(arg0 + 0x1C, &D_004769D8);
    func_001D4040(arg0 + 0x58, &D_004769E8);
    func_001D4040(arg0 + 0x20, &D_004769F8);
    func_001D4040(arg0 + 0x24, &D_00476A00);
    func_001D4040(arg0 + 0x28, &D_00476A08);
    func_001D4040(arg0 + 0x2C, &D_00476A10);
    func_001D4040(arg0 + 0x30, &D_00476A18);
    func_001D4040(arg0 + 0x34, &D_00476A20);
    func_001D4040(arg0 + 0x38, &D_00476A28);
    func_001D4040(arg0 + 0x3C, &D_00476A30);
    func_001D4040(arg0 + 0x40, &D_00476A40);
    func_001D4040(arg0 + 0x44, &D_00476A48);
    func_001D4040(arg0 + 0x48, &D_00476A50);
    func_001D4040(arg0 + 0x54, &D_00476A58);
    func_001D4040(arg0 + 0x50, &D_00476A60);
    func_001D4040(sp0, &D_00476A68);
    func_001D4040(arg0, &D_00476A70);
    func_001D4040(arg0 + 4, &D_00476A78);
    func_001D4040(arg0 + 8, &D_00476A88);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    return arg0;
}
