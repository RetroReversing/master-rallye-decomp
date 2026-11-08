s32 func_001E2FF8(unsigned int arg0) {
    s32 var = 0;
    if (arg0 > 1U) {
        var = 1;
        do {
            var++;
        } while ((1U << var) < arg0);
    }
    return var;
}

extern void func_001E3150(int*);
extern int func_001D4010(int);
extern int func_003FA580(int, int);

void func_001E3098(void *arg0, void *arg1, int *arg2) {
    int temp16;
    int var2;
    void *var17;
    int sp0;

    func_001E3150(arg2);
    var17 = *(void**)arg0;
    if (var17 != *(void**)((int)arg0 + 4)) {
        var2 = *(int*)((int)var17 + 8);
        do {
            if ((var2 ^ 0xC) != 0) {
                sp0 = 0;
                *(int*)sp0 = *(int*)((int)var17 + 0x18);
                temp16 = func_001D4010(sp0);
                if (func_003FA580(temp16, func_001D4010(arg1)) == 0) {
                    *(int*)((int)var17 + 0x18) = *arg2;
                }
            }
            var17 = (void*)((int)var17 + 0x1C);
            if (var17 == *(void**)((int)arg0 + 4)) break;
            var2 = *(int*)((int)var17 + 8);
        } while (1);
    }
}

extern void func_001E4ED0(void*);
typedef struct { void *begin; void *end; } L3990;
void func_001E3990(L3990 *l) {
    void *p = l->begin;
    if (p != l->end) {
        do {
            func_001E4ED0(p);
            p = (void*)((int)p + 0x1C);
        } while (p != l->end);
    }
}

extern void func_001E4ED0(void*);
typedef struct { void *begin; void *end; } L3C98;
void func_001E3C98(L3C98 *arg0, int arg1) {
    void *p = arg0->begin;
    int v2;
    if (p != arg0->end) {
        do {
            v2 = *(int*)((int)p + 8);
            if ((v2 ^ 0xC) != 0 && *(int*)((int)p + 0x14) == arg1) {
                func_001E4ED0(p);
            }
            p = (void*)((int)p + 0x1C);
        } while (p != arg0->end);
    }
}
