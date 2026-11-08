extern void func_001D4040(void*, const char*);
extern char D_00447C08[];
extern char D_0044D4E8[];

void *func_00121620(void *arg0) {
    u8 *p = (u8 *)arg0;
    s32 key[8];
    s32 k0;
    void *t;
    void *ret;

    func_001D4040(key, D_00447C08);
    k0 = key[0];
    *(void **)(p + 0x8) = (void *)&D_0044D4E8;
    t = p + 0x10;
    *(s32 *)(p + 0x4) = k0;
    ret = (void *)p;
    *(s32 *)(p + 0x0) = -1;
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)((u8 *)t + 0x8) = 0;
    *(s32 *)((u8 *)t + 0x4) = 0;
    *(s32 *)(p + 0x28) = -1;
    *(s32 *)(p + 0x1C) = 0;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 0x24) = 0;
    *(s32 *)(p + 0x2C) = 0;
    return ret;
}

extern s32 func_00262838(void);
int func_002623F0(int, void *);
extern char D_00446660[];

static inline __attribute__((always_inline)) int *keyinit(int *p, const char *s) {
    func_001D4040(p, s);
    return p;
}

void func_00121028(void) {
    int key[4];
    int g = func_00262838();
    func_002623F0(g, keyinit(key, D_00446660));
}

extern char D_00447760[];
extern char D_0044D5E8[];

void *func_0011F180(void *arg0) {
    u8 *p = (u8 *)arg0;
    s32 k;
    func_001D4040(&k, D_00447760);
    *(s32 *)(p + 0x4) = k;
    *(s32 *)(p + 0x0) = -1;
    *(void **)(p + 0x8) = (void *)&D_0044D5E8;
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x1C) = 0;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 0x24) = 0;
    return (void *)p;
}
