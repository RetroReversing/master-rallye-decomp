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

M2C_UNK func_00118940(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_001D2458(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_00446D10;
extern M2C_UNK D_00446D28;
extern M2C_UNK D_00446D40;
extern M2C_UNK D_00446D50;
extern M2C_UNK D_00446D60;
extern M2C_UNK D_00446D70;
extern M2C_UNK D_00446D80;
extern M2C_UNK D_00446D90;
extern M2C_UNK D_00446DA8;
extern M2C_UNK D_00446DC0;
extern M2C_UNK D_00446DD8;
extern M2C_UNK D_00446DF0;
extern M2C_UNK D_00446E08;
extern M2C_UNK D_00446E20;
extern M2C_UNK D_00446E38;
extern M2C_UNK D_00446E50;
extern M2C_UNK D_00446E68;
extern M2C_UNK D_00446E80;
extern M2C_UNK D_00446E98;
extern M2C_UNK D_00446EB0;
extern M2C_UNK D_00446EC8;
extern M2C_UNK D_00446EE0;
extern M2C_UNK D_00446EF0;
extern M2C_UNK D_00446F08;
extern M2C_UNK D_00446F20;
extern M2C_UNK D_00446F38;
extern M2C_UNK D_00446F50;
extern M2C_UNK D_00446F60;
extern M2C_UNK D_00446F78;
extern M2C_UNK D_00446F90;
extern M2C_UNK D_00446FA8;
extern M2C_UNK D_00446FC0;
extern M2C_UNK D_00446FD8;
extern M2C_UNK D_00446FF0;
extern M2C_UNK D_00447008;
extern M2C_UNK D_00447020;

void func_00117AF0(s32 arg0) {
    M2C_UNK sp10;

    func_001D2458(&sp10, &D_00446D10);
    func_00118940(arg0 + 0x5E4, 0, 0, 0, 0, 0, &sp10, -1, 0, 0x40A00000, -1);
    func_001D2458(&sp10, &D_00446D28);
    func_00118940(arg0 + 0x610, 1, 1, 1, 0, 0, &sp10, -1, 0, 0x40D00000, -1);
    func_001D2458(&sp10, &D_00446D40);
    func_00118940(arg0 + 0x63C, 2, 2, 2, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446D50);
    func_00118940(arg0 + 0x668, 3, 2, 3, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446D60);
    func_00118940(arg0 + 0x694, 4, 3, 4, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446D70);
    func_00118940(arg0 + 0x6C0, 5, 4, 5, 2, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446D80);
    func_00118940(arg0 + 0x6EC, 6, 4, 6, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446D90);
    func_00118940(arg0 + 0x718, 7, 6, 7, 2, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446DA8);
    func_00118940(arg0 + 0x744, 8, 7, 8, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446DC0);
    func_00118940(arg0 + 0x770, 9, 7, 9, 2, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446DD8);
    func_00118940(arg0 + 0x79C, 0xA, 0, 0, 0, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446DF0);
    func_00118940(arg0 + 0x7C8, 0xB, 0, 1, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446E08);
    func_00118940(arg0 + 0x7F4, 0xC, 0, 2, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446E20);
    func_00118940(arg0 + 0x820, 0xD, 0, 0, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446E38);
    func_00118940(arg0 + 0x84C, 0xE, 0, 1, 0, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446E50);
    func_00118940(arg0 + 0x878, 0xF, 0, 2, 0, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446E68);
    func_00118940(arg0 + 0x8A4, 0x10, 0, 0, 0, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446E80);
    func_00118940(arg0 + 0x8D0, 0x11, 0, 1, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446E98);
    func_00118940(arg0 + 0x8FC, 0x12, 0, 2, 0, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446EB0);
    func_00118940(arg0 + 0x928, 0x13, 0, 0, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446EC8);
    func_00118940(arg0 + 0x954, 0x14, 0, 1, 2, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446EE0);
    func_00118940(arg0 + 0x980, 0x15, 0, 2, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446EF0);
    func_00118940(arg0 + 0x9AC, 0x16, 0, 0, 0, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446F08);
    func_00118940(arg0 + 0x9D8, 0x17, 0, 1, 2, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446F20);
    func_00118940(arg0 + 0xA04, 0x18, 0, 2, 1, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446F38);
    func_00118940(arg0 + 0xA30, 0x19, 0, 0, 0, 0, &sp10, 6, 0, 0, 2);
    func_001D2458(&sp10, &D_00446F50);
    func_00118940(arg0 + 0xA5C, 0x1A, 0, 1, 0, 0, &sp10, 4, 0, 0, 3);
    func_001D2458(&sp10, &D_00446F60);
    func_00118940(arg0 + 0xA88, 0x1B, 0, 2, 1, 0, &sp10, 2, 0, 0, 6);
    func_001D2458(&sp10, &D_00446F78);
    func_00118940(arg0 + 0xAB4, 0x1C, 0, 3, 0, 0, &sp10, 5, 0, 0, 9);
    func_001D2458(&sp10, &D_00446F90);
    func_00118940(arg0 + 0xAE0, 0x1D, 0, 4, 2, 0, &sp10, 9, 0, 0, 0xB);
    func_001D2458(&sp10, &D_00446FA8);
    func_00118940(arg0 + 0xB0C, 0x1E, 0, 5, 2, 0, &sp10, 0xE, 0, 0, 7);
    func_001D2458(&sp10, &D_00446FC0);
    func_00118940(arg0 + 0xB38, 0x1F, 0, 6, 1, 0, &sp10, 0xD, 0, 0, 0x12);
    func_001D2458(&sp10, &D_00446FD8);
    func_00118940(arg0 + 0xB64, 0x20, 0, 7, 2, 0, &sp10, 0x14, 0, 0, 0x10);
    func_001D2458(&sp10, &D_00446FF0);
    func_00118940(arg0 + 0xB90, 0x21, 0, 8, 2, 0, &sp10, 0xE, 0, 0, 0xF);
    func_001D2458(&sp10, &D_00447008);
    func_00118940(arg0 + 0xBBC, 0x22, 0, 9, 2, 0, &sp10, 0x16, 0, 0, 0x13);
    func_001D2458(&sp10, &D_00447020);
    func_00118940(arg0 + 0xBE8, 0x23, 0, 0xA, 2, 0, &sp10, 0x13, 0, 0, 0x18);
    func_001D2458(&sp10, &D_00446F20);
    func_00118940(arg0 + 0xC14, 0x24, 0, 0, 2, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446DC0);
    func_00118940(arg0 + 0xC40, 0x25, 0, 1, 2, 0, &sp10, -1, 0, 0, -1);
    func_001D2458(&sp10, &D_00446F90);
    func_00118940(arg0 + 0xC6C, 0x26, 0, 2, 2, 0, &sp10, -1, 0, 0, -1);
}
