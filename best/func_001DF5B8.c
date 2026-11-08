extern void *D_002AD408(u32);
extern void func_001D4040(void *, char *);
extern void *func_001E4150(void *, void *);
extern void func_001E5500(void *, void *);
extern int func_001DF800(void *, void *, void *);
extern void func_001DF2B0(void *, void *, int);

extern void *D_0044DD18;

typedef struct Vec8 {
    void *begin;
    void *end;
    void *cap;
} Vec8;

typedef struct Node24 {
    struct Node24 *child;   /* 0x00 */
    struct Node24 *next;    /* 0x04 */
    u32 f8;                 /* 0x08 */
    u32 fC;                 /* 0x0C */
    void *vtable;           /* 0x10 */
    Vec8 vec;               /* 0x14 */
    u32 f20;                /* 0x20 */
} Node24;

Node24 *func_001DF5B8(void *arg0, u32 *arg1) {
    Node24 *obj;
    u32 val;
    Vec8 *v;
    u32 pad[4];

    obj = D_002AD408(0x24);
    val = *arg1;
    obj->vtable = &D_0044DD18;
    v = &obj->vec;
    obj->f8 = 0;
    obj->fC = 0;
    obj->next = 0;
    obj->child = 0;
    v->begin = 0;
    v->end = 0;
    v->cap = 0;
    obj->f20 = val;
    func_001DF2B0(arg0, obj, 0);
    pad[0] = 0;
    return obj;
}

Node24 *func_001DF758(void *arg0, void *arg1) {
    Node24 *obj;
    Vec8 *v;
    u32 pad[4];

    obj = D_002AD408(0x24);
    obj->f8 = 0;
    obj->vtable = &D_0044DD18;
    v = &obj->vec;
    obj->fC = 0;
    obj->next = 0;
    obj->child = 0;
    v->begin = 0;
    v->end = 0;
    v->cap = 0;
    obj->f20 = 0;
    if (func_001DF800(arg0, obj, arg1) != 0) {
        pad[0] = 0;
        return obj;
    }
    if (obj != 0) {
        void **vt = obj->vtable;
        void (*fn)(void *, int) = (void (*)(void *, int))vt[3];
        fn((u8 *)obj + ((s16 *)vt)[4], 3);
    }
    pad[0] = 0;
    return 0;
}
