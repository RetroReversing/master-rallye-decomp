extern s32 *D_0049E564;
extern s32 *D_0049E56C;

void func_00405268(s32 arg0, s32 arg1, s32 arg2) {
    s32 off = arg0 * 8;
    s32 *base = (arg0 < 0) ? D_0049E564 : D_0049E56C;
    off += (s32)(u32)base;
    *(s32 *)off = arg1;
    *(s32 *)(off + 4) = arg2;
}

void func_00405298(s32 arg0) {
    s32 off = arg0 * 8;
    s32 *base = (arg0 < 0) ? D_0049E564 : D_0049E56C;
    off += (s32)(u32)base;
    *(s32 *)off = 0;
}
