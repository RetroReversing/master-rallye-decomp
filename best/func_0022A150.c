typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Unk {
    Node node;
    f32 *unk8;
} Unk;

typedef struct PlaneArg {
    f32 x, y, z, w;
} PlaneArg;

extern f32 D_004264A0;

s32 func_00229A48(void *arg0, PlaneArg *arg1) {
    Node *head = *(Node **)arg0;
    Node *cur = head->next;
    if (cur == head) {
        return 1;
    }
    do {
        f32 *vec = ((Unk *)cur)->unk8;
        f32 val = arg1->x * vec[0] + arg1->y * vec[1] + arg1->z * vec[2] + arg1->w;
        if (val < D_004264A0 && val > -D_004264A0) {
            cur = cur->next;
            if (cur == head) {
                return 1;
            }
            continue;
        }
        return 0;
    } while (1);
}

void func_00229C98(void *arg0) {
    Node *unk0 = *(Node **)arg0;
    Node *unk4 = unk0->next;
    unk4->prev->next = unk4->next;
    unk4->next->prev = unk4->prev;
    func_002B2028(unk4);
}

s32 func_00229988(void *arg0, PlaneArg *arg1, s32 arg2);

s32 func_00229CF0(void *arg0, PlaneArg *arg1) {
    if (func_00229988(arg0, arg1, -1) == 0 && func_00229988(arg0, arg1, 1) == 1) {
        return 1;
    }
    return 0;
}

void func_0022A190(void *a0, void *a1, void *a2, void *sp, s32 a4);

void func_0022A150(void *arg0) {
    void *unk0 = *(void **)arg0;
    void *unk0_0 = *(void **)unk0;
    void *unk0_0_0 = *(void **)(unk0_0 + 0x8);
    void *unk0_0_0_0 = *(void **)(unk0_0_0 + 0x8);
    func_0022A190(unk0_0_0_0, *(void **)(unk0_0_0 + 0x0), *(void **)(unk0_0_0_0 + 0x8), (void *)0, 0);
}
