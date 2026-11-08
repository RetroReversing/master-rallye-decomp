extern void func_002AC8C0(f32 *, s32 *);

u32 func_002AD250(f32 arg0) {
    f32 sp10;
    s32 sp[4];
    s32 v;
    s32 s8;

    sp10 = arg0;
    func_002AC8C0(&sp10, sp);
    v = sp[0];
    if ((v ^ 2) == 0) return 0;
    if ((u32)v < 2) return 0;
    if (sp[1] != 0) return 0;
    s8 = sp[2];
    if ((v ^ 4) == 0) return 0xFFFFFFFFu;
    if (s8 < 0) return 0;
    if (s8 >= 0x20) return 0xFFFFFFFFu;
    if (s8 < 0x1F) return (u32)sp[3] >> (0x1E - s8);
    return (u32)sp[3] << (s8 - 0x1E);
}
