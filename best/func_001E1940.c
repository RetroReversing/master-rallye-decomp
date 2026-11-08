extern int func_001E22E8(void*);
extern int func_001D4010(int);
extern void func_001D2CD8(int*, int);
extern void func_001D2488(void*, int*);
extern void func_001EAE78(void*, void*, int*);
extern void D_002AD390(int);

typedef struct Unk1E {
    char pad[0x48];
    int unk48;
} Unk1E;

typedef struct Unk1E2 {
    char pad[0x4];
    void **unk4;
    void **unk8;
} Unk1E2;

int func_001E1A00(Unk1E *arg0, int arg2) {
    int sp0;
    int sp4;
    void **temp3;
    void *temp19;
    Unk1E2 *temp17;
    int temp5;

    temp19 = (void*)func_001E22E8((int)arg0 + 0x58);
    temp17 = (Unk1E2*)((int)temp19 + 0x14);
    temp5 = func_001D4010(arg2);
    sp4 = 0;
    sp0 = arg0->unk48;
    func_001D2CD8(&sp4, temp5);
    temp3 = temp17->unk4;
    if (temp3 == temp17->unk8) {
        func_001EAE78(temp17, temp3, &sp4);
    } else {
        if (temp3 != 0) {
            *temp3 = (void*)sp0;
            func_001D2488(temp3 + 1, &sp4);
        }
        temp17->unk4 = (void**)((int)temp17->unk4 + 8);
    }
    D_002AD390(sp4);
    return (int)temp19;
}

int func_001E1C10(Unk1E *arg0, int arg2) {
    int sp0;
    int sp4;
    void **temp3;
    void *temp19;
    Unk1E2 *temp17;
    int temp5;

    temp19 = (void*)func_001E22E8((int)arg0 + 0x38);
    temp17 = (Unk1E2*)((int)temp19 + 0x14);
    temp5 = func_001D4010(arg2);
    sp4 = 0;
    sp0 = arg0->unk48;
    func_001D2CD8(&sp4, temp5);
    temp3 = temp17->unk4;
    if (temp3 == temp17->unk8) {
        func_001EAE78(temp17, temp3, &sp4);
    } else {
        if (temp3 != 0) {
            *temp3 = (void*)sp0;
            func_001D2488(temp3 + 1, &sp4);
        }
        temp17->unk4 = (void**)((int)temp17->unk4 + 8);
    }
    D_002AD390(sp4);
    return (int)temp19;
}

int func_001E1940(Unk1E *arg0, int arg2) {
    int sp0;
    int sp4;
    void **temp3;
    void *temp19;
    Unk1E2 *temp17;
    int temp5;

    temp19 = (void*)func_001E22E8((int)arg0 + 0x1C);
    temp17 = (Unk1E2*)((int)temp19 + 0x14);
    temp5 = func_001D4010(arg2);
    sp4 = 0;
    sp0 = arg0->unk48;
    func_001D2CD8(&sp4, temp5);
    temp3 = temp17->unk4;
    if (temp3 == temp17->unk8) {
        func_001EAE78(temp17, temp3, &sp4);
    } else {
        if (temp3 != 0) {
            *temp3 = (void*)sp0;
            func_001D2488(temp3 + 1, &sp4);
        }
        temp17->unk4 = (void**)((int)temp17->unk4 + 8);
    }
    D_002AD390(sp4);
    return (int)temp19;
}

int func_001E16B8(Unk1E *arg0, int arg2) {
    int sp0;
    int sp4;
    void **temp3;
    void *temp18;
    Unk1E2 *temp16;
    int temp5;
    int var4;

    temp18 = (void*)func_001E22E8((int)arg0 + 0xC);
    var4 = (int)arg0 + 0x10;
    if (arg2 != 0) {
        var4 = (int)arg0 + 0x40;
    }
    temp16 = (Unk1E2*)((int)temp18 + 0x14);
    temp5 = func_001D4010(var4);
    sp4 = 0;
    sp0 = arg0->unk48;
    func_001D2CD8(&sp4, temp5);
    temp3 = temp16->unk4;
    if (temp3 == temp16->unk8) {
        func_001EAE78(temp16, temp3, &sp4);
    } else {
        if (temp3 != 0) {
            *temp3 = (void*)sp0;
            func_001D2488(temp3 + 1, &sp4);
        }
        temp16->unk4 = (void**)((int)temp16->unk4 + 8);
    }
    D_002AD390(sp4);
    return (int)temp18;
}
