extern void **func_0017E620(void);
extern void func_001D4810(void *arg0, s32 arg1);

void func_0029EBC8(void *arg0, s32 arg1) {
    typedef struct { char pad[0x30]; s32 unk30; char pad2[0x28]; s32 unk5C; char pad3[8]; s32 unk68; } S;
    S *s = (S *)arg0;
    if (s->unk30 != arg1) {
        s32 sp0;
        void **o;
        void *obj;
        s16 off;
        s32 (*fn)(void *, s32);
        s32 ret;
        s->unk30 = arg1;
        s->unk5C = 1;
        o = func_0017E620();
        obj = *o;
        off = *(s16 *)((char *)obj + 0x20);
        fn = *(s32 (**)(void *, s32))((char *)obj + 0x24);
        ret = fn((void *)((char *)o + off), s->unk30);
        sp0 = 0;
        func_001D4810(&sp0, ret);
        s->unk68 = sp0;
    }
}
