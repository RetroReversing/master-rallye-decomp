extern void D_002AD390(s32);
extern void func_00127A60(void);
extern void *func_0017E620(void);
extern void func_001D2458(void *, char *);
extern void func_001E3FE0(s32, void *, void *);
extern char D_004486D8[];

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} StringObj;

void func_001286E8(s32 *arg0) {
    StringObj sp0;
    StringObj sp10;
    s32 temp;
    void **obj;
    s32 *vptr;
    char *str;

    func_00127A60();
    arg0[0x38 / 4] = 0;
    arg0[0x30 / 4] = 1;
    arg0[0x28 / 4] = 1;
    temp = func_001E4280();
    func_001D2458(&sp0, D_004486D8);
    obj = func_0017E620();
    vptr = *obj;
    str = ((char *(*)(void *, s32, s32))vptr[0x2C / 4])((u8 *)obj + *(s16 *)((u8 *)vptr + 0x28), 0x2D2, 2);
    func_001D2458(&sp10, str);
    func_001E3FE0(temp, &sp0, &sp10);
    D_002AD390(sp10.unk0);
    D_002AD390(sp0.unk0);
}

void func_00128648(s32 *arg0) {
    StringObj sp0;
    StringObj sp10;
    s32 temp;
    void **obj;
    s32 *vptr;
    char *str;

    func_00127A60();
    arg0[0x38 / 4] = 0;
    arg0[0x4C / 4] = 1;
    temp = func_001E4280();
    func_001D2458(&sp0, D_004486D8);
    obj = func_0017E620();
    vptr = *obj;
    str = ((char *(*)(void *, s32, s32))vptr[0x2C / 4])((u8 *)obj + *(s16 *)((u8 *)vptr + 0x28), 0x2D2, 5);
    func_001D2458(&sp10, str);
    func_001E3FE0(temp, &sp0, &sp10);
    D_002AD390(sp10.unk0);
    D_002AD390(sp0.unk0);
}

void func_001285B0(s32 *arg0) {
    StringObj sp0;
    StringObj sp10;
    s32 temp;
    void **obj;
    s32 *vptr;
    char *str;

    func_00127A60();
    arg0[0x50 / 4] = 0;
    temp = func_001E4280();
    func_001D2458(&sp0, D_004486D8);
    obj = func_0017E620();
    vptr = *obj;
    str = ((char *(*)(void *, s32, s32))vptr[0x2C / 4])((u8 *)obj + *(s16 *)((u8 *)vptr + 0x28), 0x2D6, 4);
    func_001D2458(&sp10, str);
    func_001E3FE0(temp, &sp0, &sp10);
    D_002AD390(sp10.unk0);
    D_002AD390(sp0.unk0);
}
