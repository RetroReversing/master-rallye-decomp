extern char D_0047AF40[];
extern char D_0047B088[];
extern char D_0047B098[];
extern char D_0047B0A8[];
extern void func_001E2460(void*, void*, int);
extern void func_001E2510(void*, const char*, void*);
extern void func_001E2A48(void*, const char*, void*);

void func_00287248(void* arg0, int arg1) {
    char sp10[32];
    char sp[16];
    func_001E2460(sp10, (char*)arg0 + 0x10, arg1);
    func_001E2510(sp10, D_0047AF40, (char*)arg0 + 0x10);
    func_001E2A48(sp10, D_0047B088, sp);
    ((float*)arg0)[5] = *(float*)sp;
    ((float*)arg0)[6] = *(float*)(sp+4);
    ((float*)arg0)[7] = *(float*)(sp+8);
    func_001E2510(sp10, D_0047B098, (char*)arg0 + 0x20);
    func_001E2510(sp10, D_0047B0A8, (char*)arg0 + 0x24);
}

extern void func_003F33C8(void);

float func_00285808(float f) {
    if (f <= 1.0f) {
        func_003F33C8();
        return 0.0f;
    }
    return 0.0f;
}

void func_002857A8(void* arg0, void* arg1, void* arg3) {
    float* a1 = (float*)arg1;
    float* a3 = (float*)arg3;
    float t = a3[1] - a1[1];
    t = t * ((float*)arg0)[25];
    a1[1] = a3[1] - t;
}

extern char D_0047ADC0[];
extern char D_0047B218[];
extern char D_0047B228[];
extern char D_0047B238[];
extern char D_0047B248[];
extern void func_001E2470(void*, const char*, void*);

void func_00289840(void* arg0, int arg1) {
    char sp[32];
    func_001E2460(sp, arg0 + 0x18, arg1);
    func_001E2A48(sp, D_0047B218, (char*)arg0 + 0x18);
    func_001E2A48(sp, D_0047B228, (char*)arg0 + 0x30);
    func_001E2A48(sp, D_0047B238, (char*)arg0 + 0x24);
    func_001E2470(sp, D_0047B248, (char*)arg0 + 0x14);
    func_001E2C78(sp, D_0047ADC0, ((int*)arg0)[3]);
}
