extern void func_003F9698(void *);
extern void func_002B2028(s32);
extern void D_002AD390(void *);
extern char D_00476090[];

void func_001D7068(void *arg0, s32 arg1) {
    if (*(s32 *)((char *)arg0 + 0xC) != 0 &&
        *(s32 *)((char *)arg0 + 0xC) != *(s32 *)((char *)arg0 + 4) - *(s32 *)((char *)arg0 + 0))
        func_003F9698(D_00476090);
    if (*(s32 *)((char *)arg0 + 8) != *(s32 *)((char *)arg0 + 0))
        func_002B2028(*(s32 *)((char *)arg0 + 0));
    if (arg1 & 1)
        D_002AD390(arg0);
}
