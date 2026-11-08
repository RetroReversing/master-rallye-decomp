void func_003F94D0(void *, int, int);
void func_002BC7A8(void *, void *);

void func_002BCAC0(void *arg0, void *arg1)
{
    func_003F94D0(arg0, 0, 0x80);
    func_003F94D0((void *)((u8 *)arg0 + 0x80), 0, 0x30);
    *(void **)((u8 *)arg0 + 0x60) = arg1;
    *(void **)((u8 *)arg0 + 0x78) = arg0;
    func_002BC7A8((void *)((u8 *)arg0 + 0x70), (void *)((u8 *)arg1 + 0xc));
    *(void **)((u8 *)arg0 + 0x20) = arg0;
}
