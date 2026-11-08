extern char D_00446420[];
extern char D_00446440[];
extern char D_00446460[];
extern char D_00446480[];
extern char D_004464A0[];
extern char D_004464C0[];
extern s32 func_001D4040(void *, const char *);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E4280(void);

s32 func_0010F9F0(s32 pad, s32 sel, s32 type) {
    char buf[16];
    const char *str;
    s32 handle;

    switch (type) {
    case 0:
        if (sel == 0) str = D_00446420;
        else str = D_00446440;
        break;
    case 1:
        if (sel == 0) str = D_00446460;
        else str = D_00446480;
        break;
    case 2:
        if (sel == 0) str = D_004464A0;
        else str = D_004464C0;
        break;
    default:
        return 0;
    }

    handle = func_001E4280();
    func_001D4040(buf, str);
    return func_001E3650(handle, buf);
}
