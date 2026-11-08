extern s32 D_002AD408(s32);
extern s32 func_0026B070(s32);
extern s32 func_001D4040(s32*, const char*);
extern void D_0047A108;
extern void D_0047A140;

s32 func_0026B190(s32 arg0, s32 arg1)
{
    s32* src = (s32*)(arg1 + 8);
    s32* dst = (s32*)(arg0 + 8);
    s32 i = 7;
    do {
        *dst++ = *src++;
        i--;
    } while (i >= 0);
    return arg0;
}

s32 func_0026B1C8(s32 arg0)
{
    s32 temp = func_0026B070((s32)D_002AD408(0x28));
    func_0026B190(temp, arg0);
    return temp;
}

s32 func_0026B218(s32 arg0)
{
    s32 sp;
    func_001D4040(&sp, "ControllerMapPS2");
    *(s32*)(arg0 + 4) = (s32)&D_0047A108;
    *(s32*)(arg0 + 0) = sp;
    *(s32*)(arg0 + 0x10) = 1;
    *(s32*)(arg0 + 0x38) = -1;
    *(f32*)(arg0 + 0x3C) = 0.3f;
    *(f32*)(arg0 + 0x40) = 1.0f;
    *(s32*)(arg0 + 8) = 1;
    *(s32*)(arg0 + 0xC) = 1;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x1C) = -1;
    *(s32*)(arg0 + 0x20) = -1;
    *(s32*)(arg0 + 0x24) = -1;
    *(s32*)(arg0 + 0x28) = -1;
    *(s32*)(arg0 + 0x2C) = -1;
    *(s32*)(arg0 + 0x30) = -1;
    *(s32*)(arg0 + 0x34) = -1;
    return arg0;
}

s32 func_0026B0E0(s32 arg0, s32 arg1)
{
    s32 sp;
    s32* src = (s32*)(arg1 + 8);
    s32* dst = (s32*)(arg0 + 8);
    s32 i;
    func_001D4040(&sp, "ControllerMap");
    *(s32*)(arg0 + 0) = sp;
    *(s32*)(arg0 + 4) = (s32)&D_0047A140;
    i = 7;
    do {
        *dst++ = *src++;
        i--;
    } while (i >= 0);
    return arg0;
}
