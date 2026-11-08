typedef struct {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    void *unk20;
    void *unk24;
} S_func_001DD3D8;

void *func_002B1FC0(int a, int b, int c);
void *func_003D2910(int a);

void *func_001DD3D8(S_func_001DD3D8 *arg0) {
    void *v0;
    void *v1;
    volatile int pad[8];
    (void)pad;
    
    arg0->unk8 = 0x100;
    arg0->unk10 = 4;
    arg0->unk18 = 0x40;
    arg0->unk1C = 1;
    arg0->unk4 = 0x100;
    arg0->unkC = 4;
    arg0->unk14 = 0x40;
    
    v0 = func_002B1FC0(0x18, 4, 0x40);
    if (v0 == 0) {
        v0 = func_003D2910(0x18);
    }
    arg0->unk20 = v0;
    *(void **)v0 = v0;
    ((void **)v0)[1] = v0;
    
    v1 = func_002B1FC0(0x18, 4, 0x40);
    if (v1 == 0) {
        v1 = func_003D2910(0x18);
    }
    arg0->unk24 = v1;
    *(void **)v1 = v1;
    ((void **)v1)[1] = v1;
    
    return arg0;
}
