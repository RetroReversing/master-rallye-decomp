extern void func_001D4040(void*, const char*);
extern int func_001E00E8(void*);
extern int func_001E0368(void*, void*, int*, void*);
extern int func_001E11B8(void*, void*, int*, void*);
extern int func_001E22E8(void*);
extern int func_001D4010(int);
extern void func_001D2CD8(void*, int);
extern void func_001D2488(void*, void*);
extern void func_001EAE78(void*, void*, void*);
extern void D_002AD390(int);

static inline __attribute__((always_inline)) void* init(void *p, const char *s) { func_001D4040(p, s); return p; }

typedef struct Node { int x; struct Node *next; } Node;

int func_001E2470(Node ***pp, const char *s, int *out) {
    struct { int b[4]; int n; char pad[12]; char a[208]; } l;
    Node *q;

    func_001D4040(l.b, s);
    l.n = 0;
    func_001E00E8(l.a);
    q = **pp;
    if (q != 0) {
        do {
            if (func_001E0368(l.a, q, &l.n, out) != 0 && l.n == l.b[0]) {
                return 1;
            }
            q = q->next;
        } while (q != 0);
    }
    *out = 0;
    return 0;
}

int func_001E2998(Node ***pp, const char *s, int *out) {
    struct { int b[4]; int n; char pad[12]; char a[208]; } l;
    Node *q;

    func_001D4040(l.b, s);
    l.n = 0;
    func_001E00E8(l.a);
    q = **pp;
    if (q != 0) {
        do {
            if (func_001E11B8(l.a, q, &l.n, out) != 0 && l.n == l.b[0]) {
                return 1;
            }
            q = q->next;
        } while (q != 0);
    }
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
    return 0;
}

typedef struct Unk1E1C10 {
    char pad[0x48];
    int unk48;
} Unk1E1C10;

typedef struct Unk1E1C10_2 {
    char pad[0x4];
    void **unk4;
    void **unk8;
} Unk1E1C10_2;

int func_001E1C10(Unk1E1C10 *arg0, int arg2) {
    int sp0;
    int sp4;
    void **temp3;
    void *temp19;
    Unk1E1C10_2 *temp17;
    int temp5;

    temp19 = (void*)func_001E22E8((int)arg0 + 0x38);
    temp17 = (Unk1E1C10_2*)((int)temp19 + 0x14);
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

typedef struct Unk1E1A00 {
    char pad[0x48];
    int unk48;
} Unk1E1A00;

typedef struct Unk1E1A00_2 {
    char pad[0x4];
    void **unk4;
    void **unk8;
} Unk1E1A00_2;

int func_001E1A00(Unk1E1A00 *arg0, int arg2) {
    int sp0;
    int sp4;
    void **temp3;
    void *temp19;
    Unk1E1A00_2 *temp17;
    int temp5;

    temp19 = (void*)func_001E22E8((int)arg0 + 0x58);
    temp17 = (Unk1E1A00_2*)((int)temp19 + 0x14);
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
