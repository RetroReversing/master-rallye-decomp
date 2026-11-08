extern void func_0029F3C8(void *, void *, s32);

void func_0029F378(void *arg0, void *arg1)
{
    s32 v3c = *(s32 *)((u8 *)arg0 + 0x3C);
    s32 v38 = *(s32 *)((u8 *)arg0 + 0x38);

    if (v38 != v3c) {
        goto do_call;
    }
    if (*(s32 *)((u8 *)arg0 + 0x2C) == 0) {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        return;
    }
do_call:
    *(s32 *)((u8 *)arg0 + 0x38) = v3c;
    func_0029F3C8(arg0, arg1, v3c);
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
}
