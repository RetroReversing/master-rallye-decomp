extern void func_001D4040(void *, char *);

extern char D_00471280[];
extern char D_00472018[];
extern char D_004738E0[];

void *func_0019CD28(void *arg0) {
    s32 tmp[4];
    s32 *p;
    s32 n;

    func_001D4040(tmp, D_00472018);
    *(s32 *)((u8 *)arg0 + 0x00) = -1;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(char **)((u8 *)arg0 + 0x08) = D_004738E0;
    *(s32 *)((u8 *)arg0 + 0x14) = 1;
    *(s32 *)((u8 *)arg0 + 0x10) = 1;
    *(s32 *)((u8 *)arg0 + 0x0C) = 1;
    *(s32 *)((u8 *)arg0 + 0x04) = tmp[0];
    func_001D4040((u8 *)arg0 + 0x1C, D_00471280);
    p = (s32 *)((u8 *)arg0 + 0x20);
    n = 3;
    do {
        *p = 0;
        n--;
        p++;
    } while (n != -1);
    return arg0;
}
