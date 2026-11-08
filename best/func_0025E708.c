extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);
extern char D_00479B98[];
extern void func_0025E788(void *, s32, f32);
extern f32 func_0025F578(void);
extern f32 func_0025F010(s32, void *, void *);

typedef struct Node {
    struct Node *first;
    struct Node *next;
    u8 pad[8];
} Node;

Node *func_002602B0(void *arg0, Node *arg1) {
    void *loc = (u8*)arg1 + 0x14;
    if (func_001D24B8(loc, 0, func_001CE2F8(loc), D_00479B98) == -1) {
        Node *p = arg1->first;
        if (p != NULL) {
            do {
                Node *r = func_002602B0(arg0, p);
                if (r != NULL) return r;
                p = p->next;
            } while (p != NULL);
        }
        return NULL;
    }
    return arg1;
}

void func_00260708(void *arg0, void *arg1, f32 *arg2, f32 *arg3) {
    *arg2 = (*(f32*)((u8*)arg0 + 4) - *(f32*)arg1) / *(f32*)((u8*)arg0 + 0xC);
    *arg3 = (*(f32*)((u8*)arg1 + 8) - *(f32*)((u8*)arg0 + 8)) / *(f32*)((u8*)arg0 + 0xC);
}

f32 func_0025EFA0(s32 arg0, void *arg1) {
    f32 temp = func_0025F578();
    if (temp < 0.0f) {
        return (-temp / func_0025F010(arg0, arg1, arg1)) * *(f32*)((u8*)arg1 + 0x24);
    }
    return 0.0f;
}

typedef struct S {
    void *field0;
    u8 pad4[0x94];
    void *field98;
    void *field9C;
} S;

void func_0025E708(S *arg0) {
    s32 n = (s32)((u8*)arg0->field9C - (u8*)arg0->field98) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            void **p = (void**)arg0->field98;
            s32 *q = (s32*)arg0->field0;
            func_0025E788(arg0, p[i], *(f32*)(q + i));
            i++;
        } while (i < n);
    }
}
