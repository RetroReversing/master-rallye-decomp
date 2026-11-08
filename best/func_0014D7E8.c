void *D_002AD408(int);
s32 func_001D4040(void *a0, void *a1);
s32 func_001E2460(void *a0, void *a1);
s32 func_001E2C78(void *a0, void *a1, s32 a2);

extern char D_0044BC38[];
extern char D_0044C558[];
extern void *D_0044DD18[];
extern char D_0044C4C8[];
extern void *D_0044C780[];
extern char D_0044C4B8[];
extern void *D_0044C7C0[];
extern char D_0044C468[];
extern void *D_0044C800[];

typedef struct {
    u32 unk0;
    u32 unk4;
    void *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} Unk1;

typedef struct {
    u32 unk0;
    u32 unk4;
    void *unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    u32 unk38;
    u32 unk3C;
    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;
} Unk2;

typedef struct {
    u32 unk0;
    u32 unk4;
    void *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u32 unk30;
    f32 unk34;
    u32 unk38;
    u32 unk3C;
    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;
    u32 unk50;
} Unk3;

typedef struct {
    u32 unk0;
    u32 unk4;
    void *unk8;
    u32 unkC;
    void *unk10;
    void *unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} Unk4;

void *func_0014E430(void *arg0) {
    u32 sp[8];
    Unk4 *temp16;
    Unk4 *temp3;
    
    temp16 = D_002AD408(0x24);
    func_001D4040(sp, D_0044C558);
    temp16->unk8 = 0;
    temp16->unkC = 0;
    temp16->unk4 = 0;
    temp3 = (Unk4 *)((u8 *)temp16 + 0x14);
    temp16->unk0 = 0;
    temp16->unk14 = 0;
    temp16->unk10 = D_0044DD18;
    temp3->unk8 = 0;
    temp3->unk4 = 0;
    temp16->unk20 = sp[0];
    func_001E2460(temp3, temp16);
    func_001E2C78(temp3, D_0044BC38, *(s32 *)((u8 *)arg0 + 0xC));
    return temp16;
}

void *func_0014D7E8(void *arg0) {
    u32 sp[4];
    Unk1 *a0 = arg0;
    
    func_001D4040(sp, D_0044C4C8);
    a0->unk4 = sp[0];
    a0->unk0 = -1;
    a0->unk8 = D_0044C780;
    a0->unkC = 0;
    a0->unk10 = 0;
    a0->unk14 = 0;
    a0->unk18 = 0;
    a0->unk1C = 0;
    a0->unk20 = 0;
    return a0;
}

void *func_0014CF08(void *arg0) {
    u32 sp[4];
    Unk2 *a0 = arg0;
    
    func_001D4040(sp, D_0044C4B8);
    a0->unk4 = sp[0];
    a0->unk0 = -1;
    a0->unk8 = D_0044C7C0;
    a0->unkC = 0;
    ((Unk2 *)((u8 *)a0 + 0x10))->unk10 = 0;
    ((Unk2 *)((u8 *)a0 + 0x10))->unk14 = 0;
    ((Unk2 *)((u8 *)a0 + 0x1C))->unk18 = 0;
    ((Unk2 *)((u8 *)a0 + 0x1C))->unk1C = 0;
    a0->unk28 = 0;
    a0->unk2C = 0.9f;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk2C = 0.9f;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk30 = 0.0f;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk34 = 0.9f;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk38 = 0;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk3C = 0;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk40 = 0;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk44 = 0;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk48 = 0;
    ((Unk2 *)((u8 *)a0 + 0x2C))->unk4C = 0;
    return a0;
}

void *func_0014C208(void *arg0) {
    u32 sp[4];
    Unk3 *a0 = arg0;
    
    func_001D4040(sp, D_0044C468);
    a0->unk0 = -1;
    a0->unk4 = sp[0];
    a0->unk8 = D_0044C800;
    a0->unk34 = 0.033333335f;
    a0->unkC = 0;
    a0->unk30 = 0;
    a0->unk38 = 0;
    a0->unk3C = 0;
    a0->unk40 = 0;
    a0->unk44 = 0;
    a0->unk48 = 0;
    a0->unk4C = 0;
    a0->unk50 = 0;
    a0->unk10 = 0;
    a0->unk14 = 0;
    a0->unk18 = 0;
    a0->unk1C = 0;
    a0->unk20 = 0;
    a0->unk24 = 0;
    a0->unk28 = 0;
    return a0;
}
