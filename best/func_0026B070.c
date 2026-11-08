extern s32 D_002AD390(s32);
extern void D_00474288;
extern s32 func_001D4040(s32*, const char*);
extern void D_0047A140;
extern s32 D_002AD408(s32);
extern s32* func_0026B218(s32);
extern void D_0047A0F0;
extern s32* D_004267BC;
extern s32 func_001DAD18(s32, s32);
extern s32* func_0026BC18(s32);

void func_0026B160(s32 arg0, s32 arg1)
{
    *(s32*)(arg0 + 4) = (s32)&D_00474288;
    if (arg1 & 1) {
        D_002AD390(arg1 & 1);
    }
}

void* func_0026B070(s32 arg0)
{
    s32 sp;
    s32 i = 7;
    s32* p = (s32*)arg0 + 9; /* start at 0x24 */
    func_001D4040(&sp, "ControllerMap");
    *(s32*)(arg0 + 0) = sp;
    *(s32*)(arg0 + 4) = (s32)&D_0047A140;
    do {
        *p-- = 0;
        i--;
    } while (i >= 0);
    return (void*)arg0;
}

void func_0026B600(s32 arg0)
{
    s32* src = (s32*)arg0;
    s32* dst = func_0026B218((s32)D_002AD408(0x44));
    dst[0] = src[0];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    dst[8] = src[8];
    dst[9] = src[9];
    dst[10] = src[10];
    dst[11] = src[11];
    dst[12] = src[12];
    dst[13] = src[13];
    dst[14] = src[14];
    *(f32*)(dst + 15) = *(f32*)(src + 15);
    *(f32*)(dst + 16) = *(f32*)(src + 16);
}

s32* func_0026B6B8(s32* arg0, s32 arg1, s32 arg2)
{
    arg0[6] = (s32)&D_0047A0F0;
    arg0[3] = arg1;
    arg0[4] = arg2;
    arg0[2] = (s32)arg0;
    arg0[1] = (s32)arg0;
    arg0[5] = 0;
    arg0[0] = (s32)arg0;
    if (D_004267BC == 0) {
        D_004267BC = func_0026BC18((s32)D_002AD408(0xC));
    }
    func_001DAD18(D_004267BC[2], (s32)arg0);
    return arg0;
}
