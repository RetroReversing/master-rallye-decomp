extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

extern void *func_0015E848(void);

typedef void (*Fn)(void *, void *);
typedef struct {
    u8 pad[0x10];
    s16 unk10;
    u8 pad2[2];
    Fn unk14;
} Vtbl;

void func_002A1070(void) {
    void **obj = func_0015E848();
    Vtbl *vt = (Vtbl *)*obj;
    Fn fn = vt->unk14;
    fn((u8 *)obj + vt->unk10, (void *)fn);
}

extern void *func_002A1950(void*);
extern void func_001D1AD8(void*);
extern void func_001DF640(void*, void*, s32*, s32*);
extern void func_001D3478(void*, void*, s32, s32);
extern void D_002AD390(s32);

typedef void (*Fn2)(void *, s32);
typedef struct {
    u8 pad[0x8];
    s16 unk8;
    u8 pad2[2];
    Fn2 unkC;
} Vtbl2;
typedef struct {
    u8 pad[0x10];
    Vtbl2 *vt;
} Obj2;

void func_002A0DE8(void *arg0, void *arg1) {
    u8 sp[0x8C];
    Obj2 *obj = (Obj2 *)func_002A1950(sp + 0x80);

    func_001D1AD8(sp + 0x64);
    func_001DF640(sp, obj, (s32 *)(sp + 0x84), (s32 *)(sp + 0x88));
    if (obj != NULL) {
        Vtbl2 *vt = obj->vt;
        vt->unkC((u8 *)obj + vt->unk8, 3);
    }
    func_001D3478(arg0, arg1, *(s32 *)(sp + 0x84), *(s32 *)(sp + 0x88));
    D_002AD390(*(s32 *)(sp + 0x84));
}
