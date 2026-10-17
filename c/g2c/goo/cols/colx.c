/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/colx");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/colx */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYlogn,"goo/math","logn");
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
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ynil,"goo/boot","nil");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
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
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooScolsScolxYDnot_found,"goo/cols/colx","$not-found");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLstrG,"goo/boot","<str>");
EXT(YLintG,"goo/boot","<int>");
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
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
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
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
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
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPtnul,"goo/boot","%tnul");
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
DEF(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSclassYPprop,"goo/class","%prop");
DEF(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
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
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
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
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytail,"goo/boot","tail");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
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
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
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
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLcolG,"goo/boot","<col>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
DEF(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_13);
DEFLIT(lit_4);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_10);
DEFLIT(lit_12);
DEFLIT(lit_9);
DEFLIT(lit_14);
DEFLIT(lit_26);
DEFLIT(lit_16);
DEFLIT(lit_25);
DEFLIT(lit_28);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_21);
DEFLIT(lit_2);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_8);
DEFLIT(lit_17);
DEFLIT(lit_11);
DEFLIT(lit_29);
DEFLIT(lit_27);
DEFLIT(lit_22);
DEFLIT(lit_5);
DEFLIT(lit_18);
DEFLIT(lit_15);
DEFLIT(lit_3);
DEFLIT(lit_23);

/* FUNCTIONS: */

LOCFOR(fun_fab_elt_setter_0);
LOCFOR(fun_low_elt_setter_1);
LOCFOR(fun_addX_2);
LOCFOR(fun_eltX_3);
LOCFOR(fun_delX_4);
LOCFOR(fun_zapX_5);
LOCFOR(fun_fillX_6);
LOCFOR(fun_into_7);
extern P YgooScolsScolxY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_fab_elt_setter_0) {
  P value_,c_,key_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(c_, 1);
  ARG(key_, 2);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),value_,c_,key_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_low_elt_setter_1) {
  P value_,c_,key_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(c_, 1);
  ARG(key_, 2);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),value_,c_,key_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_addX_2) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooScolsScolYadd),c_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_eltX_3) {
  P c_,k_,f_;
  P xF3130;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(c_, 0);
  ARG(k_, 1);
  ARG(f_, 2);
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,k_,VARREF(YgooScolsScolxYDnot_found));
  xF3130 = T4;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),xF3130,VARREF(YgooScolsScolxYDnot_found));
  if (T1 != YPfalse) {
    T3 = CALL0(1,f_);
    T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T3,c_,k_);
    T0 = T2;
  } else {
    T0 = xF3130;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_delX_4) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooScolsScolYdel),c_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_zapX_5) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooScolsScolYzap),c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fillX_6) {
  P dst_,val_;
  P dsF3131;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  dsF3131 = T4;
  LOOP_71: {
    P a71_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),dsF3131);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      CALL2(1,VARREF(YgooScolsScolYnow_setter),val_,dsF3131);
      T3 = CALL1(1,VARREF(YgooScolsScolYnxt),dsF3131);
      a71_0 = T3;
      dsF3131 = a71_0;
      goto LOOP_71;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_into_7) {
  P dst_,src_;
  P ssF3132;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  ssF3132 = T6;
  LOOP_72: {
    P a72_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ssF3132);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYnow),ssF3132);
      T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),ssF3132);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T2,dst_,T3);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),ssF3132);
      a72_0 = T5;
      ssF3132 = a72_0;
      goto LOOP_72;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsScolxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
DEFCREGS();
  lit_0 = YPPsym((P)"elt-setter");
  lit_1 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"x"),YPPsym((P)"k"));
  T1 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooScolsScolxYelt_setter,T0);
  lit_2 = YPPsym((P)"into");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooScolsScolYinto,T2);
  lit_4 = YPPsym((P)"add!");
  lit_5 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooScolsScolxYaddX,T4);
  lit_6 = YPPsym((P)"elt!");
  lit_7 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"k"),YPPsym((P)"f"));
  T7 = YPfab_sig(YPPlist(3,VARREF(YLcolXG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsScolxYeltX,T6);
  lit_8 = YPPsym((P)"del!");
  lit_9 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooScolsScolxYdelX,T8);
  lit_10 = YPPsym((P)"zap!");
  lit_11 = YPPlist(1,YPPsym((P)"c"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLcolXG)),YPfalse,YPint((P)1),VARREF(YLcolXG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_10),LITREF(lit_11),YPfalse);
  VARSET(YgooScolsScolxYzapX,T10);
  lit_12 = YPPsym((P)"len-setter");
  lit_13 = YPPlist(2,YPPsym((P)"new-len"),YPPsym((P)"c"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLcolXG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooScolsScolxYlen_setter,T12);
  lit_14 = YPPsym((P)"len/fill-setter");
  lit_15 = YPPlist(3,YPPsym((P)"new-len"),YPPsym((P)"c"),YPPsym((P)"default"));
  T15 = YPfab_sig(YPPlist(3,VARREF(YLintG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_14),LITREF(lit_15),YPfalse);
  VARSET(YgooScolsScolxYlenSfill_setter,T14);
  lit_16 = YPPsym((P)"fill!");
  lit_17 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T17 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_16),LITREF(lit_17),YPfalse);
  VARSET(YgooScolsScolxYfillX,T16);
  lit_18 = YPPsym((P)"low-elt-setter");
  lit_19 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"x"),YPPsym((P)"k"));
  T19 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_18),LITREF(lit_19),YPfalse);
  VARSET(YgooScolsScolxYlow_elt_setter,T18);
  lit_20 = YPPsym((P)"fab-elt-setter");
  lit_21 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"c"),YPPsym((P)"key"));
  T20 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_0 = YPfab_met_inlineable(FUNCODEREF(fun_fab_elt_setter_0),T20,LITREF(lit_20),LITREF(lit_21),sloc(23),YPfalse);
  T22 = VARREF_OR(YgooScolsScolYfab_elt_setter,YPfalse);
  T23 = fun_fab_elt_setter_0;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooScolsScolYfab_elt_setter,T21);
  lit_22 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"c"),YPPsym((P)"key"));
  T24 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_1 = YPfab_met_inlineable(FUNCODEREF(fun_low_elt_setter_1),T24,LITREF(lit_18),LITREF(lit_22),sloc(26),YPfalse);
  T26 = VARREF_OR(YgooScolsScolxYlow_elt_setter,YPfalse);
  T27 = fun_low_elt_setter_1;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooScolsScolxYlow_elt_setter,T25);
  lit_23 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  fun_addX_2 = YPfab_met(FUNCODEREF(fun_addX_2),T28,LITREF(lit_4),LITREF(lit_23),sloc(30),YPfalse);
  T30 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T31 = fun_addX_2;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooScolsScolxYaddX,T29);
  lit_24 = YPPlist(1,YPsb((P)"not found"));
  VARSET(YgooScolsScolxYDnot_found,LITREF(lit_24));
  lit_25 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"k"),YPPsym((P)"f"));
  T32 = YPfab_sig(YPPlist(3,VARREF(YLcolXG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_eltX_3 = YPfab_met(FUNCODEREF(fun_eltX_3),T32,LITREF(lit_6),LITREF(lit_25),sloc(34),YPfalse);
  T34 = VARREF_OR(YgooScolsScolxYeltX,YPfalse);
  T35 = fun_eltX_3;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsScolxYeltX,T33);
  lit_26 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  fun_delX_4 = YPfab_met(FUNCODEREF(fun_delX_4),T36,LITREF(lit_8),LITREF(lit_26),sloc(38),YPfalse);
  T38 = VARREF_OR(YgooScolsScolxYdelX,YPfalse);
  T39 = fun_delX_4;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsScolxYdelX,T37);
  lit_27 = YPPlist(1,YPPsym((P)"c"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLcolXG)),YPfalse,YPint((P)1),VARREF(YLcolXG),Ynil);
  fun_zapX_5 = YPfab_met(FUNCODEREF(fun_zapX_5),T40,LITREF(lit_10),LITREF(lit_27),sloc(40),YPfalse);
  T42 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T43 = fun_zapX_5;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsScolxYzapX,T41);
  lit_28 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"val"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  fun_fillX_6 = YPfab_met(FUNCODEREF(fun_fillX_6),T44,LITREF(lit_16),LITREF(lit_28),sloc(42),YPfalse);
  T46 = VARREF_OR(YgooScolsScolxYfillX,YPfalse);
  T47 = fun_fillX_6;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsScolxYfillX,T45);
  lit_29 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLcolXG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolXG),Ynil);
  T49 = fun_into_7 = YPfab_met(FUNCODEREF(fun_into_7),T50,LITREF(lit_2),LITREF(lit_29),sloc(49),YPfalse);
  T53 = VARREF_OR(YgooScolsScolYinto,YPfalse);
  T54 = fun_into_7;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  T51 = VARSET(YgooScolsScolYinto,T52);
  T48 = T51;
  return T48;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSchr;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
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
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
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
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
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
  {"key-type", &module_info_gooScolsScol, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
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
  {"t=", &module_info_gooStypes, NULL},
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
  {"ceil/", &module_info_gooSmath, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
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
  {"floor/", &module_info_gooSmath, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
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
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
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
  {"%prop", &module_info_gooSclass, NULL},
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
  {"%class-children", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
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
  {"<seq.>", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
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
  {"for", &module_info_gooSmacros, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
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
  {"%rlen", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
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
  {"t*", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
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
  {"@rev!", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
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
  {"elt!", CVAR, &YgooScolsScolxYeltX},
  {"len/fill-setter", CVAR, &YgooScolsScolxYlenSfill_setter},
  {"add!", CVAR, &YgooScolsScolxYaddX},
  {"$not-found", CVAR, &YgooScolsScolxYDnot_found},
  {"---main-0---", PVAR, NULL},
  {"len-setter", CVAR, &YgooScolsScolxYlen_setter},
  {"zap!", CVAR, &YgooScolsScolxYzapX},
  {"elt-setter", CVAR, &YgooScolsScolxYelt_setter},
  {"low-elt-setter", CVAR, &YgooScolsScolxYlow_elt_setter},
  {"del!", CVAR, &YgooScolsScolxYdelX},
  {"fill!", CVAR, &YgooScolsScolxYfillX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"elt!", NULL},
  {"into", NULL},
  {"len/fill-setter", NULL},
  {"add!", NULL},
  {"len-setter", NULL},
  {"zap!", NULL},
  {"elt-setter", NULL},
  {"low-elt-setter", NULL},
  {"del!", NULL},
  {"fill!", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsScolx;
MODULE_INFO module_info_gooScolsScolx = {
  "goo/cols/colx",
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
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);

/* EXPRESSION: */

extern void load_module_gooScolsScolx (void);

void load_module_gooScolsScolx (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();

  (P)YgooScolsScolxY___main_0___();

}

/* END OF GENERATED CODE. */
