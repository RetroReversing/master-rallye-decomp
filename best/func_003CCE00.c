extern u8 D_0049C200[4096];
s32 func_003F931C(s32, s32, u32);
u32 func_003FA9B8(s32);

void func_003CCE00(void *arg0) {
    if (arg0 == NULL) return;
    s32 addr = ((s32)(u32)&D_0049C200) | 0x20000000;
    u32 len = func_003FA9B8(addr);
    if (len < 0x400) {
        len = func_003FA9B8(0x3FF);
    } else {
        len = 0x3FF;
    }
    func_003F931C((s32)arg0, addr, len);
    *(u8 *)((u8 *)arg0 + len) = 0;
}
