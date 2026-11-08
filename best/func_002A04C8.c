extern const char D_0047B988[];
extern void *func_0017E620(void);
extern void func_002060F8(void *);
extern void func_001D4810(void *, s32);
extern void func_002062A8(void *, void *);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_001D29D0(void *, const char *, s32);
extern s32 func_00206588(void *);
extern s32 func_002068C0(s32, void *, s32 *, s32 *);
extern void func_002063A0(void *, f32 *);
extern void D_002AD390(s32);

void func_002A04C8(void *arg0, void *arg1) {
    void *s0;
    void *v0;
    void *v1;
    void *t0;
    void *t1;
    s32 a0;
    s32 a1;
    s32 a2;
    s32 a3;
    s32 sp0;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    f32 sp28[2];

    s0 = *(void **)((s32)arg1 + 0x4C);
    if (s0 == 0) {
        return;
    }
    func_002060F8(s0);
    if (*(s32 *)((s32)arg0 + 0xC) != 0) {
        v0 = func_0017E620();
        v1 = *(void **)v0;
        t0 = *(void **)((s32)v1 + 0x24);
        a0 = (s32)v0 + *(s16 *)((s32)v1 + 0x20);
        a1 = *(s32 *)((s32)arg0 + 0xC);
        a2 = t0;
        a0 = ((s32 (*)(void *, s32, void *))t0)(a0, a1, a2);
        sp0 = 0;
        func_001D4810(&sp0, a0);
        func_002062A8(s0, &sp0);
        a0 = func_001E4280();
        a1 = (s32)arg0 + 0x10;
        a0 = func_001E3650(a0, a1);
        sp0 = 0;
        func_001D29D0(&sp0, D_0047B988, a0);
        func_002062A8(s0, &sp0);
        a0 = func_00206588(s0);
        sp0 = 0;
        func_002068C0(a0, &sp0, &sp20, &sp24);
        sp18 = 0;
        sp28[0] = (f32)(-sp20) * *(f32 *)((s32)arg0 + 0x14);
        sp28[1] = (f32)(-sp24) * *(f32 *)((s32)arg0 + 0x18);
        func_002063A0(s0, sp28);
        v1 = *(void **)s0;
        a0 = (s32)s0 + *(s16 *)((s32)v1 + 0x10);
        t1 = *(void **)((s32)v1 + 0x14);
        ((void (*)(void *, s32))t1)(a0, sp0);
        D_002AD390(sp0);
    }
}
