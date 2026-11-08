extern void *D_002AD408(int);
extern void *D_00426840;
extern void *D_0044DD18;
extern void *D_0047BBE0;
extern const char D_0047BB28[];
extern void *func_00297500(void);
extern int func_00297340(void *, int);
extern int func_002971B0(void *);
extern void func_001E2460(void *, void *);
extern void func_001E2C78(void *, void *, int);
extern void **func_0017E620(void);
extern void func_001D2CD8(void *, void *);
extern void func_001D2458(void *);
extern void D_002AD390(void *);

typedef struct {
    void *vtable;
    void *field4;
    void *field8;
    int fieldC;
    int field10;
    void *field14;
    void *field18;
    int field1C;
    float field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    int field38;
    char pad3C[0x14];
    int field50;
    int field54;
} UnkStruct;

void *func_002986D0(UnkStruct *arg0) {
    struct {
        int field0;
        int field4;
        int field8;
        int fieldC;
        void *field10;
        int field14;
        int field18;
        int field1C;
        int field20;
    } sp10;
    void *temp = D_002AD408(0x24);
    void *temp2 = (char *)temp + 0x14;
    
    *(int *)((char *)temp + 8) = 0;
    *(void **)((char *)temp + 0x10) = &D_0044DD18;
    *(int *)((char *)temp + 0xC) = 0;
    *(int *)((char *)temp + 4) = 0;
    *(int *)((char *)temp + 0) = 0;
    *(int *)((char *)temp + 0x14) = 0;
    *(int *)((char *)temp2 + 8) = 0;
    *(int *)((char *)temp2 + 4) = 0;
    *(int *)((char *)temp + 0x20) = 0;
    
    func_001E2460(&sp10, temp);
    func_001E2C78(&sp10, &D_0047BBE0, arg0->fieldC);
    return temp;
}

void func_00298FF0(void *arg0, int arg1) {
    void **v0 = func_0017E620();
    void *v1 = *v0;
    void *(*fn)(void *, int, int, void *) = *(void *(**)(void *, int, int, void *))((char *)v1 + 0x2C);
    short a = *(short *)((char *)v1 + 0x28);
    void *r = fn((char *)v0 + a, arg1, 0, fn);
    func_001D2CD8((char *)arg0 + 0x4C, r);
    *(int *)((char *)arg0 + 0x44) = 1;
}

void func_00299050(void *arg0, int arg1, int arg2) {
    void **v0 = func_0017E620();
    void *v1 = *v0;
    void *(*fn)(void *, int, int, int) = *(void *(**)(void *, int, int, int))((char *)v1 + 0x2C);
    short a = *(short *)((char *)v1 + 0x28);
    void *r = fn((char *)v0 + a, arg1, arg2, fn);
    func_001D2CD8((char *)arg0 + 0x4C, r);
    *(int *)((char *)arg0 + 0x44) = 1;
}

void func_002990C0(void *arg0) {
    void *sp0 = 0;
    func_001D2458(&sp0);
    func_001D2CD8((char *)arg0 + 0x4C, sp0);
    D_002AD390(sp0);
    *(int *)((char *)arg0 + 0x44) = 1;
}
