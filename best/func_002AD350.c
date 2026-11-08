extern void func_002AC8C0(void *, void *);
extern void func_002AC728(s32, s32, s32, u64);

void func_002AD350(f32 arg0) {
    s32 sp[4];
    volatile f32 fsp;

    fsp = arg0;
    func_002AC8C0((void *)&fsp, sp);
    func_002AC728(sp[0], sp[1], sp[2], (u64)((s64)sp[3] << 32) >> 2);
}
