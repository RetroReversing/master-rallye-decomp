extern void* D_002AD408(int);
extern void* D_00426828;

void* func_002869E0(void) {
    void* temp = D_00426828;
    if (temp == 0) {
        temp = D_002AD408(1);
        D_00426828 = temp;
    }
    return temp;
}

extern char D_0047AD68[];
extern char D_0047B028[];
extern char D_0047B040[];
extern void D_0047D1F8;
extern void func_001D4040(void*, const char*);
extern void func_00289698(void*, int);

typedef struct {
    int unk0; /* -1 */
    void* unk4;
    void* unk8;
    int unkC;
    void* unk10;
    char pad[0x44];
    void* unk54;
} S_286A20;

void* func_00286A20(void* arg0) {
    S_286A20* p = (S_286A20*)arg0;
    void* sp0;
    void* sp10;
    void* sp54;
    func_001D4040(&sp0, D_0047B028);
    p->unk10 = 0;
    p->unk0 = -1;
    p->unk4 = sp0;
    p->unk8 = &D_0047D1F8;
    func_00289698((char*)p + 0x14, (int)sp0);
    p->unk54 = 0;
    func_001D4040((char*)p + 0x10, D_0047B040);
    p->unkC = 0;
    func_001D4040((char*)p + 0x54, D_0047AD68);
    return p;
}

extern char D_0044DD18[];
extern char D_0047ADC0[];
extern char D_0047B050[];
extern void func_001E2460(void*, void*, int);
extern void func_001E2C78(void*, const char*, int);
extern void func_001E2E38(void*, const char*, void*);

void* func_00286AC0(void* arg0) {
    void* temp16 = D_002AD408(0x24);
    char sp[16];
    char sp20[32];
    func_001D4040(sp, D_0047B028);
    ((void**)temp16)[2] = 0;
    ((void**)temp16)[4] = (void*)D_0044DD18;
    ((void**)temp16)[3] = 0;
    ((void**)temp16)[1] = 0;
    ((void**)temp16)[0] = 0;
    ((void**)((char*)temp16 + 0x14))[5] = 0;
    ((void**)((char*)temp16 + 0x14))[2] = 0;
    ((void**)((char*)temp16 + 0x14))[1] = 0;
    *(int*)((char*)temp16 + 0x20) = *(int*)sp;
    func_001E2460(sp20, temp16, *(int*)sp);
    func_001E2E38(sp20, D_0047B050, (char*)arg0 + 0x10);
    func_001E2C78(sp20, D_0047ADC0, ((int*)arg0)[3]);
    return temp16;
}

void func_00286BD8(void* arg0) {
    void* vtable = ((void**)arg0)[2];
    ((int*)arg0)[8] = ((int*)arg0)[3];
    {
        short off = *(short*)((char*)vtable + 0x28);
        void (*fn)(void*, int) = *(void (**)(void*,int))((char*)vtable + 0x2C);
        fn((char*)arg0 + off, 0);
    }
}
