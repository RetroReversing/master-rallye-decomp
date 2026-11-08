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

M2C_UNK D_002AD390(s32);                            /* extern */
M2C_UNK func_001D2458(s32 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D4040(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_0047B7F0;
extern M2C_UNK D_0047B9A8;
extern M2C_UNK D_0047BA20;
extern M2C_UNK D_0047BA28;
extern M2C_UNK D_0047BA48;
extern M2C_UNK D_0047BBF0;
extern M2C_UNK D_0047BCE0;
extern M2C_UNK D_0047BDD8;
extern M2C_UNK D_0047BF20;
extern M2C_UNK D_0047BFD0;
extern M2C_UNK D_0047C020;
extern M2C_UNK D_0047C1F0;
extern M2C_UNK D_0047D710;
extern M2C_UNK D_0047D720;
extern M2C_UNK D_0047D730;
extern M2C_UNK D_0047D740;
extern M2C_UNK D_0047D748;
extern M2C_UNK D_0047D750;
extern M2C_UNK D_0047D758;
extern M2C_UNK D_0047D760;
extern M2C_UNK D_0047D770;
extern M2C_UNK D_0047D780;
extern M2C_UNK D_0047D790;
extern M2C_UNK D_0047D7A0;
extern M2C_UNK D_0047D7B0;
extern M2C_UNK D_0047D7C0;
extern M2C_UNK D_0047D7C8;
extern M2C_UNK D_0047D7D8;
extern M2C_UNK D_0047D7E0;
extern M2C_UNK D_00494B78;
extern M2C_UNK D_00494B80;
extern M2C_UNK D_00494B88;
extern M2C_UNK D_00494B90;
extern M2C_UNK D_00494B98;
extern M2C_UNK D_00494BA0;
extern M2C_UNK D_00494BA8;
extern s32 D_00494BB0;
extern s32 D_00494BB8;
extern s32 D_00494BC0;
extern s32 D_00494BC8;
extern M2C_UNK D_00494BD0;
extern M2C_UNK D_00494BD8;
extern M2C_UNK D_00494BE0;
extern M2C_UNK D_00494BE8;
extern M2C_UNK D_00494BF0;
extern M2C_UNK D_00494BF8;
extern M2C_UNK D_00494C00;
extern M2C_UNK D_00494C08;
extern M2C_UNK D_00494C10;
extern M2C_UNK D_00494C18;
extern M2C_UNK D_00494C20;
extern M2C_UNK D_00494C28;
extern M2C_UNK D_00494C30;
extern M2C_UNK D_00494C38;
extern M2C_UNK D_00494C40;
extern M2C_UNK D_00494C48;
extern M2C_UNK D_00494C50;
extern M2C_UNK D_00494C58;

void func_002A7BC8(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_001D4040(&D_00494B78, &D_0047D710);
            func_001D4040(&D_00494B80, &D_0047D720);
            func_001D4040(&D_00494B88, &D_0047BBF0);
            func_001D4040(&D_00494B90, &D_0047BCE0);
            func_001D4040(&D_00494B98, &D_0047D730);
            func_001D4040(&D_00494BA0, &D_0047BDD8);
            func_001D4040(&D_00494BA8, &D_0047BF20);
            func_001D2458(&D_00494BB0, &D_0047D740);
            func_001D2458(&D_00494BB8, &D_0047D748);
            func_001D2458(&D_00494BC0, &D_0047D750);
            func_001D2458(&D_00494BC8, &D_0047D758);
            func_001D4040(&D_00494BD0, &D_0047BFD0);
            func_001D4040(&D_00494BD8, &D_0047D760);
            func_001D4040(&D_00494BE0, &D_0047C020);
            func_001D4040(&D_00494BE8, &D_0047D770);
            func_001D4040(&D_00494BF0, &D_0047C1F0);
            func_001D4040(&D_00494BF8, &D_0047D780);
            func_001D4040(&D_00494C00, &D_0047D790);
            func_001D4040(&D_00494C08, &D_0047D7A0);
            func_001D4040(&D_00494C10, &D_0047D7B0);
            func_001D4040(&D_00494C18, &D_0047D7C0);
            func_001D4040(&D_00494C20, &D_0047BA20);
            func_001D4040(&D_00494C28, &D_0047D7C8);
            func_001D4040(&D_00494C30, &D_0047D7D8);
            func_001D4040(&D_00494C38, &D_0047B9A8);
            func_001D4040(&D_00494C40, &D_0047BA28);
            func_001D4040(&D_00494C48, &D_0047BA48);
            func_001D4040(&D_00494C50, &D_0047B7F0);
            func_001D4040(&D_00494C58, &D_0047D7E0);
            return;
        }
        D_002AD390(D_00494BC8);
        D_002AD390(D_00494BC0);
        D_002AD390(D_00494BB8);
        D_002AD390(D_00494BB0);
    }
}
