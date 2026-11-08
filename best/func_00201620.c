void func_002027E8(void *);
void *func_002B1FC0(s32);
void *func_003D2910(s32);

typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Unk {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    char padC[0xC];
    s32 unk18;
    Node unk1C; /* +0x18 */
    Node unk28; /* +0x24 */
    Node unk34; /* +0x30 */
    Node unk40; /* +0x3C */
    Node unk4C; /* +0x48 */
    Node unk58; /* +0x54 */
    Node unk64; /* +0x60 */
    Node *unk6C;
    Node *unk70;
} Unk;

void *func_00201620(Unk *arg0) {
    Node *v2;
    Node *v3;
    
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    func_002027E8((void*)((u8*)arg0 + 0xC));
    arg0->unk18 = 0;
    arg0->unk1C.next = (Node*)((u8*)arg0 + 0x20);
    arg0->unk1C.prev = (Node*)((u8*)arg0 + 0x20);
    arg0->unk28.next = (Node*)((u8*)arg0 + 0x2C);
    arg0->unk28.prev = (Node*)((u8*)arg0 + 0x2C);
    arg0->unk34.next = (Node*)((u8*)arg0 + 0x38);
    arg0->unk34.prev = (Node*)((u8*)arg0 + 0x38);
    arg0->unk40.next = (Node*)((u8*)arg0 + 0x44);
    arg0->unk40.prev = (Node*)((u8*)arg0 + 0x44);
    arg0->unk4C.next = (Node*)((u8*)arg0 + 0x50);
    arg0->unk4C.prev = (Node*)((u8*)arg0 + 0x50);
    func_002027E8((void*)((u8*)arg0 + 0x48));
    arg0->unk58.next = (Node*)((u8*)arg0 + 0x5C);
    arg0->unk58.prev = (Node*)((u8*)arg0 + 0x5C);
    arg0->unk64.next = (Node*)((u8*)arg0 + 0x68);
    arg0->unk64.prev = (Node*)((u8*)arg0 + 0x68);
    v2 = (Node*)func_002B1FC0(0xC);
    if (v2 == NULL) {
        v2 = (Node*)func_003D2910(0xC);
    }
    arg0->unk6C = v2;
    v2->next = v2;
    v2->prev = v2;
    v3 = (Node*)func_002B1FC0(0xC);
    if (v3 == NULL) {
        v3 = (Node*)func_003D2910(0xC);
    }
    arg0->unk70 = v3;
    v3->next = v3;
    v3->prev = v3;
    return arg0;
}
