extern void *func_00234D08(void *a, void *b);
extern float D_00426508[];

typedef struct ListNode {
    struct ListNode *next;
    struct ListNode *prev;
} ListNode;

typedef struct UnkHead {
    ListNode list;
    void *unk4;
} UnkHead;

typedef struct Unk4 {
    char pad[8];
    void *unk8;
} Unk4;

typedef struct Vec3 {
    float x, y, z;
} Vec3;

void func_0023A078(Vec3 *arg0, UnkHead **arg1) {
    float sp[3];
    int count = 0;
    UnkHead *head;
    ListNode *cur;
    void *a;
    void *b;
    void *res;
    float f;
    
    head = *arg1;
    a = ((Unk4 *)head->unk4)->unk8;
    
    sp[0] = D_00426508[0];
    sp[1] = D_00426508[1];
    sp[2] = D_00426508[2];
    
    cur = head->list.next;
    if (cur != &head->list) {
        do {
            b = *(void **)((char *)cur + 8);
            res = func_00234D08(a, b);
            sp[0] += *(float *)((char *)res + 0);
            sp[1] += *(float *)((char *)res + 4);
            sp[2] += *(float *)((char *)res + 8);
            cur = cur->next;
            a = b;
        } while (cur != &head->list);
    }
    
    count = 0;
    cur = head->list.next;
    if (cur != &head->list) {
        do {
            cur = cur->next;
            count++;
        } while (cur != &head->list);
    }
    
    if (count >= 0) {
        f = (float)count;
    } else {
        f = 2.0f * ((float)((count & 1) | ((unsigned int)count >> 1)));
    }
    f = 1.0f / f;
    arg0->x = sp[0] * f;
    arg0->y = sp[1] * f;
    arg0->z = sp[2] * f;
}
