/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/seqx");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/seqx */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooStypesYDbot,"goo/types","$bot");
DEF(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Yerror,"goo/boot","error");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yopts_location,"goo/boot","opts-location");
DEF(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSmathYK,"goo/math","|");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLstrG,"goo/boot","<str>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YOlit,"goo/boot","@lit");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yhead,"goo/boot","head");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YPtrue,"goo/boot","%true");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmathYround,"goo/math","round");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytail,"goo/boot","tail");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLlogG,"goo/boot","<log>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
DEF(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YOpick,"goo/boot","@pick");
DEF(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLcolG,"goo/boot","<col>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
DEF(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_33);
DEFLIT(lit_11);
DEFLIT(lit_27);
DEFLIT(lit_0);
DEFLIT(lit_21);
DEFLIT(lit_8);
DEFLIT(lit_17);
DEFLIT(lit_6);
DEFLIT(lit_16);
DEFLIT(lit_31);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_32);
DEFLIT(lit_34);
DEFLIT(lit_4);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_7);
DEFLIT(lit_20);
DEFLIT(lit_22);
DEFLIT(lit_5);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_35);
DEFLIT(lit_26);
DEFLIT(lit_36);
DEFLIT(lit_19);
DEFLIT(lit_9);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_28);

/* FUNCTIONS: */

LOCFOR(fun_revX_0);
LOCFOR(fun_catX_1);
LOCFOR(fun_pushX_2);
LOCFOR(fun_popX_3);
LOCFOR(fun_insX_4);
LOCFOR(fun_del_valsX_5);
LOCFOR(fun_del_dupsX_6);
LOCFOR(fun_into_7);
LOCFOR(fun_sub_setter_8);
LOCFOR(fun_subT_setter_9);
LOCFOR(fun_sortX_10);
LOCFOR(fun_alter_11);
extern P YgooScolsSseqxY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_revX_0) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqYrev),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_catX_1) {
  P x_,more_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,more_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pushX_2) {
  P l_,x_;
  P T0;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpush),l_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_popX_3) {
  P l_;
  P T0;
LINK_STACK();
  ARG(l_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqYpop),l_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_insX_4) {
  P x_,v_,before_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,v_,before_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_del_valsX_5) {
  P x_,v_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  T0 = CALL2(1,VARREF(YgooScolsSseqYdel_vals),x_,v_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_del_dupsX_6) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_into_7) {
  P dst_,src_;
  P tmpF3191;
  P esF3190;
  P edF3189;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  edF3189 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  esF3190 = T9;
  LOOP_91: {
    P a91_0,a91_1;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),esF3190);
    tmpF3191 = T3;
    if (tmpF3191 != YPfalse) {
      T1 = tmpF3191;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),edF3189);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),esF3190);
      CALL2(1,VARREF(YgooScolsScolYnow_setter),T4,edF3189);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),edF3189);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),esF3190);
      a91_0 = T6;
      a91_1 = T7;
      edF3189 = a91_0;
      esF3190 = a91_1;
      goto LOOP_91;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sub_setter_8) {
  P src_,dst_,from_,below_;
  P iF3210;
  P dF3209;
  P ndF3208;
  P iF3207;
  P dF3206;
  P sF3205;
  P ndF3204;
  P iF3203;
  P dF3202;
  P ndF3201;
  P ndstF3200;
  P new_lenF3199;
  P sF3198;
  P dF3197;
  P iF3196;
  P dF3195;
  P del_lenF3194;
  P src_lenF3193;
  P dst_lenF3192;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
  T49 = CALL1(1,VARREF(YgooStypesYlen),dst_);
  check_type(T49,VARREF(YLintG));
  dst_lenF3192 = T49;
  T48 = CALL1(1,VARREF(YgooStypesYlen),src_);
  check_type(T48,VARREF(YLintG));
  src_lenF3193 = T48;
  T47 = CALL2(1,VARREF(YgooSmathY_),below_,from_);
  check_type(T47,VARREF(YLintG));
  del_lenF3194 = T47;
  T1 = CALL2(1,VARREF(YgooSlogYE),del_lenF3194,src_lenF3193);
  if (T1 != YPfalse) {
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    dF3195 = T14;
    iF3196 = YPint((P)0);
    LOOP_92: {
      P a92_0,a92_1;
      T3 = CALL2(1,VARREF(YgooSlogYE),iF3196,from_);
      if (T3 != YPfalse) {
        dF3197 = dF3195;
        T10 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
        sF3198 = T10;
        LOOP_93: {
          P a93_0,a93_1;
          T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),sF3198);
          if (T5 != YPfalse) {
            T4 = dst_;
          } else {
            T6 = CALL1(1,VARREF(YgooScolsScolYnow),sF3198);
            CALL2(1,VARREF(YgooScolsScolYnow_setter),T6,dF3197);
            T8 = CALL1(1,VARREF(YgooScolsScolYnxt),dF3197);
            T9 = CALL1(1,VARREF(YgooScolsScolYnxt),sF3198);
            a93_0 = T8;
            a93_1 = T9;
            dF3197 = a93_0;
            sF3198 = a93_1;
            goto LOOP_93;
            T4 = T7;
          }
        }
        T2 = T4;
      } else {
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),dF3195);
        T13 = CALL2(1,VARREF(YgooSmathYA),iF3196,YPint((P)1));
        a92_0 = T12;
        a92_1 = T13;
        dF3195 = a92_0;
        iF3196 = a92_1;
        goto LOOP_92;
        T2 = T11;
      }
    }
    T0 = T2;
  } else {
    T46 = CALL2(1,VARREF(YgooSmathY_),dst_lenF3192,del_lenF3194);
    T45 = CALL2(1,VARREF(YgooSmathYA),T46,src_lenF3193);
    new_lenF3199 = T45;
    T44 = CALL1(1,VARREF(YgooSclassYclass_of),dst_);
    T43 = CALL2(1,VARREF(YgooScolsScolYfab),T44,new_lenF3199);
    ndstF3200 = T43;
    T41 = CALL1(1,VARREF(YgooScolsScolYenum),ndstF3200);
    ndF3201 = T41;
    T42 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    dF3202 = T42;
    iF3203 = YPint((P)0);
    LOOP_94: {
      P a94_0,a94_1,a94_2;
      T16 = CALL2(1,VARREF(YgooSlogYE),iF3203,from_);
      if (T16 != YPfalse) {
        ndF3204 = ndF3201;
        T35 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
        sF3205 = T35;
        LOOP_95: {
          P a95_0,a95_1;
          T18 = CALL1(1,VARREF(YgooScolsScolYfinQ),sF3205);
          if (T18 != YPfalse) {
            dF3206 = dF3202;
            iF3207 = from_;
            LOOP_96: {
              P a96_0,a96_1;
              T20 = CALL2(1,VARREF(YgooSlogYE),iF3207,below_);
              if (T20 != YPfalse) {
                ndF3208 = ndF3204;
                dF3209 = dF3206;
                iF3210 = below_;
                LOOP_97: {
                  P a97_0,a97_1,a97_2;
                  T22 = CALL2(1,VARREF(YgooSlogYE),iF3210,dst_lenF3192);
                  if (T22 != YPfalse) {
                    T21 = ndstF3200;
                  } else {
                    T23 = CALL1(1,VARREF(YgooScolsScolYnow),dF3209);
                    CALL2(1,VARREF(YgooScolsScolYnow_setter),T23,ndF3208);
                    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),ndF3208);
                    T26 = CALL1(1,VARREF(YgooScolsScolYnxt),dF3209);
                    T27 = CALL2(1,VARREF(YgooSmathYA),iF3210,YPint((P)1));
                    a97_0 = T25;
                    a97_1 = T26;
                    a97_2 = T27;
                    ndF3208 = a97_0;
                    dF3209 = a97_1;
                    iF3210 = a97_2;
                    goto LOOP_97;
                    T21 = T24;
                  }
                }
                T19 = T21;
              } else {
                T29 = CALL1(1,VARREF(YgooScolsScolYnxt),dF3206);
                T30 = CALL2(1,VARREF(YgooSmathYA),iF3207,YPint((P)1));
                a96_0 = T29;
                a96_1 = T30;
                dF3206 = a96_0;
                iF3207 = a96_1;
                goto LOOP_96;
                T19 = T28;
              }
            }
            T17 = T19;
          } else {
            T31 = CALL1(1,VARREF(YgooScolsScolYnow),sF3205);
            CALL2(1,VARREF(YgooScolsScolYnow_setter),T31,ndF3204);
            T33 = CALL1(1,VARREF(YgooScolsScolYnxt),ndF3204);
            T34 = CALL1(1,VARREF(YgooScolsScolYnxt),sF3205);
            a95_0 = T33;
            a95_1 = T34;
            ndF3204 = a95_0;
            sF3205 = a95_1;
            goto LOOP_95;
            T17 = T32;
          }
        }
        T15 = T17;
      } else {
        T36 = CALL1(1,VARREF(YgooScolsScolYnow),dF3202);
        CALL2(1,VARREF(YgooScolsScolYnow_setter),T36,ndF3201);
        T38 = CALL1(1,VARREF(YgooScolsScolYnxt),ndF3201);
        T39 = CALL1(1,VARREF(YgooScolsScolYnxt),dF3202);
        T40 = CALL2(1,VARREF(YgooSmathYA),iF3203,YPint((P)1));
        a94_0 = T38;
        a94_1 = T39;
        a94_2 = T40;
        ndF3201 = a94_0;
        dF3202 = a94_1;
        iF3203 = a94_2;
        goto LOOP_94;
        T15 = T37;
      }
    }
    T0 = T15;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subT_setter_9) {
  P src_,dst_,from_;
  P T0,T1;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  T1 = CALL1(1,VARREF(YgooStypesYlen),dst_);
  T0 = CALL4(1,VARREF(YgooScolsSseqxYsub_setter),src_,dst_,from_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sortX_10) {
  P items_;
  P T0;
LINK_STACK();
  ARG(items_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),items_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_alter_11) {
  P dst_,src_,from_,below_;
  P tmpF3213;
  P sF3212;
  P dF3211;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  dF3211 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  sF3212 = T9;
  LOOP_98: {
    P a98_0,a98_1;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),dF3211);
    tmpF3213 = T3;
    if (tmpF3213 != YPfalse) {
      T1 = tmpF3213;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),sF3212);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),sF3212);
      CALL2(1,VARREF(YgooScolsScolYnow_setter),T4,dF3211);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),dF3211);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),sF3212);
      a98_0 = T6;
      a98_1 = T7;
      dF3211 = a98_0;
      sF3212 = a98_1;
      goto LOOP_98;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76;
DEFCREGS();
  lit_0 = YPPsym((P)"rev!");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooSmacrosYrevX,T0);
  lit_2 = YPPsym((P)"cat!");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPtrue,YPint((P)1),VARREF(YLseqXG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooScolsSseqxYcatX,T2);
  lit_4 = YPPsym((P)"push!");
  lit_5 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooScolsSseqxYpushX,T4);
  lit_6 = YPPsym((P)"pop!");
  lit_7 = YPPlist(1,YPPsym((P)"l"));
  T8 = XCALL2(1,VARREF(YtT),VARREF(YLseqXG),VARREF(YLanyG));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),T8,Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsSseqxYpopX,T6);
  lit_8 = YPPsym((P)"sub-setter");
  lit_9 = YPPlist(4,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"),YPPsym((P)"below"));
  T10 = YPfab_sig(YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T9 = YPfab_gen(T10,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooScolsSseqxYsub_setter,T9);
  lit_10 = YPPsym((P)"sub*-setter");
  lit_11 = YPPlist(3,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"));
  T12 = YPfab_sig(YPPlist(3,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T11 = YPfab_gen(T12,LITREF(lit_10),LITREF(lit_11),YPfalse);
  VARSET(YgooScolsSseqxYsubT_setter,T11);
  lit_12 = YPPsym((P)"ins!");
  lit_13 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"e"),YPPsym((P)"before"));
  T14 = YPfab_sig(YPPlist(3,VARREF(YLseqXG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  T13 = YPfab_gen(T14,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooScolsSseqxYinsX,T13);
  lit_14 = YPPsym((P)"del-vals!");
  lit_15 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T15 = YPfab_gen(T16,LITREF(lit_14),LITREF(lit_15),YPfalse);
  VARSET(YgooScolsSseqxYdel_valsX,T15);
  lit_16 = YPPsym((P)"del-dups!");
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T17 = YPfab_gen(T18,LITREF(lit_16),LITREF(lit_17),YPfalse);
  VARSET(YgooScolsSseqxYdel_dupsX,T17);
  lit_18 = YPPsym((P)"sort!");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T19 = YPfab_gen(T20,LITREF(lit_18),LITREF(lit_19),YPfalse);
  VARSET(YgooScolsSseqxYsortX,T19);
  lit_20 = YPPsym((P)"sort-by!");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"test"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T21 = YPfab_gen(T22,LITREF(lit_20),LITREF(lit_21),YPfalse);
  VARSET(YgooScolsSseqYsort_byX,T21);
  lit_22 = YPPsym((P)"alter");
  lit_23 = YPPlist(4,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"),YPPsym((P)"below"));
  T24 = YPfab_sig(YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  T23 = YPfab_gen(T24,LITREF(lit_22),LITREF(lit_23),YPfalse);
  VARSET(YgooScolsSseqxYalter,T23);
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_revX_0 = YPfab_met(FUNCODEREF(fun_revX_0),T25,LITREF(lit_0),LITREF(lit_24),sloc(49),YPfalse);
  T27 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T28 = fun_revX_0;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSmacrosYrevX,T26);
  lit_25 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPtrue,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_catX_1 = YPfab_met(FUNCODEREF(fun_catX_1),T29,LITREF(lit_2),LITREF(lit_25),sloc(50),YPfalse);
  T31 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T32 = fun_catX_1;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsSseqxYcatX,T30);
  lit_26 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_pushX_2 = YPfab_met(FUNCODEREF(fun_pushX_2),T33,LITREF(lit_4),LITREF(lit_26),sloc(51),YPfalse);
  T35 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T36 = fun_pushX_2;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsSseqxYpushX,T34);
  lit_27 = YPPlist(1,YPPsym((P)"l"));
  T38 = XCALL2(1,VARREF(YtT),VARREF(YLseqXG),VARREF(YLanyG));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),T38,Ynil);
  fun_popX_3 = YPfab_met(FUNCODEREF(fun_popX_3),T37,LITREF(lit_6),LITREF(lit_27),sloc(52),YPfalse);
  T40 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T41 = fun_popX_3;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooScolsSseqxYpopX,T39);
  lit_28 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"v"),YPPsym((P)"before"));
  T42 = YPfab_sig(YPPlist(3,VARREF(YLseqXG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  fun_insX_4 = YPfab_met(FUNCODEREF(fun_insX_4),T42,LITREF(lit_12),LITREF(lit_28),sloc(53),YPfalse);
  T44 = VARREF_OR(YgooScolsSseqxYinsX,YPfalse);
  T45 = fun_insX_4;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooScolsSseqxYinsX,T43);
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_del_valsX_5 = YPfab_met(FUNCODEREF(fun_del_valsX_5),T46,LITREF(lit_14),LITREF(lit_29),sloc(54),YPfalse);
  T48 = VARREF_OR(YgooScolsSseqxYdel_valsX,YPfalse);
  T49 = fun_del_valsX_5;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsSseqxYdel_valsX,T47);
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_del_dupsX_6 = YPfab_met(FUNCODEREF(fun_del_dupsX_6),T50,LITREF(lit_16),LITREF(lit_30),sloc(55),YPfalse);
  T52 = VARREF_OR(YgooScolsSseqxYdel_dupsX,YPfalse);
  T53 = fun_del_dupsX_6;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooScolsSseqxYdel_dupsX,T51);
  lit_31 = YPPsym((P)"into");
  lit_32 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_into_7 = YPfab_met(FUNCODEREF(fun_into_7),T54,LITREF(lit_31),LITREF(lit_32),sloc(57),YPfalse);
  T56 = VARREF_OR(YgooScolsScolYinto,YPfalse);
  T57 = fun_into_7;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolYinto,T55);
  lit_33 = YPPlist(4,YPPsym((P)"src"),YPPsym((P)"dst"),YPPsym((P)"from"),YPPsym((P)"below"));
  T58 = YPfab_sig(YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  fun_sub_setter_8 = YPfab_met(FUNCODEREF(fun_sub_setter_8),T58,LITREF(lit_8),LITREF(lit_33),sloc(64),YPfalse);
  T60 = VARREF_OR(YgooScolsSseqxYsub_setter,YPfalse);
  T61 = fun_sub_setter_8;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsSseqxYsub_setter,T59);
  lit_34 = YPPlist(3,YPPsym((P)"src"),YPPsym((P)"dst"),YPPsym((P)"from"));
  T62 = YPfab_sig(YPPlist(3,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  fun_subT_setter_9 = YPfab_met(FUNCODEREF(fun_subT_setter_9),T62,LITREF(lit_10),LITREF(lit_34),sloc(96),YPfalse);
  T64 = VARREF_OR(YgooScolsSseqxYsubT_setter,YPfalse);
  T65 = fun_subT_setter_9;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsSseqxYsubT_setter,T63);
  lit_35 = YPPlist(1,YPPsym((P)"items"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_sortX_10 = YPfab_met(FUNCODEREF(fun_sortX_10),T66,LITREF(lit_18),LITREF(lit_35),sloc(99),YPfalse);
  T68 = VARREF_OR(YgooScolsSseqxYsortX,YPfalse);
  T69 = fun_sortX_10;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsSseqxYsortX,T67);
  lit_36 = YPPlist(4,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"),YPPsym((P)"below"));
  T72 = YPfab_sig(YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  T71 = fun_alter_11 = YPfab_met(FUNCODEREF(fun_alter_11),T72,LITREF(lit_22),LITREF(lit_36),sloc(107),YPfalse);
  T75 = VARREF_OR(YgooScolsSseqxYalter,YPfalse);
  T76 = fun_alter_11;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  T73 = VARSET(YgooScolsSseqxYalter,T74);
  T70 = T73;
  return T70;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
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
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
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
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub*-setter", CVAR, &YgooScolsSseqxYsubT_setter},
  {"del-vals!", CVAR, &YgooScolsSseqxYdel_valsX},
  {"push!", CVAR, &YgooScolsSseqxYpushX},
  {"sort!", CVAR, &YgooScolsSseqxYsortX},
  {"---main-0---", PVAR, NULL},
  {"del-dups!", CVAR, &YgooScolsSseqxYdel_dupsX},
  {"pop!", CVAR, &YgooScolsSseqxYpopX},
  {"cat!", CVAR, &YgooScolsSseqxYcatX},
  {"ins!", CVAR, &YgooScolsSseqxYinsX},
  {"sub-setter", CVAR, &YgooScolsSseqxYsub_setter},
  {"alter", CVAR, &YgooScolsSseqxYalter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sub*-setter", NULL},
  {"sort-by!", NULL},
  {"push!", NULL},
  {"sort!", NULL},
  {"del-dups!", NULL},
  {"sub-setter", NULL},
  {"pop!", NULL},
  {"del-vals!", NULL},
  {"cat!", NULL},
  {"ins!", NULL},
  {"rev!", NULL},
  {"alter", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSseqx;
MODULE_INFO module_info_gooScolsSseqx = {
  "goo/cols/seqx",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooScolsSseqx (void);

void load_module_gooScolsSseqx (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();

  (P)YgooScolsSseqxY___main_0___();

}

/* END OF GENERATED CODE. */
