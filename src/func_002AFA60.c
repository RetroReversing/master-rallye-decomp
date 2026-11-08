typedef struct Node {
    struct Node *unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    struct Node *unk14;
} Node;

extern Node *D_00494CD0;

void func_002AFA60(int arg0, Node *arg1) {
    Node *old = D_00494CD0;
    arg1->unkC = arg0;
    arg1->unk14 = old;
    D_00494CD0 = arg1;
    arg1->unk8 = arg0;
    arg1->unk0 = 0;
    arg1->unk10 = 0;
    arg1->unk4 = 0;
}

void func_002AFA08(int arg0, Node *arg1) {
    Node *old = D_00494CD0;
    arg1->unk8 = arg0;
    arg1->unk14 = old;
    D_00494CD0 = arg1;
    arg1->unk4 = 0;
    arg1->unk10 = 0;
    arg1->unk0 = 0;
    arg1->unkC = 0;
}
