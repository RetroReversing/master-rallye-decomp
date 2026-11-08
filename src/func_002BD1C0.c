extern void func_002BDFD0(void *, s32);
extern s32 func_002BE550(void);
extern void func_002BE738(s32, s32, s32, void *);
extern char D_00480690[];

s32 func_002BD1C0(void *arg0, s32 arg1) {
    ((s32 *)arg0)[3] = arg1;
    func_002BDFD0(arg0, 0);
    return 1;
}

void func_002BD3E8(s32 arg1) {
    func_002BE738(func_002BE550(), 0x1F, arg1, (void *)D_00480690);
}
