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
    func_001E2460(sp10, arg0 + 0x10, arg1);
    func_001E2510(sp10, D_0047AF40, (char*)arg0 + 0x10);
    func_001E2A48(sp10, D_0047B088, sp);
    ((float*)arg0)[5] = *(float*)sp;
    ((float*)arg0)[6] = *(float*)(sp+4);
    ((float*)arg0)[7] = *(float*)(sp+8);
    func_001E2510(sp10, D_0047B098, (char*)arg0 + 0x20);
    func_001E2510(sp10, D_0047B0A8, (char*)arg0 + 0x24);
}
