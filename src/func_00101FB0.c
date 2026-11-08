extern s32 func_00118C88();
extern s32 func_00118C60();
extern s32 func_001189C0();
extern void func_00118538();
extern s32 func_00193B60();
extern void func_00191F68();
extern void D_002AD390(s32);

void func_00101FB0(void) {
    s32 local;
    s32 a;
    s32 b;
    s32 c;

    a = func_00118C88();
    b = func_00118C60(a);
    c = func_001189C0();
    func_00118538(&local, c, b);
    func_00191F68(func_00193B60(), &local);
    D_002AD390(local);
}
