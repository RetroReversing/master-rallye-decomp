extern void func_00293190(void *);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];
extern void func_003F93CC(void *, s32, s32);

typedef struct { u32 *begin, *end, *cap; } V;

void func_00293108(V *p, int f) {
    u32 *b;
    int n;
    func_00293190(p);
    b = p->begin;
    n = p->cap - b;
    if (n) {
        if (n * 4) func_002B2028(b);
        else { *b = D_0040E618[-1]; D_0040E618[-1] = (u32)b; }
    }
    if (f & 1) D_002AD390(p);
}

void func_00206BB8(void *arg0, s32 arg1) {
    void *temp_17;
    void *temp_4;
    s32 temp_16;
    s32 temp_2;

    temp_16 = *(s32 *)((u8 *)arg0 + 4);
    temp_17 = *(void **)((u8 *)arg0 + 0);
    func_003F93CC(temp_17, temp_16, 0);
    temp_4 = *(void **)((u8 *)arg0 + 0);
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)((u8 *)arg0 + 0);
    temp_2 = ((*(s32 *)((u8 *)arg0 + 8)) - (*(s32 *)((u8 *)arg0 + 0))) >> 2;
    if (temp_2 != 0) {
        func_002B2028(temp_4);
    } else {
        *(s32 *)temp_4 = D_0040E618[-1];
        D_0040E618[-1] = (s32)temp_4;
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
