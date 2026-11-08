#include "context.h"

extern void *D_002AD408(int);
extern void func_001D4040(void *, void *);
extern void func_001E2460(void *, void *, void *);
extern void func_001E2C78(void *, void *, void *);
extern void func_001E2E38(void *, void *, void *);
extern void *D_0044DD18;
extern char D_0047BD18[];
extern char D_0047BD28[];
extern char D_0047C020[];
extern char D_0047C030[];
extern char D_0047C040[];
extern char D_0047C050[];
extern char D_0047C060[];
extern char D_0047C070[];
extern char D_0047C080[];
extern char D_0047C090[];
extern char D_0047C0A0[];

typedef struct {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    void *unk10;
    void *unk14;
    void *unk20;
    void *unk18;
    void *unk1C;
    void *unk28;
    void *unk2C;
    void *unk44;
    void *unk48;
    void *unk4C;
} Unk;

void *func_0029D338(Unk *arg0) {
    char sp[0x70];
    void *sp20 = sp + 0x20;
    void *temp_17 = D_002AD408(0x24);
    void *sp0 = (void *)(sp + 0);
    func_001D4040(sp, D_0047C020);
    *(void **)((char *)temp_17 + 0x8) = 0;
    *(void **)((char *)temp_17 + 0x10) = &D_0044DD18;
    *(void **)((char *)temp_17 + 0xC) = 0;
    *(void **)((char *)temp_17 + 0x4) = 0;
    *(void **)((char *)temp_17 + 0x0) = 0;
    *(void **)((char *)temp_17 + 0x14) = 0;
    *(void **)((char *)temp_17 + 0x18) = 0;
    *(void **)((char *)temp_17 + 0x1C) = 0;
    *(void **)((char *)temp_17 + 0x20) = *(void **)sp;
    func_001E2460(sp20, temp_17, *(void **)sp);
    func_001E2C78(sp20, D_0047C030, (void *)0);
    func_001E2E38(sp20, D_0047C040, &arg0->unk10);
    func_001E2C78(sp20, D_0047C050, &arg0->unk14);
    func_001E2C78(sp20, D_0047C060, &arg0->unk18);
    func_001E2C78(sp20, D_0047C070, &arg0->unk1C);
    func_001E2C78(sp20, D_0047BD18, &arg0->unk28);
    func_001E2C78(sp20, D_0047BD28, &arg0->unk2C);
    func_001E2E38(sp20, D_0047C080, &arg0->unk44);
    func_001E2E38(sp20, D_0047C090, &arg0->unk48);
    func_001E2E38(sp20, D_0047C0A0, &arg0->unk4C);
    return temp_17;
}
