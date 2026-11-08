void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001EF9D8(void *arg0, f32 arg1) {
    s32 **it = *(s32 ***)arg0;
    s32 **end = *(s32 ***)( (u8*)arg0 + 4 );
    if (it != end) {
        do {
            func_001DBBA8(*it, arg1);
            it++;
        } while (it != end);
    }
}

typedef int (*CB_1F)(void*, void*, int);
void func_001F0278(char *a, void *b) {
    char *v = *(char**)(a + 8);
    int off = *(short*)(v + 0x70);
    (*(CB_1F*)(v + 0x74))(a + off, b, 1);
}

void func_001F0348(char *a, void *b) {
    char *v = *(char**)(a + 8);
    int off = *(short*)(v + 0x50);
    (*(CB_1F*)(v + 0x54))(a + off, b, 12);
}
