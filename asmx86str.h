static const char* operationString[] = {
	"",
	"aaa",
	"aad",
	"aam",
	"aas",
	"add",
	"adc",
	"and",
	"arpl",
	"blendpd",
	"blendps",
	"blendvpd",
	"blendvps",
	"bound",
	"bsf",
	"bsr",
	"bswap",
	"bt",
	"btc",
	"btr",
	"bts",
	"callf",
	"calln",
	"clc",
	"cld",
	"clflush",
	"cli",
	"clts",
	"cmc",
	"cmp",
	"cmpxch16b",
	"cmpxch8b",
	"cmpxchg",
	"cpuid",
	"crc32",
	"daa",
	"das",
	"dec",
	"div",
	"dppd",
	"dpps",
	"emms",
	"enter",
	"f2xm1",
	"fabs",
	"fadd",
	"faddp",
	"fbld",
	"fbstp",
	"fchs",
	"fclex",
	"fcmovb",
	"fcmovbe",
	"fcmove",
	"fcmovnb",
	"fcmovnbe",
	"fcmovne",
	"fcmovnu",
	"fcmovu",
	"fcom",
	"fcomi",
	"fcomip",
	"fcomp",
	"fcompp",
	"fcos",
	"fdecstp",
	"fdisi",
	"fdiv",
	"fdivp",
	"fdivr",
	"fdivrp",
	"femms",
	"feni",
	"ffree",
	"ffreep",
	"fiadd",
	"ficom",
	"ficomp",
	"fidiv",
	"fidivr",
	"fild",
	"fimul",
	"fincstp",
	"finit",
	"fist",
	"fistp",
	"fisttp",
	"fisub",
	"fisubr",
	"fld",
	"fld1",
	"fldcw",
	"fldenv",
	"fldl2e",
	"fldl2t",
	"fldlg2",
	"fldln2",
	"fldpi",
	"fldz",
	"fmul",
	"fmulp",
	"fnop",
	"fpatan",
	"fprem",
	"fprem1",
	"fptan",
	"frichop",
	"frinear",
	"frint2",
	"frndint",
	"frstor",
	"frstpm",
	"fsave",
	"fscale",
	"fsetpm",
	"fsin",
	"fsincos",
	"fsqrt",
	"fst",
	"fstcw",
	"fstdw",
	"fstenv",
	"fstp",
	"fstsg",
	"fstsw",
	"fsub",
	"fsubp",
	"fsubr",
	"fsubrp",
	"ftst",
	"fucom",
	"fucomi",
	"fucomip",
	"fucomp",
	"fucompp",
	"fwait",
	"fxam",
	"fxch",
	"fxrstor",
	"fxsave",
	"fxtract",
	"fyl2x",
	"fyl2xp1",
	"getsec",
	"hlt",
	"idiv",
	"imul",
	"in",
	"inc",
	"int",
	"int1",
	"int3",
	"into",
	"invd",
	"invlpg",
	"iret",
	"jmpf",
	"jmpn",
	"lahf",
	"lar",
	"ldmxcsr",
	"lds",
	"lea",
	"leave",
	"les",
	"lfence",
	"lfs",
	"lgs",
	"loop",
	"loope",
	"loopne",
	"lsl",
	"lss",
	"mfence",
	"mov",
	"movnti",
	"movss",
	"movsx",
	"movsxd",
	"movupd",
	"movups",
	"movzx",
	"mpsadbw",
	"mul",
	"neg",
	"nop",
	"not",
	"or",
	"out",
	"packssdw",
	"packsswb",
	"packusdw",
	"packuswb",
	"pabsb",
	"pabsd",
	"pabsw",
	"paddb",
	"paddd",
	"paddq",
	"paddw",
	"paddsb",
	"paddsw",
	"paddusb",
	"paddusw",
	"palignr",
	"pand",
	"pandn",
	"pause",
	"pavgb",
	"pavgusb",
	"pavgw",
	"pblendvb",
	"pblendw",
	"pcmpeqb",
	"pcmpeqd",
	"pcmpeqq",
	"pcmpeqw",
	"pcmpestri",
	"pcmpestrm",
	"pcmpgtb",
	"pcmpgtd",
	"pcmpgtq",
	"pcmpgtw",
	"pcmpistri",
	"pcmpistrm",
	"pf2id",
	"pf2iw",
	"pfacc",
	"pfadd",
	"pfcmpeq",
	"pfcmpge",
	"pfcmpgt",
	"pfmax",
	"pfmin",
	"pfmul",
	"pfnacc",
	"pfpnacc",
	"pfrcp",
	"pfrcpit1",
	"pfrcpit2",
	"pfrcpv",
	"pfrsqit1",
	"pfrsqrt",
	"pfrsqrtv",
	"pfsub",
	"pfsubr",
	"phaddd",
	"phaddsw",
	"phaddw",
	"phminposuw",
	"phsubd",
	"phsubsw",
	"phsubw",
	"pi2fd",
	"pi2fw",
	"pmaddwd",
	"pmaddubsw",
	"pmaxsb",
	"pmaxsd",
	"pmaxsw",
	"pmaxub",
	"pmaxud",
	"pmaxuw",
	"pminsb",
	"pminsd",
	"pminsw",
	"pminub",
	"pminud",
	"pminuw",
	"pmuldq",
	"pmulhrsw",
	"pmulhrw",
	"pmulhuw",
	"pmulhw",
	"pmulld",
	"pmullw",
	"pmuludq",
	"pop",
	"popcnt",
	"por",
	"psadbw",
	"pshufb",
	"psignb",
	"psignd",
	"psignw",
	"pslld",
	"pslldq",
	"psllq",
	"psllw",
	"psrad",
	"psraw",
	"psrld",
	"psrldq",
	"psrlq",
	"psrlw",
	"psubb",
	"psubd",
	"psubq",
	"psubw",
	"psubsb",
	"psubsw",
	"psubusb",
	"psubusw",
	"pswapd",
	"ptest",
	"punpckhbw",
	"punpckhdq",
	"punpckhqdq",
	"punpckhwd",
	"punpcklqdq",
	"push",
	"pxor",
	"rdmsr",
	"rdpmc",
	"rdtsc",
	"retf",
	"retn",
	"rcl",
	"rcr",
	"rol",
	"ror",
	"roundps",
	"roundpd",
	"rsm",
	"sahf",
	"salc",
	"sar",
	"sbb",
	"sfence",
	"shl",
	"shld",
	"shr",
	"shrd",
	"sub",
	"stc",
	"std",
	"sti",
	"stmxcsr",
	"syscall",
	"sysenter",
	"sysexit",
	"sysret",
	"test",
	"ud2",
	"vmread",
	"vmwrite",
	"wbinvd",
	"wrmsr",
	"xchg",
	"xlat",
	"xadd",
	"xor",
	"xrstor",
	"xsave",
	"addps",
	"addpd",
	"addsd",
	"addss",
	"addsubpd",
	"addsubps",
	"andnps",
	"andnpd",
	"andps",
	"andpd",
	"cbw",
	"cwde",
	"cdqe",
	"cmpsb",
	"cmpsw",
	"cmpsd",
	"cmpsq",
	"cmovo",
	"cmovno",
	"cmovb",
	"cmovae",
	"cmove",
	"cmovne",
	"cmovbe",
	"cmova",
	"cmovs",
	"cmovns",
	"cmovpe",
	"cmovpo",
	"cmovl",
	"cmovge",
	"cmovle",
	"cmovg",
	"cwd",
	"cdq",
	"cqo",
	"divps",
	"divpd",
	"divsd",
	"divss",
	"insb",
	"insw",
	"insd",
	"insq",
	"jcxz",
	"jecxz",
	"jrcxz",
	"jo",
	"jno",
	"jb",
	"jae",
	"je",
	"jne",
	"jbe",
	"ja",
	"js",
	"jns",
	"jpe",
	"jpo",
	"jl",
	"jge",
	"jle",
	"jg",
	"lodsb",
	"lodsw",
	"lodsd",
	"lodsq",
	"maxps",
	"maxpd",
	"maxsd",
	"maxss",
	"minps",
	"minpd",
	"minsd",
	"minss",
	"movd",
	"movq",
	"movsb",
	"movsw",
	"movsd",
	"movsq",
	"mulps",
	"mulpd",
	"mulsd",
	"mulss",
	"orps",
	"orpd",
	"outsb",
	"outsw",
	"outsd",
	"outsq",
	"pextrd",
	"pextrq",
	"pinsrd",
	"pinsrq",
	"popa",
	"popad",
	"popf",
	"popfd",
	"popfq",
	"pusha",
	"pushad",
	"pushf",
	"pushfd",
	"pushfq",
	"rcpps",
	"rcpss",
	"rsqrtps",
	"rsqrtss",
	"scasb",
	"scasw",
	"scasd",
	"scasq",
	"seto",
	"setno",
	"setb",
	"setae",
	"sete",
	"setne",
	"setbe",
	"seta",
	"sets",
	"setns",
	"setpe",
	"setpo",
	"setl",
	"setge",
	"setle",
	"setg",
	"sqrtps",
	"sqrtpd",
	"sqrtsd",
	"sqrtss",
	"stosb",
	"stosw",
	"stosd",
	"stosq",
	"subps",
	"subpd",
	"subsd",
	"subss",
	"xorps",
	"xorpd",
	"cmppd",
	"cmpps",
	"cmpss",
	"comisd",
	"comiss",
	"cvtdq2pd",
	"cvtdq2ps",
	"cvtpd2dq",
	"cvtpd2pi",
	"cvtpd2ps",
	"cvtpi2pd",
	"cvtpi2ps",
	"cvtps2dq",
	"cvtps2pd",
	"cvtps2pi",
	"cvtsd2si",
	"cvtsd2ss",
	"cvtsi2sd",
	"cvtsi2ss",
	"cvtss2sd",
	"cvtss2si",
	"cvttpd2dq",
	"cvttpd2pi",
	"cvttps2dq",
	"cvttps2pi",
	"cvttsd2si",
	"cvttss2si",
	"extractps",
	"haddpd",
	"haddps",
	"hsubpd",
	"hsubps",
	"insertps",
	"lddqu",
	"lgdt",
	"lidt",
	"lldt",
	"lmsw",
	"ltr",
	"maskmovq",
	"maskmovdqu",
	"mmxnop",
	"monitor",
	"movapd",
	"movaps",
	"movddup",
	"movdq2q",
	"movdqa",
	"movdqu",
	"movhlps",
	"movhpd",
	"movhps",
	"movshdup",
	"movsldup",
	"movlhps",
	"movlpd",
	"movlps",
	"movmskpd",
	"movmskps",
	"movntdq",
	"movntdqa",
	"movntpd",
	"movntps",
	"movntq",
	"movq2dq",
	"mwait",
	"pinsrb",
	"pinsrw",
	"pextrb",
	"pextrw",
	"pmovmskb",
	"pmovsxbd",
	"pmovsxbq",
	"pmovsxdq",
	"pmovsxbw",
	"pmovsxwd",
	"pmovsxwq",
	"pmovzxbd",
	"pmovzxbq",
	"pmovzxdq",
	"pmovzxbw",
	"pmovzxwd",
	"pmovzxwq",
	"prefetch",
	"prefetchnta",
	"prefetcht0",
	"prefetcht1",
	"prefetcht2",
	"prefetchw",
	"pshufd",
	"pshufhw",
	"pshuflw",
	"pshufw",
	"punpcklbw",
	"punpckldq",
	"punpcklwd",
	"roundsd",
	"roundss",
	"sgdt",
	"sidt",
	"sldt",
	"shufpd",
	"shufps",
	"smsw",
	"str",
	"swapgs",
	"ucomisd",
	"ucomiss",
	"unpckhpd",
	"unpckhps",
	"unpcklpd",
	"unpcklps",
	"verr",
	"verw",
	"vmcall",
	"vmclear",
	"vmlaunch",
	"vmptrld",
	"vmptrst",
	"vmresume",
	"vmxoff",
	"vmxon",
	"xgetbv",
	"xsetbv"
};
static const char* operandString[] = {
	"",
	"",
	"",
	"al",
	"cl",
	"dl",
	"bl",
	"ah",
	"ch",
	"dh",
	"bh",
	"spl",
	"bpl",
	"sil",
	"dil",
	"r8b",
	"r9b",
	"r10b",
	"r11b",
	"r12b",
	"r13b",
	"r14b",
	"r15b",
	"ax",
	"cx",
	"dx",
	"bx",
	"sp",
	"bp",
	"si",
	"di",
	"r8w",
	"r9w",
	"r10w",
	"r11w",
	"r12w",
	"r13w",
	"r14w",
	"r15w",
	"eax",
	"ecx",
	"edx",
	"ebx",
	"esp",
	"ebp",
	"esi",
	"edi",
	"r8d",
	"r9d",
	"r10d",
	"r11d",
	"r12d",
	"r13d",
	"r14d",
	"r15d",
	"rax",
	"rcx",
	"rdx",
	"rbx",
	"rsp",
	"rbp",
	"rsi",
	"rdi",
	"r8",
	"r9",
	"r10",
	"r11",
	"r12",
	"r13",
	"r14",
	"r15",
	"st0",
	"st1",
	"st2",
	"st3",
	"st4",
	"st5",
	"st6",
	"st7",
	"mm0",
	"mm1",
	"mm2",
	"mm3",
	"mm4",
	"mm5",
	"mm6",
	"mm7",
	"xmm0",
	"xmm1",
	"xmm2",
	"xmm3",
	"xmm4",
	"xmm5",
	"xmm6",
	"xmm7",
	"xmm8",
	"xmm9",
	"xmm10",
	"xmm11",
	"xmm12",
	"xmm13",
	"xmm14",
	"xmm15",
	"cr0",
	"cr1",
	"cr2",
	"cr3",
	"cr4",
	"cr5",
	"cr6",
	"cr7",
	"cr8",
	"cr9",
	"cr10",
	"cr11",
	"cr12",
	"cr13",
	"cr14",
	"cr15",
	"dr0",
	"dr1",
	"dr2",
	"dr3",
	"dr4",
	"dr5",
	"dr6",
	"dr7",
	"dr8",
	"dr9",
	"dr10",
	"dr11",
	"dr12",
	"dr13",
	"dr14",
	"dr15",
	"tr0",
	"tr1",
	"tr2",
	"tr3",
	"tr4",
	"tr5",
	"tr6",
	"tr7",
	"tr8",
	"tr9",
	"tr10",
	"tr11",
	"tr12",
	"tr13",
	"tr14",
	"tr15",
	"es",
	"cs",
	"ss",
	"ds",
	"fs",
	"gs",
	"rip"
};
