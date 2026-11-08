
typedef void (*Handler)(void);
extern Handler D_00437E58;
extern Handler func_002ABA80(int);
extern void *func_002B1FC0(int);
extern void *func_003D4938(void*,const char*);
extern int func_003D4F40(void*);
extern char D_00439570[],D_004868B0[];
void *func_003727F8(int n) {
 Handler h; void *p; int (*thrower)(void*)=func_003D4F40; void *exception=D_00439570; const char *message=D_004868B0;
 do { h=D_00437E58; if(!h){thrower(func_003D4938(exception,message));h=func_002ABA80(1);} h(); p=func_002B1FC0(n); }while(!p);
 return p;
}

s32 *func_00372AD0(s32 *src,s32 *end,s32 *dst){while(src!=end){if(dst)*dst=*src;src++;dst++;}return dst;}
typedef struct {u16 d,pad;s32 type;} E8;
extern u8 D_004262D0[];
E8 *func_00373788(E8 *first,E8 *last,E8 *result){int new_var;if(first!=last){do{if(result){s32 type;result->d=first->d;type=first->type;result->type=type;new_var=4;if(type>=0){u8*tbl=*(u8**)D_004262D0;u8*objs=*(u8**)(D_004262D0+36);u8*obj=objs+(*(s32*)(tbl+type*new_var)<<3);*(s32*)(obj+new_var)+=1;}}first++;result++;}while(first!=last);}return result;}
s32 func_00371788(s8*s1,s8*e1,s8*s2,s8*e2){s8 c1,c2;while(s1!=e1&&s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}if(s2==e2)return s1!=e1;return -1;}
