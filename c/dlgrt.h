//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#undef FUNFOR
#undef FUNCODEDEF
#undef EXT
#undef DEF
#undef VARREF
#undef VARSET
#undef BOUNDP
#undef VARREF_OR

/* Resolved from the goo executable at dlopen time; declared here so their
   P-sized return values are not truncated through implicit int on 64-bit. */
extern P YevalSast_evalYPbinding_boundQ (P);
extern P YevalSast_evalYPbinding_value (P);
extern P YevalSast_evalYPbinding_value_setter (P,P);
extern P YevalSast_evalYPbinding_value_or (P,P);

#define FUNFOR(x)     static P x##I(REGS)
#define FUNCODEDEF(x) static P x##I (REGS regs)
#define LOCNAM(x)     x##V
#define EXT(x, m, n)  static DLVAR_DAT LOCNAM(x) = { n, m, PNUL };
#define DEF(x, m, n)  static P x = PNUL; static DLVAR_DAT LOCNAM(x) = { n, m, PNUL };
#define BOUNDP(x, d)  (P)YevalSast_evalYPbinding_boundQ((P)&LOCNAM(x))
#define VARREF(x)     YevalSast_evalYPbinding_value((P)&LOCNAM(x))
#define VARSET(x, v)  YevalSast_evalYPbinding_value_setter((P)v, (P)&LOCNAM(x))

#define VARREF_OR(x, d)  (P)YevalSast_evalYPbinding_value_or((P)&LOCNAM(x), (P)d)

#undef DYNEXT
#undef DYNDEF
#undef DYNREF
#undef DYNSET

#define DYNEXT(x, m, n) EXT(x, m, n)
#define DYNDEF(x, m, n) DEF(x, m, n)
#define DYNREF(x)       VARREF(x)
#define DYNSET(x, v)    VARSET(x, v)


