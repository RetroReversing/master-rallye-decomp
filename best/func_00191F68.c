extern void func_001D2458(void *, s32);
extern void func_001E3FE0(s32, void *, void *);
extern s32 func_001E4280(void);
extern void D_002AD390(s32);

typedef struct { s32 v[4]; } Key16;

void func_00191F68(void *arg0, s32 *arg1) {
    Key16 key;
    s32 tmp;
    void *p;
    tmp = func_001E4280();
    p = (u8 *)arg0 + 0x44;
    func_001D2458(&key, arg1[0]);
    func_001E3FE0(tmp, p, &key);
    D_002AD390(key.v[0]);
}
