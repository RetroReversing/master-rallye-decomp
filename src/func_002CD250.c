extern void *D_002AD408(int);
extern s32 *D_00429300;
extern s32 D_00429868[];
extern s32 D_00483618;
s32 func_003FA580(s32, s32);
s32 func_0030D400(u32);
void func_002CE730(u32);

void *func_002CD128(void) {
    if (!D_00429300) {
        D_00429300 = D_002AD408(8);
        D_00429300[0] = 0;
        D_00429300[1] = 0;
    }
    return D_00429300;
}

struct S3F0 { s32 pad; s32 n; s32 cap; s32 *arr; };

s32 func_002CD3F0(struct S3F0 *p, s32 i) {
    if (i >= 0 && (u32)i < (u32)p->n)
        return p->arr[i];
    return 0;
}

typedef struct { s32 w; s32 _[3]; } S_CDD80;
extern S_CDD80 D_00429868_a[];

s32 *func_002CDD80(u32 arg0) {
    s32 *entry = NULL;
    if (arg0 < 0x30) {
        entry = &D_00429868_a[arg0].w;
        if (arg0 >= 2) {
            if (*entry >= 0x80) {
                if (func_0030D400(arg0) == 1)
                    func_002CE730(arg0);
            }
        }
    }
    return entry;
}

s32 *func_002CD250(s32 arg0) {
    s32 *p = &D_00483618;
    s32 *found = &D_00483618;
    for (;;) {
        s32 v = *p;
        if (v == 0) break;
        if (func_003FA580(v, arg0) == 0) { found = p; break; }
        p += 3;
    }
    return found;
}
