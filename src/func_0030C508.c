extern void func_003F9698(char *, ...);
extern s32 D_0042D660;
extern char D_004A3BC0[];
extern char D_00484A20[];

void func_0030C508(s16 arg0) {
    s32 idx;
    s16 *base;

    if ((u32)D_0042D660 >= 0x400U) {
        func_003F9698(D_00484A20);
    }
    idx = D_0042D660;
    base = (s16 *)D_004A3BC0;
    base[idx] = arg0;
    idx++;
    D_0042D660 = idx;
}
