extern char D_0047AD68[];
extern char D_0047B028[];
extern char D_0047B040[];
extern void D_0047D1F8;
extern void func_001D4040(void*, const char*);
extern void func_00289698(void*, int);

void* func_00286A20(void* arg0) {
    void* sp0;
    void* v0 = arg0;
    func_001D4040(&sp0, D_0047B028);
    ((int*)v0)[4] = 0;
    ((int*)v0)[0] = -1;
    ((void**)v0)[1] = sp0;
    ((void**)v0)[2] = &D_0047D1F8;
    func_00289698((char*)v0 + 0x14, (int)sp0);
    ((int*)v0)[21] = 0;
    func_001D4040((char*)v0 + 0x10, D_0047B040);
    ((int*)v0)[3] = 0;
    func_001D4040((char*)v0 + 0x54, D_0047AD68);
    return v0;
}

extern char D_0044DD18[];
extern char D_0047ADC0[];
extern char D_0047B050[];
extern void* D_002AD408(int);
extern void func_001E2460(void*, void*, int);
extern void func_001E2C78(void*, const char*, int);
extern void func_001E2E38(void*, const char*, void*);

void* func_00286AC0(void* arg0) {
    void* temp16 = D_002AD408(0x24);
    char sp[16];
    char sp20[32];
    func_001D4040(sp, D_0047B028);
    ((int*)temp16)[2] = 0;
    ((void**)temp16)[4] = D_0044DD18;
    ((int*)temp16)[3] = 0;
    ((int*)temp16)[1] = 0;
    ((int*)temp16)[0] = 0;
    ((int*)((char*)temp16 + 0x14))[5] = 0;
    ((int*)((char*)temp16 + 0x14))[2] = 0;
    ((int*)((char*)temp16 + 0x14))[1] = 0;
    ((int*)temp16)[8] = *(int*)sp;
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
        void (*fn)(void*, void*) = *(void (**)(void*,void*))((char*)vtable + 0x2C);
        fn((char*)arg0 + off, (void*)((char*)arg0 + off));
    }
}

extern char D_0047B068[];
extern void D_0047D2B8;
extern float func_0015ACB0(int);

void* func_00286D50(void* arg0) {
    void* sp0;
    void* v0 = arg0;
    func_001D4040(&sp0, D_0047B068);
    ((int*)v0)[5] = 0;
    ((int*)v0)[6] = 0;
    ((int*)v0)[7] = 0;
    ((int*)v0)[3] = 0;
    ((void**)v0)[1] = sp0;
    ((int*)v0)[0] = -1;
    ((void**)v0)[2] = &D_0047D2B8;
    ((float*)v0)[8] = -50.0f;
    ((float*)v0)[4] = func_0015ACB0((int)sp0) / 300.0f;
    ((float*)v0)[9] = 1.0f;
    return v0;
}
