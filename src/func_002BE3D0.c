extern void func_002BE420(void *, s32, s32);
extern void func_002BE498(void *, s32);

void func_002BE3D0(void *arg0, void *arg1) {
    s32 type = *(s32 *)((char *)arg1 + 0xC);
    switch (type) {
    case 0:
        func_002BE420(arg0, *(s32 *)((char *)arg1 + 0x1C), *(s32 *)((char *)arg1 + 0x18));
        break;
    case 1:
        func_002BE498(arg0, *(s32 *)((char *)arg1 + 0x1C));
        break;
    default:
        break;
    }
}
