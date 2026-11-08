extern s32 D_002AD408(s32);
extern s32 func_0026B070(s32);
extern s32 func_001D4040(s32*, const char*);
extern void D_0047A108;
extern void D_0047A140;

s32 func_0026B218(s32 arg0)
{
    s32 sp;
    s32* this = (s32*)arg0;
    func_001D4040(&sp, "ControllerMapPS2");
    this[1] = (s32)&D_0047A108;
    this[0] = sp;
    this[4] = 1;
    this[0xE] = -1;
    *(f32*)(this + 0xF) = 0.3f;
    *(f32*)(this + 0x10) = 1.0f;
    this[2] = 1;
    this[3] = 1;
    this[5] = 0;
    this[6] = 0;
    this[7] = -1;
    this[8] = -1;
    this[9] = -1;
    this[10] = -1;
    this[11] = -1;
    this[12] = -1;
    this[13] = -1;
    return arg0;
}

s32 func_0026B0E0(s32 arg0, s32 arg1)
{
    s32 sp;
    s32* dst = (s32*)arg0;
    s32* src = (s32*)arg1;
    s32 i;
    func_001D4040(&sp, "ControllerMap");
    dst[0] = sp;
    dst[1] = (s32)&D_0047A140;
    src = src + 2;
    dst = dst + 2;
    i = 7;
    do {
        *dst++ = *src++;
        i--;
    } while (i >= 0);
    return arg0;
}
