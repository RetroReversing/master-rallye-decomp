extern void (**D_00426ABC)(void);

void func_002AD620(void) {
    void (**p)(void);

    p = D_00426ABC;
    if (*p != 0) {
        do {
            D_00426ABC = p + 1;
            (*p)();
            p = D_00426ABC;
        } while (*p != 0);
    }
}

extern void func_002AC8C0(void *, void *);
extern void func_002AC728(s32, s32, s32, u64);

void func_002AD350(f32 arg0) {
    s32 sp[4];
    f32 fsp;

    fsp = arg0;
    func_002AC8C0(&fsp, sp);
    func_002AC728(sp[0], sp[1], sp[2], (u64)((s64)sp[3] << 32) >> 2);
}

extern void func_002AC7B0(void *);

void func_002AD320(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp[4];

    sp[0] = arg0;
    sp[1] = arg1;
    sp[2] = arg2;
    sp[3] = arg3;
    func_002AC7B0(sp);
}

void func_002AD2E8(f32 arg0) {
    s32 sp[4];
    f32 fsp;

    fsp = arg0;
    func_002AC8C0(&fsp, sp);
    sp[1] = (sp[1] == 0);
    func_002AC7B0(sp);
}
