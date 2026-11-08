/* identical to func_00372B00 (matched), with its names changed by decompdecomp */
typedef struct { s32 ptr, val; } Entry;
Entry *func_002D95F0(Entry *p, Entry *end, Entry *q) {
while(p!=end) { if(q) { s32 v=p->ptr; s32 *h=(s32*)(v-16); if(h[3]!=0) v=func_00151930(h); else h[2]++; q->ptr=v; q->val=p->val; } p++; q++; } return q;
}
s32 func_00376900(s8 *s1,s8 *e1,s8 *s2,s8 *e2) { s8 c1,c2; while(s1!=e1 && s2!=e2) { c1=*s1;c2=*s2;if(c1<c2)return 1;if(c2<c1)return 0;s1++;s2++;}return s1==e1 && s2!=e2;}
s32 func_00376968(s8 *s1,s8 *e1,s8 *s2,s8 *e2) { s8 c1,c2;while(s1!=e1 && s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}if(s2==e2)return s1!=e1;return -1;}
typedef struct Node { s32 *obj; struct Node *next; s32 pad, tag; } Node;
void *func_00376D50(void *p,s32 size,s32 unused,s32 tag,s32 flag) {
s32 n=0; Node *it; s32 *r=0; if(size>1)do {n++;}while((1<<n)<size);
it=*(Node**)((s8*)p+0x1f4);
while(it->obj) { if(it->obj[1]>=n && ((flag^1)==0 || it->tag!=tag))r=it->obj; it=it->next;if(!it->obj || r)break; }return r;
}
