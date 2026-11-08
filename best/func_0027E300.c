extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, int);
extern void func_001E2C08(void *, const char *, float);
extern void func_001E2E38(void *, const char *, void *);
extern void D_0044DD18;
extern char D_0047ACF0[];
extern char D_0047AD00[];
extern char D_0047AD18[];
extern char D_0047AD20[];
extern char D_0047AD28[];

void *func_0027E300(void *arg0) {
    int sp0;
    char sp20[0x30];
    void *obj;
    void *p14;
    int v;

    obj = D_002AD408(0x24);
    func_001D4040(&sp0, D_0047ACF0);
    v = sp0;
    p14 = (char *)obj + 0x14;
    *(int *)((char *)obj + 0x8) = 0;
    *(void **)((char *)obj + 0x10) = &D_0044DD18;
    *(int *)((char *)obj + 0xC) = 0;
    *(int *)((char *)obj + 0x4) = 0;
    *(int *)((char *)obj + 0x0) = 0;
    *(int *)((char *)obj + 0x14) = 0;
    *(int *)((char *)p14 + 0x8) = 0;
    *(int *)((char *)p14 + 0x4) = 0;
    *(int *)((char *)obj + 0x20) = v;
    func_001E2460(sp20, obj, v);
    func_001E2E38(sp20, D_0047AD00, (char *)arg0 + 0x18);
    func_001E2C08(sp20, D_0047AD18, *(float *)((char *)arg0 + 0xC));
    func_001E2C08(sp20, D_0047AD20, *(float *)((char *)arg0 + 0x10));
    func_001E2C08(sp20, D_0047AD28, *(float *)((char *)arg0 + 0x14));
    return obj;
}
