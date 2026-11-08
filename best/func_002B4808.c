extern s32 func_00151930(void*);
extern void func_00151A28(void*, s32, s32, void*, s32);
extern s32 func_002B5220(void*, void*, s32, s32);
extern void func_001539A0(void*, s32, s32, void*, s32, s32);
extern void func_001D2CD8(void*, void*);
extern void func_001D2900(void*, void*);
extern void func_002B2028(void*);
extern s32 func_003FA9B8(void*);

extern u32 D_0040E618[];
extern u32 D_0040E658[];
extern void *D_0040E678;
extern char D_0047E9F0[];
extern char D_0047E9F8[];
extern char D_0047EA00[];
extern char D_0047EA08[];
extern char D_0047EA18[];
extern char D_0047EA28[];
extern char D_0047EA38[];
extern void *D_0047EA58;

typedef struct {
    void *vtable;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} Ctx;

void *func_002B4808(Ctx *this) {
    struct __attribute__((aligned(16))) { void *value; } sp0;
    struct __attribute__((aligned(16))) { void *value; } sp10;
    void *p0;
    void *p10;
    void *s678;
    s32 var3;
    s32 res;
    char *var22;
    void *t4;
    void *t8;
    void *t14;
    void *t18;
    void *tC;

    p0 = &sp0;
    p10 = &sp10;

    this->vtable = &D_0047EA58;
    this->unk4 = 0;
    this->unk8 = 0;
    this->unkC = 0;
    this->unk10 = 0;
    this->unk14 = 0;
    this->unk18 = 0;

    s678 = D_0040E678;
    if (D_0040E658[3] != 0) {
        var3 = func_00151930(D_0040E658);
    } else {
        var3 = (s32)D_0040E658 + 0x10;
        D_0040E658[2] = D_0040E658[2] + 1;
    }
    sp0.value = (void *)var3;
    func_00151A28(p0, 0, -1, s678, func_003FA9B8(s678));

    res = func_002B5220(p0, D_0047E9F0, -1, func_003FA9B8(D_0047E9F0));

    if (D_0040E658[3] != 0) {
        var3 = func_00151930(D_0040E658);
    } else {
        var3 = (s32)D_0040E658 + 0x10;
        D_0040E658[2] = D_0040E658[2] + 1;
    }
    sp10.value = (void *)var3;
    func_001539A0(p10, 0, -1, p0, 0, res);

    if (*(s32 *)((char *)sp10.value - 0x10) == 0) {
        var22 = D_0047E9F8;
    } else {
        *((char *)sp10.value + *(s32 *)((char *)sp10.value - 0x10)) = 0;
        var22 = (char *)sp10.value;
    }

    t4 = &this->unk4;
    t8 = &this->unk8;
    t18 = &this->unk18;
    t14 = &this->unk14;
    tC = &this->unkC;

    func_001D2CD8(t4, var22);
    func_001D2900(t4, D_0047EA00);
    func_001D2CD8(t8, var22);
    func_001D2900(t8, D_0047EA08);
    func_001D2CD8(&this->unk10, D_0047EA18);
    func_001D2CD8(t14, var22);
    func_001D2900(t14, D_0047EA00);
    func_001D2900(t14, (void *)this->unk10);
    func_001D2CD8(tC, var22);
    func_001D2900(tC, D_0047EA28);
    func_001D2CD8(t18, var22);
    func_001D2900(t18, D_0047EA38);

    {
        u32 *t = (u32 *)sp10.value - 4;
        t[2] = t[2] - 1;
        if (t[2] == 0) {
            if (t[1] + 0x10 != 0) {
                func_002B2028(t);
            } else {
                u32 old = D_0040E618[-1];
                *(u32 *)t = old;
                D_0040E618[-1] = (u32)t;
            }
        }
    }
    {
        u32 *t = (u32 *)sp0.value - 4;
        t[2] = t[2] - 1;
        if (t[2] == 0) {
            if (t[1] + 0x10 != 0) {
                func_002B2028(t);
            } else {
                u32 old = D_0040E618[-1];
                *(u32 *)t = old;
                D_0040E618[-1] = (u32)t;
            }
        }
    }

    return this;
}
