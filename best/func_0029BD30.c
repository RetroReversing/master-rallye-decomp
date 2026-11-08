typedef struct {
    char pad0[0x10];
    float unk10;
    float unk14;
    int unk18;
    int unk1C;
    char pad20[0x1C];
    int unk3C;
    int unk40;
    float unk48;
    float unk4C;
    char pad50[0x4];
    float unk54[4];
    char pad64[0x8];
    int unk6C;
} ArgB3E0;

typedef struct {
    char pad[0x4C];
    void* unk4C;
    void* unk50;
} ArgB3E0b;

void func_0029B3E0(ArgB3E0* arg0, ArgB3E0b* arg1) {
    float f1 = arg0->unk10;
    float f0 = arg0->unk14;
    void* v0;
    void* a2 = (char*)arg0 + 0x54;
    int v1;
    
    arg0->unk48 = f1;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk4C = (f0 - f1) / (float)(arg0->unk1C - arg0->unk18);
    
    v0 = arg1->unk50;
    arg0->unk54[0] = *(float*)((char*)v0 + 0x50);
    *(float*)((char*)a2 + 4) = *(float*)((char*)v0 + 0x54);
    *(float*)((char*)a2 + 8) = *(float*)((char*)v0 + 0x58);
    
    v1 = *(int*)((char*)arg1 + 0x4C);
    if (v1 == 0) {
        arg0->unk6C = 1;
        return;
    }
    v0 = (void*)v1;
    arg0->unk54[0] = *(float*)((char*)v0 + 0x50);
    *(float*)((char*)a2 + 4) = *(float*)((char*)v0 + 0x54);
    *(float*)((char*)a2 + 8) = *(float*)((char*)v0 + 0x58);
    arg0->unk6C = 1;
}

void func_0029B5E8(void* arg1, float f12) {
    float f0 = 0.0f;
    float f3 = 1.0f;
    void* v0 = (char*)arg1 + 0x10;
    void* v1 = (char*)arg1 + 0x20;
    void* a0 = (char*)arg1 + 0x30;
    float sp4, sp8, spC;
    
    sp4 = f0; sp8 = f0; spC = f0;
    
    *(float*)((char*)arg1 + 0) = f3;
    *(float*)((char*)arg1 + 4) = f0;
    *(float*)((char*)arg1 + 8) = f0;
    *(float*)((char*)arg1 + 0xC) = f0;
    *(float*)v0 = f3;
    *(float*)((char*)v0 + 4) = f0;
    *(float*)((char*)v0 + 8) = f0;
    *(float*)((char*)v0 + 0xC) = f0;
    *(float*)((char*)v0 + 4) = sp4;
    *(float*)((char*)v0 + 8) = sp8;
    *(float*)((char*)v0 + 0xC) = spC;
    *(float*)((char*)arg1 + 0x20) = f0;
    *(float*)((char*)v1 + 4) = f0;
    *(float*)((char*)v1 + 8) = f3;
    *(float*)((char*)v1 + 0xC) = f0;
    *(float*)((char*)arg1 + 0x30) = f0;
    *(float*)((char*)a0 + 4) = f0;
    *(float*)((char*)a0 + 8) = f0;
    *(float*)((char*)a0 + 0xC) = f3;
    *(float*)((char*)arg1 + 0x28) = f12;
    *(float*)((char*)arg1 + 0) = f12;
    *(float*)((char*)arg1 + 0x14) = f12;
}

extern int func_001D4040(void*, void*);
extern int func_001E4280(void);
extern int func_001E3650(int, void*);
extern void func_0029ACF8(void*, void*);
extern int D_0042684C;
extern char D_0047AD68[];
extern char D_00494B40[];

void func_0029AC68(void* arg0, void* arg1) {
    if (D_0042684C == 0) {
        func_001D4040(D_00494B40, D_0047AD68);
        D_0042684C = 1;
    }
    if (func_001E3650(func_001E4280(), D_00494B40) > 0) {
        return;
    }
    func_0029ACF8(arg0, arg1);
}

extern void* D_0044DCD8;
extern void* D_0047C838;
extern int D_00494BA8;

void* func_0029BD30(void* arg0) {
    *(int*)((char*)arg0 + 4) = 0;
    *(void**)((char*)arg0 + 8) = &D_0044DCD8;
    *(int*)((char*)arg0 + 0) = -1;
    *(int*)((char*)arg0 + 4) = D_00494BA8;
    *(void**)((char*)arg0 + 8) = &D_0047C838;
    *(int*)((char*)arg0 + 0x28) = 0xE;
    *(int*)((char*)arg0 + 0x14) = 0;
    *(int*)((char*)arg0 + 0x18) = 0;
    *(int*)((char*)arg0 + 0x1C) = 0;
    *(int*)((char*)arg0 + 0x20) = 0;
    *(int*)((char*)arg0 + 0xC) = 0;
    *(int*)((char*)arg0 + 0x10) = 0;
    *(int*)((char*)arg0 + 0x2C) = 0;
    *(int*)((char*)arg0 + 0x24) = 0;
    *(int*)((char*)arg0 + 0x30) = 0;
    return arg0;
}
