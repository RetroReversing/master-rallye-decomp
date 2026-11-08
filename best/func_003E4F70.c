void func_003E0EF0(u32);
void func_003E4F70(void *arg0) {
    s32 cnt = 0;
    if ((*(volatile u32 *)0x10002010 & 0x80004000) != 0x80000000) {
        return;
    }
    do {
        if (cnt >= 0x1389) {
            func_003E0EF0(*(u32 *)((char *)arg0 + 0x858));
            cnt = 0;
        }
        cnt++;
    } while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000);
}
