extern void *D_0044DCD8;
extern void *D_0044DD18;
extern void *D_0047CA38;
extern void *D_00494C00;
extern char D_0047BB58[];
extern char D_0047BB60[];

void *D_002AD408(s32);
void func_001E2460(void *, void *);
void func_001E2E38(void *, void *, void *);

void *func_002A0770(void *arg0) {
    char sp[0x20];
    void *obj;
    void *p;

    obj = D_002AD408(0x24);
    *(s32 *)((char *)obj + 8) = 0;
    *(void **)((char *)obj + 0x10) = &D_0044DD18;
    p = (char *)obj + 0x14;
    *(s32 *)((char *)obj + 0xC) = 0;
    *(s32 *)((char *)obj + 4) = 0;
    *(s32 *)((char *)obj + 0) = 0;
    *(s32 *)((char *)obj + 0x14) = 0;
    *(s32 *)((char *)p + 8) = 0;
    *(s32 *)((char *)p + 4) = 0;
    *(s32 *)((char *)obj + 0x20) = 0;
    func_001E2460(sp + 0x10, obj);
    func_001E2E38(sp + 0x10, D_0047BB58, (char *)arg0 + 0xC);
    func_001E2E38(sp + 0x10, D_0047BB60, (char *)arg0 + 0x10);
    return obj;
}

void *func_002A0210(void *arg0) {
    *(u32 *)((char *)arg0 + 4) = 0;
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    {
        void *v = D_00494C00;
        void *vt = &D_0047CA38;
        *(s32 *)((char *)arg0 + 0) = -1;
        *(void **)((char *)arg0 + 4) = v;
        *(void **)((char *)arg0 + 8) = vt;
    }
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    return arg0;
}
