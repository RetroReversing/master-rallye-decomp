extern char D_0047AD68[];
extern char D_0047B028[];
extern char D_0047B040[];
extern void D_0047D1F8;
extern void func_001D4040(void*, const char*);
extern void func_00289698(void*, int);

void* func_00286A20(void* arg0) {
    int sp[4];
    void* s0 = arg0;
    void* s2 = (char*)s0 + 0x10;
    void* s1 = (char*)s0 + 0x54;
    int v;
    func_001D4040(sp, D_0047B028);
    v = sp[0];
    ((int*)s0)[4] = 0;
    ((int*)s0)[0] = -1;
    ((void**)s0)[1] = (void*)sp[0];
    ((void**)s0)[2] = &D_0047D1F8;
    func_00289698((char*)s0 + 0x14, v);
    ((int*)s0)[21] = 0;
    func_001D4040(s2, D_0047B040);
    ((int*)s0)[3] = 0;
    func_001D4040(s1, D_0047AD68);
    return s0;
}
