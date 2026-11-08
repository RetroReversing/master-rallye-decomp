extern void func_001D4040(void *, const char *);
extern unsigned long long D_0047A178;
extern const char D_00479CA0[];

typedef struct {
    unsigned int unk0;
    unsigned long long unk4;
    float unk8;
    float unkC;
    float unk10;
    float unk14;
    float unk18;
    float unk1C;
    float unk20;
    float unk24;
    float unk28;
    float unk2C;
    float unk30;
    float unk34;
    float unk38;
    float unk3C;
    float unk40;
    float unk44;
    float unk48;
    float unk4C;
    float unk50;
    float unk54;
} UnkStruct;

UnkStruct *func_0026AAC8(UnkStruct *arg0) {
    unsigned int sp0;
    func_001D4040(&sp0, D_00479CA0);
    *(int *)((char *)arg0 + 8) = 0;
    *(int *)((char *)arg0 + 0xC) = 0;
    *(int *)((char *)arg0 + 0x10) = 0;
    *(int *)((char *)arg0 + 0x14) = 0;
    *(int *)((char *)arg0 + 0x18) = 0;
    *(int *)((char *)arg0 + 0x1C) = 0;
    *(int *)((char *)arg0 + 0x20) = 0;
    *(int *)((char *)arg0 + 0x24) = 0;
    *(int *)((char *)arg0 + 0x28) = 0;
    *(int *)((char *)arg0 + 0x2C) = 0;
    *(int *)((char *)arg0 + 0x30) = 0;
    *(int *)((char *)arg0 + 0x34) = 0;
    *(int *)((char *)arg0 + 0x38) = 0;
    *(int *)((char *)arg0 + 0x3C) = 0;
    *(int *)((char *)arg0 + 0x40) = 0;
    *(int *)((char *)arg0 + 0x44) = 0;
    *(int *)((char *)arg0 + 0x48) = 0;
    *(int *)((char *)arg0 + 0x4C) = 0;
    *(int *)((char *)arg0 + 0x50) = 0;
    *(int *)((char *)arg0 + 0x54) = 0;
    *(int *)((char *)arg0 + 0) = sp0;
    arg0->unk4 = D_0047A178;
    func_001D4040((char *)arg0 + 0x58, D_00479CA0);
    return arg0;
}
