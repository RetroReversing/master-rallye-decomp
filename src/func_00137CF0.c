extern void func_001D4040(void *, const char *);
extern int func_002623F0(int, void *);
extern int func_00262838(void);
extern void D_002AD530(void *);
extern void *D_002AD5A8(int);

extern char D_0044AC88[];
extern char D_0044CEE8[];
extern char D_00446660[];

static inline __attribute__((always_inline)) int *keyinit_d178(int *p, const char *s) { func_001D4040(p, s); return p; }

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_00138F50(s32 *p) {
    s32 k;
    func_001D4040(&k, D_0044AC88);
    p[1] = k;
    p[2] = (s32)D_0044CEE8;
    p[0] = -1;
    p[3] = -1;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    return p;
}

void func_001A15F8(void *arg0) {
    void *p = *(void **)((u8 *)arg0 + 4);
    if (p != 0) {
        D_002AD530(p);
    }
    p = D_002AD5A8(0x13E800);
    *(void **)((u8 *)arg0 + 4) = p;
    *(u8 *)p = 0;
    *((u8 *)p + 1) = 0;
}

void func_00137CF0(void) {
    int key[4];
    int g = func_00262838();
    func_002623F0(g, keyinit_d178(key, D_00446660));
}
