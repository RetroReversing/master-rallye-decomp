extern void func_0026FFC8(void *arg);
extern void D_002AD390(s32 arg);
extern void func_002B2028(void *arg);

struct Node {
    struct Node *next;
    struct Node *prev;
    s32 data;
};

struct Struct_002296D0 {
    struct Node *unk0;
    struct Node *unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    s32 unk14;
};

void func_002296D0(struct Struct_002296D0 *arg0) {
    struct Node *v0;
    
    v0 = arg0->unk0->next;
    while (v0 != arg0->unk0) {
        if (v0->data != 0) {
            D_002AD390(v0->data);
        }
        v0 = v0->next;
    }
    func_0026FFC8(arg0);
    
    v0 = arg0->unk4->next;
    while (v0 != arg0->unk4) {
        if (v0->data != 0) {
            D_002AD390(v0->data);
        }
        v0 = v0->next;
    }
    func_0026FFC8((void*)((u8*)arg0 + 4));
}

void func_00229658(struct Struct_002296D0 *arg0, s32 arg1) {
    void *a0;
    
    a0 = (void*)((u8*)arg0 + 4);
    func_0026FFC8(arg0);
    func_0026FFC8(a0);
    func_0026FFC8(a0);
    func_002B2028(arg0->unk4);
    func_0026FFC8(arg0);
    func_002B2028(arg0->unk0);
    if (arg1 & 1) {
        D_002AD390((s32)arg0);
    }
}

extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern f32 D_00426508[];

void *func_00229280(struct Struct_002296D0 *arg0) {
    struct Node *v0;
    struct Node *v1;
    void *a0_8;
    
    v0 = func_002B1FC0(0xC);
    if (v0 == 0) {
        v0 = func_003D2910(0xC);
    }
    arg0->unk0 = v0;
    v0->next = v0;
    v0->prev = v0;
    
    v1 = func_002B1FC0(0xC);
    if (v1 == 0) {
        v1 = func_003D2910(0xC);
    }
    arg0->unk4 = v1;
    v1->next = v1;
    v1->prev = v1;
    
    a0_8 = (void*)((u8*)arg0 + 8);
    v1->prev = v1;
    v1->next = arg0->unk4;
    
    arg0->unk8 = D_00426508[0];
    ((f32*)a0_8)[1] = D_00426508[1];
    ((s32*)a0_8)[4] = -1;
    ((f32*)a0_8)[2] = D_00426508[2];
    ((s32*)a0_8)[3] = 0;
    
    return arg0;
}

extern void *D_002AD408(s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

struct Struct_00229B28 {
    struct Node *unk0;
    struct Node *unk4;
    void *unk8;
    f32 unkC;
    f32 unk10;
};

void func_00229B28(struct Struct_002296D0 *arg0, f32 *arg1) {
    struct Struct_00229B28 *v0;
    struct Node *head;
    struct Node *v1;
    void *v2;
    
    v0 = D_002AD408(0xC);
    v0->unkC = arg1[0];
    v0->unk10 = arg1[1];
    ((f32*)v0)[2] = arg1[2];
    
    head = arg0->unk0;
    v1 = func_002B1FC0(0xC);
    v2 = (void*)((u8*)v1 + 8);
    if (v1 == 0) {
        v1 = func_003D2910(0xC);
        v2 = (void*)((u8*)v1 + 8);
    }
    if (v2 != 0) {
        v1->data = (s32)v0;
    }
    
    v1->next = head;
    v1->prev = head->prev;
    head->prev->next = v1;
    head->prev = v1;
}
