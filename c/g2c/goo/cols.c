/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Yerror,"goo/boot","error");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YLstrG,"goo/boot","<str>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YOlit,"goo/boot","@lit");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
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
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YOdo,"goo/boot","@do");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YLboxG,"goo/boot","<box>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ytail,"goo/boot","tail");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLlogG,"goo/boot","<log>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooScolsY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

P YgooScolsY___main_0___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSopts;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScolsSopts},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSflat},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSmap},
  {&module_info_gooScolsSrange},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSstep},
  {&module_info_gooScolsSstr},
  {&module_info_gooScolsStab},
  {&module_info_gooScolsSrep},
  {&module_info_gooScolsSvec},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSzip},
  {&module_info_gooScolsScycle},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
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
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
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
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
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
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
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
  {"map2", &module_info_gooSmacros, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
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
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
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
  {"<sym>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
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
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
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
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
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
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
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
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
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
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
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
  {"pop", &module_info_gooScolsSseq, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
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
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
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
  {"fold", &module_info_gooScolsScol, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
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
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"case-insensitive-string-equal", NULL},
  {"all?", NULL},
  {"key-test", NULL},
  {"elt!", NULL},
  {"tab-shrink-threshold", NULL},
  {"sub*-setter", NULL},
  {"cat2", NULL},
  {"fab", NULL},
  {"fab-fill!", NULL},
  {"now-setter", NULL},
  {"line-pair", NULL},
  {"del-dups", NULL},
  {"sort-by!", NULL},
  {"first-then", NULL},
  {"into", NULL},
  {"col-res-type", NULL},
  {"nil", NULL},
  {"range-check?", NULL},
  {"sub*", NULL},
  {"find", NULL},
  {"map2", NULL},
  {"<vec>", NULL},
  {"key-type", NULL},
  {"rep-nul", NULL},
  {"repeat", NULL},
  {"case-insensitive-string-hash", NULL},
  {"list", NULL},
  {"<list>", NULL},
  {"dup", NULL},
  {"empty", NULL},
  {"push!", NULL},
  {"tab-growth-factor", NULL},
  {"any?", NULL},
  {"len/fill-setter", NULL},
  {"add!", NULL},
  {"sort!", NULL},
  {"num-to-str-base", NULL},
  {"fab-into", NULL},
  {"assqn", NULL},
  {"items", NULL},
  {"del-vals", NULL},
  {"head-setter", NULL},
  {"cat", NULL},
  {"<str-tab>", NULL},
  {"elt-default", NULL},
  {"tab-hash", NULL},
  {"vec", NULL},
  {"<each>", NULL},
  {"rep-into!", NULL},
  {"<flat>", NULL},
  {"<tup>", NULL},
  {"last", NULL},
  {"do-key-vals", NULL},
  {"del-dups!", NULL},
  {"head", NULL},
  {"sub-setter", NULL},
  {"add", NULL},
  {"from", NULL},
  {"rev", NULL},
  {"pop!", NULL},
  {"find-or", NULL},
  {"fill", NULL},
  {"id-hash", NULL},
  {"elt-type", NULL},
  {"<tab>", NULL},
  {"prefix?", NULL},
  {"col-res", NULL},
  {"nxt", NULL},
  {"map", NULL},
  {"pair", NULL},
  {"range", NULL},
  {"cycle", NULL},
  {"reject", NULL},
  {"<set>", NULL},
  {"below", NULL},
  {"tup", NULL},
  {"do3", NULL},
  {"len-setter", NULL},
  {"3rd", NULL},
  {"vals-to-str", NULL},
  {"ascii-limit", NULL},
  {"mem?", NULL},
  {"pos", NULL},
  {"sub", NULL},
  {"now-key", NULL},
  {"nul", NULL},
  {"lst*", NULL},
  {"<lst>", NULL},
  {"zip", NULL},
  {"del-vals!", NULL},
  {"str-to-num", NULL},
  {"<step>", NULL},
  {"<zip>", NULL},
  {"fold+", NULL},
  {"fabs", NULL},
  {"zap!", NULL},
  {"range-by", NULL},
  {"elt-setter", NULL},
  {"line-list-of", NULL},
  {"2nd", NULL},
  {"tail-setter", NULL},
  {"now", NULL},
  {"map-keyed", NULL},
  {"lst", NULL},
  {"pick", NULL},
  {"do", NULL},
  {"all2?", NULL},
  {"nul?", NULL},
  {"rep-elt", NULL},
  {"line-of", NULL},
  {"<seq.>", NULL},
  {"elt-or", NULL},
  {"pop", NULL},
  {"rep-len", NULL},
  {"fab-elt-setter", NULL},
  {"<range>", NULL},
  {"tail", NULL},
  {"do2", NULL},
  {"<line>", NULL},
  {"<seq>", NULL},
  {"1st", NULL},
  {"join", NULL},
  {"*print-base*", NULL},
  {"cat!", NULL},
  {"empty?", NULL},
  {"char->ascii", NULL},
  {"unzip", NULL},
  {"zap", NULL},
  {"low-elt-setter", NULL},
  {"del!", NULL},
  {"line-list", NULL},
  {"ins!", NULL},
  {"<opts>", NULL},
  {"do-keyed", NULL},
  {"sort-by", NULL},
  {"str", NULL},
  {"fold", NULL},
  {"<map>", NULL},
  {"col", NULL},
  {"fin?", NULL},
  {"keys", NULL},
  {"rep-fill!", NULL},
  {"<col.>", NULL},
  {"each", NULL},
  {"<line-list>", NULL},
  {"range-check", NULL},
  {"elt", NULL},
  {"rev!", NULL},
  {"push", NULL},
  {"low-elt", NULL},
  {"rep-fab", NULL},
  {"tab-growth-threshold", NULL},
  {"any2?", NULL},
  {"enum", NULL},
  {"elts", NULL},
  {"def-list", NULL},
  {"<col>", NULL},
  {"alter", NULL},
  {"<cycle>", NULL},
  {"suffix?", NULL},
  {"num-to-str", NULL},
  {"rep-elt-setter", NULL},
  {"ascii-whitespaces", NULL},
  {"sort", NULL},
  {"ins", NULL},
  {"del", NULL},
  {"fill!", NULL},
  {"<rep>", NULL},
  {"finds", NULL},
  {"split", NULL},
  {"len", NULL},
  {"assq", NULL},
  {"<enum>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScols;
MODULE_INFO module_info_gooScols = {
  "goo/cols",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooScolsSopts (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSflat (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSmap (void);
extern void load_module_gooScolsSrange (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSstep (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooScolsStab (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_gooScolsSvec (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSzip (void);
extern void load_module_gooScolsScycle (void);

/* EXPRESSION: */

extern void load_module_gooScols (void);

void load_module_gooScols (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooScolsSopts();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSflat();
  load_module_gooScolsSlst();
  load_module_gooScolsSmap();
  load_module_gooScolsSrange();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSstep();
  load_module_gooScolsSstr();
  load_module_gooScolsStab();
  load_module_gooScolsSrep();
  load_module_gooScolsSvec();
  load_module_gooScolsStup();
  load_module_gooScolsSzip();
  load_module_gooScolsScycle();

  (P)YgooScolsY___main_0___();

}

/* END OF GENERATED CODE. */
