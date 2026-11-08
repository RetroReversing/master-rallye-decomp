extern void func_003F9698(const char *, ...);
extern u8 D_00477A80[];
extern u8 D_00477A38[];
extern u8 D_00477890[];
extern u8 D_00477898[];

void func_001F4E38(void *a0, u8 *s) {
    const char *fmt = (const char *)D_00477A80;
    s32 flag = *(s32 *)(s + 0x18);
    void *name = *(void **)(s + 0x14);
    const char *opt = flag ? (const char *)D_00477890 : (const char *)D_00477898;
    func_003F9698(fmt, name, *(s32 *)(s + 0x1C), opt);
}

void func_001F4DF0(void *a0, u8 *s) {
    const char *fmt = (const char *)D_00477A38;
    s32 flag = *(s32 *)(s + 0x18);
    void *num = *(void **)(s + 0x1C);
    void *name = *(void **)(s + 0x14);
    const char *opt = flag ? (const char *)D_00477890 : (const char *)D_00477898;
    func_003F9698(fmt, name, num, opt);
}

extern void *func_002B8C18(void);

void *func_001F4E80(u8 *s) {
    *(s32 *)(s + 4) = 0;
    *(void **)s = func_002B8C18();
    return s;
}

typedef struct {
    s16 adjust;
    s16 pad;
    void (*fn)(void *, s32);
} VtEntry;

extern void D_002AD390(void *);

void func_001F4EB0(void *self, s32 flags) {
    u8 *v = *(u8 **)self;
    if (v != NULL) {
        VtEntry *e = *(VtEntry **)(v + 8);
        e[1].fn(v + e[1].adjust, 3);
    }
    D_002AD390(*(void **)((u8 *)self + 4));
    if (flags & 1) D_002AD390(self);
}
