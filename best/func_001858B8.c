extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E28F8(void *, void *, void *);
extern int func_003FA310(void *, const char *, int);

extern char D_00470108[];
extern char D_00470130[];
extern char D_00470138[];
extern char D_004711D0[];
extern void *D_0044DD18;

void *func_001858B8(void) {
    void *obj;
    void *tmp;
    int sp0;
    char sp20[32];
    int v;

    obj = D_002AD408(0x24);
    func_001D4040(&sp0, D_00470108);
    v = sp0;
    tmp = (char *)obj + 0x14;
    *(int *)((char *)obj + 8) = 0;
    *(void **)((char *)obj + 0x10) = &D_0044DD18;
    *(int *)((char *)obj + 0xC) = 0;
    *(int *)((char *)obj + 4) = 0;
    *(int *)((char *)obj + 0) = 0;
    *(int *)((char *)obj + 0x14) = 0;
    *(int *)((char *)tmp + 8) = 0;
    *(int *)((char *)tmp + 4) = 0;
    *(int *)((char *)obj + 0x20) = v;
    func_001E2460(sp20, obj);
    func_001D4040(&sp0, D_00470130);
    func_001E2E38(sp20, D_00470138, &sp0);
    return obj;
}

void func_0018CE40(void *arg0, void *arg1) {
    int i;
    char buf[0x100];
    char sp100[0x10];

    func_001E2460(sp100, arg1);
    if (*(int *)((char *)arg0 + 0xC) > 0) {
        i = 0;
        do {
            func_003FA310(buf, D_004711D0, i);
            func_001E28F8(sp100, buf, (void *)(*(unsigned int *)((char *)arg0 + 0x10) + (i * 4)));
            i++;
        } while (i < *(int *)((char *)arg0 + 0xC));
    }
}
