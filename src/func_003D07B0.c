/* identical to func_003D0678 (matched), with its names changed by decompdecomp */
extern s32 func_003CD948(void *, void *, s32, s32, s32);
extern s32 func_003FA9B8(s32);

s32 func_003D07B0(void *arg0, s32 arg1) {
    s32 v;
    v = func_003FA9B8(arg1);
    return func_003CD948(arg0, *(void **)((u8 *)(*(void **)arg0) - 0x10), 0, arg1, v);
}
