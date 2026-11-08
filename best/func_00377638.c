typedef struct { s32 ptr, val; } Entry;
Entry *func_00372B00(Entry *p, Entry *end, Entry *q) {
while(p!=end) { if(q) { s32 v=p->ptr; s32 *h=(s32*)(v-16); if(h[3]==0) h[2]++; else v=func_00151930(h); q->ptr=v; q->val=p->val; } p++; q++; } return q;
}
s32 func_00376900(s8 *s1,s8 *e1,s8 *s2,s8 *e2) { s8 c1,c2; while(s1!=e1 && s2!=e2) { c1=*s1;c2=*s2;if(c1<c2)return 1;if(c2<c1)return 0;s1++;s2++;}return s1==e1 && s2!=e2;}
s32 func_00376968(s8 *s1,s8 *e1,s8 *s2,s8 *e2) { s8 c1,c2;while(s1!=e1 && s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}if(s2==e2)return s1!=e1;return -1;}
typedef struct Node { s32 *obj; struct Node *next; s32 pad, tag; } Node;
void *func_00376D50(void *p,s32 size,s32 unused,s32 tag,s32 flag) {
s32 n=0,v; Node *it; s32 *obj,*r;
while((1<<n)<size)n++;
it=*(Node**)((s8*)p+0x1f4);flag^=1;obj=it->obj;r=0;
if(obj) {v=obj[1]; again:
if(v>=n && (flag==0 || it->tag!=tag))r=obj;
it=it->next;obj=it->obj;
if(obj)if(!r){v=obj[1];goto again;}
}return r;}
s32 func_00377638(void *p) {s32 size=*(s32*)((s8*)p+0x18000+0x4210),n=0;while((1<<n)<size)n++;return n;}
s32 func_00377768(void *p,s32 *q){return *q+*(s32*)((s8*)p+0x18000+0x4214);}
s32 func_00377788(void *p){return *(s32*)((s8*)p+0x18000+0x4214);}
