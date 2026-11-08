extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern void func_001E3598(void *, void *);

static inline __attribute__((always_inline)) void *init_d4040(void *p, s32 s) {
    func_001D4040(p, s);
    return p;
}

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x6C];
    s32 unk7C;
    s32 unk80;
    s32 unk84;
} S_192590;

typedef struct { u8 d[16]; } Tmp16;

void func_00192590(S_192590 *arg0) {
    Tmp16 buf;
    s32 r;

    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk7C);
    r = func_001E4280();
    func_001E3650(r, (s32)init_d4040(&buf, arg0->unkC));
}

void func_001925F0(S_192590 *arg0) {
    Tmp16 buf;
    void *r;

    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk80);
    r = (void *)func_001E4280();
    func_001E3598(r, init_d4040(&buf, arg0->unkC));
}

void func_00192650(S_192590 *arg0) {
    Tmp16 buf;
    s32 r;

    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk84);
    r = func_001E4280();
    func_001E3650(r, (s32)init_d4040(&buf, arg0->unkC));
}
