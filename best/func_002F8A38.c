extern s32 func_003FA760(char *name, void *arg2);

void *func_002F8A38(void *arg0, void *arg1, void *arg2) {
    volatile s32 sp0;
    s32 sp10;
    s32 sp20;
    s32 count;

    sp0 = 0;
    count = *(s32 *)((char *)arg1 + 0x30);
    sp10 = count;
    if (count != 0) {
        s32 step = 0x12C;
        do {
            s32 i = sp0;
            char *name;
            sp10 = i;
            name = *(char **)((char *)arg1 + 0x24) + (i * step) + 4;
            if (func_003FA760(name, arg2) == 0) {
                s32 *arr = *(s32 **)((char *)arg1 + 0xC);
                s32 val = arr[i];
                sp20 = i;
                *(s32 *)arg0 = val;
                sp10 = val;
                return arg0;
            }
            count = *(s32 *)((char *)arg1 + 0x30);
            sp0 = i + 1;
            sp10 = count;
        } while (sp0 != count);
    }
    *(s32 *)arg0 = *(s32 *)((char *)arg1 + 0x58);
    return arg0;
}
