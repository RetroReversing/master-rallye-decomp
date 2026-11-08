typedef struct Node { struct Node *next, *prev; u32 value; } Node;
extern char D_00476810[], D_00476ED0[], D_00476F00[];
extern s32 D_004262B0[4];
extern char *func_001D4010(void *);
extern void func_003F9698(char *, ...);
void func_001E4BD0(void *unused, void *arg) {
 struct { Node *cur; u32 a[3]; Node *end; u32 b[3]; Node *old; u32 c[3]; s32 count; } volatile it;
 Node **list = (Node **)((char *)arg+12);
 Node *p, *head;
 if (list) {
  head=*list; it.count=0; p=head->next;
  while(p!=head) { p=p->next; it.count++; }
  func_003F9698(D_00476ED0,it.count,&it.count);
  D_004262B0[3]++;
  head=*list; p=head->next; it.end=head; it.cur=p;
  while(p!=head) {
   func_003F9698(D_00476F00,func_001D4010((char *)it.cur+8));
   p=it.cur; head=*list; it.old=p; p=p->next; it.end=head; it.cur=p;
  }
  D_004262B0[3]--;
  func_003F9698(D_00476810);
 }
}
