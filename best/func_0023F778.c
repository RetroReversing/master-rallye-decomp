extern void func_0024F6E0(void *dst, void *src);

typedef struct {
    s32 unk0;
    void *unk4;
    s16 unk8;
    void (*unkC)(void *, s32, void *);
    s32 unk10;
    void *unk14;
} S_obj_3F778;

typedef struct {
    void *unk28;
} S_arg0_3F778;

s32 func_0023F778(S_arg0_3F778 *arg0) {
    u8 sp[0x30];
    void *obj;
    
    func_0024F6E0(sp, arg0->unk28);
    obj = *(void **)sp;
    if (obj == 0) {
        return 0;
    }
    {
        void *p = obj;
        s32 ref = *(s32 *)p;
        ref = ref - 1;
        *(s32 *)p = ref;
        if (ref == 0) {
            void *vt = *(void **)((s32)p + 4);
            void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((s32)vt + 0xC);
            fn(p + *(s16 *)((s32)vt + 8), 3, p);
        }
    }
    return *(s32 *)((s32)obj + 0x14);
}

extern void func_001CA600(void *);
extern void func_001CA7C8(void *, void *);
extern void func_001CA990(void *, void *);

typedef struct {
    s32 pad[3];
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
} S_3F650_arg;

void *func_0023F650(S_3F650_arg *arg0, S_3F650_arg *arg1) {
    func_001CA600(arg0);
    func_001CA7C8(arg0 + 0xC, arg1 + 0xC);
    func_001CA990(arg0 + 0x18, arg1 + 0x18);
    return arg0;
}

typedef struct {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
} S_3FEDD0;

void *func_0023EDD0(S_3FEDD0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    ((void **)arg0)[3] = (void *)0; /* unkC */
    ((S_3FEDD0 *)((char *)arg0 + 0xC))->unk8 = 0; /* offset C+8 = 14? */
    return arg0;
}

extern void func_002AD390(void);
extern void D_004735B0;

typedef struct {
    void *unk24;
    void *unk4C;
} S_3FED98;

void func_0023ED98(S_3FED98 *arg0, s32 arg1) {
    arg0->unk24 = &D_004735B0;
    arg0->unk4C = &D_004735B0;
    if (arg1 & 1) {
        func_002AD390();
    }
}
