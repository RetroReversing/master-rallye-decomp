s32 func_002F9AD0(void *arg0);
void func_003768A8(void *arg0, s32 arg1);

void func_002FA388(void *arg0) {
    s32 v78;
    while ((v78 = *(s32 *)((u8 *)arg0 + 0x78)) != 0) {
        s32 idx;
        s32 **base;
        s32 *elem;
        s32 val;
        void *arr;
        (void)v78;
        idx = func_002F9AD0(arg0);
        base = *(s32 ***)((u8 *)arg0 + 0x0);
        elem = base[idx];
        val = *elem;
        arr = *(void **)((u8 *)arg0 + 0x24);
        func_003768A8((u8 *)arr + val * 0x12C, (s32)arr);
    }
}

s32 func_002F9C80(void *arg0);
s32 func_00377788(void *arg0);

typedef struct ObjVTable {
    u8 pad[0x28];
    s16 unk28;
    void (*unk2C)(void *this_, s32 a1, void *a2);
} ObjVTable;

typedef struct Obj {
    ObjVTable *vt;
} Obj;

void func_002FA058(void *arg0, s32 *arg1) {
    s32 val;
    void **base;
    s32 v;
    void *arr24;
    void *entry;
    void *arr40;
    void *slot;
    void *ctx;
    s32 r;
    Obj *obj;
    ObjVTable *vt;

    val = *arg1;
    *(s32 *)((u8 *)arg0 + 0x5C) = val;
    func_002F9C80(arg0);

    base = *(void ***)((u8 *)arg0 + 0x0);
    v = *(s32 *)((u8 *)base[val] + 0);
    arr40 = *(void **)((u8 *)arg0 + 0x40);
    arr24 = *(void **)((u8 *)arg0 + 0x24);
    slot = (u8 *)arr40 + (val << 4);
    entry = (u8 *)arr24 + v * 0x12C;

    ctx = *(void **)((u8 *)arg0 + 0x3C);
    r = func_00377788(ctx);

    obj = *(Obj **)entry;
    vt = obj->vt;
    vt->unk2C((u8 *)obj + vt->unk28, r, slot);
}
