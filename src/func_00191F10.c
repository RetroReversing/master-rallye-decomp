extern void func_001D4040(void *, s32);
extern void func_001D2458(void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3FE0(s32, void *, void *);
extern s32 func_001E4280(void);
extern void D_002AD390(s32);

typedef struct { s32 v[4]; } Key16;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_00191EB8(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[15]);
    func_001E3EC0(tmp, &key, arg1);
}

void func_00191F10(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[16]);
    func_001E3EC0(tmp, &key, arg1);
}

void func_00191F68(void *arg0, s32 *arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D2458(&key, arg1[0]);
    func_001E3FE0(tmp, (void *)((u8 *)arg0 + 0x44), &key);
    D_002AD390(key.v[0]);
}
