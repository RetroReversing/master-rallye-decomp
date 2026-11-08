extern void func_00127A60(void *);
extern void *func_0017E620(void);
extern void func_001D2458(void *, char *);
extern void func_001E3FE0(s32, void *, void *);
extern void D_002AD390(s32);
extern char D_004486D8[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    s16 unk2A;
    void *(*unk2C)(void *, s32, s32, void *);
} VTable;

void func_001288C0(void *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 temp;
    void **obj;
    VTable *vt;
    void *(*fn)(void *, s32, s32, void *);

    func_00127A60(arg0);
    ((s32 *)arg0)[0x13] = 0;
    ((s32 *)arg0)[0xE] = 0;
    temp = func_001E4280();
    func_001D2458(sp, D_004486D8);
    obj = func_0017E620();
    vt = (VTable *)*obj;
    fn = vt->unk2C;
    func_001D2458(sp10, fn((void *)((u8 *)obj + vt->unk28), 0x2D2, 3, fn));
    func_001E3FE0(temp, sp, sp10);
    D_002AD390(sp10[0]);
    D_002AD390(sp[0]);
}

void func_00128828(void *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 temp;
    void **obj;
    VTable *vt;
    void *(*fn)(void *, s32, s32, void *);

    func_00127A60(arg0);
    ((s32 *)arg0)[0x13] = 0;
    temp = func_001E4280();
    func_001D2458(sp, D_004486D8);
    obj = func_0017E620();
    vt = (VTable *)*obj;
    fn = vt->unk2C;
    func_001D2458(sp10, fn((void *)((u8 *)obj + vt->unk28), 0x2D2, 6, fn));
    func_001E3FE0(temp, sp, sp10);
    D_002AD390(sp10[0]);
    D_002AD390(sp[0]);
}

void func_00128790(void *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 temp;
    void **obj;
    VTable *vt;
    void *(*fn)(void *, s32, s32, void *);

    func_00127A60(arg0);
    ((s32 *)arg0)[0xE] = 0;
    temp = func_001E4280();
    func_001D2458(sp, D_004486D8);
    obj = func_0017E620();
    vt = (VTable *)*obj;
    fn = vt->unk2C;
    func_001D2458(sp10, fn((void *)((u8 *)obj + vt->unk28), 0x2D2, 1, fn));
    func_001E3FE0(temp, sp, sp10);
    D_002AD390(sp10[0]);
    D_002AD390(sp[0]);
}
