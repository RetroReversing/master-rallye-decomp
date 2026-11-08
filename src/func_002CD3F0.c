extern void *D_002AD408(int);
extern s32 *D_00429300;
extern s32 D_00429868[];
extern s32 D_00483618;
s32 func_003FA580(s32, s32);
s32 func_0030D400(u32);
void func_002CE730(u32);

void *func_002CD128(void) {
    if (!D_00429300) {
        void *p = D_002AD408(8);
        D_00429300 = p;
        ((s32 *)p)[0] = 0;
        ((s32 *)p)[1] = 0;
    }
    return D_00429300;
}

struct S3F0 { s32 pad; s32 n; s32 cap; s32 *arr; };

s32 func_002CD3F0(struct S3F0 *p, s32 i) {
    s32 result = 0;
    if (i >= 0 && (u32)i < (u32)p->n)
        result = p->arr[i];
    return result;
}

s32 *func_002CDD80(s32 arg0) {
    s32 *entry = NULL;
    if ((u32)arg0 < 0x30U) {
        entry = &D_00429868[arg0 * 4];
        if (arg0 >= 2) {
            if (*entry >= 0x80) {
                if (func_0030D400((u32)arg0) == 1)
                    func_002CE730((u32)arg0);
            }
        }
    }
    return entry;
}
