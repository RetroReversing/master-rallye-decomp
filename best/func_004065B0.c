extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void func_004063A8(void *);
extern void SleepThread_2(void);

typedef struct Node {
    u8 pad[0x3C];
    struct Node *next; /* 0x3C */
} Node;

typedef struct Obj {
    u8 pad0[4];
    s32 field4;
    u8 pad8[4];
    Node *fieldC;
} Obj;

void *func_00406350(Obj *arg0) {
    Node *temp;

    func_0040AF58();
    temp = arg0->fieldC;
    if (temp != 0) {
        arg0->field4 = 1;
        arg0->fieldC = temp->next;
    } else {
        arg0->field4 = 0;
    }
    func_0040AFA0();
    return temp;
}

void func_00406570(Obj *arg0) {
    void *ret;
    for (;;) {
        ret = func_00406350(arg0);
        if (ret != 0) {
            func_004063A8(ret);
        } else {
            SleepThread_2();
        }
    }
}

extern s32 D_004411B0;
extern s32 D_004411B4;
extern s32 CreateSema_2(void *);

typedef struct SemaParam {
    s32 unk0;
    s32 init;
    s32 max;
    u8 padC[8];
    s32 unk14;
} SemaParam;

void func_004065B0(void) {
    SemaParam sp;

    if (D_004411B0 != -1) return;
    sp.unk14 = 0;
    sp.init = 1;
    sp.max = 1;
    D_004411B0 = CreateSema_2(&sp);
    D_004411B4 = CreateSema_2(&sp);
}
