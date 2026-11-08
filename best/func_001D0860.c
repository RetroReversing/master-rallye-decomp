extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern const char D_0044E848[];
extern const char D_0044E858[];
extern const char D_0044E870[];
extern void *D_00473680;

typedef struct {
    void *vtable;
    unsigned int unk4;
    unsigned int unk8;
    unsigned int unkC;
    unsigned int unk10;
} Func001D0860;

static inline void *init(void *p, const char *s) {
    func_001D4040(p, s);
    return p;
}

void *func_001D0860(void) {
    Func001D0860 *p;
    char local[0x20];
    
    p = (Func001D0860 *)D_002AD408(0x14);
    init(local, D_0044E848);
    p->unk4 = *(unsigned int *)local;
    *(int *)p = -1;
    p->unk8 = (unsigned int)&D_00473680;
    p->unkC = 0;
    p->unk10 = 0;
    init((char *)p + 0xC, D_0044E858);
    init((char *)p + 0x10, D_0044E870);
    return p;
}
