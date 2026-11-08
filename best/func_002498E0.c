void func_002390A0(s32, s32);

void func_002498E0(void *arg0, void *arg1) {
    u32 n;
    s32 i;
    u32 base;
    n = ((u32)((char*)arg1 + 4)[0] - (u32)((char*)arg1)[0]) >> 2; // not quite right
    // better match proposal style
    base = *(u32*)((char*)arg1 + 4); // maybe wrong order?
    // target does: lw $v0,4($s2); lw $v1,($s2); subu $v0,$v0,$v1;
    n = (*(u32*)((char*)arg1 + 4) - *(u32*)arg1) >> 2;
    for (i = 0; i < (s32)n; i++) {
        void *v = *(void**)(*(u32*)arg1 + (i << 2));
        if (v != 0) {
            func_002390A0((s32)v, (s32)arg0 + 0x74);
        }
    }
}
