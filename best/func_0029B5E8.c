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
    float f1;
    float f0;
    float f2;
    void* v0;
    void* v1;
    void* a2;
    
    f1 = arg0->unk10;
    f0 = arg0->unk14;
    arg0->unk48 = f1;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    f2 = (float)(arg0->unk1C - arg0->unk18);
    f0 = (f0 - f1) / f2;
    arg0->unk4C = f0;
    
    v0 = arg1->unk50;
    a2 = arg0 + 0x54;
    f1 = *(float*)(v0 + 0x50);
    arg0->unk54[0] = f1;
    *(float*)((char*)a2 + 4) = *(float*)(v0 + 0x50 + 4);
    *(float*)((char*)a2 + 8) = *(float*)(v0 + 0x50 + 8);
    
    v0 = arg1->unk4C;
    if (v0 == 0) {
        arg0->unk6C = 1;
        return;
    }
    f1 = *(float*)(v0 + 0x50);
    arg0->unk54[0] = f1;
    *(float*)((char*)a2 + 4) = *(float*)(v0 + 0x50 + 4);
    *(float*)((char*)a2 + 8) = *(float*)(v0 + 0x50 + 8);
    arg0->unk6C = 1;
}

void func_0029B5E8(void* a1, float f12) {
    float sp0, sp4, sp8, spC;
    void* v0 = a1 + 0x10;
    void* v1 = a1 + 0x20;
    void* a0 = a1 + 0x30;
    float f3 = 1.0f;
    float f0 = 0.0f;
    
    sp0 = f0; sp4 = f0; sp8 = f0; spC = f0;
    
    *(float*)a1 = f3;
    *(float*)((char*)a1 + 4) = f0;
    *(float*)((char*)a1 + 8) = f0;
    *(float*)((char*)a1 + 0xC) = f0;
    *(float*)v0 = f3;
    *(float*)((char*)v0 + 4) = sp4;
    *(float*)((char*)v0 + 8) = sp8;
    *(float*)((char*)v0 + 0xC) = spC;
    *(float*)((char*)a1 + 0x10) = f0;
    *(float*)((char*)v0 + 4) = f0;
    *(float*)((char*)v0 + 8) = f0;
    *(float*)((char*)v0 + 0xC) = f0;
    *(float*)((char*)a1 + 0x20) = f0;
    *(float*)((char*)v1 + 4) = f0;
    *(float*)((char*)v1 + 8) = f3;
    *(float*)((char*)v1 + 0xC) = f0;
    *(float*)((char*)a1 + 0x30) = f0;
    *(float*)((char*)a0 + 4) = f0;
    *(float*)((char*)a0 + 8) = f0;
    *(float*)((char*)a0 + 0xC) = f3;
    *(float*)((char*)a1 + 0x28) = f12;
    *(float*)((char*)a1 + 0) = f12;
    *(float*)((char*)a1 + 0x14) = f12;
}

extern int func_001E4280(void);
extern int func_001E3650(int, int);
extern void func_0029AD58(void*, void*, int);

void func_0029ACF8(void* arg0, void* arg1) {
    int v0 = func_001E4280();
    int v1 = func_001E3650(v0, (int)arg0 + 0x10);
    if (*(int*)((char*)arg0 + 0xC) != v1) {
        *(int*)((char*)arg0 + 0xC) = v1;
        func_0029AD58(arg0, arg1, v1);
    }
}
