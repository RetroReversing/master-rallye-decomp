extern void func_0027BE70(void);
extern void D_002AD390(s32);

extern s32 D_0047A7E8; /* vtable */
extern s32 D_0047A730; /* vtable */
extern s32 D_0047A678; /* vtable */
extern f32 D_004264A0;
extern f32 D_004264A8[6]; /* data */

void func_00236F50(void **arg0, s32 arg1) {
    *arg0 = &D_0047A7E8;
    if (arg1 & 1) {
        D_002AD390(arg1 & 1);
    }
}

void *func_00236F10(void *arg0) {
    *(void **)arg0 = &D_0047A7E8;
    func_0027BE70();
    *(void **)arg0 = &D_0047A730;
    return arg0;
}

void *func_00237350(void *arg0) {
    void *temp = (void *)((u8 *)arg0 + 4);
    
    func_00236F10(arg0);
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(void **)arg0 = &D_0047A678;
    *(s32 *)temp = 0;
    *(s32 *)((u8 *)temp + 4) = 0;
    *(f32 *)((u8 *)arg0 + 4) = D_004264A8[0];
    *(f32 *)((u8 *)temp + 4) = D_004264A8[1];
    *(f32 *)((u8 *)temp + 8) = D_004264A8[2];
    *(f32 *)((u8 *)temp + 0xC) = D_004264A8[3];
    *(s32 *)((u8 *)temp + 0x10) = *(s32 *)&D_004264A8[4];
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void func_00237558(void *arg0, void *arg1) {
    void *temp2 = (void *)((u8 *)arg0 + 4);
    f32 f0 = *(f32 *)((u8 *)arg0 + 4) * *(f32 *)arg1 + 
             *(f32 *)((u8 *)temp2 + 4) * *(f32 *)((u8 *)arg1 + 4) + 
             *(f32 *)((u8 *)temp2 + 8) * *(f32 *)((u8 *)arg1 + 8) + 
             *(f32 *)((u8 *)temp2 + 0xC);
    s32 var6 = 0;
    if (D_004264A0 <= f0) {
        var6 = 1;
    } else if (f0 <= -D_004264A0) {
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
