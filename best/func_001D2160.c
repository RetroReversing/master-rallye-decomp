extern void *D_002AD408(int);
extern void *D_00426290;

/* func_001D2160: iterate node vector, call each node's callback at +0x14 with offset at +0x10 */
void func_001D2160(void *arg0, s32 *arg1) {
    void **begin = *(void ***)arg0;
    *(s32 *)((char*)arg0 + 0xC) = *arg1;
    if (begin != *(void **)((char*)arg0 + 4)) {
        void *var_5 = *begin;
        do {
            void *node = *(void **)var_5;
            begin += 1;
            ((void (*)(void *, void *))((s32 *)node)[5])((void *)((char *)var_5 + (s16)(*(s16 *)((char*)node + 0x10))), var_5);
            var_5 = *begin;
        } while (begin != *(void **)((char*)arg0 + 4));
    }
}

/* func_001D21D8: lazily allocate + zero a 16-byte singleton */
void *func_001D21D8(void) {
    void *temp_2 = D_00426290;
    void *temp_2_2;
    if (temp_2 == NULL) {
        temp_2_2 = D_002AD408(0x10);
        D_00426290 = temp_2_2;
        ((s32 *)temp_2_2)[0] = 0;
        ((s32 *)temp_2_2)[1] = 0;
        ((s32 *)temp_2_2)[2] = 0;
        ((s32 *)temp_2_2)[3] = 0;
    }
    return D_00426290;
}

/* func_001D3920: sentinel-list front */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}

/* func_001D20F8: iterate node vector, call each node's callback at +0xC with offset at +0x8 */
void func_001D20F8(void *arg0, s32 *arg1) {
    void **begin = *(void ***)arg0;
    *(s32 *)((char*)arg0 + 0xC) = *arg1;
    if (begin != *(void **)((char*)arg0 + 4)) {
        void *var_5 = *begin;
        do {
            void *node = *(void **)var_5;
            begin += 1;
            ((void (*)(void *, void *))((s32 *)node)[3])((void *)((char *)var_5 + (s16)(*(s16 *)((char*)node + 0x8))), var_5);
            var_5 = *begin;
        } while (begin != *(void **)((char*)arg0 + 4));
    }
}
