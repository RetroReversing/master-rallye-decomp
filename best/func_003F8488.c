struct Unk54 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    void (*unk3C)(void *);
};

struct UnkStruct {
    void *unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    s16 unkE;
    void *unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    void *unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    u32 unk4C;
    s32 unk50;
    struct Unk54 *unk54;
};

extern s32 func_003F82F0(struct Unk54 *arg0, s16 arg1, void *arg2);
extern void *func_003F8A30(struct Unk54 *arg0, s32 arg1);
extern void *func_003F7800;
extern void *func_003FA4F8;
extern s32 func_00403690(s16 arg0, void *arg1);

void func_003F8488(struct UnkStruct *arg0) {
    s16 a1;
    s32 var17;
    u16 v0;
    u16 v1;
    void *p;
    s32 s1;
    s32 s2;
    u32 sp4;

    v1 = arg0->unkC;
    if (v1 & 0x2) {
        p = (u8 *)arg0 + 0x43;
        arg0->unk14 = 1;
        arg0->unk10 = p;
        arg0->unk0 = p;
        return;
    }
    a1 = arg0->unkE;
    v0 = v1 | 0x800;
    if (a1 < 0) {
        s1 = 0;
        arg0->unkC = v0;
    } else {
        if (func_003F82F0(arg0->unk54, a1, &sp4) < 0) {
            v0 = arg0->unkC | 0x800;
            arg0->unkC = v0;
            return;
        }
        v0 = v1 | 0x800;
        if ((sp4 & 0xF000) >= 0) {
            /* continue */
        }
        s2 = 0x400;
        s1 = (sp4 & 0xF000);
        if (s1 == 0x8000) {
            s1 = (s1 == 0x2000) ? 1 : 0;
            if (arg0->unk28 == func_003FA4F8) {
                arg0->unk4C = 0x400;
                v0 = arg0->unkC | 0x400;
            } else {
                v0 = arg0->unkC | 0x800;
            }
        } else {
            s1 = 0;
            v0 = arg0->unkC | 0x800;
        }
        arg0->unkC = v0;
    }
    p = func_003F8A30(arg0->unk54, 0x400);
    if (p == 0) {
        void *p2 = (u8 *)arg0 + 0x43;
        arg0->unk10 = p2;
        arg0->unk14 = 1;
        arg0->unkC = arg0->unkC | 0x2;
        arg0->unk0 = p2;
        return;
    } else {
        arg0->unk10 = p;
        arg0->unk54->unk3C = func_003F7800;
        arg0->unkC = arg0->unkC | 0x80;
        arg0->unk14 = 0x400;
        arg0->unk0 = p;
        if (s1) {
            if (func_00403690(arg0->unkE, p)) {
                arg0->unkC = arg0->unkC | 0x1;
            }
        }
        return;
    }
}
