extern unsigned char D_0048BD29[];

int func_003D1330(int c) {
    return ((unsigned char)D_0048BD29[(signed char)c]) >> 3 & 1;
}

typedef struct {
    void *vtable;
    int unk4;
} S_func_003D1F08;

extern void *D_00488D80;
extern void *D_0047D9A8;
int func_003CD828(void *a0, int a1);
void func_002AE2F0(void);

void *func_003D1F08(S_func_003D1F08 *arg0, int *arg1) {
    int var5;
    void *temp4;
    
    var5 = *arg1;
    arg0->vtable = &D_00488D80;
    temp4 = (void *)(var5 - 0x10);
    if (*(int *)(temp4 + 0xC) != 0) {
        var5 = func_003CD828(temp4, var5);
    } else {
        (*(int *)(temp4 + 8))++;
    }
    arg0->unk4 = var5;
    return arg0;
}

typedef struct {
    void *vtable;
    int unk4;
} S_func_003D27D8;

extern void *D_00488DF8;

void *func_003D27D8(S_func_003D27D8 *arg0, void *arg1) {
    int var3;
    void *temp4;
    
    var3 = *(int *)(arg1 + 4);
    arg0->vtable = &D_00488DF8;
    temp4 = (void *)(var3 - 0x10);
    if (*(int *)(temp4 + 0xC) != 0) {
        var3 = func_003CD828(temp4, var3);
    } else {
        (*(int *)(temp4 + 8))++;
    }
    arg0->unk4 = var3;
    return arg0;
}

void func_003D7B00(void *arg0, unsigned int arg1) {
    if (*(int *)arg0 == 0) {
        arg1 |= 4;
    }
    *(unsigned char *)(arg0 + 0x1A) = arg1;
}
