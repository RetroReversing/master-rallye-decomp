typedef struct Node
{
  void *data;
  struct Node *next;
} Node;
int func_001D3920(void *arg0);
extern void func_001D1900(void *);
extern void func_001D3250(void *, int);
extern void D_002AD390(void *);
void func_001D39A0(void *arg0);
extern int func_002B1FC0(int);
extern void func_003F9698(const char *, int);
extern int D_00426298;
extern const char D_00475E38[];
typedef struct Bucket
{
  char *cur;
  char *base;
  char *end;
} Bucket;
void *func_001D3AF8(Bucket *arg0, int arg1)
{
  char *p = (char *) func_002B1FC0(arg1);
  arg0->end = p + arg1;
  arg0->base = p;
  arg0->cur = p;
  D_00426298++;
  func_003F9698(D_00475E38, arg1);
 do { return arg0; } while (0);
}
