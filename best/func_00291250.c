extern void func_001D4040(void *, const char *);
extern char D_0047B778[];
extern char D_0047CCF8[];
extern char D_0047AD68[];

void *func_00291250(void *arg0) {
    s32 k;
    void *p1c, *p28, *p34;
    func_001D4040(&k, D_0047B778);
    *(s32 *)((u8 *)arg0 + 4) = k;
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(s32 *)((u8 *)arg0 + 8) = (s32)D_0047CCF8;
    *(s32 *)((u8 *)arg0 + 0x18) = 1;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    p1c = (u8 *)arg0 + 0x1C;
    p28 = (u8 *)arg0 + 0x28;
    p34 = (u8 *)arg0 + 0x34;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)p1c + 8) = 0;
    *(s32 *)((u8 *)p1c + 4) = 0;
    *(f32 *)((u8 *)arg0 + 0x28) = 1.0f;
    *(s32 *)((u8 *)p28 + 8) = 0;
    *(s32 *)((u8 *)p28 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)p34 + 8) = 0;
    *(s32 *)((u8 *)p34 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x8C) = 0;
    func_001D4040((u8 *)arg0 + 0x40, D_0047AD68);
    return arg0;
}
