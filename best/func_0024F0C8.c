/* func_0024F0C8 */
extern void func_001CAB58(void *, void *, void *);

void func_0024F0C8(void *dummy, void *arg0, s32 arg2) {
    s32 tmp = arg2;
    s32 *end = *(s32 **)((char *)arg0 + 4);
    s32 *cap = *(s32 **)((char *)arg0 + 8);
    if (end != cap) {
        if (end != 0) {
            *end = tmp;
        }
        *(s32 **)((char *)arg0 + 4) = end + 1;
        return;
    }
    func_001CAB58(arg0, end, &tmp);
}
