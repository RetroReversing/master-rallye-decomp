extern void func_00101108(s32);
extern void func_00101820(s32);
extern void func_00101FB0(s32);
extern s32 func_00191710(s32);
extern s32 func_00193B60(void);
extern f32 func_00195CF0(s32, s32);
extern s32 func_00196028(void);
extern void func_001D4040(void*, const char*);
extern void func_001E33C8(s32, void*, s32);
extern s32 func_001E3598(s32, void*);
extern void func_001E3E90(s32, void*, f32);
extern s32 func_001E4280(void);
extern char D_00444B18[], D_00444B98[];

void func_00101018(s32 arg0) {
    s32 r1, r2, r3;
    s32 a, b, c;
    f32 f20;
    s32 buf[4];
    func_00101108(arg0);
    r1 = func_001E4280();
    func_001D4040(buf, D_00444B18);
    if (!func_001E3598(r1, buf)) {
        func_00101820(arg0);
    }
    func_00101FB0(arg0);
    a = func_00196028();
    c = func_00193B60();
    b = func_00191710(c);
    f20 = func_00195CF0(a, b);
    r2 = func_001E4280();
    func_001D4040(buf, D_00444B98);
    func_001E3E90(r2, buf, f20);
    r3 = func_001E4280();
    func_001D4040(buf, D_00444B98);
    func_001E33C8(r3, buf, 0);
}
