extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

int func_003AC5A0(void *arg0, void *arg1);

void *func_003A65D8(void *arg0, void *arg1) {
    *(u16 *)arg0 = *(u16 *)arg1;
    func_003AC5A0((u8 *)arg0 + 4, (u8 *)arg1 + 4);
    return arg0;
}

void func_003A4418(void *arg0, int arg1);
void func_003AD498(void *arg0, int arg1);
void D_002AD390(void *arg0);

void func_003A6550(void *arg0, int arg1) {
    func_003A4418((u8 *)arg0 + 4, 2);
    func_003AD498(arg0, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

typedef struct { float x; float y; } Vec2f;

Vec2f *func_003A6370(Vec2f *arg0, Vec2f *arg1) {
    arg0->x = arg1->x;
    arg0->y = arg1->y;
    return arg0;
}
