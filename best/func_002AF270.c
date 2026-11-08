s32 func_002AF270(char *node) {
    s32 next = *(s32 *)node;
    s32 count = 0;
    s32 flag;
    s32 cond;
    char *nxt;
    s32 n;
    if (next == 0) goto done;
    flag = *(s32 *)(node + 4);
    goto body;
loop:
    next = n;
    flag = *(s32 *)(node + 4);
body:
    if (flag != 0) {
        cond = *(s32 *)(node + 8);
        if (cond != 0) count = count + 1;
    }
    nxt = node + next;
    n = *(s32 *)(nxt + 4);
    node = nxt + 4;
    if (n != 0) goto loop;
done:
    return count;
}
