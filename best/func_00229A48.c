void *func_002B1FC0(s32);
void *func_003D2910(s32);

typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Unk1 {
    Node node;
    f32 *unk8;
} Unk1;

typedef struct Vec4 {
    f32 x,y,z,w;
} Vec4;

typedef struct Arg0 {
    Node *unk0;
} Arg0;

typedef struct Arg1 {
    f32 unk0,unk4,unk8,unkC;
    s32 unk10;
} Arg1;

typedef struct Arg2 {
    f32 unk0,unk4,unk8,unkC;
} Arg2;

extern f32 D_004264A0;

void func_00229958(Arg0 *arg0, Arg1 *arg1) {
    Vec4 *v = (Vec4*)((u8*)arg0 + 8);
    v->x = arg1->unk0;
    v->y = arg1->unk4;
    v->z = arg1->unk8;
    v->w = arg1->unkC;
    *(s32*)((u8*)arg0 + 0x18) = arg1->unk10;
}

s32 func_00229A48(Arg0 *arg0, Arg2 *arg1) {
    Node *head = arg0->unk0;
    Node *cur = head->next;
    if (cur == head) return 1;
    do {
        f32 *vec = ((Unk1*)cur)->unk8;
        f32 val = arg1->unk0*vec[0] + arg1->unk4*vec[1] + arg1->unk8*vec[2] + arg1->unkC;
        if (val < D_004264A0 && val > -D_004264A0) {
            cur = cur->next;
            if (cur == head) return 1;
            continue;
        }
        return 0;
    } while (1);
}

s32 func_00229988(Arg0 *arg0, Arg1 *arg1, s32 arg2) {
    Node *head = arg0->unk0;
    Node *cur = head->next;
    if (cur == head) return 0;
    do {
        f32 *vec = ((Unk1*)cur)->unk8;
        f32 val = arg1->unk0*vec[0] + arg1->unk4*vec[1] + arg1->unk8*vec[2] + arg1->unkC;
        if (val < D_004264A0 && val > -D_004264A0) {
            cur = cur->next;
            if (cur == head) return 0;
            continue;
        }
        s32 t = 0;
        if (val >= D_004264A0) t = 1;
        else if (val <= -D_004264A0) t = -1;
        if (arg2 != t) {
            cur = cur->next;
            if (cur == head) return 0;
            continue;
        }
        return 1;
    } while (1);
}
