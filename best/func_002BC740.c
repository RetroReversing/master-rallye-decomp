typedef struct { int w; int pad1; int pad2; } S_BC740;
extern S_BC740 D_00428C98[];
extern int func_003FA580(int, int);

S_BC740 *func_002BC740(int arg0) {
    S_BC740 *p = D_00428C98;
    S_BC740 *found = 0;
    for (;;) {
        int v = p->w;
        if (v == 0) {
            found = found;
            break;
        }
        if (func_003FA580(arg0, v) != 0) {
            p++;
        } else {
            found = p;
            break;
        }
    }
    return found;
}
