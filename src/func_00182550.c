extern unsigned char D_0046FC60[];
extern unsigned char D_0046FC70[];
extern unsigned char D_0046FC78[];
extern unsigned char D_0046FC88[];
extern unsigned char D_004700C8[];
extern unsigned char D_00473C90[];
extern unsigned char D_00473D90[];

void func_001E2460(void *, s32);
void func_001E2510(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001D4040(void *, const char *);

void func_00182550(s32 arg0, s32 arg1, s32 arg2)
{
    char sp[16];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, (const char *)D_0046FC60, (void *)(arg0 + 0x14));
    func_001E2510(sp, (const char *)D_0046FC70, (void *)(arg0 + 0x18));
    func_001E2510(sp, (const char *)D_0046FC78, (void *)(arg0 + 0x1C));
}

void *func_001825E0(void *arg0)
{
    char sp[16];
    func_001D4040(sp, (const char *)D_0046FC88);
    *(s32 *)((u8 *)arg0 + 8) = (s32)D_00473C90;
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)sp;
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(s32 *)((u8 *)arg0 + 0x78) = -1;
    *(f32 *)((u8 *)arg0 + 0x8C) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x74) = 0;
    *(f32 *)((u8 *)arg0 + 0x98) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x94) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x90) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x88) = 0;
    return arg0;
}

void *func_00184E38(void *arg0)
{
    char sp[16];
    func_001D4040(sp, (const char *)D_004700C8);
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)sp;
    *(s32 *)((u8 *)arg0 + 8) = (s32)D_00473D90;
    *(s32 *)((u8 *)arg0 + 0xC) = 1;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 1;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    return arg0;
}
