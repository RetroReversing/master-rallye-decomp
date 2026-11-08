extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_00276AD8(void*, void*, void*);

typedef struct Node6 {
    struct Node6 *next;
    struct Node6 *prev;
} Node6;

typedef struct S6 {
    Node6 *field0;
    Node6 *field4;
} S6;

void func_00250350(S6 *arg0, s32 arg1) {
    Node6 *head = arg0->field4;
    Node6 *n = func_002B1FC0(0xC);
    if (n == NULL) {
        n = func_003D2910(0xC);
    }
    *(s32*)((u8*)n + 8) = arg1;
    n->next = head;
    n->prev = head->prev;
    if (head->prev != NULL) {
        head->prev->next = n;
    }
    head->prev = n;
    n->next = head;
}

typedef struct Node5 {
    struct Node5 *next;
    struct Node5 *prev;
} Node5;

typedef struct S5 {
    Node5 *field0;
    Node5 *field4;
} S5;

s32 func_002503D0(S5 *arg0, s32 arg1) {
    Node5 *head = arg0->field4;
    Node5 *cur = head->next;
    if (cur == head) return 0;
    do {
        if (((s32*)cur)[2] == arg1) {
            return 1;
        }
        cur = cur->next;
        if (cur == head) break;
    } while (1);
    return 0;
}

typedef struct Vec {
    void *b, *e, *c;
} Vec;

void func_00250280(Vec *arg0, s32 arg1) {
    if (arg0->e != arg0->c) {
        if (arg0->e != NULL) {
            *(s32*)arg0->e = arg1;
        }
        arg0->e = (void*)((u8*)arg0->e + 4);
        return;
    }
    func_00276AD8(arg0, arg0->e, (void*)0);
}

typedef struct S1 {
    void *field0;
    void *field4;
    void *field8;
    u8 padC[4];
    void *field10;
} S1;

typedef struct S2 {
    f32 *field0;
    f32 *field4;
    f32 *field8;
} S2;

typedef struct S3 {
    f32 x,y,z;
    u8 padC[4];
    s32 field10;
} S3;

extern s32 func_0024F920(S1*, S3*, f32,f32,f32);
extern s32 func_0024FA00(s32, void*, S3*);
extern s32 func_0024FB08(s32, void*, S3*, s32);

s32 func_0024F860(s32 arg0, S1 *arg1, S2 *arg2, s32 arg3, f32 f12) {
    S3 sp;
    sp.x = *arg2->field0;
    sp.y = *arg2->field4;
    sp.z = *arg2->field8;
    *(s32*)((u8*)&sp + 0x10) = -1;
    *(f32*)((u8*)&sp + 0xC) = f12;
    if (func_0024F920(arg1, &sp, sp.x, sp.y, sp.z) == 0) return 0;
    if (func_0024FA00(arg0, arg1->field10, &sp) == 0) return 0;
    if (func_0024FB08(arg0, arg1->field0, &sp, arg3) == 0) return 0;
    return 1;
}
