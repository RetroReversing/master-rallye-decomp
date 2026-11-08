extern void func_001E2460(void *, s32);
extern void func_001E2A48(void *, const char *, s32);
extern void func_001E2470(void *, const char *, s32);

extern const char D_00446938[];
extern const char D_00446978[];
extern const char D_00446980[];

void func_00115EE8(s32 arg0, s32 arg2)
{
    func_001E2460((void *)arg0, arg2);
    func_001E2A48((void *)arg0, D_00446938, arg0 + 0xC);
    func_001E2A48((void *)arg0, D_00446978, arg0 + 0x18);
    func_001E2470((void *)arg0, D_00446980, arg0 + 0x24);
}
