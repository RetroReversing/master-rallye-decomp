extern s32 func_00110050(void);
extern s32 func_00194738(s32);
extern s32 func_00194C40(void);
extern s32 func_00196E10(void);
extern void func_0010D288(s32, s32, s32, s32);
extern void func_00196550(s32, s32);
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_0010DE50(s32, s32);
extern const char D_00445DC0[];
extern const char D_00445E18[];

void func_0010DD30(s32 arg0) {
    s32 buf[4];
    s32 id;
    s32 r1;
    s32 x;

    id = func_001E4280();
    func_001D4040(buf, D_00445DC0);
    r1 = func_001E3650(id, (s32)buf);
    x = func_00196E10();
    func_00196550(x, r1);
    if (func_00194738(func_00194C40()) != 0) {
        func_0010D288(func_00110050(), 2, 0, r1);
        id = func_001E4280();
        func_001D4040(buf, D_00445E18);
        func_001E3D10(id, buf, 1);
    } else {
        func_0010D288(func_00110050(), 1, 3, r1);
        id = func_001E4280();
        func_001D4040(buf, D_00445E18);
        func_001E3D10(id, buf, 0);
    }
    func_0010DE50(arg0, 0);
}
