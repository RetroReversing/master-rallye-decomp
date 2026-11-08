typedef struct Tree {u32 a,b;struct Tree *left,*right;} Tree;
extern void func_002B2028(void *p);
void func_003B7548(void *a, Tree *p){while(p){Tree *n;func_003B7548(a,p->right);n=p->left;func_002B2028(p);p=n;}}

void func_003B7438(void *arg0) {
    void *vt = *(void **)((char *)arg0 + 8);
    void (*fn)(void *) = *(void (**)(void *))((char *)vt + 0x94);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x90));
}

void func_003B7410(void *arg0) {
    void *vt = *(void **)((char *)arg0 + 8);
    void (*fn)(void *) = *(void (**)(void *))((char *)vt + 0x84);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x80));
}

void func_003B7398(void *arg0, void *arg1, s32 arg2) {
    f32 tmp0;
    f32 tmp1;
    f32 tmp2;
    func_003B7410(arg0);
    func_003B7410(arg0);
    func_003B7410(arg0);
}
