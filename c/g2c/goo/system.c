/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/system");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: goo/system */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
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
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
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
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
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
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
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
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
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
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
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
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YOcat2,"goo/boot","@cat2");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooSsystemYpathname_error,"goo/system","pathname-error");
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
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
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
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YOlit,"goo/boot","@lit");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOelt,"goo/boot","@elt");
EXT(YOpick,"goo/boot","@pick");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
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
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
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
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
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
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooSsystemYdirectory_error,"goo/system","directory-error");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
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
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YOdel_dups,"goo/boot","@del-dups");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
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
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
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
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
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
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
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
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSsystemYtime,"goo/system","time");
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
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
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
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
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
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
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
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
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
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yopts_count,"goo/boot","opts-count");
DEF(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
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
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYT,"goo/math","*");
DEF(YgooSsystemYos_val,"goo/system","os-val");
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
DEF(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_117);
DEFLIT(lit_25);
DEFLIT(lit_60);
DEFLIT(lit_6);
DEFLIT(lit_111);
DEFLIT(lit_59);
DEFLIT(lit_5);
DEFLIT(lit_51);
DEFLIT(lit_71);
DEFLIT(lit_37);
DEFLIT(lit_93);
DEFLIT(lit_83);
DEFLIT(lit_118);
DEFLIT(lit_35);
DEFLIT(lit_92);
DEFLIT(lit_88);
DEFLIT(lit_7);
DEFLIT(lit_34);
DEFLIT(lit_84);
DEFLIT(lit_48);
DEFLIT(lit_39);
DEFLIT(lit_49);
DEFLIT(lit_61);
DEFLIT(lit_100);
DEFLIT(lit_120);
DEFLIT(lit_50);
DEFLIT(lit_42);
DEFLIT(lit_31);
DEFLIT(lit_24);
DEFLIT(lit_64);
DEFLIT(lit_106);
DEFLIT(lit_20);
DEFLIT(lit_78);
DEFLIT(lit_22);
DEFLIT(lit_101);
DEFLIT(lit_14);
DEFLIT(lit_96);
DEFLIT(lit_74);
DEFLIT(lit_3);
DEFLIT(lit_69);
DEFLIT(lit_1);
DEFLIT(lit_114);
DEFLIT(lit_9);
DEFLIT(lit_68);
DEFLIT(lit_76);
DEFLIT(lit_27);
DEFLIT(lit_44);
DEFLIT(lit_54);
DEFLIT(lit_13);
DEFLIT(lit_36);
DEFLIT(lit_77);
DEFLIT(lit_91);
DEFLIT(lit_38);
DEFLIT(lit_102);
DEFLIT(lit_46);
DEFLIT(lit_79);
DEFLIT(lit_16);
DEFLIT(lit_19);
DEFLIT(lit_26);
DEFLIT(lit_112);
DEFLIT(lit_33);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_73);
DEFLIT(lit_99);
DEFLIT(lit_95);
DEFLIT(lit_29);
DEFLIT(lit_98);
DEFLIT(lit_109);
DEFLIT(lit_28);
DEFLIT(lit_81);
DEFLIT(lit_41);
DEFLIT(lit_119);
DEFLIT(lit_97);
DEFLIT(lit_63);
DEFLIT(lit_15);
DEFLIT(lit_17);
DEFLIT(lit_58);
DEFLIT(lit_72);
DEFLIT(lit_67);
DEFLIT(lit_62);
DEFLIT(lit_104);
DEFLIT(lit_12);
DEFLIT(lit_105);
DEFLIT(lit_75);
DEFLIT(lit_21);
DEFLIT(lit_80);
DEFLIT(lit_30);
DEFLIT(lit_103);
DEFLIT(lit_86);
DEFLIT(lit_90);
DEFLIT(lit_116);
DEFLIT(lit_45);
DEFLIT(lit_53);
DEFLIT(lit_110);
DEFLIT(lit_11);
DEFLIT(lit_47);
DEFLIT(lit_18);
DEFLIT(lit_52);
DEFLIT(lit_32);
DEFLIT(lit_94);
DEFLIT(lit_115);
DEFLIT(lit_66);
DEFLIT(lit_113);
DEFLIT(lit_107);
DEFLIT(lit_57);
DEFLIT(lit_87);
DEFLIT(lit_108);
DEFLIT(lit_89);
DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_40);
DEFLIT(lit_10);
DEFLIT(lit_82);
DEFLIT(lit_43);
DEFLIT(lit_70);
DEFLIT(lit_85);
DEFLIT(lit_55);
DEFLIT(lit_65);
DEFLIT(lit_0);
DEFLIT(lit_56);

/* FUNCTIONS: */

FUNFOR(YgooSsystemYtime);
LOCFOR(fun_os_name_1);
LOCFOR(fun_os_val_2);
LOCFOR(fun_os_val_setter_3);
LOCFOR(fun_process_id_4);
LOCFOR(fun_base_path_5);
LOCFOR(fun_fab_path_6);
LOCFOR(fun_add_src_path_7);
LOCFOR(fun_add_goo_root_path_8);
LOCFOR(fun_add_goo_personal_root_path_9);
LOCFOR(fun_add_tmp_path_10);
LOCFOR(fun_add_build_path_11);
FUNFOR(YgooSsystemYgoo_filenameQ);
FUNFOR(YgooSsystemYgoo_filename);
FUNFOR(YgooSsystemYgooc_filenameQ);
FUNFOR(YgooSsystemYgooc_filename);
FUNFOR(YgooSsystemYc_filename);
FUNFOR(YgooSsystemYobj_filename);
FUNFOR(YgooSsystemYexe_filename);
LOCFOR(fun_file_mtime_19);
FUNFOR(YgooSsystemYfile_existsQ);
FUNFOR(YgooSsystemYfile_type);
FUNFOR(YgooSsystemYcreate_directory);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_file_copy_27);
FUNFOR(YgooSsystemYso_load);
FUNFOR(YgooSsystemYpathname_error);
LOCFOR(fun_30);
FUNFOR(YgooSsystemYpathname_to_components);
LOCFOR(fun_32);
FUNFOR(YgooSsystemYcomponents_to_pathname);
FUNFOR(YgooSsystemYlabel_components);
FUNFOR(YgooSsystemYhierarchical_components);
FUNFOR(YgooSsystemYcomponents_last);
FUNFOR(YgooSsystemYcomponents_basename);
FUNFOR(YgooSsystemYcomponents_parent_directory);
FUNFOR(YgooSsystemYparent_directory);
FUNFOR(YgooSsystemYdirectory_error);
LOCFOR(fun_ensure_41);
FUNFOR(YgooSsystemYprobe_directory);
FUNFOR(YgooSsystemYfind_goo_file_at);
LOCFOR(fun_44);
FUNFOR(YgooSsystemYfind_goo_file_in_path);
extern P YgooSsystemY___main_0___ ();
extern P YgooSsystemY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

FUNCODEDEF(YgooSsystemYtime) {
  P tF3877;
  P xF3876;
  P xF3875;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YgooSsystemYPtime();
  xF3875 = T2;
  xF3876 = xF3875;
  tF3877 = (P)1;
  T1 = (P)YPiLL(xF3876,(P)2);
  T0 = (P)YPiv(T1,tF3877);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_os_name_1) {
  P T0,T1;
LINK_STACK();
  T1 = (P)YgooSsystemYPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_os_val_2) {
  P s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  T2 = (P)YPsu(s_);
  T1 = (P)YgooSsystemYPos_val(T2);
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_os_val_setter_3) {
  P v_,s_;
  P T0,T1;
LINK_STACK();
  ARG(v_, 0);
  ARG(s_, 1);
  T0 = (P)YPsu(v_);
  T1 = (P)YPsu(s_);
  (P)YgooSsystemYPos_val_setter(T0,T1);
UNLINK_STACK();
  RET(v_);
}

LOCCODEDEF(fun_process_id_4) {
  P tF3880;
  P xF3879;
  P xF3878;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YgooSsystemYPpid();
  xF3878 = T2;
  xF3879 = xF3878;
  tF3880 = (P)1;
  T1 = (P)YPiLL(xF3879,(P)2);
  T0 = (P)YPiv(T1,tF3880);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_base_path_5) {
  P filename_;
  P iF3881;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(filename_, 0);
  T11 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
  iF3881 = T10;
  LOOP_170: {
    P a170_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3881,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = LITREF(lit_15);
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),filename_,iF3881);
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
      T3 = CALL2(1,VARREF(YgooSlogYE),T4,T5);
      if (T3 != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSmathYA),iF3881,YPint((P)1));
        T6 = CALL3(1,VARREF(YgooScolsSseqYsub),filename_,YPint((P)0),T7);
        T2 = T6;
      } else {
        T9 = CALL2(1,VARREF(YgooSmathY_),iF3881,YPint((P)1));
        a170_0 = T9;
        iF3881 = a170_0;
        goto LOOP_170;
        T2 = T8;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_path_6) {
  P dirs_;
  P T0;
LINK_STACK();
  NARGS(dirs_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),dirs_,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_src_path_7) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_29),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_goo_root_path_8) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_goo_personal_root_path_9) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_tmp_path_10) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),LITREF(lit_15),LITREF(lit_36),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_build_path_11) {
  P builddir_,relpath_;
  P T0;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
  T0 = CALL4(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_39),builddir_,relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filenameQ) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgoo_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filename) {
  P name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),name_);
  if (T1 != YPfalse) {
    T0 = name_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTgoo_extensionT));
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgooc_filenameQ) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgooc_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgooc_filename) {
  P name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),name_);
  if (T1 != YPfalse) {
    T0 = name_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTgooc_extensionT));
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYc_filename) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYobj_filename) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTobj_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYexe_filename) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTexe_extensionT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_file_mtime_19) {
  P filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(filename_, 0);
  T2 = (P)YPsu(filename_);
  T1 = (P)YgooSsystemYPfile_mtime(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_existsQ) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YgooSsystemYPfile_existsQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_type) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YgooSsystemYPfile_type(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcreate_directory) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YgooSsystemYPcreate_directory(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_23) {
  P cF3882;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  LOOP_171: {
    T7 = BOXGET(FREEREF(2));
    T6 = CALL1(1,VARREF(YgooSioSportYget),T7);
    cF3882 = T6;
    T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3882);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T4 = BOXGET(FREEREF(0));
      CALL2(1,VARREF(YgooSioSportYput),T4,cF3882);
      goto LOOP_171;
      T1 = T5;
    } else {
      T1 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_24) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_25) {
  P dst_portF3883;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  dst_portF3883 = YPfalse;
  dst_portF3883 = BOXFAB(dst_portF3883);
  T3 = FUNFAB(fun_23,3,dst_portF3883,FREEREF(2),FREEREF(0));
  T4 = FUNFAB(fun_24,1,dst_portF3883);
  T2 = with_cleanup(T3,T4);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_26) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_file_copy_27) {
  P src_,dst_;
  P src_portF3884;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  src_portF3884 = YPfalse;
  src_portF3884 = BOXFAB(src_portF3884);
  T2 = FUNFAB(fun_25,3,src_portF3884,src_,dst_);
  T3 = FUNFAB(fun_26,1,src_portF3884);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooSsystemYso_load) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = (P)YPsu(name_);
  T0 = (P)YgooSsystemYPload(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYpathname_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSsystemYLpathname_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_30) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(component_, 0);
  T1 = CALL2(1,VARREF(YgooSlogYE),component_,LITREF(lit_15));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_77);
  } else {
    T3 = CALL2(1,VARREF(YgooSlogYE),component_,LITREF(lit_78));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_79);
    } else {
      T5 = CALL2(1,VARREF(YgooSlogYE),component_,LITREF(lit_80));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_81);
      } else {
        if (YPtrue != YPfalse) {
          T6 = component_;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYpathname_to_components) {
  P pathname_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(pathname_, 0);
  T2 = pathname_;
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_75));
  } else {
  }
  T6 = pathname_;
  T5 = CALL1(1,VARREF(YgooSmacrosYlast),T6);
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T7);
  if (T4 != YPfalse) {
    T10 = pathname_;
    T13 = pathname_;
    T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T9 = CALL3(1,VARREF(YgooScolsSseqYsub),T10,YPint((P)0),T11);
    T8 = pathname_ = T9;
  } else {
  }
  T15 = fun_30;
  T17 = pathname_;
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSseqYsplit),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

LOCCODEDEF(fun_32) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(component_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_77));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_79));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_86);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_81));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_87);
      } else {
        if (YPtrue != YPfalse) {
          T6 = component_;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_to_pathname) {
  P components_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(components_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),components_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_84));
  } else {
  }
  T4 = fun_32;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,components_);
  T2 = CALL2(1,VARREF(YgooScolsSseqYjoin),T3,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YgooSsystemYlabel_components) {
  P components_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(components_, 0);
  T2 = CALL1(1,VARREF(Yhead),components_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),components_);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T0 = T3;
  } else {
    T0 = Ynil;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYhierarchical_components) {
  P components_;
  P resultF3885;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(components_, 0);
  T4 = CALL1(1,VARREF(Yhead),components_);
  T3 = CALL2(1,VARREF(YisaQ),T4,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL1(1,VARREF(Ytail),components_);
    T2 = T5;
  } else {
    T2 = components_;
  }
  resultF3885 = T2;
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),resultF3885);
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_92),components_);
  } else {
  }
UNLINK_STACK();
  RET(resultF3885);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF3886;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(components_, 0);
  T4 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T3);
  lastF3886 = T2;
  T0 = CALL2(1,VARREF(YisaQ),lastF3886,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_95),components_);
  } else {
  }
UNLINK_STACK();
  QRET(lastF3886);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF3890;
  P countF3889;
  P hierF3888;
  P labelF3887;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(components_, 0);
  T12 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF3887 = T12;
  T11 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF3888 = T11;
  T10 = CALL1(1,VARREF(YgooStypesYlen),hierF3888);
  countF3889 = T10;
  T9 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF3888);
  lastF3890 = T9;
  T1 = CALL2(1,VARREF(YisaQ),lastF3890,VARREF(YLstrG));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_98),components_);
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF3889,YPint((P)1));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYcat),labelF3887,LITREF(lit_99));
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmathY_),countF3889,YPint((P)1));
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF3888,YPint((P)0),T8);
    T6 = CALL2(1,VARREF(YgooSmacrosYcat),labelF3887,T7);
    T3 = T6;
  }
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(YgooSsystemYcomponents_parent_directory) {
  P components_;
  P lastF3891;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(components_, 0);
  T8 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF3891 = T8;
  T1 = CALL2(1,VARREF(YisaQ),lastF3891,VARREF(YLstrG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),lastF3891,LITREF(lit_77));
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_102));
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSmacrosYcat),components_,LITREF(lit_103));
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYparent_directory) {
  P name_;
  P componentsF3892;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T2 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF3892 = T2;
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF3892);
  T0 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYdirectory_error) {
  P msg_,name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  ARG(name_, 1);
  T2 = CALL1(1,VARREF(Ylst),name_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSsystemYLdirectory_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),name_,VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ensure_41) {
  P c_;
  P nF3893;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  T15 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T14 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T15);
  nF3893 = T14;
  T1 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF3893);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSsystemYfile_type),nF3893);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_113));
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_114),nF3893);
      T2 = T6;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T9 = CALL1(1,VARREF(YgooSsystemYcomponents_last),c_);
    T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLstrG));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),c_);
      CALL1(0,FREEREF(1),T10);
      T11 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF3893);
      T7 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T13 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_115),nF3893);
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYprobe_directory) {
  P name_;
  P ensureF3897;
  P hierF3896;
  P labelF3895;
  P componentsF3894;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF3894 = T4;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF3894);
  labelF3895 = T3;
  T2 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF3894);
  hierF3896 = T2;
  T1 = FUNSHELL(1,fun_ensure_41,2);
  ensureF3897 = T1;
  FUNINIT(ensureF3897, 2,labelF3895,ensureF3897);
  T0 = CALL1(1,ensureF3897,hierF3896);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P gooc_foundF3902;
  P goo_foundF3901;
  P gooc_fileF3900;
  P goo_fileF3899;
  P base_fileF3898;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
  T19 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF3898 = T19;
  T18 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF3898);
  goo_fileF3899 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF3898);
  gooc_fileF3900 = T17;
  T16 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF3899);
  goo_foundF3901 = T16;
  T15 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF3900);
  gooc_foundF3902 = T15;
  T2 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF3898);
  if (T2 != YPfalse) {
    T1 = goo_foundF3901;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T0 = goo_fileF3899;
  } else {
    T5 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF3898);
    if (T5 != YPfalse) {
      T4 = gooc_foundF3902;
    } else {
      T4 = YPfalse;
    }
    if (T4 != YPfalse) {
      T3 = gooc_fileF3900;
    } else {
      if (goo_foundF3901 != YPfalse) {
        T7 = gooc_foundF3902;
      } else {
        T7 = YPfalse;
      }
      if (T7 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF3899);
        T11 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF3900);
        T9 = CALL2(1,VARREF(YgooSmagYG),T10,T11);
        if (T9 != YPfalse) {
          T8 = goo_fileF3899;
        } else {
          T8 = gooc_fileF3900;
        }
        T6 = T8;
      } else {
        if (gooc_foundF3902 != YPfalse) {
          T12 = gooc_fileF3900;
        } else {
          if (goo_foundF3901 != YPfalse) {
            T13 = goo_fileF3899;
          } else {
            if (YPtrue != YPfalse) {
              T14 = YPfalse;
            } else {
              T14 = YPfalse;
            }
            T13 = T14;
          }
          T12 = T13;
        }
        T6 = T12;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_44) {
  P return_;
  P fileF3905;
  P pathF3904;
  P x_1474F3903;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_1474F3903 = T8;
  LOOP_172: {
    P a172_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1474F3903);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1474F3903);
      pathF3904 = T7;
      T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(1),pathF3904);
      fileF3905 = T6;
      if (fileF3905 != YPfalse) {
        T3 = CALL1(0,return_,fileF3905);
      } else {
      }
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1474F3903);
      a172_0 = T5;
      x_1474F3903 = a172_0;
      goto LOOP_172;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_in_path) {
  P fname_,search_paths_;
  P T0,T1;
LINK_STACK();
  ARG(fname_, 0);
  ARG(search_paths_, 1);
  T1 = FUNFAB(fun_44,2,search_paths_,fname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF3907;
  P env_rootF3906;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91;
DEFCREGS();
  lit_0 = YPPsym((P)"time");
  lit_1 = Ynil;
  T0 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSsystemYtime = YPfab_met(FUNCODEREF(YgooSsystemYtime),T0,LITREF(lit_0),LITREF(lit_1),sloc(22),YPfalse);
  T1 = YgooSsystemYtime;
  VARSET(YgooSsystemYtime,T1);
  lit_2 = YPPsym((P)"os-name");
  T2 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_1 = YPfab_met(FUNCODEREF(fun_os_name_1),T2,LITREF(lit_2),LITREF(lit_1),sloc(35),YPfalse);
  T4 = VARREF_OR(YgooSsystemYos_name,YPfalse);
  T5 = fun_os_name_1;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSsystemYos_name,T3);
  lit_3 = YPPsym((P)"os-val");
  lit_4 = YPPlist(1,YPPsym((P)"s"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_2 = YPfab_met(FUNCODEREF(fun_os_val_2),T6,LITREF(lit_3),LITREF(lit_4),sloc(40),YPfalse);
  T8 = VARREF_OR(YgooSsystemYos_val,YPfalse);
  T9 = fun_os_val_2;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSsystemYos_val,T7);
  lit_5 = YPPsym((P)"os-val-setter");
  lit_6 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"s"));
  T10 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_3 = YPfab_met(FUNCODEREF(fun_os_val_setter_3),T10,LITREF(lit_5),LITREF(lit_6),sloc(44),YPfalse);
  T12 = VARREF_OR(YgooSsystemYos_val_setter,YPfalse);
  T13 = fun_os_val_setter_3;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSsystemYos_val_setter,T11);
  lit_7 = YPPsym((P)"process-id");
  T14 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_4 = YPfab_met(FUNCODEREF(fun_process_id_4),T14,LITREF(lit_7),LITREF(lit_1),sloc(59),YPfalse);
  T16 = VARREF_OR(YgooSsystemYprocess_id,YPfalse);
  T17 = fun_process_id_4;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSsystemYprocess_id,T15);
  lit_8 = YPsb((P)"linux");
  lit_9 = YPsb((P)"/");
  lit_10 = YPsb((P)"win32");
  lit_11 = YPsb((P)"\\");
  lit_12 = YPsb((P)"/");
  T20 = XCALL0(1,VARREF(YgooSsystemYos_name));
  T19 = XCALL2(1,VARREF(YgooSlogYE),T20,LITREF(lit_8));
  if (T19 != YPfalse) {
    T18 = LITREF(lit_9);
  } else {
    T23 = XCALL0(1,VARREF(YgooSsystemYos_name));
    T22 = XCALL2(1,VARREF(YgooSlogYE),T23,LITREF(lit_10));
    if (T22 != YPfalse) {
      T21 = LITREF(lit_11);
    } else {
      if (YPtrue != YPfalse) {
        T24 = LITREF(lit_12);
      } else {
        T24 = YPfalse;
      }
      T21 = T24;
    }
    T18 = T21;
  }
  VARSET(YgooSsystemYTpath_separatorT,T18);
  lit_13 = YPPsym((P)"base-path");
  lit_14 = YPPlist(1,YPPsym((P)"filename"));
  lit_15 = YPsb((P)"");
  T25 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_base_path_5 = YPfab_met(FUNCODEREF(fun_base_path_5),T25,LITREF(lit_13),LITREF(lit_14),sloc(77),YPfalse);
  T27 = VARREF_OR(YgooSsystemYbase_path,YPfalse);
  T28 = fun_base_path_5;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSsystemYbase_path,T26);
  lit_16 = YPPsym((P)"fab-path");
  lit_17 = YPPlist(1,YPPsym((P)"dirs"));
  T29 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_6 = YPfab_met(FUNCODEREF(fun_fab_path_6),T29,LITREF(lit_16),LITREF(lit_17),sloc(86),YPfalse);
  T31 = VARREF_OR(YgooSsystemYfab_path,YPfalse);
  T32 = fun_fab_path_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooSsystemYfab_path,T30);
  lit_18 = YPsb((P)"GOO_ROOT");
  T37 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_18));
  env_rootF3906 = T37;
  T34 = XCALL1(1,VARREF(YgooSmacrosYnulQ),env_rootF3906);
  if (T34 != YPfalse) {
    T36 = (P)YgooSsystemYPdefault_goo_root();
    T35 = (P)YPsb(T36);
    T33 = T35;
  } else {
    T33 = env_rootF3906;
  }
  VARSET(YgooSsystemYTgoo_rootT,T33);
  lit_19 = YPsb((P)"HOME");
  lit_20 = YPsb((P)".goo");
  T39 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_19));
  T38 = XCALL2(1,VARREF(YgooSsystemYfab_path),T39,LITREF(lit_20));
  VARSET(YgooSsystemYTgoo_personal_rootT,T38);
  lit_21 = YPsb((P)"mods");
  lit_22 = YPsb((P)"local");
  lit_23 = YPsb((P)"mods");
  lit_24 = YPsb((P)"mods");
  T41 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),LITREF(lit_21));
  T42 = XCALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_22),LITREF(lit_23));
  T43 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_24));
  T40 = XCALL4(1,VARREF(Ylst),LITREF(lit_15),T41,T42,T43);
  VARSET(YgooSsystemYTmodule_search_pathT,T40);
  lit_25 = YPsb((P)"GOO_BUILD_ROOT");
  lit_26 = YPsb((P)".");
  T46 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_25));
  env_rootF3907 = T46;
  T45 = XCALL1(1,VARREF(YgooSmacrosYnulQ),env_rootF3907);
  if (T45 != YPfalse) {
    T44 = LITREF(lit_26);
  } else {
    T44 = env_rootF3907;
  }
  VARSET(YgooSsystemYTgoo_build_rootT,T44);
  lit_27 = YPPsym((P)"add-src-path");
  lit_28 = YPPlist(1,YPPsym((P)"relpath"));
  lit_29 = YPsb((P)"src");
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_7 = YPfab_met(FUNCODEREF(fun_add_src_path_7),T47,LITREF(lit_27),LITREF(lit_28),sloc(111),YPfalse);
  T49 = VARREF_OR(YgooSsystemYadd_src_path,YPfalse);
  T50 = fun_add_src_path_7;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSsystemYadd_src_path,T48);
  lit_30 = YPPsym((P)"add-goo-root-path");
  lit_31 = YPPlist(1,YPPsym((P)"relpath"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_8 = YPfab_met(FUNCODEREF(fun_add_goo_root_path_8),T51,LITREF(lit_30),LITREF(lit_31),sloc(114),YPfalse);
  T53 = VARREF_OR(YgooSsystemYadd_goo_root_path,YPfalse);
  T54 = fun_add_goo_root_path_8;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSsystemYadd_goo_root_path,T52);
  lit_32 = YPPsym((P)"add-goo-personal-root-path");
  lit_33 = YPPlist(1,YPPsym((P)"relpath"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_9 = YPfab_met(FUNCODEREF(fun_add_goo_personal_root_path_9),T55,LITREF(lit_32),LITREF(lit_33),sloc(117),YPfalse);
  T57 = VARREF_OR(YgooSsystemYadd_goo_personal_root_path,YPfalse);
  T58 = fun_add_goo_personal_root_path_9;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T56);
  lit_34 = YPPsym((P)"add-tmp-path");
  lit_35 = YPPlist(1,YPPsym((P)"relpath"));
  lit_36 = YPsb((P)"tmp");
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_10 = YPfab_met(FUNCODEREF(fun_add_tmp_path_10),T59,LITREF(lit_34),LITREF(lit_35),sloc(121),YPfalse);
  T61 = VARREF_OR(YgooSsystemYadd_tmp_path,YPfalse);
  T62 = fun_add_tmp_path_10;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooSsystemYadd_tmp_path,T60);
  lit_37 = YPPsym((P)"add-build-path");
  lit_38 = YPPlist(2,YPPsym((P)"builddir"),YPPsym((P)"relpath"));
  lit_39 = YPsb((P)"c");
  T63 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_11 = YPfab_met(FUNCODEREF(fun_add_build_path_11),T63,LITREF(lit_37),LITREF(lit_38),sloc(124),YPfalse);
  T65 = VARREF_OR(YgooSsystemYadd_build_path,YPfalse);
  T66 = fun_add_build_path_11;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YgooSsystemYadd_build_path,T64);
  lit_40 = YPsb((P)".goo");
  VARSET(YgooSsystemYTgoo_extensionT,LITREF(lit_40));
  lit_41 = YPsb((P)".gooc");
  VARSET(YgooSsystemYTgooc_extensionT,LITREF(lit_41));
  lit_42 = YPsb((P)".c");
  VARSET(YgooSsystemYTc_extensionT,LITREF(lit_42));
  lit_43 = YPsb((P)".o");
  VARSET(YgooSsystemYTobj_extensionT,LITREF(lit_43));
  VARSET(YgooSsystemYTexe_extensionT,LITREF(lit_15));
  lit_44 = YPPsym((P)"goo-filename?");
  lit_45 = YPPlist(1,YPPsym((P)"name"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPfab_met(FUNCODEREF(YgooSsystemYgoo_filenameQ),T67,LITREF(lit_44),LITREF(lit_45),sloc(133),YPfalse);
  T68 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T68);
  lit_46 = YPPsym((P)"goo-filename");
  lit_47 = YPPlist(1,YPPsym((P)"name"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPfab_met(FUNCODEREF(YgooSsystemYgoo_filename),T69,LITREF(lit_46),LITREF(lit_47),sloc(136),YPfalse);
  T70 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T70);
  lit_48 = YPPsym((P)"gooc-filename?");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPfab_met(FUNCODEREF(YgooSsystemYgooc_filenameQ),T71,LITREF(lit_48),LITREF(lit_49),sloc(139),YPfalse);
  T72 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T72);
  lit_50 = YPPsym((P)"gooc-filename");
  lit_51 = YPPlist(1,YPPsym((P)"name"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPfab_met(FUNCODEREF(YgooSsystemYgooc_filename),T73,LITREF(lit_50),LITREF(lit_51),sloc(142),YPfalse);
  T74 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T74);
  lit_52 = YPPsym((P)"c-filename");
  lit_53 = YPPlist(1,YPPsym((P)"name"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPfab_met(FUNCODEREF(YgooSsystemYc_filename),T75,LITREF(lit_52),LITREF(lit_53),sloc(145),YPfalse);
  T76 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T76);
  lit_54 = YPPsym((P)"obj-filename");
  lit_55 = YPPlist(1,YPPsym((P)"name"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPfab_met(FUNCODEREF(YgooSsystemYobj_filename),T77,LITREF(lit_54),LITREF(lit_55),sloc(148),YPfalse);
  T78 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T78);
  lit_56 = YPPsym((P)"exe-filename");
  lit_57 = YPPlist(1,YPPsym((P)"name"));
  T79 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPfab_met(FUNCODEREF(YgooSsystemYexe_filename),T79,LITREF(lit_56),LITREF(lit_57),sloc(151),YPfalse);
  T80 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T80);
  lit_58 = YPPsym((P)"file-mtime");
  lit_59 = YPPlist(1,YPPsym((P)"filename"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_19 = YPfab_met(FUNCODEREF(fun_file_mtime_19),T81,LITREF(lit_58),LITREF(lit_59),sloc(191),YPfalse);
  T83 = VARREF_OR(YgooSsystemYfile_mtime,YPfalse);
  T84 = fun_file_mtime_19;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSsystemYfile_mtime,T82);
  lit_60 = YPPsym((P)"file-exists?");
  lit_61 = YPPlist(1,YPPsym((P)"filename"));
  T85 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPfab_met(FUNCODEREF(YgooSsystemYfile_existsQ),T85,LITREF(lit_60),LITREF(lit_61),sloc(196),YPfalse);
  T86 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T86);
  lit_62 = YPPsym((P)"file-type");
  lit_63 = YPPlist(1,YPPsym((P)"filename"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  T88 = YgooSsystemYfile_type = YPfab_met(FUNCODEREF(YgooSsystemYfile_type),T89,LITREF(lit_62),LITREF(lit_63),sloc(201),YPfalse);
  T91 = YgooSsystemYfile_type;
  T90 = VARSET(YgooSsystemYfile_type,T91);
  T87 = T90;
  return T87;
}

P YgooSsystemY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
DEFCREGS();
  lit_64 = YPPsym((P)"create-directory");
  lit_65 = YPPlist(1,YPPsym((P)"filename"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPfab_met(FUNCODEREF(YgooSsystemYcreate_directory),T0,LITREF(lit_64),LITREF(lit_65),sloc(208),YPfalse);
  T1 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T1);
  lit_66 = YPPsym((P)"file-copy");
  lit_67 = YPPlist(2,YPPsym((P)"src"),YPPsym((P)"dst"));
  T6 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T6,YPfalse,LITREF(lit_1),sloc(213),YPfalse);
  T5 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T5,YPfalse,LITREF(lit_1),sloc(213),YPfalse);
  T4 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T4,YPfalse,LITREF(lit_1),sloc(212),YPfalse);
  T3 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T3,YPfalse,LITREF(lit_1),sloc(212),YPfalse);
  T2 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_copy_27 = YPfab_met(FUNCODEREF(fun_file_copy_27),T2,LITREF(lit_66),LITREF(lit_67),sloc(211),YPfalse);
  T8 = VARREF_OR(YgooSsystemYfile_copy,YPfalse);
  T9 = fun_file_copy_27;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSsystemYfile_copy,T7);
  lit_68 = YPPsym((P)"so-load");
  lit_69 = YPPlist(1,YPPsym((P)"name"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPfab_met(FUNCODEREF(YgooSsystemYso_load),T10,LITREF(lit_68),LITREF(lit_69),sloc(223),YPfalse);
  T11 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T11);
  lit_70 = YPPsym((P)"<pathname-error>");
  T13 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T12 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_70),T13);
  VARSET(YgooSsystemYLpathname_errorG,T12);
  lit_71 = YPPsym((P)"pathname-error");
  lit_72 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYpathname_error = YPfab_met(FUNCODEREF(YgooSsystemYpathname_error),T14,LITREF(lit_71),LITREF(lit_72),sloc(262),YPfalse);
  T15 = YgooSsystemYpathname_error;
  VARSET(YgooSsystemYpathname_error,T15);
  lit_73 = YPPsym((P)"pathname-to-components");
  lit_74 = YPPlist(1,YPPsym((P)"pathname"));
  lit_75 = YPsb((P)"Can't convert nul an pathname to components.");
  lit_76 = YPPlist(1,YPPsym((P)"component"));
  lit_77 = YPPsym((P)"root");
  lit_78 = YPsb((P)"..");
  lit_79 = YPPsym((P)"up");
  lit_80 = YPsb((P)".");
  lit_81 = YPPsym((P)"current");
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T17,YPfalse,LITREF(lit_76),sloc(271),YPfalse);
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPfab_met(FUNCODEREF(YgooSsystemYpathname_to_components),T16,LITREF(lit_73),LITREF(lit_74),sloc(266),YPfalse);
  T18 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T18);
  lit_82 = YPPsym((P)"components-to-pathname");
  lit_83 = YPPlist(1,YPPsym((P)"components"));
  lit_84 = YPsb((P)"Can't convert nul components to a pathname.");
  lit_85 = YPPlist(1,YPPsym((P)"component"));
  lit_86 = YPsb((P)"..");
  lit_87 = YPsb((P)".");
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T20,YPfalse,LITREF(lit_85),sloc(283),YPfalse);
  T19 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_to_pathname),T19,LITREF(lit_82),LITREF(lit_83),sloc(280),YPfalse);
  T21 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T21);
  lit_88 = YPPsym((P)"label-components");
  lit_89 = YPPlist(1,YPPsym((P)"components"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPfab_met(FUNCODEREF(YgooSsystemYlabel_components),T22,LITREF(lit_88),LITREF(lit_89),sloc(293),YPfalse);
  T23 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T23);
  lit_90 = YPPsym((P)"hierarchical-components");
  lit_91 = YPPlist(1,YPPsym((P)"components"));
  lit_92 = YPsb((P)"Hierarchical portion of %= must not be nul.");
  T24 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPfab_met(FUNCODEREF(YgooSsystemYhierarchical_components),T24,LITREF(lit_90),LITREF(lit_91),sloc(299),YPfalse);
  T25 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T25);
  lit_93 = YPPsym((P)"components-last");
  lit_94 = YPPlist(1,YPPsym((P)"components"));
  lit_95 = YPsb((P)"No filename in %=.");
  T26 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_last),T26,LITREF(lit_93),LITREF(lit_94),sloc(308),YPfalse);
  T27 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T27);
  lit_96 = YPPsym((P)"components-basename");
  lit_97 = YPPlist(1,YPPsym((P)"components"));
  lit_98 = YPsb((P)"Can't compute basename of %=.");
  lit_99 = YPPlist(1,YPPsym((P)"current"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_basename),T28,LITREF(lit_96),LITREF(lit_97),sloc(319),YPfalse);
  T29 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T29);
  lit_100 = YPPsym((P)"components-parent-directory");
  lit_101 = YPPlist(1,YPPsym((P)"components"));
  lit_102 = YPsb((P)"Can't calculate parent of root directory.");
  lit_103 = YPPlist(1,YPPsym((P)"up"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_parent_directory),T30,LITREF(lit_100),LITREF(lit_101),sloc(331),YPfalse);
  T31 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T31);
  lit_104 = YPPsym((P)"parent-directory");
  lit_105 = YPPlist(1,YPPsym((P)"name"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPfab_met(FUNCODEREF(YgooSsystemYparent_directory),T32,LITREF(lit_104),LITREF(lit_105),sloc(358),YPfalse);
  T33 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T33);
  lit_106 = YPPsym((P)"<directory-error>");
  T36 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLfile_opening_errorG),T36);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_106),T35);
  VARSET(YgooSsystemYLdirectory_errorG,T34);
  lit_107 = YPPsym((P)"directory-error");
  lit_108 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"name"));
  T37 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSsystemYdirectory_error = YPfab_met(FUNCODEREF(YgooSsystemYdirectory_error),T37,LITREF(lit_107),LITREF(lit_108),sloc(364),YPfalse);
  T38 = YgooSsystemYdirectory_error;
  VARSET(YgooSsystemYdirectory_error,T38);
  lit_109 = YPPsym((P)"probe-directory");
  lit_110 = YPPlist(1,YPPsym((P)"name"));
  lit_111 = YPPsym((P)"ensure");
  lit_112 = YPPlist(1,YPPsym((P)"c"));
  lit_113 = YPPsym((P)"directory");
  lit_114 = YPsb((P)"%s is not a directory.\n");
  lit_115 = YPsb((P)"Don't know how to create the directory %s.\n");
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_41 = YPfab_met(FUNCODEREF(fun_ensure_41),T40,LITREF(lit_111),LITREF(lit_112),sloc(375),YPfalse);
  T39 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPfab_met(FUNCODEREF(YgooSsystemYprobe_directory),T39,LITREF(lit_109),LITREF(lit_110),sloc(371),YPfalse);
  T41 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T41);
  lit_116 = YPPsym((P)"find-goo-file-at");
  lit_117 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"path"));
  T43 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T43,Ynil);
  YgooSsystemYfind_goo_file_at = YPfab_met(FUNCODEREF(YgooSsystemYfind_goo_file_at),T42,LITREF(lit_116),LITREF(lit_117),sloc(393),YPfalse);
  T44 = YgooSsystemYfind_goo_file_at;
  VARSET(YgooSsystemYfind_goo_file_at,T44);
  lit_118 = YPPsym((P)"find-goo-file-in-path");
  lit_119 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"search-paths"));
  lit_120 = YPPlist(1,YPPsym((P)"return"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T47,YPfalse,LITREF(lit_120),sloc(412),YPfalse);
  T46 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T46,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPfab_met(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),T45,LITREF(lit_118),LITREF(lit_119),sloc(411),YPfalse);
  T48 = YgooSsystemYfind_goo_file_in_path;
  VARSET(YgooSsystemYfind_goo_file_in_path,T48);
  T49 = YPfalse;
  return T49;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSchr;
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
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@pair", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
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
  {"port-filename", &module_info_gooSioSport, NULL},
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
  {"port-line-setter", &module_info_gooSioSport, NULL},
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
  {"port-index-setter", &module_info_gooSioSport, NULL},
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
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
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
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
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
  {"port-handle", &module_info_gooSioSport, NULL},
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
  {"char->ascii", &module_info_gooSchr, NULL},
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
  {"%met-env", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
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
  {"base-path", CVAR, &YgooSsystemYbase_path},
  {"file-exists?", CVAR, &YgooSsystemYfile_existsQ},
  {"---main-1---", PVAR, NULL},
  {"gooc-filename?", CVAR, &YgooSsystemYgooc_filenameQ},
  {"add-src-path", CVAR, &YgooSsystemYadd_src_path},
  {"probe-directory", CVAR, &YgooSsystemYprobe_directory},
  {"*goo-extension*", CVAR, &YgooSsystemYTgoo_extensionT},
  {"file-copy", CVAR, &YgooSsystemYfile_copy},
  {"%file-exists?", PVAR, NULL},
  {"*c-extension*", CVAR, &YgooSsystemYTc_extensionT},
  {"obj-filename", CVAR, &YgooSsystemYobj_filename},
  {"add-goo-personal-root-path", CVAR, &YgooSsystemYadd_goo_personal_root_path},
  {"parent-directory", CVAR, &YgooSsystemYparent_directory},
  {"components-last", CVAR, &YgooSsystemYcomponents_last},
  {"%file-type", PVAR, NULL},
  {"os-name", CVAR, &YgooSsystemYos_name},
  {"*goo-personal-root*", CVAR, &YgooSsystemYTgoo_personal_rootT},
  {"*goo-build-root*", CVAR, &YgooSsystemYTgoo_build_rootT},
  {"*path-separator*", CVAR, &YgooSsystemYTpath_separatorT},
  {"find-goo-file-at", CVAR, &YgooSsystemYfind_goo_file_at},
  {"pathname-error", CVAR, &YgooSsystemYpathname_error},
  {"%pid", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"so-load", CVAR, &YgooSsystemYso_load},
  {"%time", PVAR, NULL},
  {"*module-search-path*", CVAR, &YgooSsystemYTmodule_search_pathT},
  {"goo-filename", CVAR, &YgooSsystemYgoo_filename},
  {"add-build-path", CVAR, &YgooSsystemYadd_build_path},
  {"%compile", PVAR, NULL},
  {"%load", PVAR, NULL},
  {"create-directory", CVAR, &YgooSsystemYcreate_directory},
  {"hierarchical-components", CVAR, &YgooSsystemYhierarchical_components},
  {"c-filename", CVAR, &YgooSsystemYc_filename},
  {"directory-error", CVAR, &YgooSsystemYdirectory_error},
  {"*gooc-extension*", CVAR, &YgooSsystemYTgooc_extensionT},
  {"add-goo-root-path", CVAR, &YgooSsystemYadd_goo_root_path},
  {"file-mtime", CVAR, &YgooSsystemYfile_mtime},
  {"components-parent-directory", CVAR, &YgooSsystemYcomponents_parent_directory},
  {"*obj-extension*", CVAR, &YgooSsystemYTobj_extensionT},
  {"%file-mtime", PVAR, NULL},
  {"%os-val-setter", PVAR, NULL},
  {"os-val-setter", CVAR, &YgooSsystemYos_val_setter},
  {"time", CVAR, &YgooSsystemYtime},
  {"*exe-extension*", CVAR, &YgooSsystemYTexe_extensionT},
  {"goo-filename?", CVAR, &YgooSsystemYgoo_filenameQ},
  {"file-type", CVAR, &YgooSsystemYfile_type},
  {"%os-val", PVAR, NULL},
  {"gooc-filename", CVAR, &YgooSsystemYgooc_filename},
  {"add-tmp-path", CVAR, &YgooSsystemYadd_tmp_path},
  {"label-components", CVAR, &YgooSsystemYlabel_components},
  {"process-id", CVAR, &YgooSsystemYprocess_id},
  {"exe-filename", CVAR, &YgooSsystemYexe_filename},
  {"<directory-error>", CVAR, &YgooSsystemYLdirectory_errorG},
  {"components-basename", CVAR, &YgooSsystemYcomponents_basename},
  {"%create-directory", PVAR, NULL},
  {"%default-goo-root", PVAR, NULL},
  {"%os-name", PVAR, NULL},
  {"find-goo-file-in-path", CVAR, &YgooSsystemYfind_goo_file_in_path},
  {"*goo-root*", CVAR, &YgooSsystemYTgoo_rootT},
  {"pathname-to-components", CVAR, &YgooSsystemYpathname_to_components},
  {"components-to-pathname", CVAR, &YgooSsystemYcomponents_to_pathname},
  {"os-val", CVAR, &YgooSsystemYos_val},
  {"<pathname-error>", CVAR, &YgooSsystemYLpathname_errorG},
  {"fab-path", CVAR, &YgooSsystemYfab_path},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"file-exists?", NULL},
  {"add-src-path", NULL},
  {"probe-directory", NULL},
  {"*goo-extension*", NULL},
  {"*c-extension*", NULL},
  {"obj-filename", NULL},
  {"add-goo-personal-root-path", NULL},
  {"parent-directory", NULL},
  {"components-last", NULL},
  {"os-name", NULL},
  {"*goo-build-root*", NULL},
  {"find-goo-file-at", NULL},
  {"find-goo-file-in-path", NULL},
  {"so-load", NULL},
  {"*module-search-path*", NULL},
  {"goo-filename", NULL},
  {"add-build-path", NULL},
  {"components-to-pathname", NULL},
  {"%compile", NULL},
  {"%load", NULL},
  {"create-directory", NULL},
  {"c-filename", NULL},
  {"os-val-setter", NULL},
  {"hierarchical-components", NULL},
  {"add-goo-root-path", NULL},
  {"file-mtime", NULL},
  {"components-parent-directory", NULL},
  {"*obj-extension*", NULL},
  {"time", NULL},
  {"*exe-extension*", NULL},
  {"file-type", NULL},
  {"*goo-personal-root*", NULL},
  {"gooc-filename", NULL},
  {"add-tmp-path", NULL},
  {"label-components", NULL},
  {"process-id", NULL},
  {"file-copy", NULL},
  {"exe-filename", NULL},
  {"<directory-error>", NULL},
  {"components-basename", NULL},
  {"pathname-to-components", NULL},
  {"*path-separator*", NULL},
  {"*goo-root*", NULL},
  {"os-val", NULL},
  {"<pathname-error>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSsystem;
MODULE_INFO module_info_gooSsystem = {
  "goo/system",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_gooSsystem (void);

void load_module_gooSsystem (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooScolsSstr();
  load_module_gooSboot();
  load_module_gooSioSport();

  (P)YgooSsystemY___main_0___();
  (P)YgooSsystemY___main_1___();

}

/* END OF GENERATED CODE. */
