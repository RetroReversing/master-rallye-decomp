int func_003B2FE0(int arg0) { return arg0; }
int func_003B3430(int arg0) { return arg0; }
int func_003B3458(int arg0) { return arg0; }

typedef struct { int w; int pad1; int pad2; } S_BC740;
extern S_BC740 D_00428C98[];
extern int func_003FA580(int, int);

S_BC740 *func_002BC740(int arg0) {
    S_BC740 *p = D_00428C98;
    S_BC740 *found = 0;
    for (;;) {
        int v = p->w;
        if (v == 0) break;
        if (func_003FA580(arg0, v) == 0) { found = p; break; }
        p++;
    }
    return found;
}
