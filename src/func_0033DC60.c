/* identical to func_001D9F40 (matched), with its names changed by decompdecomp */
typedef struct{ s32 ptr,val;} Entry;
Entry *func_001D9598(Entry*q,s32 n,Entry*p){while(n){if(q){s32 v=p->ptr;s32*h=(s32*)(v-16);if(h[3])v=func_00151930(h);else h[2]++;q->ptr=v;q->val=p->val;}n--;q++;}return q;}
void func_001D9018(u8*p,u8*e,u8*v){while(p!=e)*p++=*v;}
s32 *func_001D9F10(s32*s,s32*e,s32*d){while(s!=e){if(d)*d=*s;s++;d++;}return d;}
Entry *func_0033DC60(Entry*p,Entry*e,Entry*q){while(p!=e){if(q){s32 v=p->ptr;s32*h=(s32*)(v-16);if(h[3])v=func_00151930(h);else h[2]++;q->ptr=v;q->val=p->val;}p++;q++;}return q;}
