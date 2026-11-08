/* identical to func_00236F50 (matched), with its names changed by decompdecomp */
extern void D_002AD390();
extern s32 D_00473518;

void func_0016A258(void *arg0, s32 arg1) {
    s32 temp;
    temp = arg1 & 1;
    *(void **)arg0 = &D_00473518;
    if (temp != 0) {
        D_002AD390();
    }
}

extern f32 D_004264A0;

void func_00237558(void *arg0, void *arg1) {
    void *temp2 = (void *)((u8 *)arg0 + 4);
    f32 f1 = *(f32 *)((u8 *)arg0 + 4) * *(f32 *)arg1 + 
             *(f32 *)((u8 *)temp2 + 4) * *(f32 *)((u8 *)arg1 + 4) + 
             *(f32 *)((u8 *)temp2 + 8) * *(f32 *)((u8 *)arg1 + 8) + 
             *(f32 *)((u8 *)temp2 + 0xC);
    s32 var6 = 0;
    if (D_004264A0 <= f1) {
        var6 = 1;
    } else if (f1 <= -D_004264A0) {
        var6 = -1;
    }
    void **vt;
    if (var6 == -1) {
        vt = *(void ***)((u8 *)arg0 + 0x18);
    } else if (var6 == 1) {
        vt = *(void ***)((u8 *)arg0 + 0x1C);
    } else {
        vt = *(void ***)((u8 *)arg0 + 0x18);
    }
    void *obj = *vt;
    void (*fn)(void *, void **) = *(void (**)(void *, void **))((u8 *)obj + 0x1C);
    fn((void *)((u8 *)vt + *(s16 *)((u8 *)obj + 0x18)), vt);
}

extern void D_002AD390();

void func_002364D0(void *arg0, s32 arg1) {
    s32 temp = arg1 & 1;
    *(u32 *)arg0 = *(u32 *)arg0 & 0xFF000000;
    *(u8 *)((u8 *)arg0 + 3) = 0;
    if (temp != 0) {
        D_002AD390();
    }
}

extern void *func_002B1FC0(int);
extern void *func_003D2910(int);

void func_00237DB8(void **arg0, void *arg1) {
    void *sp10 = *arg0;
    void *var4 = func_002B1FC0(0xC);
    void *var2 = (void *)((u8 *)var4 + 8);
    if (var4 == 0) {
        var4 = func_003D2910(0xC);
        var2 = (void *)((u8 *)var4 + 8);
    }
    if (var2 != 0) {
        *(void **)((u8 *)var4 + 8) = arg1;
    }
    *(void **)var4 = sp10;
    *(void **)((u8 *)var4 + 4) = *(void **)((u8 *)sp10 + 4);
    *(void **)((u8 *)sp10 + 4) = var4;
    *(void **)((u8 *)sp10 + 4) = var4;
}
