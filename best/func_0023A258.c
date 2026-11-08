extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void func_00273AA8(void *, void *, void *, void *, int, void *);
extern void func_002B2028(void *);
extern void func_00273390(void *);
extern int func_00234D08(void *, void *);

typedef struct ListNode {
    struct ListNode *next;
    struct ListNode *prev;
} ListNode;

typedef struct Unk1 {
    ListNode node;
    void *unk8;
} Unk1;

typedef struct Unk2 {
    ListNode node;
    void *unk8;
} Unk2;

typedef struct Unk3 {
    void *unk0;
    void *unk4;
} Unk3;

int func_0023A258(Unk3 *arg0, Unk3 *arg1) {
    Unk1 *sp0;
    Unk2 *sp10;
    ListNode *cur;
    int sp70;
    Unk2 *temp;
    ListNode *var16;
    Unk1 *var4;
    ListNode *n;
    void *var4_2;
    
    sp0 = (Unk1 *)func_002B1FC0(0xC);
    if (sp0 == 0) {
        sp0 = (Unk1 *)func_003D2910(0xC);
    }
    sp0->node.next = (ListNode *)sp0;
    sp0->node.prev = (ListNode *)sp0;
    func_00273AA8(&sp0, &sp0->node.next, arg0->unk0, arg0, 0, sp0->node.next);
    
    sp10 = (Unk2 *)func_002B1FC0(0xC);
    if (sp10 == 0) {
        sp10 = (Unk2 *)func_003D2910(0xC);
    }
    sp10->node.next = (ListNode *)sp10;
    sp10->node.prev = (ListNode *)sp10;
    func_00273AA8(&sp10, &sp10->node.next, arg1->unk0, arg1, 0, sp10->node.next);
    
    while (1) {
        sp70 = 0;
        cur = sp10->node.next;
        if (cur != (ListNode *)sp10) {
            do {
                cur = cur->next;
                sp70++;
            } while (cur != (ListNode *)sp10);
        }
        if (sp70 == 0) break;
        temp = (Unk2 *)sp10->node.next;
        n = temp->node.next;
        var4 = (Unk1 *)(n)->prev;
        n->prev = temp->node.prev;
        ((ListNode *)temp->node.prev)->next = n;
        func_002B2028(temp);
        var4 = (Unk1 *)func_002B1FC0(0xC);
        if (var4 == 0) {
            var4 = (Unk1 *)func_003D2910(0xC);
        }
        *(void **)((char *)var4 + 8) = *(void **)((char *)temp + 8);
        var4->node.next = sp0->node.next;
        var4->node.prev = (ListNode *)sp0;
        sp0->node.next->prev = (ListNode *)var4;
        sp0->node.next = (ListNode *)var4;
    }
    
    var16 = sp0->node.next;
    if (var16 != (ListNode *)sp0) {
        do {
            var16 = var16->next;
        } while (var16 != (ListNode *)sp0);
    }
    var4_2 = *(void **)((char *)((Unk2 *)sp0->node.prev) + 8);
    var16 = sp0->node.next;
    while (var16 != (ListNode *)sp0) {
        if (func_00234D08(var4_2, *(void **)((char *)var16 + 8)) == 0) {
            func_00273390(&sp10);
            func_002B2028(sp10);
            func_00273390(&sp0);
            func_002B2028(sp0);
            return 0;
        }
        var4_2 = *(void **)((char *)var16 + 8);
        var16 = var16->next;
    }
    func_00273390(&sp10);
    func_002B2028(sp10);
    func_00273390(&sp0);
    func_002B2028(sp0);
    return 1;
}
