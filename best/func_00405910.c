extern s32 D_0043C3B0[];
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    D_0043C3B0[3] = arg0;
    D_0043C3B0[1] = arg1;
    D_0043C3B0[2] = arg2;
}

extern void *func_004058E0(void);
typedef struct {
    s32 pad0[7];
    s32 unk1C;
    s32 unk20;
} S_00405910;

void *func_00405910(S_00405910 *arg0, s32 arg1) {
    if (arg1 < 0) {
        return func_004058E0();
    }
    if (arg1 < arg0->unk20) {
        return (void *)(arg0->unk1C + (arg1 << 6));
    }
    return func_004058E0();
}

extern void iSignalSema_2(s32);
extern void func_004058C0(void *);
typedef struct {
    void *unk0;
    s32 pad1;
    s32 unk8;
    s32 pad2[3];
    s32 unk14;
    s32 unk18;
    void (*unk1C)(s32);
    s32 unk20;
    s32 unk24;
} S_00405950_inner;

typedef struct {
    s32 pad0[7];
    S_00405950_inner *unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u32 unk2C;
} S_00405950;

void func_00405950(S_00405950 *arg0) {
    u32 type = arg0->unk20;
    S_00405950_inner *s = arg0->unk1C;

    if (type == 0x8000000A) {
        if (s->unk1C != 0) {
            s->unk1C(s->unk20);
        }
    } else if (type == 0x80000009) {
        s = arg0->unk1C;
        s->unk24 = (s32)arg0->unk24;
        s->unk14 = (s32)arg0->unk28;
        s->unk18 = (s32)arg0->unk2C;
    }
    s = arg0->unk1C;
    if (s->unk8 >= 0) {
        iSignalSema_2(s->unk8);
    }
    func_004058C0(s->unk0);
    s->unk0 = 0;
}

extern void func_00405438(u32, void *, u32, s32, s32, s32);
extern void *func_004058E0_1(void *);
typedef struct {
    s32 pad0[5];
    s32 unk14;
    s32 pad1;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
} S_00405A08;

void func_00405A08(S_00405A08 *arg0, void *arg1) {
    void *tmp = func_004058E0_1(arg1);
    ((s32 *)tmp)[5] = arg0->unk14;
    ((s32 *)tmp)[7] = arg0->unk1C;
    ((s32 *)tmp)[8] = 0x8000000C;
    func_00405438(0x80000008, tmp, 0x40, arg0->unk20, arg0->unk24, arg0->unk28);
}
