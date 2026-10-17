/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"time/event");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: time/event */

DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
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
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YOlit,"goo/boot","@lit");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOelt,"goo/boot","@elt");
EXT(YOpick,"goo/boot","@pick");
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
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(Yorder_specs,"goo/boot","order-specs");
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
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YtimeSeventYevent_name,"time/event","event-name");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLboxG,"goo/boot","<box>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytail,"goo/boot","tail");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmathYN,"goo/math","~");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYS,"goo/math","/");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Ybox_value,"goo/boot","box-value");
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
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYT,"goo/math","*");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_20);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_6);
DEFLIT(lit_19);
DEFLIT(lit_0);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_13);
DEFLIT(lit_3);
DEFLIT(lit_10);
DEFLIT(lit_18);
DEFLIT(lit_4);

/* FUNCTIONS: */

LOCFOR(fun_event_name_0);
LOCFOR(fun_1);
LOCFOR(fun_event_handle_2);
LOCFOR(fun_event_handle_setter_3);
LOCFOR(fun_new_4);
LOCFOR(fun_event_signal_5);
LOCFOR(fun_event_broadcast_6);
LOCFOR(fun_event_reset_7);
LOCFOR(fun_event_wait_8);
LOCFOR(fun_event_wait_timed_9);
extern P YtimeSeventY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_event_name_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSeventYevent_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_event_handle_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_event_handle_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_new_4) {
  P c_,args_;
  P xF5355;
  P tmpF5354;
  P eventF5353;
  P next_metsF5352;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T10 = (P)YPfun_reg();
  T11 = (P)YPnext_methods();
  T9 = CALL4(1,VARREF(YgooSmacrosYOchecked_next_methods),T10,T11,c_,args_);
  next_metsF5352 = T9;
  T7 = CALL1(1,VARREF(Yhead),next_metsF5352);
  T8 = CALL1(1,VARREF(Ytail),next_metsF5352);
  T6 = CALL4(1,VARREF(YgooSmacrosYnapp),T7,T8,c_,args_);
  eventF5353 = T6;
  T5 = CALL1(1,VARREF(YtimeSeventYevent_name),eventF5353);
  tmpF5354 = T5;
  if (tmpF5354 != YPfalse) {
    T4 = tmpF5354;
  } else {
    T4 = LITREF(lit_10);
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
  T2 = (P)YPsu(T3);
  T1 = (P)YtimeSeventYPevent_create(T2);
  xF5355 = T1;
  T0 = (P)YPtag_into(xF5355,(P)3);
  CALL2(1,VARREF(YtimeSeventYevent_handle_setter),T0,eventF5353);
UNLINK_STACK();
  RET(eventF5353);
}

LOCCODEDEF(fun_event_signal_5) {
  P e_;
  P xF5356;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5356 = T1;
  T0 = (P)YPuntag_into(xF5356);
  (P)YtimeSeventYPevent_signal(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_event_broadcast_6) {
  P e_;
  P xF5357;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5357 = T1;
  T0 = (P)YPuntag_into(xF5357);
  (P)YtimeSeventYPevent_broadcast(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_event_reset_7) {
  P e_;
  P xF5358;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5358 = T1;
  T0 = (P)YPuntag_into(xF5358);
  (P)YtimeSeventYPevent_reset(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_event_wait_8) {
  P e_,l_;
  P xF5360;
  P xF5359;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5359 = T3;
  T2 = (P)YPuntag_into(xF5359);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF5360 = T5;
  T4 = (P)YPuntag_into(xF5360);
  T1 = (P)YtimeSeventYPevent_wait(T2,T4);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_event_wait_timed_9) {
  P e_,l_,secs_;
  P xF5362;
  P xF5361;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  ARG(secs_, 2);
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5361 = T3;
  T2 = (P)YPuntag_into(xF5361);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF5362 = T5;
  T4 = (P)YPuntag_into(xF5362);
  T6 = (P)YPfu(secs_);
  T1 = (P)YtimeSeventYPevent_wait_timed(T2,T4,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

P YtimeSeventY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
DEFCREGS();
  lit_0 = YPPsym((P)"<event>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSeventYLeventG,T0);
  lit_1 = YPPsym((P)"event-name");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_name_0 = YPfab_met(FUNCODEREF(fun_event_name_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(20),YPfalse);
  T4 = VARREF_OR(YtimeSeventYevent_name,YPfalse);
  T5 = fun_event_name_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YtimeSeventYevent_name,T3);
  lit_3 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T6,YPfalse,LITREF(lit_3),sloc(20),YPfalse);
  T7 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T8 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_name),YPfalse,T7,T8);
  lit_4 = YPPsym((P)"event-handle");
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_handle_2 = YPfab_met(FUNCODEREF(fun_event_handle_2),T9,LITREF(lit_4),LITREF(lit_5),sloc(21),YPfalse);
  T11 = VARREF_OR(YtimeSeventYevent_handle,YPfalse);
  T12 = fun_event_handle_2;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YtimeSeventYevent_handle,T10);
  lit_6 = YPPsym((P)"event-handle-setter");
  lit_7 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_handle_setter_3 = YPfab_met(FUNCODEREF(fun_event_handle_setter_3),T13,LITREF(lit_6),LITREF(lit_7),sloc(21),YPfalse);
  T15 = VARREF_OR(YtimeSeventYevent_handle_setter,YPfalse);
  T16 = fun_event_handle_setter_3;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YtimeSeventYevent_handle_setter,T14);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_handle),VARREF(YtimeSeventYevent_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"new");
  lit_9 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  lit_10 = YPsb((P)"");
  T18 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSeventYLeventG));
  T17 = YPfab_sig(YPPlist(1,T18),YPtrue,YPint((P)1),VARREF(YtimeSeventYLeventG),Ynil);
  fun_new_4 = YPfab_met(FUNCODEREF(fun_new_4),T17,LITREF(lit_8),LITREF(lit_9),sloc(23),YPfalse);
  T20 = VARREF_OR(Ynew,YPfalse);
  T21 = fun_new_4;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(Ynew,T19);
  lit_11 = YPPsym((P)"event-signal");
  lit_12 = YPPlist(1,YPPsym((P)"e"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_signal_5 = YPfab_met(FUNCODEREF(fun_event_signal_5),T22,LITREF(lit_11),LITREF(lit_12),sloc(29),YPfalse);
  T24 = VARREF_OR(YtimeSeventYevent_signal,YPfalse);
  T25 = fun_event_signal_5;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YtimeSeventYevent_signal,T23);
  lit_13 = YPPsym((P)"event-broadcast");
  lit_14 = YPPlist(1,YPPsym((P)"e"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_broadcast_6 = YPfab_met(FUNCODEREF(fun_event_broadcast_6),T26,LITREF(lit_13),LITREF(lit_14),sloc(32),YPfalse);
  T28 = VARREF_OR(YtimeSeventYevent_broadcast,YPfalse);
  T29 = fun_event_broadcast_6;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YtimeSeventYevent_broadcast,T27);
  lit_15 = YPPsym((P)"event-reset");
  lit_16 = YPPlist(1,YPPsym((P)"e"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_reset_7 = YPfab_met(FUNCODEREF(fun_event_reset_7),T30,LITREF(lit_15),LITREF(lit_16),sloc(38),YPfalse);
  T32 = VARREF_OR(YtimeSeventYevent_reset,YPfalse);
  T33 = fun_event_reset_7;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YtimeSeventYevent_reset,T31);
  lit_17 = YPPsym((P)"event-wait");
  lit_18 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"l"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_event_wait_8 = YPfab_met(FUNCODEREF(fun_event_wait_8),T34,LITREF(lit_17),LITREF(lit_18),sloc(41),YPfalse);
  T36 = VARREF_OR(YtimeSeventYevent_wait,YPfalse);
  T37 = fun_event_wait_8;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YtimeSeventYevent_wait,T35);
  lit_19 = YPPsym((P)"event-wait-timed");
  lit_20 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"l"),YPPsym((P)"secs"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG),VARREF(YLfloG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_event_wait_timed_9 = YPfab_met(FUNCODEREF(fun_event_wait_timed_9),T38,LITREF(lit_19),LITREF(lit_20),sloc(44),YPfalse);
  T40 = VARREF_OR(YtimeSeventYevent_wait_timed,YPfalse);
  T41 = fun_event_wait_timed_9;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YtimeSeventYevent_wait_timed,T39);
  T42 = YPfalse;
  return T42;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
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
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@pair", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {"%event-signal", PVAR, NULL},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {"%event-destroy", PVAR, NULL},
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {"---main-0---", PVAR, NULL},
  {"%event-wait", PVAR, NULL},
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {"%event-reset", PVAR, NULL},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"%event-broadcast", PVAR, NULL},
  {"%event-wait-timed", PVAR, NULL},
  {"%event-create", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-wait-timed", NULL},
  {"event-reset", NULL},
  {"event-broadcast", NULL},
  {"event-wait", NULL},
  {"event-signal", NULL},
  {"<event>", NULL},
  {"event-name", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_timeSevent;
MODULE_INFO module_info_timeSevent = {
  "time/event",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);

/* EXPRESSION: */

extern void load_module_timeSevent (void);

void load_module_timeSevent (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_timeSthreads();
  load_module_timeSlock();

  (P)YtimeSeventY___main_0___();

}

/* END OF GENERATED CODE. */
