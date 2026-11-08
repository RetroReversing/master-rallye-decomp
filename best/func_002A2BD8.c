extern void *D_002AD408(u32);
extern void func_001D4040(void*, const char*);
extern void func_001E2460(void*, void*);
extern void func_001E2B98(void*, const char*, s32);
extern void func_001E2C08(void*, const char*, f32);
extern void func_001E2DC8(void*, const char*, void*);
extern void func_001E2E38(void*, const char*, void*);
extern void func_001E2EA8(void*, const char*, void*);
extern char D_0044DD18[];
extern char D_0047C548[];
extern char D_0047C568[];
extern char D_0047C570[];
extern char D_0047C578[];
extern char D_0047C580[];
extern char D_0047C588[];

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    void *vt;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 key;
} Obj;

void *func_002A2BD8(char *arg0) {
    u32 key[8];
    u32 reg[4];
    Obj *p = D_002AD408(0x24);
    func_001D4040(key, D_0047C548);
    {
        u32 k = key[0];
        u32 *v = &p->unk14;
        p->unk8 = 0;
        p->vt = D_0044DD18;
        p->unkC = 0;
        p->unk4 = 0;
        p->unk0 = 0;
        p->unk14 = 0;
        v[1] = 0;
        v[2] = 0;
        p->key = k;
        func_001E2460(reg, p);
    }
    func_001E2DC8(reg, D_0047C568, arg0 + 0x10);
    func_001E2EA8(reg, D_0047C570, arg0 + 0x50);
    func_001E2C08(reg, D_0047C578, *(f32 *)(arg0 + 8));
    func_001E2E38(reg, D_0047C580, arg0 + 0x60);
    func_001E2B98(reg, D_0047C588, *(s32 *)(arg0 + 0xC));
    return p;
}
