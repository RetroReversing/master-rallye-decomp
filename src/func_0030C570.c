extern s32 D_0042D660;
extern char D_004A3BC0[];

void func_0030C570(u32 arg0) {
    s32 idx;
    s16 *base;

    base = (s16 *)D_004A3BC0;
    idx = D_0042D660;
    base[idx] = (s16)(arg0 >> 16);
    idx = idx + 1;
    base[idx] = (s16)arg0;
    D_0042D660 = idx + 1;
}
