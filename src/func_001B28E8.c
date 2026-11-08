void func_001B28E8(void *arg0, f32 *arg1, s32 arg2) {
    *(f32 *)((char *)arg0 + 0x60) = arg1[0];
    *(f32 *)((char *)arg0 + 0x64) = arg1[1];
    *(s32 *)((char *)arg0 + 0x68) = arg2;
}

extern void func_001D4040(void *, const char *);
extern char D_00472CA8[];
extern void *D_00473BD0;

void *func_001B0950(void *arg0) {
    void *sp;
    func_001D4040(&sp, D_00472CA8);
    *(s32 *)((char *)arg0 + 0x04) = *(s32 *)sp;
    *(void **)((char *)arg0 + 0x08) = D_00473BD0;
    *(s32 *)((char *)arg0 + 0x00) = -1;
    *(s32 *)((char *)arg0 + 0x0C) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0; /* temp_5->unk4 */
    *(s32 *)((char *)arg0 + 0x14) = 0; /* temp_5->unk8 */
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(f32 *)((char *)arg0 + 0x20) = 1.0f; /* temp_4->unk8 at +0x20? */
    *(s32 *)((char *)arg0 + 0x1C) = 0; /* temp_4->unk4 */
    *(f32 *)((char *)arg0 + 0x24) = 100.0f;
    *(f32 *)((char *)arg0 + 0x28) = 15.0f;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    return arg0;
}
