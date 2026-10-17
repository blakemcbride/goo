/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/eval");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: goo/eval */

EXT(YevalStopYload,"eval/top","load");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yerror,"goo/boot","error");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"goo/boot","head");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooSevalY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

P YgooSevalY___main_0___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_evalStop},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"load", &module_info_evalStop, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"$", &module_info_evalStop, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"top", &module_info_evalStop, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"load", NULL},
  {"frame", NULL},
  {"$$", NULL},
  {"do-stack-frames", NULL},
  {"$", NULL},
  {"bt", NULL},
  {"load-file", NULL},
  {"$$$", NULL},
  {"save-image", NULL},
  {"frame-var", NULL},
  {"top", NULL},
  {"eval", NULL},
  {"backtrace", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSeval;
MODULE_INFO module_info_gooSeval = {
  "goo/eval",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_evalStop (void);

/* EXPRESSION: */

extern void load_module_gooSeval (void);

void load_module_gooSeval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_evalStop();

  (P)YgooSevalY___main_0___();

}

/* END OF GENERATED CODE. */
