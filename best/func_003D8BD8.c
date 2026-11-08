typedef struct Node {
    struct Node *next;
} Node;

typedef struct Obj {
    char pad[0x30];
    Node *head;
} Obj;

void func_003D8BD8(void *arg0) {
    Obj *obj = *(Obj **)((char *)arg0 + 4);
    Node *cur = obj->head;
    Node **prev = (Node **)((char *)obj + 0x30);
    if (cur == 0) {
        return;
    }
    while (1) {
        if (cur == arg0) {
            *prev = cur->next;
            return;
        }
        prev = &cur->next;
        cur = cur->next;
        if (cur == 0) {
            break;
        }
    }
}
