#include "context.h"

extern void func_001E2460(void *, void *);
extern void func_001E25B0(void *, void *, void *);
extern void func_001E28F8(void *, void *, void *);
extern char D_0047C030[];
extern char D_0047C040[];
extern char D_0047C050[];
extern char D_0047C060[];
extern char D_0047C070[];
extern char D_0047BD18[];
extern char D_0047BD28[];
extern char D_0047C080[];
extern char D_0047C090[];
extern char D_0047C0A0[];

typedef struct {
    char pad[0xC];
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
    void *unk1C;
    char pad2[12];
    void *unk28;
    void *unk2C;
    char pad3[24];
    void *unk44;
    void *unk48;
    void *unk4C;
} Unk;

void func_0029D498(Unk *arg0, void *arg1, void *arg2) {
    char sp[0x30];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0047C030, &arg0->unkC);
    func_001E28F8(sp, D_0047C040, &arg0->unk10);
    func_001E25B0(sp, D_0047C050, &arg0->unk14);
    func_001E25B0(sp, D_0047C060, &arg0->unk18);
    func_001E25B0(sp, D_0047C070, &arg0->unk1C);
    func_001E25B0(sp, D_0047BD18, &arg0->unk28);
    func_001E25B0(sp, D_0047BD28, &arg0->unk2C);
    func_001E28F8(sp, D_0047C080, &arg0->unk44);
    func_001E28F8(sp, D_0047C090, &arg0->unk48);
    func_001E28F8(sp, D_0047C0A0, &arg0->unk4C);
}
