extern int func_003CE868(void *, void *, unsigned, unsigned);
extern unsigned func_003FA9B8(void *);

int func_003CFB18(void *a, void *b, unsigned c)
{
    return func_003CE868(a, b, c, func_003FA9B8(b));
}
