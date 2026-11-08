void func_003F94D0(void *, int);

void func_003D1290(void *arg0, char *arg1) {
    func_003F94D0(arg0, (int)*arg1);
}

extern void func_002C14B0(void *);
extern void func_002C1528(void *, int, int, int);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void D_003CD7A0(int, int, int);
extern u64 D_00428DD0;
extern char D_00480F30[];

void *func_002BF9B0(void *arg0) {
    func_002C14B0(arg0);
    *(void **)((char *)arg0 + 0xC) = D_00480F30;
    D_00428DD0 = 0;
    *(s64 *)((char *)arg0 + 0x10) = 0x11940000;
    *(s64 *)((char *)arg0 + 0x18) = 1;
    func_002C1528(arg0, 1, 1, 1);
    *(s32 *)((char *)arg0 + 0x20) = 0x8000003E;
    func_0040AF58();
    D_003CD7A0(*(s32 *)((char *)arg0 + 0x20), 0, 0);
    func_0040AFA0();
    return arg0;
}

extern void ExitThread_2(void);

void func_002BF3C0(void *arg0) {
    if (arg0 != NULL) {
        char *v = *(char **)((char *)arg0 + 0xC);
        ((void (*)(char *))*(void **)(v + 0x24))((char *)arg0 + *(s16 *)(v + 0x20));
        v = *(char **)((char *)arg0 + 0xC);
        ((void (*)(char *))*(void **)(v + 0x1C))((char *)arg0 + *(s16 *)(v + 0x18));
        v = *(char **)((char *)arg0 + 0xC);
        ((void (*)(char *))*(void **)(v + 0x2C))((char *)arg0 + *(s16 *)(v + 0x28));
        ExitThread_2();
    }
}

extern s32 GetThreadId_2(void);
extern void ReferThreadStatus_2(s32, void *);

s32 func_002BF380(s32 arg0) {
    s32 id;
    char buf[0x30];

    id = arg0;
    if (id == -2) {
        id = GetThreadId_2();
    }
    ReferThreadStatus_2(id, buf);
    return *(s32 *)(buf + 0x18);
}
