void func_003F94D0(void *, int, int);
void func_002BC7A8(void *, void *);
void *func_002BCD18(int);

void func_002BCAC0(void *arg0, void *arg1)
{
    func_003F94D0(arg0, 0, 0x80);
    func_003F94D0((void *)((u8 *)arg0 + 0x80), 0, 0x30);
    *(void **)((u8 *)arg0 + 0x60) = arg1;
    *(void **)((u8 *)arg0 + 0x78) = arg0;
    func_002BC7A8((void *)((u8 *)arg0 + 0x70), (void *)((u8 *)arg1 + 0xC));
    *(void **)((u8 *)arg0 + 0x20) = arg0;
}

void func_002BCB20(void *arg0)
{
    void *temp;
    temp = (void *)((u8 *)func_002BCD18(0x4000) - 8);
    *(void **)((u8 *)temp + 4) = *(void **)((u8 *)arg0 + 0);
    *(void **)((u8 *)arg0 + 0) = temp;
    *(int *)((u8 *)arg0 + 0x14) = *(int *)((u8 *)arg0 + 0x14) + 1;
}

void func_002BCA58(void *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
{
    *(int *)((u8 *)arg0 + 0x14) = arg2;
    *(int *)((u8 *)arg0 + 0xC) = arg1 & 0xFFFF;
    *(int *)((u8 *)arg0 + 0x18) = arg3;
    *(int *)((u8 *)arg0 + 0x1C) = arg4;
    *(int *)((u8 *)arg0 + 0x50) = arg5;
    *(int *)((u8 *)arg0 + 0x54) = arg6;
    *(int *)((u8 *)arg0 + 0x44) = 0;
    *(int *)((u8 *)arg0 + 0x40) = 0;
    *(int *)((u8 *)arg0 + 0x48) = 0;
    *(void **)((u8 *)arg0 + 0x20) = arg0;
}

void func_002BCA28(void *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
{
    *(int *)((u8 *)arg0 + 0xC) = arg1 & 0xFFFF;
    *(int *)((u8 *)arg0 + 0x14) = arg2;
    *(int *)((u8 *)arg0 + 0x18) = arg3;
    *(int *)((u8 *)arg0 + 0x1C) = arg4;
    *(int *)((u8 *)arg0 + 0x40) = arg5;
    *(int *)((u8 *)arg0 + 0x48) = arg6;
    *(int *)((u8 *)arg0 + 0x54) = 0;
    *(int *)((u8 *)arg0 + 0x44) = 0;
    *(int *)((u8 *)arg0 + 0x50) = 0;
    *(void **)((u8 *)arg0 + 0x20) = arg0;
}
