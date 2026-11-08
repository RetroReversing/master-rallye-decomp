extern void *D_002AD408(s32);
extern void *func_002B8368(void *);
extern void *func_002CD300(void *);
extern s32 D_004288A0;

s32 func_002B83F0(void) {
    if (D_004288A0 == 0) {
        D_004288A0 = (s32)func_002B8368(D_002AD408(0x18));
    }
    return D_004288A0;
}

extern void *func_001D6090(void *);
extern void *D_0047FA08;

void *func_002B8438(void *arg0) {
    void *tmp;

    func_001D6090(arg0);
    *(s32 *)((u8 *)arg0 + 0x1C) = 1;
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(void **)((u8 *)arg0 + 0x08) = &D_0047FA08;
    *(u32 *)((u8 *)arg0 + 0x14) = 0xFFFFFFFFu;
    tmp = D_002AD408(0x2C);
    *(s32 *)((u8 *)arg0 + 0x20) = 1;
    *(void **)((u8 *)arg0 + 0x10) = tmp;
    *(s32 *)((u8 *)tmp + 0x00) = 0;
    *(s32 *)((u8 *)tmp + 0x04) = 0;
    *(s32 *)((u8 *)tmp + 0x08) = 0;
    *(s8 *)((u8 *)tmp + 0x10) = 0;
    *(s32 *)((u8 *)tmp + 0x14) = 0;
    *(s32 *)((u8 *)tmp + 0x18) = 0;
    *(s32 *)((u8 *)tmp + 0x1C) = 0;
    *(s32 *)((u8 *)tmp + 0x20) = 0;
    *(s32 *)((u8 *)tmp + 0x24) = 0;
    *(s32 *)((u8 *)tmp + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    return arg0;
}

extern void func_003F9698(void *);
extern char D_0047F660[];

s32 func_002B7B88(void) {
    func_003F9698(D_0047F660);
    for (;;) {
    }
}

extern void *func_002B6290(void *, s32, void *);
extern void *func_002B62E0(void);
extern void *func_002B7828(void *, void *);
extern char D_0047F608[];
extern void *D_0047F7E8;

void *func_002B7980(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(void **)((u8 *)arg0 + 0x00) = D_0047F608;
    *(s32 *)((u8 *)arg0 + 0x04) = 1;
    *(void **)((u8 *)arg0 + 0x08) = &D_0047F7E8;
    *(void **)((u8 *)arg0 + 0x10) = func_002B7828(D_002AD408(0x18), arg0);
    func_002B6290(func_002B62E0(), *(s32 *)((u8 *)arg0 + 0x04), arg0);
    return arg0;
}
