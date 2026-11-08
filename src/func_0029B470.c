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
    char pad0[0x4C];
    void* unk4C;
    void* unk50;
} ArgB3E0b;

void func_0029B3E0(ArgB3E0* arg0, ArgB3E0b* arg1) {
    float f1 = arg0->unk10;
    float diff;
    void* p1;
    void* p2;
    void* p3;
    
    arg0->unk48 = f1;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    diff = arg0->unk14 - f1;
    arg0->unk4C = diff / (float)(arg0->unk1C - arg0->unk18);
    
    p1 = arg1->unk50;
    p2 = p1 + 0x50;
    arg0->unk54[0] = *(float*)(p1 + 0x50);
    *(float*)((char*)arg0 + 0x58) = *(float*)(p2 + 4);
    *(float*)((char*)arg0 + 0x5C) = *(float*)(p2 + 8);
    
    p3 = arg1->unk4C;
    if (p3 != 0) {
        p2 = p3 + 0x50;
        arg0->unk54[0] = *(float*)(p3 + 0x50);
        *(float*)((char*)arg0 + 0x58) = *(float*)(p2 + 4);
        *(float*)((char*)arg0 + 0x5C) = *(float*)(p2 + 8);
        arg0->unk6C = 1;
        return;
    }
    arg0->unk6C = 1;
}

extern void func_0029B790(void);
extern void func_0029B6A8(void*);
extern void func_0029B4E8(void*, void*, float);

void func_0029B470(void* arg0, void* arg1) {
    if (*(int*)((char*)arg0 + 0x6C) != 0) {
        *(int*)((char*)arg0 + 0x6C) = 0;
        func_0029B790();
    }
    func_0029B6A8(arg0);
    func_0029B4E8(arg0, arg1, *(float*)((char*)arg0 + 0x48));
}

void func_0029B5E8(void* arg1, float f12) {
    float sp[4];
    void* v0 = arg1 + 0x10;
    void* v1 = arg1 + 0x20;
    void* a0 = arg1 + 0x30;
    
    sp[0] = 0.0f;
    sp[1] = 0.0f;
    sp[2] = 0.0f;
    sp[3] = 0.0f;
    
    *(float*)arg1 = 1.0f;
    *(float*)((char*)arg1 + 4) = 0.0f;
    *(float*)((char*)arg1 + 8) = 0.0f;
    *(float*)((char*)arg1 + 0xC) = 0.0f;
    *(float*)v0 = 1.0f;
    *(float*)((char*)v0 + 4) = sp[0];
    *(float*)((char*)v0 + 8) = sp[0];
    *(float*)((char*)v0 + 0xC) = sp[0];
    *(float*)((char*)arg1 + 0x20) = 0.0f;
    *(float*)((char*)v1 + 4) = 0.0f;
    *(float*)((char*)v1 + 8) = 1.0f;
    *(float*)((char*)v1 + 0xC) = 0.0f;
    *(float*)((char*)arg1 + 0x30) = 0.0f;
    *(float*)((char*)a0 + 4) = 0.0f;
    *(float*)((char*)a0 + 8) = 0.0f;
    *(float*)((char*)a0 + 0xC) = 1.0f;
    *(float*)((char*)arg1 + 0x28) = f12;
    *(float*)((char*)arg1 + 0) = f12;
    *(float*)((char*)arg1 + 0x14) = f12;
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
