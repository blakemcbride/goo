/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YevalSastYc_inline_refs,"eval/ast","c-inline-refs");
EXT(YevalStopYload,"eval/top","load");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSg2cYref_lit,"eval/g2c","ref-lit");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YOmap,"goo/boot","@map");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YevalSg2cYTlits_atT,"eval/g2c","*lits-at*");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
DEF(YevalSg2cYbbQ,"eval/g2c","bb?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
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
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtup,"goo/boot","@tup");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YOcat2,"goo/boot","@cat2");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YLstrG,"goo/boot","<str>");
DYNDEF(YevalSg2cYTgen_statementsQT,"eval/g2c","*gen-statements?*");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YOlit,"goo/boot","@lit");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YOelt,"goo/boot","@elt");
EXT(YOpick,"goo/boot","@pick");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"goo/boot","head");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalStopYD,"eval/top","$");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YevalSg2cYinclude_filename,"eval/g2c","include-filename");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSmoduleYmodule_c_forms,"eval/module","module-c-forms");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
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
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
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
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
DEF(YevalSg2cYto_pc,"eval/g2c","to-pc");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
DEF(YevalSg2cYTlitsT,"eval/g2c","*lits*");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YOOEE,"goo/boot","@@==");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(Yorder_specs,"goo/boot","order-specs");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmathYround,"goo/math","round");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLboxG,"goo/boot","<box>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytail,"goo/boot","tail");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmathYN,"goo/math","~");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalStopYsave_image,"eval/top","save-image");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
DEF(YevalSg2cYgenerate_c_forms,"eval/g2c","generate-c-forms");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
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
EXT(YevalSastYc_inline_strs,"eval/ast","c-inline-strs");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DYNDEF(YevalSg2cYTloop_arg_counterT,"eval/g2c","*loop-arg-counter*");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalStopYtop,"eval/top","top");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYLc_inlineG,"eval/ast","<c-inline>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSg2cYgen_refT,"eval/g2c","gen-ref*");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YevalSastYc_inline_exprQ,"eval/ast","c-inline-expr?");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_333);
DEFLIT(lit_595);
DEFLIT(lit_498);
DEFLIT(lit_54);
DEFLIT(lit_386);
DEFLIT(lit_328);
DEFLIT(lit_609);
DEFLIT(lit_172);
DEFLIT(lit_34);
DEFLIT(lit_621);
DEFLIT(lit_11);
DEFLIT(lit_188);
DEFLIT(lit_539);
DEFLIT(lit_299);
DEFLIT(lit_677);
DEFLIT(lit_605);
DEFLIT(lit_338);
DEFLIT(lit_614);
DEFLIT(lit_378);
DEFLIT(lit_211);
DEFLIT(lit_248);
DEFLIT(lit_676);
DEFLIT(lit_471);
DEFLIT(lit_290);
DEFLIT(lit_560);
DEFLIT(lit_678);
DEFLIT(lit_71);
DEFLIT(lit_468);
DEFLIT(lit_244);
DEFLIT(lit_265);
DEFLIT(lit_103);
DEFLIT(lit_196);
DEFLIT(lit_578);
DEFLIT(lit_636);
DEFLIT(lit_289);
DEFLIT(lit_580);
DEFLIT(lit_277);
DEFLIT(lit_165);
DEFLIT(lit_391);
DEFLIT(lit_5);
DEFLIT(lit_620);
DEFLIT(lit_273);
DEFLIT(lit_31);
DEFLIT(lit_76);
DEFLIT(lit_652);
DEFLIT(lit_561);
DEFLIT(lit_564);
DEFLIT(lit_610);
DEFLIT(lit_420);
DEFLIT(lit_472);
DEFLIT(lit_450);
DEFLIT(lit_209);
DEFLIT(lit_313);
DEFLIT(lit_234);
DEFLIT(lit_130);
DEFLIT(lit_674);
DEFLIT(lit_316);
DEFLIT(lit_611);
DEFLIT(lit_77);
DEFLIT(lit_444);
DEFLIT(lit_557);
DEFLIT(lit_544);
DEFLIT(lit_497);
DEFLIT(lit_360);
DEFLIT(lit_514);
DEFLIT(lit_258);
DEFLIT(lit_122);
DEFLIT(lit_593);
DEFLIT(lit_166);
DEFLIT(lit_105);
DEFLIT(lit_193);
DEFLIT(lit_44);
DEFLIT(lit_382);
DEFLIT(lit_482);
DEFLIT(lit_218);
DEFLIT(lit_535);
DEFLIT(lit_81);
DEFLIT(lit_522);
DEFLIT(lit_396);
DEFLIT(lit_358);
DEFLIT(lit_551);
DEFLIT(lit_526);
DEFLIT(lit_325);
DEFLIT(lit_20);
DEFLIT(lit_388);
DEFLIT(lit_169);
DEFLIT(lit_15);
DEFLIT(lit_493);
DEFLIT(lit_189);
DEFLIT(lit_294);
DEFLIT(lit_314);
DEFLIT(lit_384);
DEFLIT(lit_576);
DEFLIT(lit_713);
DEFLIT(lit_329);
DEFLIT(lit_608);
DEFLIT(lit_441);
DEFLIT(lit_32);
DEFLIT(lit_601);
DEFLIT(lit_251);
DEFLIT(lit_357);
DEFLIT(lit_467);
DEFLIT(lit_571);
DEFLIT(lit_387);
DEFLIT(lit_521);
DEFLIT(lit_352);
DEFLIT(lit_596);
DEFLIT(lit_403);
DEFLIT(lit_280);
DEFLIT(lit_78);
DEFLIT(lit_354);
DEFLIT(lit_74);
DEFLIT(lit_701);
DEFLIT(lit_529);
DEFLIT(lit_348);
DEFLIT(lit_392);
DEFLIT(lit_693);
DEFLIT(lit_496);
DEFLIT(lit_119);
DEFLIT(lit_507);
DEFLIT(lit_454);
DEFLIT(lit_548);
DEFLIT(lit_307);
DEFLIT(lit_60);
DEFLIT(lit_584);
DEFLIT(lit_46);
DEFLIT(lit_68);
DEFLIT(lit_710);
DEFLIT(lit_223);
DEFLIT(lit_703);
DEFLIT(lit_424);
DEFLIT(lit_342);
DEFLIT(lit_501);
DEFLIT(lit_428);
DEFLIT(lit_335);
DEFLIT(lit_49);
DEFLIT(lit_102);
DEFLIT(lit_489);
DEFLIT(lit_558);
DEFLIT(lit_587);
DEFLIT(lit_629);
DEFLIT(lit_14);
DEFLIT(lit_696);
DEFLIT(lit_164);
DEFLIT(lit_61);
DEFLIT(lit_478);
DEFLIT(lit_210);
DEFLIT(lit_176);
DEFLIT(lit_88);
DEFLIT(lit_16);
DEFLIT(lit_425);
DEFLIT(lit_446);
DEFLIT(lit_213);
DEFLIT(lit_651);
DEFLIT(lit_198);
DEFLIT(lit_195);
DEFLIT(lit_52);
DEFLIT(lit_19);
DEFLIT(lit_101);
DEFLIT(lit_129);
DEFLIT(lit_330);
DEFLIT(lit_634);
DEFLIT(lit_94);
DEFLIT(lit_481);
DEFLIT(lit_39);
DEFLIT(lit_302);
DEFLIT(lit_241);
DEFLIT(lit_298);
DEFLIT(lit_291);
DEFLIT(lit_400);
DEFLIT(lit_257);
DEFLIT(lit_355);
DEFLIT(lit_217);
DEFLIT(lit_161);
DEFLIT(lit_537);
DEFLIT(lit_252);
DEFLIT(lit_138);
DEFLIT(lit_192);
DEFLIT(lit_579);
DEFLIT(lit_638);
DEFLIT(lit_124);
DEFLIT(lit_305);
DEFLIT(lit_586);
DEFLIT(lit_89);
DEFLIT(lit_267);
DEFLIT(lit_401);
DEFLIT(lit_363);
DEFLIT(lit_278);
DEFLIT(lit_158);
DEFLIT(lit_268);
DEFLIT(lit_238);
DEFLIT(lit_216);
DEFLIT(lit_246);
DEFLIT(lit_682);
DEFLIT(lit_385);
DEFLIT(lit_582);
DEFLIT(lit_574);
DEFLIT(lit_221);
DEFLIT(lit_146);
DEFLIT(lit_225);
DEFLIT(lit_418);
DEFLIT(lit_232);
DEFLIT(lit_402);
DEFLIT(lit_698);
DEFLIT(lit_136);
DEFLIT(lit_332);
DEFLIT(lit_592);
DEFLIT(lit_453);
DEFLIT(lit_297);
DEFLIT(lit_156);
DEFLIT(lit_569);
DEFLIT(lit_175);
DEFLIT(lit_635);
DEFLIT(lit_237);
DEFLIT(lit_624);
DEFLIT(lit_85);
DEFLIT(lit_55);
DEFLIT(lit_704);
DEFLIT(lit_486);
DEFLIT(lit_293);
DEFLIT(lit_145);
DEFLIT(lit_326);
DEFLIT(lit_296);
DEFLIT(lit_429);
DEFLIT(lit_137);
DEFLIT(lit_709);
DEFLIT(lit_690);
DEFLIT(lit_3);
DEFLIT(lit_452);
DEFLIT(lit_184);
DEFLIT(lit_552);
DEFLIT(lit_525);
DEFLIT(lit_532);
DEFLIT(lit_300);
DEFLIT(lit_553);
DEFLIT(lit_503);
DEFLIT(lit_600);
DEFLIT(lit_680);
DEFLIT(lit_524);
DEFLIT(lit_201);
DEFLIT(lit_480);
DEFLIT(lit_404);
DEFLIT(lit_367);
DEFLIT(lit_90);
DEFLIT(lit_12);
DEFLIT(lit_288);
DEFLIT(lit_334);
DEFLIT(lit_536);
DEFLIT(lit_147);
DEFLIT(lit_435);
DEFLIT(lit_485);
DEFLIT(lit_465);
DEFLIT(lit_319);
DEFLIT(lit_98);
DEFLIT(lit_508);
DEFLIT(lit_263);
DEFLIT(lit_286);
DEFLIT(lit_118);
DEFLIT(lit_477);
DEFLIT(lit_607);
DEFLIT(lit_341);
DEFLIT(lit_75);
DEFLIT(lit_381);
DEFLIT(lit_573);
DEFLIT(lit_186);
DEFLIT(lit_372);
DEFLIT(lit_581);
DEFLIT(lit_295);
DEFLIT(lit_688);
DEFLIT(lit_271);
DEFLIT(lit_585);
DEFLIT(lit_230);
DEFLIT(lit_487);
DEFLIT(lit_461);
DEFLIT(lit_269);
DEFLIT(lit_476);
DEFLIT(lit_233);
DEFLIT(lit_417);
DEFLIT(lit_475);
DEFLIT(lit_464);
DEFLIT(lit_518);
DEFLIT(lit_135);
DEFLIT(lit_588);
DEFLIT(lit_317);
DEFLIT(lit_37);
DEFLIT(lit_123);
DEFLIT(lit_625);
DEFLIT(lit_442);
DEFLIT(lit_142);
DEFLIT(lit_111);
DEFLIT(lit_370);
DEFLIT(lit_287);
DEFLIT(lit_379);
DEFLIT(lit_243);
DEFLIT(lit_667);
DEFLIT(lit_194);
DEFLIT(lit_687);
DEFLIT(lit_157);
DEFLIT(lit_415);
DEFLIT(lit_41);
DEFLIT(lit_530);
DEFLIT(lit_281);
DEFLIT(lit_99);
DEFLIT(lit_250);
DEFLIT(lit_185);
DEFLIT(lit_154);
DEFLIT(lit_47);
DEFLIT(lit_455);
DEFLIT(lit_371);
DEFLIT(lit_502);
DEFLIT(lit_173);
DEFLIT(lit_236);
DEFLIT(lit_430);
DEFLIT(lit_577);
DEFLIT(lit_469);
DEFLIT(lit_144);
DEFLIT(lit_83);
DEFLIT(lit_7);
DEFLIT(lit_383);
DEFLIT(lit_139);
DEFLIT(lit_312);
DEFLIT(lit_500);
DEFLIT(lit_375);
DEFLIT(lit_397);
DEFLIT(lit_152);
DEFLIT(lit_641);
DEFLIT(lit_58);
DEFLIT(lit_655);
DEFLIT(lit_254);
DEFLIT(lit_259);
DEFLIT(lit_63);
DEFLIT(lit_692);
DEFLIT(lit_390);
DEFLIT(lit_583);
DEFLIT(lit_167);
DEFLIT(lit_491);
DEFLIT(lit_97);
DEFLIT(lit_409);
DEFLIT(lit_228);
DEFLIT(lit_659);
DEFLIT(lit_712);
DEFLIT(lit_121);
DEFLIT(lit_36);
DEFLIT(lit_538);
DEFLIT(lit_306);
DEFLIT(lit_266);
DEFLIT(lit_664);
DEFLIT(lit_283);
DEFLIT(lit_344);
DEFLIT(lit_708);
DEFLIT(lit_72);
DEFLIT(lit_170);
DEFLIT(lit_534);
DEFLIT(lit_160);
DEFLIT(lit_660);
DEFLIT(lit_340);
DEFLIT(lit_323);
DEFLIT(lit_96);
DEFLIT(lit_631);
DEFLIT(lit_310);
DEFLIT(lit_128);
DEFLIT(lit_519);
DEFLIT(lit_691);
DEFLIT(lit_448);
DEFLIT(lit_38);
DEFLIT(lit_426);
DEFLIT(lit_23);
DEFLIT(lit_622);
DEFLIT(lit_274);
DEFLIT(lit_520);
DEFLIT(lit_572);
DEFLIT(lit_282);
DEFLIT(lit_178);
DEFLIT(lit_512);
DEFLIT(lit_570);
DEFLIT(lit_356);
DEFLIT(lit_697);
DEFLIT(lit_28);
DEFLIT(lit_117);
DEFLIT(lit_222);
DEFLIT(lit_414);
DEFLIT(lit_95);
DEFLIT(lit_459);
DEFLIT(lit_531);
DEFLIT(lit_303);
DEFLIT(lit_707);
DEFLIT(lit_437);
DEFLIT(lit_22);
DEFLIT(lit_301);
DEFLIT(lit_613);
DEFLIT(lit_120);
DEFLIT(lit_349);
DEFLIT(lit_513);
DEFLIT(lit_24);
DEFLIT(lit_416);
DEFLIT(lit_598);
DEFLIT(lit_245);
DEFLIT(lit_27);
DEFLIT(lit_9);
DEFLIT(lit_566);
DEFLIT(lit_45);
DEFLIT(lit_205);
DEFLIT(lit_669);
DEFLIT(lit_672);
DEFLIT(lit_567);
DEFLIT(lit_13);
DEFLIT(lit_413);
DEFLIT(lit_261);
DEFLIT(lit_350);
DEFLIT(lit_204);
DEFLIT(lit_447);
DEFLIT(lit_42);
DEFLIT(lit_80);
DEFLIT(lit_106);
DEFLIT(lit_479);
DEFLIT(lit_116);
DEFLIT(lit_647);
DEFLIT(lit_276);
DEFLIT(lit_151);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_555);
DEFLIT(lit_714);
DEFLIT(lit_247);
DEFLIT(lit_642);
DEFLIT(lit_623);
DEFLIT(lit_653);
DEFLIT(lit_510);
DEFLIT(lit_168);
DEFLIT(lit_93);
DEFLIT(lit_50);
DEFLIT(lit_700);
DEFLIT(lit_187);
DEFLIT(lit_48);
DEFLIT(lit_686);
DEFLIT(lit_645);
DEFLIT(lit_324);
DEFLIT(lit_399);
DEFLIT(lit_180);
DEFLIT(lit_203);
DEFLIT(lit_206);
DEFLIT(lit_174);
DEFLIT(lit_559);
DEFLIT(lit_628);
DEFLIT(lit_656);
DEFLIT(lit_380);
DEFLIT(lit_590);
DEFLIT(lit_56);
DEFLIT(lit_21);
DEFLIT(lit_171);
DEFLIT(lit_112);
DEFLIT(lit_113);
DEFLIT(lit_699);
DEFLIT(lit_18);
DEFLIT(lit_242);
DEFLIT(lit_207);
DEFLIT(lit_528);
DEFLIT(lit_666);
DEFLIT(lit_374);
DEFLIT(lit_533);
DEFLIT(lit_495);
DEFLIT(lit_440);
DEFLIT(lit_654);
DEFLIT(lit_602);
DEFLIT(lit_589);
DEFLIT(lit_351);
DEFLIT(lit_107);
DEFLIT(lit_255);
DEFLIT(lit_347);
DEFLIT(lit_366);
DEFLIT(lit_377);
DEFLIT(lit_398);
DEFLIT(lit_8);
DEFLIT(lit_202);
DEFLIT(lit_134);
DEFLIT(lit_458);
DEFLIT(lit_389);
DEFLIT(lit_262);
DEFLIT(lit_40);
DEFLIT(lit_456);
DEFLIT(lit_443);
DEFLIT(lit_615);
DEFLIT(lit_395);
DEFLIT(lit_17);
DEFLIT(lit_179);
DEFLIT(lit_410);
DEFLIT(lit_183);
DEFLIT(lit_466);
DEFLIT(lit_599);
DEFLIT(lit_369);
DEFLIT(lit_270);
DEFLIT(lit_365);
DEFLIT(lit_661);
DEFLIT(lit_474);
DEFLIT(lit_543);
DEFLIT(lit_684);
DEFLIT(lit_668);
DEFLIT(lit_563);
DEFLIT(lit_322);
DEFLIT(lit_457);
DEFLIT(lit_126);
DEFLIT(lit_29);
DEFLIT(lit_484);
DEFLIT(lit_527);
DEFLIT(lit_683);
DEFLIT(lit_190);
DEFLIT(lit_626);
DEFLIT(lit_284);
DEFLIT(lit_64);
DEFLIT(lit_150);
DEFLIT(lit_208);
DEFLIT(lit_70);
DEFLIT(lit_617);
DEFLIT(lit_337);
DEFLIT(lit_197);
DEFLIT(lit_240);
DEFLIT(lit_143);
DEFLIT(lit_542);
DEFLIT(lit_235);
DEFLIT(lit_460);
DEFLIT(lit_523);
DEFLIT(lit_434);
DEFLIT(lit_618);
DEFLIT(lit_51);
DEFLIT(lit_412);
DEFLIT(lit_133);
DEFLIT(lit_549);
DEFLIT(lit_483);
DEFLIT(lit_1);
DEFLIT(lit_226);
DEFLIT(lit_627);
DEFLIT(lit_619);
DEFLIT(lit_547);
DEFLIT(lit_177);
DEFLIT(lit_30);
DEFLIT(lit_182);
DEFLIT(lit_149);
DEFLIT(lit_516);
DEFLIT(lit_57);
DEFLIT(lit_141);
DEFLIT(lit_436);
DEFLIT(lit_67);
DEFLIT(lit_556);
DEFLIT(lit_343);
DEFLIT(lit_541);
DEFLIT(lit_509);
DEFLIT(lit_336);
DEFLIT(lit_231);
DEFLIT(lit_492);
DEFLIT(lit_109);
DEFLIT(lit_562);
DEFLIT(lit_159);
DEFLIT(lit_311);
DEFLIT(lit_689);
DEFLIT(lit_131);
DEFLIT(lit_419);
DEFLIT(lit_256);
DEFLIT(lit_35);
DEFLIT(lit_279);
DEFLIT(lit_212);
DEFLIT(lit_422);
DEFLIT(lit_148);
DEFLIT(lit_640);
DEFLIT(lit_264);
DEFLIT(lit_711);
DEFLIT(lit_219);
DEFLIT(lit_673);
DEFLIT(lit_657);
DEFLIT(lit_62);
DEFLIT(lit_606);
DEFLIT(lit_705);
DEFLIT(lit_431);
DEFLIT(lit_108);
DEFLIT(lit_353);
DEFLIT(lit_214);
DEFLIT(lit_162);
DEFLIT(lit_308);
DEFLIT(lit_315);
DEFLIT(lit_490);
DEFLIT(lit_633);
DEFLIT(lit_575);
DEFLIT(lit_423);
DEFLIT(lit_272);
DEFLIT(lit_364);
DEFLIT(lit_82);
DEFLIT(lit_681);
DEFLIT(lit_110);
DEFLIT(lit_517);
DEFLIT(lit_10);
DEFLIT(lit_515);
DEFLIT(lit_449);
DEFLIT(lit_91);
DEFLIT(lit_292);
DEFLIT(lit_650);
DEFLIT(lit_637);
DEFLIT(lit_84);
DEFLIT(lit_675);
DEFLIT(lit_671);
DEFLIT(lit_59);
DEFLIT(lit_318);
DEFLIT(lit_73);
DEFLIT(lit_69);
DEFLIT(lit_545);
DEFLIT(lit_86);
DEFLIT(lit_327);
DEFLIT(lit_339);
DEFLIT(lit_694);
DEFLIT(lit_253);
DEFLIT(lit_373);
DEFLIT(lit_473);
DEFLIT(lit_685);
DEFLIT(lit_346);
DEFLIT(lit_565);
DEFLIT(lit_432);
DEFLIT(lit_470);
DEFLIT(lit_597);
DEFLIT(lit_25);
DEFLIT(lit_227);
DEFLIT(lit_79);
DEFLIT(lit_421);
DEFLIT(lit_215);
DEFLIT(lit_463);
DEFLIT(lit_376);
DEFLIT(lit_406);
DEFLIT(lit_115);
DEFLIT(lit_616);
DEFLIT(lit_309);
DEFLIT(lit_462);
DEFLIT(lit_639);
DEFLIT(lit_125);
DEFLIT(lit_127);
DEFLIT(lit_220);
DEFLIT(lit_494);
DEFLIT(lit_644);
DEFLIT(lit_285);
DEFLIT(lit_646);
DEFLIT(lit_427);
DEFLIT(lit_394);
DEFLIT(lit_331);
DEFLIT(lit_665);
DEFLIT(lit_546);
DEFLIT(lit_630);
DEFLIT(lit_695);
DEFLIT(lit_488);
DEFLIT(lit_304);
DEFLIT(lit_33);
DEFLIT(lit_43);
DEFLIT(lit_505);
DEFLIT(lit_199);
DEFLIT(lit_275);
DEFLIT(lit_140);
DEFLIT(lit_433);
DEFLIT(lit_92);
DEFLIT(lit_499);
DEFLIT(lit_114);
DEFLIT(lit_504);
DEFLIT(lit_155);
DEFLIT(lit_445);
DEFLIT(lit_0);
DEFLIT(lit_511);
DEFLIT(lit_451);
DEFLIT(lit_249);
DEFLIT(lit_229);
DEFLIT(lit_663);
DEFLIT(lit_132);
DEFLIT(lit_568);
DEFLIT(lit_411);
DEFLIT(lit_200);
DEFLIT(lit_87);
DEFLIT(lit_321);
DEFLIT(lit_393);
DEFLIT(lit_603);
DEFLIT(lit_191);
DEFLIT(lit_362);
DEFLIT(lit_345);
DEFLIT(lit_4);
DEFLIT(lit_662);
DEFLIT(lit_506);
DEFLIT(lit_66);
DEFLIT(lit_594);
DEFLIT(lit_632);
DEFLIT(lit_260);
DEFLIT(lit_550);
DEFLIT(lit_438);
DEFLIT(lit_104);
DEFLIT(lit_439);
DEFLIT(lit_53);
DEFLIT(lit_604);
DEFLIT(lit_591);
DEFLIT(lit_65);
DEFLIT(lit_224);
DEFLIT(lit_320);
DEFLIT(lit_643);
DEFLIT(lit_670);
DEFLIT(lit_648);
DEFLIT(lit_361);
DEFLIT(lit_658);
DEFLIT(lit_368);
DEFLIT(lit_706);
DEFLIT(lit_612);
DEFLIT(lit_153);
DEFLIT(lit_163);
DEFLIT(lit_649);
DEFLIT(lit_679);
DEFLIT(lit_554);
DEFLIT(lit_408);
DEFLIT(lit_26);
DEFLIT(lit_407);
DEFLIT(lit_540);
DEFLIT(lit_405);
DEFLIT(lit_702);
DEFLIT(lit_359);
DEFLIT(lit_100);
DEFLIT(lit_239);
DEFLIT(lit_181);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_app_modname_1);
LOCFOR(fun_module_src_file_2);
LOCFOR(fun_module_src_file_setter_3);
LOCFOR(fun_module_mtime_4);
LOCFOR(fun_module_mtime_setter_5);
LOCFOR(fun_module_loader_module_type_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_load_module_12);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_14);
LOCFOR(fun_15);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
LOCFOR(fun_18);
LOCFOR(fun_19);
FUNFOR(YevalSg2cYg2c_build_app);
FUNFOR(YevalSg2cYg2c_test);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_g2c_ast_28);
LOCFOR(fun_g2c_exp_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_compile_load_32);
LOCFOR(fun_g2c_eval_33);
LOCFOR(fun_g2c_eval_34);
LOCFOR(fun_g2c_top_35);
LOCFOR(fun_g2c_clean_36);
LOCFOR(fun_compute_ast_37);
LOCFOR(fun_compute_program_38);
LOCFOR(fun_generate_c_module_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_generate_c_application_42);
LOCFOR(fun_x_1623_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_put_obj_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_generate_makefile_56);
LOCFOR(fun_generate_c_forms_57);
LOCFOR(fun_pp_58);
LOCFOR(fun_include_filename_59);
LOCFOR(fun_include_filename_60);
LOCFOR(fun_include_filename_61);
LOCFOR(fun_62);
LOCFOR(fun_generate_header_63);
LOCFOR(fun_generate_trailer_64);
LOCFOR(fun_gen_binding_65);
LOCFOR(fun_generate_global_environment_66);
LOCFOR(fun_generate_global_binding_67);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_mangle_string_literal_69);
LOCFOR(fun_mangle_string_literal_70);
LOCFOR(fun_process_integer_71);
LOCFOR(fun_mangle_integer_72);
FUNFOR(YevalSg2cYmangler_reset);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_75);
LOCFOR(fun_mangle_raw_name_76);
LOCFOR(fun_mangle_local_name_77);
LOCFOR(fun_mangle_local_name_78);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_80);
LOCFOR(fun_mangle_global_name_81);
LOCFOR(fun_mangle_global_name_82);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_85);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_87);
LOCFOR(fun_mangle_binding_88);
LOCFOR(fun_x_1666_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_x_1670_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_x_1674_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_x_1678_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_gen_result_101);
LOCFOR(fun_gen_depth_102);
LOCFOR(fun_x_1685_103);
LOCFOR(fun_104);
LOCFOR(fun_105);
LOCFOR(fun_x_1689_106);
LOCFOR(fun_107);
LOCFOR(fun_108);
LOCFOR(fun_x_1693_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1697_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_x_1701_115);
LOCFOR(fun_116);
LOCFOR(fun_117);
LOCFOR(fun_generate_quotation_forwards_118);
LOCFOR(fun_generate_quotations_119);
FUNFOR(YOlit);
LOCFOR(fun_121);
LOCFOR(fun_ref_lit_122);
LOCFOR(fun_generate_quotation_123);
LOCFOR(fun_false_name_124);
LOCFOR(fun_generate_quotation_125);
LOCFOR(fun_generate_quotation_126);
LOCFOR(fun_127);
LOCFOR(fun_generate_quotation_128);
LOCFOR(fun_generate_quotation_129);
LOCFOR(fun_generate_quotation_130);
LOCFOR(fun_131);
LOCFOR(fun_float_to_c_string_132);
LOCFOR(fun_generate_quotation_133);
LOCFOR(fun_generate_quotation_134);
LOCFOR(fun_generate_quotation_135);
LOCFOR(fun_generate_quotation_136);
LOCFOR(fun_generate_quotation_137);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_139);
LOCFOR(fun_reference_Gc_140);
LOCFOR(fun_to_c_141);
LOCFOR(fun_to_c_142);
LOCFOR(fun_gen_refT_143);
LOCFOR(fun_gen_refT_144);
LOCFOR(fun_gen_refT_145);
LOCFOR(fun_gen_refT_146);
LOCFOR(fun_gen_refT_147);
LOCFOR(fun_gen_refT_148);
LOCFOR(fun_gen_refT_149);
LOCFOR(fun_gen_refT_150);
LOCFOR(fun_gen_refT_151);
FUNFOR(YevalSg2cYgen_ref);
LOCFOR(fun_to_pc_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_to_c_155);
LOCFOR(fun_to_c_156);
LOCFOR(fun_to_c_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_bbQ_159);
LOCFOR(fun_bbQ_160);
LOCFOR(fun_bbQ_161);
LOCFOR(fun_to_c_162);
LOCFOR(fun_163);
LOCFOR(fun_164);
LOCFOR(fun_165);
LOCFOR(fun_to_c_166);
LOCFOR(fun_167);
LOCFOR(fun_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_to_c_171);
LOCFOR(fun_to_c_172);
LOCFOR(fun_173);
LOCFOR(fun_174);
LOCFOR(fun_to_c_175);
LOCFOR(fun_176);
LOCFOR(fun_177);
LOCFOR(fun_178);
LOCFOR(fun_179);
LOCFOR(fun_to_c_180);
LOCFOR(fun_to_c_181);
LOCFOR(fun_182);
LOCFOR(fun_to_c_183);
LOCFOR(fun_to_c_184);
LOCFOR(fun_to_c_185);
LOCFOR(fun_to_c_186);
LOCFOR(fun_187);
LOCFOR(fun_188);
LOCFOR(fun_to_c_189);
LOCFOR(fun_190);
LOCFOR(fun_to_c_191);
LOCFOR(fun_funshell_to_c_192);
LOCFOR(fun_193);
LOCFOR(fun_funinit_to_c_194);
LOCFOR(fun_to_c_195);
LOCFOR(fun_out_list_builder_196);
LOCFOR(fun_197);
LOCFOR(fun_gen_fab_list_198);
LOCFOR(fun_generate_function_specs_199);
LOCFOR(fun_200);
LOCFOR(fun_to_c_201);
LOCFOR(fun_to_c_202);
LOCFOR(fun_generate_function_forwards_203);
LOCFOR(fun_204);
LOCFOR(fun_205);
LOCFOR(fun_generate_function_forward_206);
LOCFOR(fun_generate_function_binding_207);
LOCFOR(fun_generate_function_forward_208);
LOCFOR(fun_209);
LOCFOR(fun_generate_function_bodies_210);
LOCFOR(fun_211);
LOCFOR(fun_generate_functions_212);
LOCFOR(fun_generate_closure_structure_213);
LOCFOR(fun_generate_function_body_reference_214);
LOCFOR(fun_generate_return_215);
LOCFOR(fun_generate_return_216);
LOCFOR(fun_217);
LOCFOR(fun_218);
LOCFOR(fun_generate_function_code_219);
LOCFOR(fun_dispatcherQ_220);
LOCFOR(fun_221);
LOCFOR(fun_222);
LOCFOR(fun_223);
LOCFOR(fun_generate_function_code_224);
LOCFOR(fun_generate_local_temporaries_225);
LOCFOR(fun_generate_registers_226);
LOCFOR(fun_module_info_name_227);
LOCFOR(fun_maybe_declare_228);
LOCFOR(fun_229);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_231);
LOCFOR(fun_232);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_234);
LOCFOR(fun_module_init_decl_235);
LOCFOR(fun_generate_module_init_236);
LOCFOR(fun_generate_main_237);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();
extern P YevalSg2cY___main_3___ ();
extern P YevalSg2cY___main_4___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_app_modname_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_src_file_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_src_file_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mtime_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mtime_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_module_type_6) {
  P loader_;
LINK_STACK();
  ARG(loader_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

LOCCODEDEF(fun_7) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_8) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P x_1615F4693;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_1615F4693 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_7,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_8,1,x_1615F4693);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_10) {
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

LOCCODEDEF(fun_11) {
  P name_;
  P tmpF4697;
  P src_fileF4696;
  P build_fileF4695;
  P fileF4694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF4694 = T10;
  T9 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF4694);
  build_fileF4695 = T9;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF4694);
  src_fileF4696 = T8;
  T6 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF4695);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF4697 = T5;
  if (tmpF4697 != YPfalse) {
    T1 = tmpF4697;
  } else {
    T3 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF4696);
    T4 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF4695);
    T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF4696,build_fileF4695);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_module_12) {
  P loader_,name_;
  P out_portF4707;
  P prgF4706;
  P astF4705;
  P out_fileF4704;
  P appnameF4703;
  P src_fileF4702;
  P fileF4701;
  P envF4700;
  P keepmodQF4699;
  P modF4698;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T20 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF4698 = T20;
  keepmodQF4699 = YPfalse;
  T19 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF4698);
  envF4700 = T19;
  T18 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF4701 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF4701);
  T16 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T17);
  src_fileF4702 = T16;
  T15 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF4703 = T15;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF4701);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF4703,T14);
  out_fileF4704 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF4702,modF4698);
  T0 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF4702);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T0,modF4698);
  T1 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF4702,envF4700);
  astF4705 = T12;
  T11 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF4705,envF4700);
  prgF4706 = T11;
  T2 = (P)YPsu(LITREF(lit_19));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T3 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF4704);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T3);
  out_portF4707 = YPfalse;
  out_portF4707 = BOXFAB(out_portF4707);
  T6 = FUNFAB(fun_9,5,out_portF4707,out_fileF4704,prgF4706,astF4705,modF4698);
  T7 = FUNFAB(fun_10,1,out_portF4707);
  T5 = with_cleanup(T6,T7);
  T8 = FUNFAB(fun_11,1,appnameF4703);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),modF4698);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,T9);
  T10 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T10);
UNLINK_STACK();
  RET(modF4698);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_14) {
  P mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXGET(FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,T6);
    T3 = BOXPUT(T4,FREEREF(0));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P name_;
  P x_1616F4708;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  x_1616F4708 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1616F4708,name_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1616F4708,LITREF(lit_29));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF4709;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(loader_, 0);
  changedF4709 = Ynil;
  changedF4709 = BOXFAB(changedF4709);
  T1 = FUNFAB(fun_14,1,changedF4709);
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T1,loader_);
  T2 = fun_15;
  T3 = BOXGET(changedF4709);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
  T5 = BOXGET(changedF4709);
  T4 = CALL2(1,VARREF(YevalSmoduleYremove_modules_by_nameX),loader_,T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_18) {
  P modF4710;
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPfalse);
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYprobe_module),FREEREF(0),T1);
  modF4710 = T0;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_34));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),VARREF(YevalSmoduleYreport_undefined_global_bindings),FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),FREEREF(0),modF4710);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_19) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P x_1617F4711;
  P T0,T1,T2;
LINK_STACK();
  ARG(loader_, 0);
  x_1617F4711 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_18,1,loader_);
  T2 = FUNFAB(fun_19,1,x_1617F4711);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YgooSanyYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_37),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_38));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_23) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P x_1619F4712;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  x_1619F4712 = DYNREF(YevalSg2cYTdefinitionsT);
  T1 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_23,1,x_1619F4712);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_25) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P x_1618F4713;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_1618F4713 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T2 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_25,1,x_1618F4713);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_27) {
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

LOCCODEDEF(fun_g2c_ast_28) {
  P ast_,env_;
  P out_portF4719;
  P prgF4718;
  P out_fileF4717;
  P fileF4716;
  P nameF4715;
  P modF4714;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),env_);
  modF4714 = T11;
  T8 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T10 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T9 = DYNSET(YevalSg2cYTtmp_file_counterT,T10);
  T7 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_41),T8,T9);
  nameF4715 = T7;
  T6 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF4715);
  fileF4716 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF4716);
  out_fileF4717 = T5;
  T4 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF4718 = T4;
  out_portF4719 = YPfalse;
  out_portF4719 = BOXFAB(out_portF4719);
  T2 = FUNFAB(fun_26,5,out_portF4719,out_fileF4717,prgF4718,ast_,modF4714);
  T3 = FUNFAB(fun_27,1,out_portF4719);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(fileF4716);
}

LOCCODEDEF(fun_g2c_exp_29) {
  P exp_,env_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,DYNREF(YevalSmoduleYTdynamic_compilationQT),YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_30) {
  P U1_;
  P T0,T1;
LINK_STACK();
  ARG(U1_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),U1_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_48),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_31) {
  P U1_;
  P T0,T1;
LINK_STACK();
  ARG(U1_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),U1_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_50),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_compile_load_32) {
  P name_,mod_;
  P lstrF4723;
  P libsF4722;
  P istrF4721;
  P incsF4720;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(name_, 0);
  ARG(mod_, 1);
  T16 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),mod_);
  incsF4720 = T16;
  T15 = fun_30;
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,incsF4720);
  T13 = CALL3(1,VARREF(YgooScolsScolYfold),VARREF(YgooSmacrosYcat),LITREF(lit_46),T14);
  istrF4721 = T13;
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),mod_);
  libsF4722 = T12;
  T11 = fun_31;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),T11,libsF4722);
  T9 = CALL3(1,VARREF(YgooScolsScolYfold),VARREF(YgooSmacrosYcat),LITREF(lit_46),T10);
  lstrF4723 = T9;
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_51));
  T2 = (P)YPsu(T3);
  T4 = (P)YPsu(istrF4721);
  T5 = (P)YPsu(lstrF4723);
  (P)YgooSsystemYPcompile(T0,T2,T4,T5);
  T8 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_52));
  T7 = (P)YPsu(T8);
  T6 = (P)YgooSsystemYPload(T7);
UNLINK_STACK();
  QRET(T6);
}

LOCCODEDEF(fun_g2c_eval_33) {
  P exp_,env_;
  P nameF4724;
  P T0,T1,T2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T2 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF4724 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),env_);
  T0 = CALL2(1,VARREF(YevalSg2cYcompile_load),nameF4724,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_eval_34) {
  P ast_,env_;
  P nameF4725;
  P T0,T1,T2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T2 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF4725 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),env_);
  T0 = CALL2(1,VARREF(YevalSg2cYcompile_load),nameF4725,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_top_35) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_clean_36) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_59),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_compute_ast_37) {
  P filename_,ct_env_;
  P astF4727;
  P sexprF4726;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T3 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF4726 = T3;
  T0 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T2 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF4726,ct_env_,DYNREF(YevalSmoduleYTdynamic_compilationQT),YPfalse);
  astF4727 = T2;
  T1 = (P)YPsu(LITREF(lit_63));
  (P)YevalSg2cYPprint_cpu_usage(T1);
UNLINK_STACK();
  QRET(astF4727);
}

LOCCODEDEF(fun_compute_program_38) {
  P e_,env_;
  P fltF4732;
  P prgF4731;
  P lftF4730;
  P boxF4729;
  P anaF4728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),e_,env_);
  anaF4728 = T11;
  T0 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF4728);
  boxF4729 = T10;
  T1 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF4729);
  lftF4730 = T9;
  T2 = (P)YPsu(LITREF(lit_68));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF4730);
  prgF4731 = T8;
  T3 = (P)YPsu(LITREF(lit_69));
  (P)YevalSg2cYPprint_cpu_usage(T3);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF4731,env_,YPint((P)50));
  fltF4732 = T7;
  T4 = (P)YPsu(LITREF(lit_70));
  (P)YevalSg2cYPprint_cpu_usage(T4);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF4732);
  T5 = (P)YPsu(LITREF(lit_71));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF4732,YPfalse);
  T6 = (P)YPsu(LITREF(lit_72));
  (P)YevalSg2cYPprint_cpu_usage(T6);
UNLINK_STACK();
  QRET(prgF4731);
}

LOCCODEDEF(fun_generate_c_module_39) {
  P out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
  CALL2(1,VARREF(YevalSg2cYgenerate_header),out_,mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),out_,mod_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),out_,T1);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_c_forms),mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_forms),out_,T2);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),out_,T3);
  T4 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),out_,mod_);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),out_,mod_,T6);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),out_);
UNLINK_STACK();
  QRET(prg_);
}

LOCCODEDEF(fun_40) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T1 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,FREEREF(2));
  T2 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(2));
  T4 = BOXGET(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_41) {
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

LOCCODEDEF(fun_generate_c_application_42) {
  P loader_,mod_;
  P out_portF4736;
  P out_nameF4735;
  P init_nameF4734;
  P appnameF4733;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF4733 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF4733,LITREF(lit_77));
  init_nameF4734 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF4734);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF4733,T5);
  out_nameF4735 = T4;
  out_portF4736 = YPfalse;
  out_portF4736 = BOXFAB(out_portF4736);
  T2 = FUNFAB(fun_40,3,out_portF4736,out_nameF4735,mod_);
  T3 = FUNFAB(fun_41,1,out_portF4736);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_x_1623_43) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_82),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
  P return_;
  P x_1622F4749;
  P x_1622F4748;
  P x_1622F4747;
  P x_1622F4746;
  P x_1622F4745;
  P x_1622F4744;
  P x_1622F4743;
  P x_1622F4742;
  P bodyF4741;
  P loaderF4740;
  P modF4739;
  P x_1622F4738;
  P x_1623F4737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(return_, 0);
  T29 = FUNSHELL(0,fun_x_1623_43,2);
  x_1623F4737 = T29;
  FUNINIT(x_1623F4737, 2,FREEREF(0),return_);
  x_1622F4738 = FREEREF(0);
  modF4739 = YPfalse;
  loaderF4740 = YPfalse;
  bodyF4741 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1622F4738,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1622F4738,LITREF(lit_82),x_1623F4737);
    x_1622F4742 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F4742,x_1623F4737);
    x_1622F4743 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F4743,x_1623F4737);
    modF4739 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1622F4743);
    x_1622F4744 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F4744,x_1623F4737);
    loaderF4740 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1622F4744);
    x_1622F4745 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F4745,x_1623F4737);
    x_1622F4746 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1622F4746,x_1623F4737);
    T8 = CALL1(1,VARREF(Ytail),x_1622F4745);
    x_1622F4747 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1622F4747,x_1623F4737);
    T14 = CALL1(1,VARREF(Ytail),x_1622F4742);
    x_1622F4748 = T14;
    bodyF4741 = x_1622F4748;
    x_1622F4749 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1622F4749,x_1623F4737);
  } else {
    T16 = CALL2(1,x_1623F4737,LITREF(lit_83),x_1622F4738);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T25 = modF4739;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_86));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = bodyF4741;
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T26,LITREF(lit_86));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = loaderF4740;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T27,LITREF(lit_86));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_45) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_44,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_46) {
  P i_;
  P x_1627F4750;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(i_, 0);
  T2 = CALL1(1,VARREF(YevalSg2cYinclude_filename),i_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = BOXGET(FREEREF(0));
    x_1627F4750 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),x_1627F4750,LITREF(lit_101));
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1627F4750,i_);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1627F4750,LITREF(lit_102));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_47) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_46,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_put_obj_48) {
  P name_;
  P x_1630F4751;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = BOXGET(FREEREF(0));
  x_1630F4751 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_1630F4751,LITREF(lit_108));
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  T0 = CALL1(1,VARREF(YgooSsystemYobj_filename),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1630F4751,T0);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1630F4751,LITREF(lit_109));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_49) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_111));
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),name_);
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,YPint((P)2));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T5);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T4);
    T2 = CALL1(0,FREEREF(0),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_50) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_51) {
  P mod_;
  P put_objF4752;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T6 = FUNSHELL(1,fun_put_obj_48,1);
  put_objF4752 = T6;
  FUNINIT(put_objF4752, 1,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL1(0,put_objF4752,T0);
  T2 = FUNFAB(fun_49,1,put_objF4752);
  T4 = fun_50;
  T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_52) {
  P l_;
  P x_1634F4753;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  T1 = BOXGET(FREEREF(0));
  x_1634F4753 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1634F4753,LITREF(lit_120));
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1634F4753,l_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_53) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_52,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_54) {
  P x_1635F4762;
  P x_1633F4761;
  P x_1632F4760;
  P x_1631F4759;
  P x_1629F4758;
  P x_1628F4757;
  P x_1626F4756;
  P x_1625F4755;
  P x_1624F4754;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  x_1624F4754 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),x_1624F4754,LITREF(lit_91));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1624F4754,FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1624F4754,LITREF(lit_92));
  T4 = BOXGET(FREEREF(0));
  x_1625F4755 = T4;
  CALL2(1,VARREF(YgooSioSportYputs),x_1625F4755,LITREF(lit_93));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1625F4755,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1625F4755,LITREF(lit_94));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1625F4755,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1625F4755,LITREF(lit_95));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1625F4755,FREEREF(2));
  CALL2(1,VARREF(YgooSioSportYputs),x_1625F4755,LITREF(lit_96));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1625F4755,FREEREF(2));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1625F4755,LITREF(lit_97));
  T6 = BOXGET(FREEREF(0));
  x_1626F4756 = T6;
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1626F4756,LITREF(lit_98));
  T7 = FUNFAB(fun_47,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T7,FREEREF(3));
  T9 = BOXGET(FREEREF(0));
  x_1628F4757 = T9;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1628F4757,LITREF(lit_103));
  T11 = BOXGET(FREEREF(0));
  x_1629F4758 = T11;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1629F4758,LITREF(lit_104));
  T12 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T12,FREEREF(3));
  T15 = BOXGET(FREEREF(0));
  x_1631F4759 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_1631F4759,LITREF(lit_113));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1631F4759,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1631F4759,LITREF(lit_114));
  T17 = BOXGET(FREEREF(0));
  x_1632F4760 = T17;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1632F4760,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1632F4760,LITREF(lit_115));
  T19 = BOXGET(FREEREF(0));
  x_1633F4761 = T19;
  CALL2(1,VARREF(YgooSioSportYputs),x_1633F4761,LITREF(lit_116));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1633F4761,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_1633F4761,LITREF(lit_117));
  T20 = FUNFAB(fun_53,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXGET(FREEREF(0));
  x_1635F4762 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_1635F4762,LITREF(lit_121));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1635F4762,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1635F4762,LITREF(lit_122));
UNLINK_STACK();
  QRET(T21);
}

LOCCODEDEF(fun_55) {
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

LOCCODEDEF(fun_generate_makefile_56) {
  P loader_;
  P outF4768;
  P out_nameF4767;
  P sepF4766;
  P exe_nameF4765;
  P init_nameF4764;
  P appnameF4763;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF4763 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF4763,LITREF(lit_89));
  init_nameF4764 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF4763);
  exe_nameF4765 = T5;
  sepF4766 = VARREF(YgooSsystemYTpath_separatorT);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF4763,LITREF(lit_90));
  out_nameF4767 = T4;
  outF4768 = YPfalse;
  outF4768 = BOXFAB(outF4768);
  T2 = FUNFAB(fun_54,6,outF4768,out_nameF4767,sepF4766,loader_,init_nameF4764,exe_nameF4765);
  T3 = FUNFAB(fun_55,1,outF4768);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_generate_c_forms_57) {
  P out_,definitions_;
  P defF4770;
  P x_1636F4769;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_125));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_1636F4769 = T6;
  LOOP_215: {
    P a215_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1636F4769);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1636F4769);
      defF4770 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),defF4770,YPfalse,YPint((P)0),out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1636F4769);
      a215_0 = T4;
      x_1636F4769 = a215_0;
      goto LOOP_215;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_pp_58) {
  P e_,out_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),out_,e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_include_filename_59) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_include_filename_60) {
  P x_;
  P xF4771;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),x_);
  xF4771 = T4;
  T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),xF4771,LITREF(lit_132));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),xF4771,LITREF(lit_133));
    if (T3 != YPfalse) {
      T2 = xF4771;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_include_filename_61) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),x_,LITREF(lit_135));
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_136),x_,LITREF(lit_137));
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_62) {
  P i_;
  P x_1641F4773;
  P ifnF4772;
  P T0,T1,T2;
LINK_STACK();
  ARG(i_, 0);
  T2 = CALL1(1,VARREF(YevalSg2cYinclude_filename),i_);
  ifnF4772 = T2;
  if (ifnF4772 != YPfalse) {
    x_1641F4773 = FREEREF(0);
    T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1641F4773,LITREF(lit_144));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_header_63) {
  P out_,mod_;
  P x_1647F4784;
  P x_1646F4783;
  P x_1645F4782;
  P x_1644F4781;
  P x_1643F4780;
  P x_1642F4779;
  P x_1640F4778;
  P x_1639F4777;
  P x_1638F4776;
  P modvarF4775;
  P modnameF4774;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T13 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  modnameF4774 = T13;
  modvarF4775 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_1638F4776 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1638F4776,LITREF(lit_140));
  x_1639F4777 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1639F4777,LITREF(lit_141));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    x_1640F4778 = out_;
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1640F4778,LITREF(lit_142));
  } else {
  }
  T3 = FUNFAB(fun_62,1,out_);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),mod_);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  x_1642F4779 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1642F4779,LITREF(lit_145));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1642F4779,modvarF4775);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1642F4779,LITREF(lit_146));
  x_1643F4780 = out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1643F4780,LITREF(lit_147));
  x_1644F4781 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1644F4781,LITREF(lit_148));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1644F4781,modvarF4775);
  CALL2(1,VARREF(YgooSioSportYputs),x_1644F4781,LITREF(lit_149));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1644F4781,modvarF4775);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1644F4781,LITREF(lit_150));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,modnameF4774);
  x_1645F4782 = out_;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1645F4782,LITREF(lit_151));
  x_1646F4783 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1646F4783,LITREF(lit_152));
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_153));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F4783,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_1646F4783,LITREF(lit_154));
  T10 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_155));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F4783,T10);
  CALL2(1,VARREF(YgooSioSportYputs),x_1646F4783,LITREF(lit_156));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F4783,modvarF4775);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1646F4783,LITREF(lit_157));
  x_1647F4784 = out_;
  T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1647F4784,LITREF(lit_158));
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_generate_trailer_64) {
  P out_;
  P x_1648F4785;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  x_1648F4785 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1648F4785,LITREF(lit_161));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_binding_65) {
  P b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),b_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_global_environment_66) {
  P out_,mod_;
  P gen_bindingF4787;
  P x_1649F4786;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  x_1649F4786 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1649F4786,LITREF(lit_164));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1649F4786,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1649F4786,LITREF(lit_165));
  T7 = FUNSHELL(0,fun_gen_binding_65,2);
  gen_bindingF4787 = T7;
  FUNINIT(gen_bindingF4787, 2,out_,mod_);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_referenced_bindings),mod_);
    T3 = CALL2(1,VARREF(YgooSmacrosYdo),gen_bindingF4787,T4);
    T2 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
    T5 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),gen_bindingF4787,T6);
    T2 = T5;
  }
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_global_binding_67) {
  P out_,importedQ_,gb_;
  P x_1652F4794;
  P x_1651F4793;
  P x_1650F4792;
  P nameF4791;
  P tmpF4790;
  P tmpF4789;
  P kindF4788;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
  T17 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),gb_);
  kindF4788 = T17;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),kindF4788,LITREF(lit_170));
  tmpF4789 = T5;
  if (tmpF4789 != YPfalse) {
    T1 = tmpF4789;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF4788,LITREF(lit_171));
    tmpF4790 = T4;
    if (tmpF4790 != YPfalse) {
      T2 = tmpF4790;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),kindF4788,LITREF(lit_172));
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),gb_);
    nameF4791 = T16;
    x_1650F4792 = kindF4788;
    x_1651F4793 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1651F4793,x_1650F4792,LITREF(lit_171));
    if (T7 != YPfalse) {
      T6 = LITREF(lit_173);
    } else {
      T9 = CALL2(1,x_1651F4793,x_1650F4792,LITREF(lit_172));
      if (T9 != YPfalse) {
        T8 = LITREF(lit_174);
      } else {
        T8 = LITREF(lit_46);
      }
      T6 = T8;
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    x_1652F4794 = out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_175);
    } else {
      T10 = LITREF(lit_176);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1652F4794,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_1652F4794,LITREF(lit_177));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1652F4794,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1652F4794,LITREF(lit_178));
    T13 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1652F4794,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_1652F4794,LITREF(lit_179));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF4791);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1652F4794,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1652F4794,LITREF(lit_180));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P iF4797;
  P stringF4796;
  P buffer_sizeF4795;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(buffer_, 0);
  T6 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T6,VARREF(YLintG));
  buffer_sizeF4795 = T6;
  T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF4795);
  check_type(T5,VARREF(YLstrG));
  stringF4796 = T5;
  iF4797 = YPint((P)0);
  LOOP_216: {
    P a216_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF4797,buffer_sizeF4795);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),buffer_,iF4797);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,stringF4796,iF4797);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF4797,YPint((P)1));
      a216_0 = T4;
      iF4797 = a216_0;
      goto LOOP_216;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(stringF4796);
}

LOCCODEDEF(fun_mangle_string_literal_69) {
  P str_;
  P encF4801;
  P cF4800;
  P iF4799;
  P lenF4798;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(str_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T11 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF4798 = T11;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  iF4799 = YPint((P)0);
  LOOP_217: {
    P a217_0;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF4799,lenF4798);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
      T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
      T0 = T2;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),str_,iF4799);
      cF4800 = T10;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF4800);
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T9);
      encF4801 = T8;
      T3 = CALL2(1,VARREF(YgooSlogYE),encF4801,YPfalse);
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF4800);
      } else {
        T5 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF4801);
      }
      T7 = CALL2(1,VARREF(YgooSmathYA),iF4799,YPint((P)1));
      a217_0 = T7;
      iF4799 = a217_0;
      goto LOOP_217;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_string_literal_70) {
  P sym_;
  P T0,T1;
LINK_STACK();
  ARG(sym_, 0);
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_process_integer_71) {
  P number_,index_;
  P resultF4807;
  P resultF4806;
  P digitF4805;
  P remainderF4804;
  P quotientF4803;
  P tup37F4802;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
  T10 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup37F4802 = T10;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F4802,YPint((P)0));
  check_type(T9,VARREF(YLintG));
  quotientF4803 = T9;
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F4802,YPint((P)1));
  check_type(T8,VARREF(YLintG));
  remainderF4804 = T8;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF4804);
  check_type(T7,VARREF(YLchrG));
  digitF4805 = T7;
  T1 = CALL2(1,VARREF(YgooSlogYE),quotientF4803,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T2,VARREF(YgooScolsSvecYLvecG));
    resultF4806 = T2;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF4805,resultF4806,YPint((P)0));
    T0 = resultF4806;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T5 = CALL2(1,FREEREF(0),quotientF4803,T6);
    check_type(T5,VARREF(YgooScolsSvecYLvecG));
    resultF4807 = T5;
    T4 = CALL1(1,VARREF(YgooStypesYlen),resultF4807);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF4805,resultF4807,T3);
    T0 = resultF4807;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_integer_72) {
  P number_;
  P process_integerF4808;
  P T0,T1,T2;
LINK_STACK();
  ARG(number_, 0);
  T2 = FUNSHELL(1,fun_process_integer_71,1);
  process_integerF4808 = T2;
  FUNINIT(process_integerF4808, 1,process_integerF4808);
  T1 = CALL2(1,process_integerF4808,number_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
LINK_STACK();
  ARG(buffer_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P cF4810;
  P x_1661F4809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  x_1661F4809 = T9;
  LOOP_218: {
    P a218_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1661F4809);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1661F4809);
      cF4810 = T8;
      T5 = CALL1(1,VARREF(YgooSchrYto_lower),cF4810);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T5);
      T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T4);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T3);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1661F4809);
      a218_0 = T7;
      x_1661F4809 = a218_0;
      goto LOOP_218;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(buf_);
}

LOCCODEDEF(fun_mangle_raw_name_75) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_raw_name_76) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_local_name_77) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_local_name_78) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P iF4812;
  P lenF4811;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T5 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF4811 = T5;
  iF4812 = YPint((P)0);
  LOOP_219: {
    P a219_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF4812,lenF4811);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),name_,iF4812);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T2);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF4812,YPint((P)1));
      a219_0 = T4;
      iF4812 = a219_0;
      goto LOOP_219;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_module_into_80) {
  P buf_,mod_;
  P nameF4815;
  P tmpF4814;
  P UF4813;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  UF4813 = T9;
  T8 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  tmpF4814 = T8;
  if (tmpF4814 != YPfalse) {
    T1 = tmpF4814;
  } else {
    T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T5,T6);
    T3 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T4);
    T2 = CALL2(1,VARREF(YevalSmoduleYmodule_mangled_name_setter),T3,mod_);
    T1 = T2;
  }
  nameF4815 = T1;
  T0 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF4815);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_global_name_81) {
  P mod_,name_;
  P tmpF4816;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  tmpF4816 = T4;
  if (tmpF4816 != YPfalse) {
    T1 = tmpF4816;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,VARREF(YevalSmoduleYDgoo_boot_module_name));
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T5 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T6 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_mangle_global_name_82) {
  P mod_,name_;
  P T0,T1;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSmoduleYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_242));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_mangle_binding_85) {
  P binding_;
  P tmpF4818;
  P UF4817;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(binding_, 0);
  T11 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF4817 = T11;
  T10 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF4818 = T10;
  if (tmpF4818 != YPfalse) {
    T0 = tmpF4818;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_245));
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T5 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T6);
      T2 = T5;
    } else {
      T8 = CALL1(1,VARREF(YevalSmoduleYbinding_module),binding_);
      T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T7 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T8,T9);
      T2 = T7;
    }
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_mangle_binding_87) {
  P binding_;
  P tmpF4820;
  P UF4819;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  T5 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF4819 = T5;
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF4820 = T4;
  if (tmpF4820 != YPfalse) {
    T0 = tmpF4820;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T3);
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_binding_88) {
  P binding_;
  P tmpF4822;
  P UF4821;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(binding_, 0);
  T7 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF4821 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF4822 = T6;
  if (tmpF4822 != YPfalse) {
    T0 = tmpF4822;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
    T5 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T2 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T3,T5);
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1666_89) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_254),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_90) {
  P return_;
  P out_varF4836;
  P x_1665F4835;
  P x_1665F4834;
  P x_1665F4833;
  P x_1665F4832;
  P x_1665F4831;
  P x_1665F4830;
  P x_1665F4829;
  P x_1665F4828;
  P bodyF4827;
  P clausesF4826;
  P out_valF4825;
  P x_1665F4824;
  P x_1666F4823;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T55 = FUNSHELL(0,fun_x_1666_89,2);
  x_1666F4823 = T55;
  FUNINIT(x_1666F4823, 2,FREEREF(0),return_);
  x_1665F4824 = FREEREF(0);
  out_valF4825 = YPfalse;
  clausesF4826 = YPfalse;
  bodyF4827 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1665F4824,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1665F4824,LITREF(lit_254),x_1666F4823);
    x_1665F4828 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1665F4828,x_1666F4823);
    out_valF4825 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1665F4828);
    x_1665F4829 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1665F4829,x_1666F4823);
    x_1665F4830 = T9;
    clausesF4826 = x_1665F4830;
    x_1665F4831 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1665F4831,x_1666F4823);
    x_1665F4832 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1665F4832,x_1666F4823);
    T8 = CALL1(1,VARREF(Ytail),x_1665F4831);
    x_1665F4833 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1665F4833,x_1666F4823);
    T10 = CALL1(1,VARREF(Ytail),x_1665F4829);
    x_1665F4834 = T10;
    bodyF4827 = x_1665F4834;
    x_1665F4835 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1665F4835,x_1666F4823);
  } else {
    T14 = CALL2(1,x_1666F4823,LITREF(lit_83),x_1665F4824);
  }
  T54 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF4836 = T54;
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T21 = CALL1(1,VARREF(Ylst),out_varF4836);
  T23 = out_valF4825;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_86));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_86));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_256));
  T29 = clausesF4826;
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_257));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_259));
  T39 = CALL1(1,VARREF(Ylst),YPtrue);
  T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T39,LITREF(lit_86));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_259));
  T43 = CALL1(1,VARREF(Ylst),YPfalse);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_86));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T40,LITREF(lit_86));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_86));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_86));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_257));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T51 = CALL1(1,VARREF(Ylst),out_varF4836);
  T52 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T52,LITREF(lit_86));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T48,LITREF(lit_86));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T53 = bodyF4827;
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T44,T53,LITREF(lit_86));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T24,LITREF(lit_86));
UNLINK_STACK();
  QRET(T15);
}

LOCCODEDEF(fun_91) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_90,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1670_92) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_266),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_93) {
  P return_;
  P psQF4849;
  P out_varF4848;
  P x_1669F4847;
  P x_1669F4846;
  P x_1669F4845;
  P x_1669F4844;
  P x_1669F4843;
  P x_1669F4842;
  P x_1669F4841;
  P bodyF4840;
  P out_valF4839;
  P x_1669F4838;
  P x_1670F4837;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1670_92,2);
  x_1670F4837 = T51;
  FUNINIT(x_1670F4837, 2,FREEREF(0),return_);
  x_1669F4838 = FREEREF(0);
  out_valF4839 = YPfalse;
  bodyF4840 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1669F4838,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1669F4838,LITREF(lit_266),x_1670F4837);
    x_1669F4841 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1669F4841,x_1670F4837);
    x_1669F4842 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1669F4842,x_1670F4837);
    out_valF4839 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1669F4842);
    x_1669F4843 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1669F4843,x_1670F4837);
    x_1669F4844 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1669F4844,x_1670F4837);
    T7 = CALL1(1,VARREF(Ytail),x_1669F4843);
    x_1669F4845 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1669F4845,x_1670F4837);
    T11 = CALL1(1,VARREF(Ytail),x_1669F4841);
    x_1669F4846 = T11;
    bodyF4840 = x_1669F4846;
    x_1669F4847 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1669F4847,x_1670F4837);
  } else {
    T13 = CALL2(1,x_1670F4837,LITREF(lit_83),x_1669F4838);
  }
  T50 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF4848 = T50;
  T49 = CALL0(1,VARREF(YgooSmacrosYgensym));
  psQF4849 = T49;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T20 = CALL1(1,VARREF(Ylst),out_varF4848);
  T22 = out_valF4839;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_86));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),psQF4849);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_267));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,LITREF(lit_86));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_86));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T23,LITREF(lit_86));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T33 = CALL1(1,VARREF(Ylst),psQF4849);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T37 = CALL1(1,VARREF(Ylst),out_varF4848);
  T38 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,LITREF(lit_86));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,LITREF(lit_86));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T39 = bodyF4840;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T43 = CALL1(1,VARREF(Ylst),psQF4849);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T47 = CALL1(1,VARREF(Ylst),out_varF4848);
  T48 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T48,LITREF(lit_86));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T44,LITREF(lit_86));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),6,T15,T16,T30,T39,T40,LITREF(lit_86));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_94) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_93,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1674_95) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_274),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_96) {
  P return_;
  P out_varF4861;
  P x_1673F4860;
  P x_1673F4859;
  P x_1673F4858;
  P x_1673F4857;
  P x_1673F4856;
  P x_1673F4855;
  P x_1673F4854;
  P bodyF4853;
  P out_valF4852;
  P x_1673F4851;
  P x_1674F4850;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_1674_95,2);
  x_1674F4850 = T35;
  FUNINIT(x_1674F4850, 2,FREEREF(0),return_);
  x_1673F4851 = FREEREF(0);
  out_valF4852 = YPfalse;
  bodyF4853 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1673F4851,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1673F4851,LITREF(lit_274),x_1674F4850);
    x_1673F4854 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1673F4854,x_1674F4850);
    x_1673F4855 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1673F4855,x_1674F4850);
    out_valF4852 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1673F4855);
    x_1673F4856 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1673F4856,x_1674F4850);
    x_1673F4857 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1673F4857,x_1674F4850);
    T7 = CALL1(1,VARREF(Ytail),x_1673F4856);
    x_1673F4858 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1673F4858,x_1674F4850);
    T11 = CALL1(1,VARREF(Ytail),x_1673F4854);
    x_1673F4859 = T11;
    bodyF4853 = x_1673F4859;
    x_1673F4860 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1673F4860,x_1674F4850);
  } else {
    T13 = CALL2(1,x_1674F4850,LITREF(lit_83),x_1673F4851);
  }
  T34 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF4861 = T34;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T20 = CALL1(1,VARREF(Ylst),out_varF4861);
  T22 = out_valF4852;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_86));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T17 = CALL2(1,VARREF(YgooSmacrosYcat),T18,LITREF(lit_86));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T26 = CALL1(1,VARREF(Ylst),out_varF4861);
  T27 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_86));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T28 = bodyF4853;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T32 = CALL1(1,VARREF(Ylst),out_varF4861);
  T33 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_86));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),6,T15,T16,T23,T28,T29,LITREF(lit_86));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_97) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_96,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1678_98) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_279),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_99) {
  P return_;
  P tmpF4877;
  P firstQF4876;
  P bodyF4875;
  P formsF4874;
  P out_varF4873;
  P x_1677F4872;
  P x_1677F4871;
  P x_1677F4870;
  P x_1677F4869;
  P x_1677F4868;
  P x_1677F4867;
  P x_1677F4866;
  P bodyF4865;
  P out_valF4864;
  P x_1677F4863;
  P x_1678F4862;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(return_, 0);
  T48 = FUNSHELL(0,fun_x_1678_98,2);
  x_1678F4862 = T48;
  FUNINIT(x_1678F4862, 2,FREEREF(0),return_);
  x_1677F4863 = FREEREF(0);
  out_valF4864 = YPfalse;
  bodyF4865 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1677F4863,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1677F4863,LITREF(lit_279),x_1678F4862);
    x_1677F4866 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1677F4866,x_1678F4862);
    x_1677F4867 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1677F4867,x_1678F4862);
    out_valF4864 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1677F4867);
    x_1677F4868 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1677F4868,x_1678F4862);
    x_1677F4869 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1677F4869,x_1678F4862);
    T7 = CALL1(1,VARREF(Ytail),x_1677F4868);
    x_1677F4870 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1677F4870,x_1678F4862);
    T11 = CALL1(1,VARREF(Ytail),x_1677F4866);
    x_1677F4871 = T11;
    bodyF4865 = x_1677F4871;
    x_1677F4872 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1677F4872,x_1678F4862);
  } else {
    T13 = CALL2(1,x_1678F4862,LITREF(lit_83),x_1677F4863);
  }
  T47 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF4873 = T47;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T20 = CALL1(1,VARREF(Ylst),out_varF4873);
  T22 = out_valF4864;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_86));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T17 = CALL2(1,VARREF(YgooSmacrosYcat),T18,LITREF(lit_86));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T26 = CALL1(1,VARREF(Ylst),out_varF4873);
  T27 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_86));
  T23 = CALL1(1,VARREF(Ylst),T24);
  formsF4874 = Ynil;
  T41 = bodyF4865;
  bodyF4875 = T41;
  firstQF4876 = YPtrue;
  LOOP_220: {
    P a220_0,a220_1,a220_2;
    T29 = CALL1(1,VARREF(YgooSmacrosYnulQ),bodyF4875);
    if (T29 != YPfalse) {
      T30 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF4874);
      T28 = T30;
    } else {
      T33 = CALL1(1,VARREF(Yhead),bodyF4875);
      tmpF4877 = firstQF4876;
      if (tmpF4877 != YPfalse) {
        T35 = tmpF4877;
      } else {
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
        T38 = CALL1(1,VARREF(Ylst),out_varF4873);
        T39 = CALL1(1,VARREF(Ylst),YPchr((P)44));
        T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T39,LITREF(lit_86));
        T35 = T36;
      }
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),T35,formsF4874);
      T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,T34);
      T40 = CALL1(1,VARREF(Ytail),bodyF4875);
      a220_0 = T32;
      a220_1 = T40;
      a220_2 = YPfalse;
      formsF4874 = a220_0;
      bodyF4875 = a220_1;
      firstQF4876 = a220_2;
      goto LOOP_220;
      T28 = T31;
    }
  }
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T45 = CALL1(1,VARREF(Ylst),out_varF4873);
  T46 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,LITREF(lit_86));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),6,T15,T16,T23,T28,T42,LITREF(lit_86));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_100) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_99,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_result_101) {
  P e_,d_,out_;
  P x_1679F4879;
  P regF4878;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF4878 = T4;
  if (regF4878 != YPfalse) {
    x_1679F4879 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1679F4879,LITREF(lit_282));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF4878);
    CALL2(1,VARREF(YgooSioSportYputs),x_1679F4879,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1679F4879,LITREF(lit_283));
    if (T3 != YPfalse) {
      T1 = YPtrue;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_gen_depth_102) {
  P d_,out_;
  P iF4881;
  P x_1680F4880;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(d_, 0);
  ARG(out_, 1);
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1680F4880 = T6;
  LOOP_221: {
    P a221_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1680F4880);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1680F4880);
      iF4881 = T5;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_286));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1680F4880);
      a221_0 = T4;
      x_1680F4880 = a221_0;
      goto LOOP_221;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1685_103) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_291),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_104) {
  P return_;
  P x_1684F4894;
  P x_1684F4893;
  P x_1684F4892;
  P x_1684F4891;
  P x_1684F4890;
  P x_1684F4889;
  P x_1684F4888;
  P x_1684F4887;
  P bodyF4886;
  P outF4885;
  P dF4884;
  P x_1684F4883;
  P x_1685F4882;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_1685_103,2);
  x_1685F4882 = T41;
  FUNINIT(x_1685F4882, 2,FREEREF(0),return_);
  x_1684F4883 = FREEREF(0);
  dF4884 = YPfalse;
  outF4885 = YPfalse;
  bodyF4886 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1684F4883,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1684F4883,LITREF(lit_291),x_1685F4882);
    x_1684F4887 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1684F4887,x_1685F4882);
    x_1684F4888 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1684F4888,x_1685F4882);
    dF4884 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1684F4888);
    x_1684F4889 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1684F4889,x_1685F4882);
    outF4885 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1684F4889);
    x_1684F4890 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1684F4890,x_1685F4882);
    x_1684F4891 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1684F4891,x_1685F4882);
    T8 = CALL1(1,VARREF(Ytail),x_1684F4890);
    x_1684F4892 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1684F4892,x_1685F4882);
    T14 = CALL1(1,VARREF(Ytail),x_1684F4887);
    x_1684F4893 = T14;
    bodyF4886 = x_1684F4893;
    x_1684F4894 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1684F4894,x_1685F4882);
  } else {
    T16 = CALL2(1,x_1685F4882,LITREF(lit_83),x_1684F4883);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_292));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_284));
  T27 = dF4884;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T29 = outF4885;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T28,LITREF(lit_86));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_86));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T30 = bodyF4886;
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_293));
  T39 = outF4885;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_294));
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,LITREF(lit_86));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,LITREF(lit_86));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T17 = CALL5(1,VARREF(YgooSmacrosYcat),T18,T19,T30,T31,LITREF(lit_86));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_105) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_104,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1689_106) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_299),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_107) {
  P return_;
  P out_varF4906;
  P x_1688F4905;
  P x_1688F4904;
  P x_1688F4903;
  P x_1688F4902;
  P x_1688F4901;
  P x_1688F4900;
  P x_1688F4899;
  P bodyF4898;
  P out_valF4897;
  P x_1688F4896;
  P x_1689F4895;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_1689_106,2);
  x_1689F4895 = T34;
  FUNINIT(x_1689F4895, 2,FREEREF(0),return_);
  x_1688F4896 = FREEREF(0);
  out_valF4897 = YPfalse;
  bodyF4898 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1688F4896,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1688F4896,LITREF(lit_299),x_1689F4895);
    x_1688F4899 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1688F4899,x_1689F4895);
    x_1688F4900 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1688F4900,x_1689F4895);
    out_valF4897 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1688F4900);
    x_1688F4901 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1688F4901,x_1689F4895);
    x_1688F4902 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1688F4902,x_1689F4895);
    T7 = CALL1(1,VARREF(Ytail),x_1688F4901);
    x_1688F4903 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1688F4903,x_1689F4895);
    T11 = CALL1(1,VARREF(Ytail),x_1688F4899);
    x_1688F4904 = T11;
    bodyF4898 = x_1688F4904;
    x_1688F4905 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1688F4905,x_1689F4895);
  } else {
    T13 = CALL2(1,x_1689F4895,LITREF(lit_83),x_1688F4896);
  }
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF4906 = T33;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T20 = CALL1(1,VARREF(Ylst),out_varF4906);
  T22 = out_valF4897;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_86));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T17 = CALL2(1,VARREF(YgooSmacrosYcat),T18,LITREF(lit_86));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = bodyF4898;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_293));
  T31 = CALL1(1,VARREF(Ylst),out_varF4906);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_300));
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,LITREF(lit_86));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,LITREF(lit_86));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T14 = CALL5(1,VARREF(YgooSmacrosYcat),T15,T16,T23,T24,LITREF(lit_86));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_108) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_107,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1693_109) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_305),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_110) {
  P return_;
  P x_1692F4919;
  P x_1692F4918;
  P x_1692F4917;
  P x_1692F4916;
  P x_1692F4915;
  P x_1692F4914;
  P x_1692F4913;
  P x_1692F4912;
  P bodyF4911;
  P outF4910;
  P dF4909;
  P x_1692F4908;
  P x_1693F4907;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1693_109,2);
  x_1693F4907 = T33;
  FUNINIT(x_1693F4907, 2,FREEREF(0),return_);
  x_1692F4908 = FREEREF(0);
  dF4909 = YPfalse;
  outF4910 = YPfalse;
  bodyF4911 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1692F4908,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1692F4908,LITREF(lit_305),x_1693F4907);
    x_1692F4912 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1692F4912,x_1693F4907);
    x_1692F4913 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1692F4913,x_1693F4907);
    dF4909 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1692F4913);
    x_1692F4914 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1692F4914,x_1693F4907);
    outF4910 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1692F4914);
    x_1692F4915 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1692F4915,x_1693F4907);
    x_1692F4916 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1692F4916,x_1693F4907);
    T8 = CALL1(1,VARREF(Ytail),x_1692F4915);
    x_1692F4917 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1692F4917,x_1693F4907);
    T14 = CALL1(1,VARREF(Ytail),x_1692F4912);
    x_1692F4918 = T14;
    bodyF4911 = x_1692F4918;
    x_1692F4919 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1692F4919,x_1693F4907);
  } else {
    T16 = CALL2(1,x_1693F4907,LITREF(lit_83),x_1692F4908);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_299));
  T22 = outF4910;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_86));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_291));
  T29 = dF4909;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T31 = outF4910;
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T30,LITREF(lit_86));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T32 = bodyF4911;
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T32,LITREF(lit_86));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T23,LITREF(lit_86));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_111) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_110,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1697_112) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_310),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_113) {
  P return_;
  P x_1696F4934;
  P x_1696F4933;
  P x_1696F4932;
  P x_1696F4931;
  P x_1696F4930;
  P x_1696F4929;
  P x_1696F4928;
  P x_1696F4927;
  P x_1696F4926;
  P bodyF4925;
  P outF4924;
  P dF4923;
  P eF4922;
  P x_1696F4921;
  P x_1697F4920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_1697_112,2);
  x_1697F4920 = T42;
  FUNINIT(x_1697F4920, 2,FREEREF(0),return_);
  x_1696F4921 = FREEREF(0);
  eF4922 = YPfalse;
  dF4923 = YPfalse;
  outF4924 = YPfalse;
  bodyF4925 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1696F4921,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1696F4921,LITREF(lit_310),x_1697F4920);
    x_1696F4926 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1696F4926,x_1697F4920);
    x_1696F4927 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1696F4927,x_1697F4920);
    eF4922 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1696F4927);
    x_1696F4928 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1696F4928,x_1697F4920);
    dF4923 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1696F4928);
    x_1696F4929 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1696F4929,x_1697F4920);
    outF4924 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1696F4929);
    x_1696F4930 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1696F4930,x_1697F4920);
    x_1696F4931 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1696F4931,x_1697F4920);
    T9 = CALL1(1,VARREF(Ytail),x_1696F4930);
    x_1696F4932 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1696F4932,x_1697F4920);
    T17 = CALL1(1,VARREF(Ytail),x_1696F4926);
    x_1696F4933 = T17;
    bodyF4925 = x_1696F4933;
    x_1696F4934 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1696F4934,x_1697F4920);
  } else {
    T19 = CALL2(1,x_1697F4920,LITREF(lit_83),x_1696F4921);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_291));
  T25 = dF4923;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T27 = outF4924;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T26,LITREF(lit_86));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_280));
  T36 = eF4922;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = dF4923;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = outF4924;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALL5(1,VARREF(YgooSmacrosYcat),T34,T35,T37,T39,LITREF(lit_86));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,LITREF(lit_86));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T41 = bodyF4925;
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T28,T41,LITREF(lit_86));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_114) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_113,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1701_115) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_315),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_116) {
  P return_;
  P x_1700F4949;
  P x_1700F4948;
  P x_1700F4947;
  P x_1700F4946;
  P x_1700F4945;
  P x_1700F4944;
  P x_1700F4943;
  P x_1700F4942;
  P x_1700F4941;
  P bodyF4940;
  P outF4939;
  P dF4938;
  P eF4937;
  P x_1700F4936;
  P x_1701F4935;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(return_, 0);
  T39 = FUNSHELL(0,fun_x_1701_115,2);
  x_1701F4935 = T39;
  FUNINIT(x_1701F4935, 2,FREEREF(0),return_);
  x_1700F4936 = FREEREF(0);
  eF4937 = YPfalse;
  dF4938 = YPfalse;
  outF4939 = YPfalse;
  bodyF4940 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1700F4936,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1700F4936,LITREF(lit_315),x_1701F4935);
    x_1700F4941 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1700F4941,x_1701F4935);
    x_1700F4942 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1700F4942,x_1701F4935);
    eF4937 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1700F4942);
    x_1700F4943 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1700F4943,x_1701F4935);
    dF4938 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1700F4943);
    x_1700F4944 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1700F4944,x_1701F4935);
    outF4939 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1700F4944);
    x_1700F4945 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1700F4945,x_1701F4935);
    x_1700F4946 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1700F4946,x_1701F4935);
    T9 = CALL1(1,VARREF(Ytail),x_1700F4945);
    x_1700F4947 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1700F4947,x_1701F4935);
    T17 = CALL1(1,VARREF(Ytail),x_1700F4941);
    x_1700F4948 = T17;
    bodyF4940 = x_1700F4948;
    x_1700F4949 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1700F4949,x_1701F4935);
  } else {
    T19 = CALL2(1,x_1701F4935,LITREF(lit_83),x_1700F4936);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_316));
  T26 = eF4937;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_86));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_310));
  T33 = eF4937;
  T32 = CALL1(1,VARREF(Ylst),T33);
  T35 = dF4938;
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = outF4939;
  T36 = CALL1(1,VARREF(Ylst),T37);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T34,T36,LITREF(lit_86));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T38 = bodyF4940;
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T38,LITREF(lit_86));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T27,LITREF(lit_86));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_117) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_116,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_forwards_118) {
  P out_,qbT_;
  P x_1704F4952;
  P qbF4951;
  P x_1702F4950;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_319));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  x_1702F4950 = T8;
  LOOP_222: {
    P a222_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1702F4950);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1702F4950);
      qbF4951 = T7;
      x_1704F4952 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1704F4952,LITREF(lit_320));
      T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF4951);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1704F4952,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1704F4952,LITREF(lit_321));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1702F4950);
      a222_0 = T6;
      x_1702F4950 = a222_0;
      goto LOOP_222;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotations_119) {
  P out_,qbT_;
  P x_1707F4955;
  P qbF4954;
  P x_1705F4953;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  T12 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  x_1705F4953 = T11;
  LOOP_223: {
    P a223_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1705F4953);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1705F4953);
      qbF4954 = T10;
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T3 = CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      } else {
      }
      x_1707F4955 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1707F4955,LITREF(lit_324));
      T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF4954);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1707F4955,T4);
      T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1707F4955,LITREF(lit_325));
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_info),qbF4954);
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T6);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      } else {
      }
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1705F4953);
      a223_0 = T9;
      x_1705F4953 = a223_0;
      goto LOOP_223;
      T0 = T8;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOlit) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTlitsT),n_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_121) {
  P nF4956;
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YgooStypesYlen),VARREF(YevalSg2cYTlitsT));
  nF4956 = T0;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTlitsT),FREEREF(0));
UNLINK_STACK();
  QRET(nF4956);
}

LOCCODEDEF(fun_ref_lit_122) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_121,1,x_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYeltX),VARREF(YevalSg2cYTlits_atT),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_123) {
  P out_,x_;
  P x_1708F4957;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1708F4957 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1708F4957,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1708F4957,LITREF(lit_333));
  T2 = CALL1(1,VARREF(YevalSg2cYref_lit),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_1708F4957,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1708F4957,LITREF(lit_334));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_false_name_124) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_336));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_125) {
  P out_,qb_;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_338);
  } else {
    T2 = LITREF(lit_339);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_126) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_341));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_127) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_128) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = FUNFAB(fun_127,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_129) {
  P out_,x_;
  P x_1709F4958;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1709F4958 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_345));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1709F4958,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1709F4958,LITREF(lit_346));
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1709F4958,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1709F4958,LITREF(lit_347));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_130) {
  P out_,x_;
  P x_1710F4959;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1710F4959 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_349));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1710F4959,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1710F4959,LITREF(lit_350));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_1710F4959,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1710F4959,LITREF(lit_351));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_131) {
  P done_;
  P x_1712F4962;
  P x_1711F4961;
  P iF4960;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(done_, 0);
  T16 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T15 = CALL2(1,VARREF(YgooSmathY_),T16,YPint((P)1));
  iF4960 = T15;
  LOOP_224: {
    P a224_0;
    T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYG),iF4960,T2);
    if (T1 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF4960);
      x_1711F4961 = T14;
      x_1712F4962 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_1712F4962,x_1711F4961,YPchr((P)115));
      if (T4 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF4960);
        T5 = CALL1(0,done_,YPfalse);
        T3 = T5;
      } else {
        T7 = CALL2(1,x_1712F4962,x_1711F4961,YPchr((P)100));
        if (T7 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF4960);
          T8 = CALL1(0,done_,YPfalse);
          T6 = T8;
        } else {
          T10 = CALL2(1,x_1712F4962,x_1711F4961,YPchr((P)120));
          if (T10 != YPfalse) {
            CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF4960);
            T11 = CALL1(0,done_,YPfalse);
            T9 = T11;
          } else {
            T13 = CALL2(1,VARREF(YgooSmathY_),iF4960,YPint((P)1));
            a224_0 = T13;
            iF4960 = a224_0;
            goto LOOP_224;
            T9 = T12;
          }
          T6 = T9;
        }
        T3 = T6;
      }
      T0 = T3;
    } else {
      T0 = FREEREF(0);
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_float_to_c_string_132) {
  P o_;
  P sF4963;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF4963 = T2;
  T1 = FUNFAB(fun_131,1,sF4963);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_generate_quotation_133) {
  P out_,x_;
  P x_1713F4964;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1713F4964 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_356));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1713F4964,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1713F4964,LITREF(lit_357));
  T1 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1713F4964,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1713F4964,LITREF(lit_358));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_134) {
  P out_,x_;
  P x_1714F4965;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1714F4965 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_360));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1714F4965,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1714F4965,LITREF(lit_361));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1714F4965,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1714F4965,LITREF(lit_362));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_135) {
  P out_,x_;
  P eF4968;
  P x_1716F4967;
  P x_1715F4966;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1715F4966 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1715F4966,LITREF(lit_364));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_365));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1715F4966,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1715F4966,LITREF(lit_366));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1715F4966,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1716F4967 = T9;
  LOOP_225: {
    P a225_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1716F4967);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1716F4967);
      eF4968 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_367));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF4968);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1716F4967);
      a225_0 = T7;
      x_1716F4967 = a225_0;
      goto LOOP_225;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_368));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_quotation_136) {
  P out_,x_;
  P eF4971;
  P x_1719F4970;
  P x_1718F4969;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1718F4969 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1718F4969,LITREF(lit_370));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_371));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1718F4969,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1718F4969,LITREF(lit_372));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1718F4969,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1719F4970 = T9;
  LOOP_226: {
    P a226_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1719F4970);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1719F4970);
      eF4971 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_373));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF4971);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1719F4970);
      a226_0 = T7;
      x_1719F4970 = a226_0;
      goto LOOP_226;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_374));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_quotation_137) {
  P out_,x_;
  P x_1721F4972;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1721F4972 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_376));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1721F4972,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1721F4972,LITREF(lit_377));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1721F4972,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1721F4972,LITREF(lit_378));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,out_;
  P T0,T1;
LINK_STACK();
  ARG(binding_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_Gc_139) {
  P v_,out_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_Gc_140) {
  P v_,out_;
  P x_1724F4975;
  P x_1723F4974;
  P x_1722F4973;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),v_);
  x_1722F4973 = T6;
  x_1723F4974 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1723F4974,x_1722F4973,LITREF(lit_245));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_385);
  } else {
    T3 = CALL2(1,x_1723F4974,x_1722F4973,LITREF(lit_171));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_386);
    } else {
      T5 = CALL2(1,x_1723F4974,x_1722F4973,LITREF(lit_172));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_387);
      } else {
        T4 = LITREF(lit_388);
      }
      T2 = T4;
    }
    T0 = T2;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  x_1724F4975 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1724F4975,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1724F4975,YPchr((P)41));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_to_c_141) {
  P e_,f_,d_,out_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T2,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T5 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    } else {
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T6 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    } else {
    }
    T7 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL4(1,VARREF(YevalSg2cYgen_ref),T7,f_,d_,out_);
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T3 = T8;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_to_c_142) {
  P e_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSg2cYgen_refT),e_,out_);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_143) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_144) {
  P e_,out_;
  P x_1726F4977;
  P x_1725F4976;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_396));
  x_1725F4976 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1725F4976,YPchr((P)40));
  x_1726F4977 = out_;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1726F4977,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_1725F4976,YPchr((P)41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_gen_refT_145) {
  P e_,out_;
  P x_1727F4979;
  P regF4978;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF4978 = T4;
  if (regF4978 != YPfalse) {
    x_1727F4979 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1727F4979,LITREF(lit_398));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF4978);
    T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1727F4979,T2);
    T0 = T1;
  } else {
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_399));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_146) {
  P e_,out_;
  P x_1728F4980;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  x_1728F4980 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1728F4980,LITREF(lit_401));
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1728F4980,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_147) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_148) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_refT),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_149) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_refT),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_150) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_refT),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_refT_151) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_refT),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgen_ref) {
  P e_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgen_refT),e_,out_);
    T0 = T1;
  } else {
    T2 = CALL4(1,VARREF(YevalSg2cYto_c),e_,f_,d_,out_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_pc_153) {
  P e_,f_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL4(1,VARREF(YevalSg2cYto_c),e_,f_,d_,out_);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_154) {
  P e_,f_,d_,out_;
  P x_1730F4982;
  P x_1729F4981;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  T10 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T9 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),T10);
  x_1729F4981 = T9;
  x_1730F4982 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1730F4982,x_1729F4981,LITREF(lit_171));
  if (T4 != YPfalse) {
    T3 = LITREF(lit_412);
  } else {
    T6 = CALL2(1,x_1730F4982,x_1729F4981,LITREF(lit_172));
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T8 != YPfalse) {
        T7 = LITREF(lit_413);
      } else {
        T7 = LITREF(lit_414);
      }
      T5 = T7;
    } else {
      T5 = LITREF(lit_415);
    }
    T3 = T5;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  T11 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T11,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_416));
  T12 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T12,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_417));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T13 = T14;
  } else {
    T13 = YPfalse;
  }
UNLINK_STACK();
  QRET(T13);
}

LOCCODEDEF(fun_to_c_155) {
  P e_,f_,d_,out_;
  P x_1731F4983;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T3 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    } else {
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T4 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    } else {
    }
    T6 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T5 = CALL2(1,VARREF(YisaQ),T6,VARREF(YevalSastYLruntime_referenceG));
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_419));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_420));
    x_1731F4983 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1731F4983,YPchr((P)40));
    T9 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),T9);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T8,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_1731F4983,YPchr((P)44));
    T10 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    CALL4(1,VARREF(YevalSg2cYgen_ref),T10,f_,d_,out_);
    T11 = CALL2(1,VARREF(YgooSioSportYput),x_1731F4983,YPchr((P)41));
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T13 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T1 = T12;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_to_c_156) {
  P e_,f_,d_,out_;
  P x_1732F4985;
  P refF4984;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF4984 = T10;
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T2 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    } else {
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T3 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    } else {
    }
    T5 = CALL1(1,VARREF(YevalSastYreference_binding),refF4984);
    T4 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T5);
    if (T4 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_422));
      x_1732F4985 = out_;
      CALL2(1,VARREF(YgooSioSportYput),x_1732F4985,YPchr((P)40));
      CALL4(1,VARREF(YevalSg2cYgen_ref),refF4984,f_,d_,out_);
      T6 = CALL2(1,VARREF(YgooSioSportYput),x_1732F4985,YPchr((P)41));
    } else {
      T7 = CALL4(1,VARREF(YevalSg2cYgen_ref),refF4984,f_,d_,out_);
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_157) {
  P e_,f_,d_,out_;
  P x_1733F4987;
  P refF4986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T11 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF4986 = T11;
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  T4 = CALL1(1,VARREF(YevalSastYreference_binding),refF4986);
  T3 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T4);
  if (T3 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_424));
    x_1733F4987 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1733F4987,YPchr((P)40));
    T5 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    CALL4(1,VARREF(YevalSg2cYgen_ref),T5,f_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_1733F4987,YPchr((P)44));
    CALL4(1,VARREF(YevalSg2cYgen_ref),refF4986,f_,d_,out_);
    T6 = CALL2(1,VARREF(YgooSioSportYput),x_1733F4987,YPchr((P)41));
  } else {
    CALL4(1,VARREF(YevalSg2cYgen_ref),refF4986,f_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_425));
    T8 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    T7 = CALL4(1,VARREF(YevalSg2cYgen_ref),T8,f_,d_,out_);
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T9 = T10;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_to_c_158) {
  P e_,f_,d_,out_;
  P x_1734F4989;
  P bindingF4988;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T9);
  T7 = CALL1(1,VARREF(YevalSastYreference_binding),T8);
  bindingF4988 = T7;
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),bindingF4988);
  if (T1 != YPfalse) {
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T2 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    } else {
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T3 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF4988,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_427));
    x_1734F4989 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1734F4989,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF4988,out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1734F4989,YPchr((P)41));
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bbQ_159) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_bbQ_160) {
  P x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YevalSastYapplication_binding),x_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_431));
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bbQ_161) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),x_);
  T0 = CALL1(1,VARREF(YevalSg2cYbbQ),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_162) {
  P e_,f_,d_,out_;
  P x_1736F4994;
  P x_1735F4993;
  P tstF4992;
  P tmpF4991;
  P bb_tstF4990;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T34 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T33 = CALL1(1,VARREF(YevalSg2cYbbQ),T34);
  bb_tstF4990 = T33;
  tmpF4991 = bb_tstF4990;
  if (tmpF4991 != YPfalse) {
    T31 = tmpF4991;
  } else {
    T32 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
    T31 = T32;
  }
  tstF4992 = T31;
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
    CALL4(1,VARREF(YevalSg2cYto_pc),T1,f_,d_,out_);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_434));
    CALL4(1,VARREF(YevalSg2cYgen_ref),tstF4992,f_,d_,out_);
    if (bb_tstF4990 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_435));
    } else {
      x_1735F4993 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1735F4993,LITREF(lit_436));
      T3 = CALL0(1,VARREF(YevalSg2cYfalse_name));
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1735F4993,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1735F4993,LITREF(lit_437));
    }
    T5 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    T6 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL4(1,VARREF(YevalSg2cYto_c),T5,f_,T6,out_);
    T7 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T7 != YPfalse) {
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T9 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
        T8 = CALL2(1,VARREF(YevalSg2cYgen_depth),T9,out_);
      } else {
      }
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
        T10 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,T11,out_);
      } else {
      }
      T12 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
      CALL4(1,VARREF(YevalSg2cYgen_ref),T12,f_,d_,out_);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T14 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
        T13 = T14;
      } else {
        T13 = YPfalse;
      }
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_438));
    T15 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    T16 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL4(1,VARREF(YevalSg2cYto_c),T15,f_,T16,out_);
    T17 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T17 != YPfalse) {
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T19 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
        T18 = CALL2(1,VARREF(YevalSg2cYgen_depth),T19,out_);
      } else {
      }
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T21 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
        T20 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,T21,out_);
      } else {
      }
      T22 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
      CALL4(1,VARREF(YevalSg2cYgen_ref),T22,f_,d_,out_);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
        T23 = T24;
      } else {
        T23 = YPfalse;
      }
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    T25 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_439));
    T0 = T25;
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_440));
    CALL4(1,VARREF(YevalSg2cYto_c),tstF4992,f_,d_,out_);
    x_1736F4994 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1736F4994,LITREF(lit_441));
    T26 = CALL0(1,VARREF(YevalSg2cYfalse_name));
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1736F4994,T26);
    T27 = CALL2(1,VARREF(YgooSioSportYputs),x_1736F4994,LITREF(lit_442));
    T28 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T28,f_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_443));
    T29 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T29,f_,d_,out_);
    T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_444));
    T0 = T30;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_163) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_164) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_165) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_166) {
  P e_,f_,d_,out_;
  P xF5000;
  P firstQF4999;
  P tmpF4998;
  P x_1738F4997;
  P x_1739F4996;
  P x_1737F4995;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = FUNFAB(fun_163,3,f_,d_,out_);
    T1 = CALL2(1,VARREF(YgooSmacrosYdo),T2,e_);
    T0 = T1;
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_447));
    x_1737F4995 = out_;
    T17 = fun_164;
    T18 = fun_165;
    T16 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T17,T18);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_1739F4996 = T15;
    T19 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
    x_1738F4997 = T19;
    LOOP_227: {
      P a227_0,a227_1;
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1739F4996);
      tmpF4998 = T7;
      if (tmpF4998 != YPfalse) {
        T5 = tmpF4998;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1738F4997);
        T5 = T6;
      }
      T4 = CALL1(1,VARREF(Ynot),T5);
      if (T4 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1739F4996);
        firstQF4999 = T14;
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1738F4997);
        xF5000 = T13;
        T8 = CALL1(1,VARREF(Ynot),firstQF4999);
        if (T8 != YPfalse) {
          T9 = CALL2(1,VARREF(YgooSioSportYput),x_1737F4995,YPchr((P)44));
        } else {
        }
        CALL4(1,VARREF(YevalSg2cYto_c),xF5000,f_,d_,out_);
        T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1739F4996);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1738F4997);
        a227_0 = T11;
        a227_1 = T12;
        x_1739F4996 = a227_0;
        x_1738F4997 = a227_1;
        goto LOOP_227;
        T3 = T10;
      } else {
        T3 = YPfalse;
      }
    }
    T20 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_450));
    T0 = T20;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_167) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_168) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_169) {
  P e_,f_,d_,out_;
  P x_1748F5014;
  P x_1747F5013;
  P bF5012;
  P iF5011;
  P firstQF5010;
  P tmpF5009;
  P tmpF5008;
  P x_1743F5007;
  P x_1744F5006;
  P x_1745F5005;
  P x_1742F5004;
  P bindingsF5003;
  P x_1741F5002;
  P nF5001;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T40 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTloop_arg_counterT),YPint((P)1));
  T39 = DYNSET(YevalSg2cYTloop_arg_counterT,T40);
  T38 = CALL2(1,VARREF(YevalSastYloop_continue_setter),T39,e_);
  nF5001 = T38;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1741F5002 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1741F5002,LITREF(lit_452));
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5001);
  CALL2(1,VARREF(YgooSioSportYputs),x_1741F5002,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1741F5002,LITREF(lit_453));
  T37 = CALL1(1,VARREF(YevalSastYloop_bindings),e_);
  bindingsF5003 = T37;
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5003);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
      T4 = CALL2(1,VARREF(YevalSg2cYgen_depth),T5,out_);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_454));
    x_1742F5004 = out_;
    T27 = fun_167;
    T28 = fun_168;
    T26 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T27,T28);
    T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
    x_1745F5005 = T25;
    T30 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
    T29 = CALL1(1,VARREF(YgooScolsScolYenum),T30);
    x_1744F5006 = T29;
    T31 = CALL1(1,VARREF(YgooScolsScolYenum),bindingsF5003);
    x_1743F5007 = T31;
    LOOP_228: {
      P a228_0,a228_1,a228_2;
      T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1745F5005);
      tmpF5008 = T12;
      if (tmpF5008 != YPfalse) {
        T8 = tmpF5008;
      } else {
        T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1744F5006);
        tmpF5009 = T11;
        if (tmpF5009 != YPfalse) {
          T9 = tmpF5009;
        } else {
          T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1743F5007);
          T9 = T10;
        }
        T8 = T9;
      }
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T24 = CALL1(1,VARREF(YgooScolsScolYnow),x_1745F5005);
        firstQF5010 = T24;
        T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_1744F5006);
        iF5011 = T23;
        T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1743F5007);
        bF5012 = T22;
        T13 = CALL1(1,VARREF(Ynot),firstQF5010);
        if (T13 != YPfalse) {
          T14 = CALL2(1,VARREF(YgooSioSportYput),x_1742F5004,YPchr((P)44));
        } else {
        }
        x_1747F5013 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1747F5013,LITREF(lit_457));
        T15 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5001);
        CALL2(1,VARREF(YgooSioSportYputs),x_1747F5013,T15);
        CALL2(1,VARREF(YgooSioSportYputs),x_1747F5013,LITREF(lit_458));
        T17 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5011);
        T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1747F5013,T17);
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1745F5005);
        T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1744F5006);
        T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1743F5007);
        a228_0 = T19;
        a228_1 = T20;
        a228_2 = T21;
        x_1745F5005 = a228_0;
        x_1744F5006 = a228_1;
        x_1743F5007 = a228_2;
        goto LOOP_228;
        T6 = T18;
      } else {
        T6 = YPfalse;
      }
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T33 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T32 = T33;
    } else {
      T32 = YPfalse;
    }
  } else {
  }
  T34 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T35 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T34,f_,T35,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1748F5014 = out_;
  T36 = CALL2(1,VARREF(YgooSioSportYputs),x_1748F5014,LITREF(lit_459));
UNLINK_STACK();
  QRET(T36);
}

LOCCODEDEF(fun_to_c_170) {
  P e_,f_,d_,out_;
  P x_1759F5031;
  P x_1758F5030;
  P bindingF5029;
  P iF5028;
  P tmpF5027;
  P x_1755F5026;
  P x_1756F5025;
  P x_1754F5024;
  P argF5023;
  P iF5022;
  P tmpF5021;
  P x_1751F5020;
  P x_1752F5019;
  P argF5018;
  P x_1749F5017;
  P nF5016;
  P loopF5015;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T52 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF5015 = T52;
  T51 = CALL1(1,VARREF(YevalSastYloop_continue),loopF5015);
  nF5016 = T51;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1749F5017 = T6;
  LOOP_229: {
    P a229_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1749F5017);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1749F5017);
      argF5018 = T5;
      CALL4(1,VARREF(YevalSg2cYto_pc),argF5018,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1749F5017);
      a229_0 = T4;
      x_1749F5017 = a229_0;
      goto LOOP_229;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  T24 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1752F5019 = T23;
  T26 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  x_1751F5020 = T25;
  LOOP_230: {
    P a230_0,a230_1;
    T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1752F5019);
    tmpF5021 = T12;
    if (tmpF5021 != YPfalse) {
      T10 = tmpF5021;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1751F5020);
      T10 = T11;
    }
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1752F5019);
      iF5022 = T22;
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1751F5020);
      argF5023 = T21;
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T13 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      } else {
      }
      x_1754F5024 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1754F5024,LITREF(lit_461));
      T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5016);
      CALL2(1,VARREF(YgooSioSportYputs),x_1754F5024,T14);
      CALL2(1,VARREF(YgooSioSportYputs),x_1754F5024,LITREF(lit_462));
      T15 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5022);
      CALL2(1,VARREF(YgooSioSportYputs),x_1754F5024,T15);
      T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1754F5024,LITREF(lit_463));
      CALL4(1,VARREF(YevalSg2cYgen_ref),argF5023,f_,d_,out_);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      } else {
      }
      T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1752F5019);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1751F5020);
      a230_0 = T19;
      a230_1 = T20;
      x_1752F5019 = a230_0;
      x_1751F5020 = a230_1;
      goto LOOP_230;
      T8 = T18;
    } else {
      T8 = YPfalse;
    }
  }
  T43 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T42 = CALL1(1,VARREF(YgooScolsScolYenum),T43);
  x_1756F5025 = T42;
  T45 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF5015);
  T44 = CALL1(1,VARREF(YgooScolsScolYenum),T45);
  x_1755F5026 = T44;
  LOOP_231: {
    P a231_0,a231_1;
    T31 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1756F5025);
    tmpF5027 = T31;
    if (tmpF5027 != YPfalse) {
      T29 = tmpF5027;
    } else {
      T30 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1755F5026);
      T29 = T30;
    }
    T28 = CALL1(1,VARREF(Ynot),T29);
    if (T28 != YPfalse) {
      T41 = CALL1(1,VARREF(YgooScolsScolYnow),x_1756F5025);
      iF5028 = T41;
      T40 = CALL1(1,VARREF(YgooScolsScolYnow),x_1755F5026);
      bindingF5029 = T40;
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T32 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5029,out_);
      x_1758F5030 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1758F5030,LITREF(lit_464));
      T33 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5016);
      CALL2(1,VARREF(YgooSioSportYputs),x_1758F5030,T33);
      CALL2(1,VARREF(YgooSioSportYputs),x_1758F5030,LITREF(lit_465));
      T35 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5028);
      T34 = CALL2(1,VARREF(YgooSioSportYputs),x_1758F5030,T35);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      } else {
      }
      T38 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1756F5025);
      T39 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1755F5026);
      a231_0 = T38;
      a231_1 = T39;
      x_1756F5025 = a231_0;
      x_1755F5026 = a231_1;
      goto LOOP_231;
      T27 = T37;
    } else {
      T27 = YPfalse;
    }
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T46 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  x_1759F5031 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1759F5031,LITREF(lit_466));
  T48 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5016);
  T47 = CALL2(1,VARREF(YgooSioSportYputs),x_1759F5031,T48);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T50 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T49 = T50;
  } else {
    T49 = YPfalse;
  }
UNLINK_STACK();
  QRET(T49);
}

LOCCODEDEF(fun_to_c_171) {
  P e_,f_,d_,out_;
  P argF5040;
  P x_1765F5039;
  P x_1764F5038;
  P x_1763F5037;
  P x_1762F5036;
  P argF5035;
  P x_1760F5034;
  P nF5033;
  P functionF5032;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T36 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF5032 = T36;
  T35 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T34 = CALL1(1,VARREF(YgooStypesYlen),T35);
  nF5033 = T34;
  T0 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  x_1760F5034 = T7;
  LOOP_232: {
    P a232_0;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1760F5034);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1760F5034);
      argF5035 = T6;
      CALL4(1,VARREF(YevalSg2cYto_pc),argF5035,f_,d_,out_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1760F5034);
      a232_0 = T5;
      x_1760F5034 = a232_0;
      goto LOOP_232;
      T1 = T4;
    } else {
      T1 = YPfalse;
    }
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T9 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T10 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  x_1762F5036 = out_;
  T12 = CALL1(1,VARREF(Ynot),f_);
  if (T12 != YPfalse) {
    T11 = LITREF(lit_468);
  } else {
    T14 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    if (T14 != YPfalse) {
      T13 = LITREF(lit_469);
    } else {
      T13 = LITREF(lit_46);
    }
    T11 = T13;
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1762F5036,T11);
  CALL2(1,VARREF(YgooSioSportYputs),x_1762F5036,LITREF(lit_470));
  T17 = CALL2(1,VARREF(YgooSmagYG),nF5033,VARREF(YevalSg2cYDnumber_call_templates));
  if (T17 != YPfalse) {
    T16 = LITREF(lit_471);
  } else {
    T16 = nF5033;
  }
  T15 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1762F5036,T16);
  x_1763F5037 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1763F5037,YPchr((P)40));
  T19 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
  if (T19 != YPfalse) {
    T18 = LITREF(lit_472);
  } else {
    T18 = LITREF(lit_473);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T18);
  T20 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T20,f_,d_,out_);
  T21 = CALL2(1,VARREF(YgooSmagYG),nF5033,VARREF(YevalSg2cYDnumber_call_templates));
  if (T21 != YPfalse) {
    x_1764F5038 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1764F5038,LITREF(lit_474));
    T22 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1764F5038,nF5033);
  } else {
  }
  T30 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),T30);
  x_1765F5039 = T29;
  LOOP_233: {
    P a233_0;
    T25 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1765F5039);
    T24 = CALL1(1,VARREF(Ynot),T25);
    if (T24 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow),x_1765F5039);
      argF5040 = T28;
      CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
      CALL4(1,VARREF(YevalSg2cYgen_ref),argF5040,f_,d_,out_);
      T27 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1765F5039);
      a233_0 = T27;
      x_1765F5039 = a233_0;
      goto LOOP_233;
      T23 = T26;
    } else {
      T23 = YPfalse;
    }
  }
  T31 = CALL2(1,VARREF(YgooSioSportYput),x_1763F5037,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T33 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T32 = T33;
  } else {
    T32 = YPfalse;
  }
UNLINK_STACK();
  QRET(T32);
}

LOCCODEDEF(fun_to_c_172) {
  P e_,f_,d_,out_;
  P next_metsF5045;
  P x_1770F5044;
  P x_1769F5043;
  P x_1768F5042;
  P x_1767F5041;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYapplication_next_methods),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  x_1767F5041 = out_;
  T18 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
  x_1768F5042 = T18;
  if (x_1768F5042 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSportYput),x_1767F5041,YPchr((P)40));
  } else {
  }
  x_1769F5043 = out_;
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_476));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_1770F5044 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1770F5044,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYapplication_next_methods),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T4,f_,d_,out_);
  T5 = CALL2(1,VARREF(YgooSioSportYput),x_1770F5044,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
  } else {
  }
  T8 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
  if (T8 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1769F5043,LITREF(lit_300));
    T7 = T9;
  } else {
    T7 = YPfalse;
  }
  T14 = (P)YPfun_reg();
  T15 = (P)YPnext_methods();
  T13 = CALLN(1,VARREF(YgooSmacrosYOchecked_next_methods),6,T14,T15,e_,f_,d_,out_);
  next_metsF5045 = T13;
  T11 = CALL1(1,VARREF(Yhead),next_metsF5045);
  T12 = CALL1(1,VARREF(Ytail),next_metsF5045);
  T10 = CALLN(1,VARREF(YgooSmacrosYnapp),7,T11,T12,e_,f_,d_,out_,Ynil);
  if (x_1768F5042 != YPfalse) {
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_1767F5041,YPchr((P)41));
    T16 = T17;
  } else {
    T16 = YPfalse;
  }
UNLINK_STACK();
  QRET(T16);
}

LOCCODEDEF(fun_173) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_174) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_175) {
  P e_,f_,d_,out_;
  P xF5051;
  P firstQF5050;
  P tmpF5049;
  P x_1772F5048;
  P x_1773F5047;
  P x_1771F5046;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_1771F5046 = out_;
  T14 = fun_173;
  T15 = fun_174;
  T13 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T14,T15);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_1773F5047 = T12;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  x_1772F5048 = T16;
  LOOP_234: {
    P a234_0,a234_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1773F5047);
    tmpF5049 = T4;
    if (tmpF5049 != YPfalse) {
      T2 = tmpF5049;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1772F5048);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1773F5047);
      firstQF5050 = T11;
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1772F5048);
      xF5051 = T10;
      T5 = CALL1(1,VARREF(Ynot),firstQF5050);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),x_1771F5046,YPchr((P)44));
      } else {
      }
      CALL4(1,VARREF(YevalSg2cYgen_ref),xF5051,f_,d_,out_);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1773F5047);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1772F5048);
      a234_0 = T8;
      a234_1 = T9;
      x_1773F5047 = a234_0;
      x_1772F5048 = a234_1;
      goto LOOP_234;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_176) {
  P refF5053;
  P x_1776F5052;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  DYNSET(YevalSg2cYTgen_statementsQT,YPfalse);
  T7 = CALL1(1,VARREF(YevalSastYc_inline_refs),FREEREF(0));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1776F5052 = T6;
  LOOP_235: {
    P a235_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1776F5052);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1776F5052);
      refF5053 = T5;
      CALL4(1,VARREF(YevalSg2cYto_pc),refF5053,FREEREF(1),FREEREF(2),FREEREF(3));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1776F5052);
      a235_0 = T4;
      x_1776F5052 = a235_0;
      goto LOOP_235;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_177) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTgen_statementsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_178) {
  P strF5056;
  P refsF5055;
  P strsF5054;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  DYNSET(YevalSg2cYTgen_statementsQT,YPfalse);
  T11 = CALL1(1,VARREF(YevalSastYc_inline_strs),FREEREF(0));
  strsF5054 = T11;
  T12 = CALL1(1,VARREF(YevalSastYc_inline_refs),FREEREF(0));
  refsF5055 = T12;
  LOOP_236: {
    P a236_0,a236_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),strsF5054);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),FREEREF(2));
      T0 = T2;
    } else {
      T10 = CALL1(1,VARREF(Yhead),strsF5054);
      strF5056 = T10;
      if (strF5056 != YPfalse) {
        CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),strF5056);
        T5 = CALL1(1,VARREF(Ytail),strsF5054);
        a236_0 = T5;
        a236_1 = refsF5055;
        strsF5054 = a236_0;
        refsF5055 = a236_1;
        goto LOOP_236;
        T3 = T4;
      } else {
        T6 = CALL1(1,VARREF(Yhead),refsF5055);
        CALL4(1,VARREF(YevalSg2cYto_c),T6,FREEREF(3),FREEREF(4),FREEREF(1));
        T8 = CALL1(1,VARREF(Ytail),strsF5054);
        T9 = CALL1(1,VARREF(Ytail),refsF5055);
        a236_0 = T8;
        a236_1 = T9;
        strsF5054 = a236_0;
        refsF5055 = a236_1;
        goto LOOP_236;
        T3 = T7;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_179) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTgen_statementsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_180) {
  P e_,f_,d_,oot_;
  P x_1778F5061;
  P rpsF5060;
  P lpsF5059;
  P eQF5058;
  P x_1775F5057;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(oot_, 3);
  x_1775F5057 = DYNREF(YevalSg2cYTgen_statementsQT);
  T1 = FUNFAB(fun_176,4,e_,f_,d_,oot_);
  T2 = FUNFAB(fun_177,1,x_1775F5057);
  T0 = with_cleanup(T1,T2);
  T13 = CALL1(1,VARREF(YevalSastYc_inline_exprQ),e_);
  eQF5058 = T13;
  if (f_ != YPfalse) {
    if (eQF5058 != YPfalse) {
      T10 = LITREF(lit_481);
    } else {
      T12 = CALL0(1,VARREF(YevalSg2cYfalse_name));
      T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_482));
      T10 = T11;
    }
    T9 = T10;
  } else {
    T9 = LITREF(lit_46);
  }
  lpsF5059 = T9;
  if (f_ != YPfalse) {
    if (eQF5058 != YPfalse) {
      T8 = LITREF(lit_483);
    } else {
      T8 = LITREF(lit_484);
    }
    T7 = T8;
  } else {
    T7 = LITREF(lit_46);
  }
  rpsF5060 = T7;
  if (f_ != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,oot_);
    T3 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,oot_);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),oot_,lpsF5059);
  x_1778F5061 = DYNREF(YevalSg2cYTgen_statementsQT);
  T5 = FUNFAB(fun_178,5,e_,oot_,rpsF5060,f_,d_);
  T6 = FUNFAB(fun_179,1,x_1778F5061);
  T4 = with_cleanup(T5,T6);
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_to_c_181) {
  P e_,f_,d_,out_;
  P x_1787F5076;
  P x_1786F5075;
  P x_1785F5074;
  P tmpF5073;
  P bindingF5072;
  P typeF5071;
  P initF5070;
  P tmpF5069;
  P tmpF5068;
  P x_1781F5067;
  P x_1782F5066;
  P x_1783F5065;
  P low_letQF5064;
  P x_1780F5063;
  P x_1779F5062;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_1779F5062 = out_;
  T39 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
  x_1780F5063 = T39;
  if (x_1780F5063 != YPfalse) {
    T0 = CALL2(1,VARREF(YgooSioSportYput),x_1779F5062,YPchr((P)40));
  } else {
  }
  T38 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF5064 = T38;
  T30 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),T30);
  x_1783F5065 = T29;
  T32 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T31 = CALL1(1,VARREF(YgooScolsScolYenum),T32);
  x_1782F5066 = T31;
  T34 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T33 = CALL1(1,VARREF(YgooScolsScolYenum),T34);
  x_1781F5067 = T33;
  LOOP_237: {
    P a237_0,a237_1,a237_2;
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1783F5065);
    tmpF5068 = T7;
    if (tmpF5068 != YPfalse) {
      T3 = tmpF5068;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1782F5066);
      tmpF5069 = T6;
      if (tmpF5069 != YPfalse) {
        T4 = tmpF5069;
      } else {
        T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1781F5067);
        T4 = T5;
      }
      T3 = T4;
    }
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow),x_1783F5065);
      initF5070 = T28;
      T27 = CALL1(1,VARREF(YgooScolsScolYnow),x_1782F5066);
      typeF5071 = T27;
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_1781F5067);
      bindingF5072 = T26;
      CALL4(1,VARREF(YevalSg2cYto_pc),initF5070,f_,d_,out_);
      T10 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),typeF5071);
      tmpF5073 = T10;
      if (tmpF5073 != YPfalse) {
        T9 = tmpF5073;
      } else {
        T9 = low_letQF5064;
      }
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        CALL4(1,VARREF(YevalSg2cYto_pc),typeF5071,f_,d_,out_);
        x_1785F5074 = out_;
        if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
          T11 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
        } else {
        }
        CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_486));
        x_1786F5075 = out_;
        CALL2(1,VARREF(YgooSioSportYput),x_1786F5075,YPchr((P)40));
        CALL4(1,VARREF(YevalSg2cYgen_ref),initF5070,f_,d_,out_);
        CALL2(1,VARREF(YgooSioSportYput),x_1786F5075,YPchr((P)44));
        CALL4(1,VARREF(YevalSg2cYgen_ref),typeF5071,f_,d_,out_);
        T12 = CALL2(1,VARREF(YgooSioSportYput),x_1786F5075,YPchr((P)41));
        if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
        } else {
        }
        T15 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
        if (T15 != YPfalse) {
          T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1785F5074,LITREF(lit_300));
          T14 = T16;
        } else {
          T14 = YPfalse;
        }
      } else {
      }
      x_1787F5076 = out_;
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T17 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5072,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_487));
      CALL4(1,VARREF(YevalSg2cYgen_ref),initF5070,f_,d_,out_);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      } else {
      }
      T20 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
      if (T20 != YPfalse) {
        T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1787F5076,LITREF(lit_300));
        T19 = T21;
      } else {
        T19 = YPfalse;
      }
      T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1783F5065);
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1782F5066);
      T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1781F5067);
      a237_0 = T23;
      a237_1 = T24;
      a237_2 = T25;
      x_1783F5065 = a237_0;
      x_1782F5066 = a237_1;
      x_1781F5067 = a237_2;
      goto LOOP_237;
      T1 = T22;
    } else {
      T1 = YPfalse;
    }
  }
  T35 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T35,f_,d_,out_);
  if (x_1780F5063 != YPfalse) {
    T37 = CALL2(1,VARREF(YgooSioSportYput),x_1779F5062,YPchr((P)41));
    T36 = T37;
  } else {
    T36 = YPfalse;
  }
UNLINK_STACK();
  QRET(T36);
}

LOCCODEDEF(fun_182) {
  P lb_,lf_;
  P x_1794F5077;
  P T0,T1,T2;
LINK_STACK();
  ARG(lb_, 0);
  ARG(lf_, 1);
  x_1794F5077 = FREEREF(0);
  CALL5(1,VARREF(YevalSg2cYfuninit_to_c),lb_,lf_,FREEREF(1),FREEREF(2),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1794F5077,LITREF(lit_300));
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_183) {
  P e_,f_,d_,out_;
  P x_1793F5085;
  P bindingF5084;
  P initF5083;
  P tmpF5082;
  P x_1790F5081;
  P x_1791F5080;
  P x_1789F5079;
  P x_1788F5078;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_1788F5078 = out_;
  T26 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
  x_1789F5079 = T26;
  if (x_1789F5079 != YPfalse) {
    T0 = CALL2(1,VARREF(YgooSioSportYput),x_1788F5078,YPchr((P)40));
  } else {
  }
  T17 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1791F5080 = T16;
  T19 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),T19);
  x_1790F5081 = T18;
  LOOP_238: {
    P a238_0,a238_1;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1791F5080);
    tmpF5082 = T5;
    if (tmpF5082 != YPfalse) {
      T3 = tmpF5082;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1790F5081);
      T3 = T4;
    }
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1791F5080);
      initF5083 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1790F5081);
      bindingF5084 = T14;
      CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF5084,initF5083,YPfalse,d_,out_);
      x_1793F5085 = out_;
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T6 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5084,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_489));
      CALL4(1,VARREF(YevalSg2cYgen_ref),initF5083,f_,d_,out_);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      } else {
      }
      T9 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTgen_statementsQT));
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1793F5085,LITREF(lit_300));
        T8 = T10;
      } else {
        T8 = YPfalse;
      }
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1791F5080);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1790F5081);
      a238_0 = T12;
      a238_1 = T13;
      x_1791F5080 = a238_0;
      x_1790F5081 = a238_1;
      goto LOOP_238;
      T1 = T11;
    } else {
      T1 = YPfalse;
    }
  }
  T20 = FUNFAB(fun_182,3,out_,f_,d_);
  T21 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T22 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T20,T21,T22);
  T23 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T23,f_,d_,out_);
  if (x_1789F5079 != YPfalse) {
    T25 = CALL2(1,VARREF(YgooSioSportYput),x_1788F5078,YPchr((P)41));
    T24 = T25;
  } else {
    T24 = YPfalse;
  }
UNLINK_STACK();
  QRET(T24);
}

LOCCODEDEF(fun_to_c_184) {
  P e_,f_,d_,out_;
  P x_1795F5086;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_492));
  x_1795F5086 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1795F5086,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T3,f_,d_,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1795F5086,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_to_c_185) {
  P e_,f_,d_,out_;
  P x_1796F5087;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T1,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T3 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_494));
  x_1796F5087 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1796F5087,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T4,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1796F5087,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T5,f_,d_,out_);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_1796F5087,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_to_c_186) {
  P e_,f_,d_,out_;
  P x_1797F5088;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T2,f_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T3,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T4,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T6 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_496));
  x_1797F5088 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_497));
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_498));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_499));
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T8,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T9,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T10,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)44));
  T11 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T11,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)44));
  T12 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T12,f_,d_,out_);
  T13 = CALL2(1,VARREF(YgooSioSportYput),x_1797F5088,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T15 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_187) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_188) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_189) {
  P e_,f_,d_,out_;
  P argF5099;
  P firstQF5098;
  P tmpF5097;
  P x_1803F5096;
  P x_1804F5095;
  P x_1802F5094;
  P x_1801F5093;
  P x_1800F5092;
  P argF5091;
  P x_1798F5090;
  P bindingF5089;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T34 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF5089 = T34;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1798F5090 = T6;
  LOOP_239: {
    P a239_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1798F5090);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1798F5090);
      argF5091 = T5;
      CALL4(1,VARREF(YevalSg2cYto_pc),argF5091,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1798F5090);
      a239_0 = T4;
      x_1798F5090 = a239_0;
      goto LOOP_239;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T8 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T9 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  x_1800F5092 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1800F5092,LITREF(lit_501));
  T12 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T12);
  T10 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1800F5092,T11);
  x_1801F5093 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1801F5093,YPchr((P)40));
  x_1802F5094 = out_;
  T27 = fun_187;
  T28 = fun_188;
  T26 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T27,T28);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  x_1804F5095 = T25;
  T30 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),T30);
  x_1803F5096 = T29;
  LOOP_240: {
    P a240_0,a240_1;
    T17 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1804F5095);
    tmpF5097 = T17;
    if (tmpF5097 != YPfalse) {
      T15 = tmpF5097;
    } else {
      T16 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1803F5096);
      T15 = T16;
    }
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T24 = CALL1(1,VARREF(YgooScolsScolYnow),x_1804F5095);
      firstQF5098 = T24;
      T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_1803F5096);
      argF5099 = T23;
      T18 = CALL1(1,VARREF(Ynot),firstQF5098);
      if (T18 != YPfalse) {
        T19 = CALL2(1,VARREF(YgooSioSportYput),x_1802F5094,YPchr((P)44));
      } else {
      }
      CALL4(1,VARREF(YevalSg2cYgen_ref),argF5099,f_,d_,out_);
      T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1804F5095);
      T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1803F5096);
      a240_0 = T21;
      a240_1 = T22;
      x_1804F5095 = a240_0;
      x_1803F5096 = a240_1;
      goto LOOP_240;
      T13 = T20;
    } else {
      T13 = YPfalse;
    }
  }
  T31 = CALL2(1,VARREF(YgooSioSportYput),x_1801F5093,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T33 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T32 = T33;
  } else {
    T32 = YPfalse;
  }
UNLINK_STACK();
  QRET(T32);
}

LOCCODEDEF(fun_190) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_pc),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_191) {
  P e_,f_,d_,out_;
  P xF5105;
  P x_1808F5104;
  P x_1807F5103;
  P x_1806F5102;
  P fF5101;
  P nF5100;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T28 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T27 = CALL1(1,VARREF(YgooStypesYlen),T28);
  nF5100 = T27;
  T26 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T25 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T26);
  fF5101 = T25;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),nF5100,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T3 != YPfalse) {
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T4 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      } else {
      }
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T5 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5101);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T2 = T6;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T8 = FUNFAB(fun_190,3,fF5101,d_,out_);
    T9 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T8,T9);
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T10 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    } else {
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T11 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_506));
    x_1806F5102 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1806F5102,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5101);
    x_1807F5103 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1807F5103,LITREF(lit_507));
    T13 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5100);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1807F5103,T13);
    T21 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
    x_1808F5104 = T20;
    LOOP_241: {
      P a241_0;
      T16 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1808F5104);
      T15 = CALL1(1,VARREF(Ynot),T16);
      if (T15 != YPfalse) {
        T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1808F5104);
        xF5105 = T19;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL4(1,VARREF(YevalSg2cYgen_ref),xF5105,fF5101,d_,out_);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1808F5104);
        a241_0 = T18;
        x_1808F5104 = a241_0;
        goto LOOP_241;
        T14 = T17;
      } else {
        T14 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYput),x_1806F5102,YPchr((P)41));
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T23 = T24;
    } else {
      T23 = YPfalse;
    }
    T0 = T23;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_funshell_to_c_192) {
  P b_,e_,f_,d_,out_;
  P x_1812F5110;
  P x_1811F5109;
  P x_1810F5108;
  P fF5107;
  P nF5106;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T16 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T15 = CALL1(1,VARREF(YgooStypesYlen),T16);
  nF5106 = T15;
  T14 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T14);
  fF5107 = T13;
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T0 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),nF5106,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5107);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_510));
    x_1810F5108 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1810F5108,YPchr((P)40));
    x_1811F5109 = out_;
    T7 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T7 != YPfalse) {
      T6 = YPint((P)1);
    } else {
      T6 = YPint((P)0);
    }
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1811F5109,T5);
    CALL2(1,VARREF(YgooSioSportYput),x_1810F5108,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5107);
    CALL2(1,VARREF(YgooSioSportYput),x_1810F5108,YPchr((P)44));
    x_1812F5110 = out_;
    T9 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5106);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1812F5110,T9);
    T10 = CALL2(1,VARREF(YgooSioSportYput),x_1810F5108,YPchr((P)41));
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T11 = T12;
  } else {
    T11 = YPfalse;
  }
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_193) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_pc),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_funinit_to_c_194) {
  P b_,e_,f_,d_,out_;
  P xF5115;
  P x_1815F5114;
  P x_1814F5113;
  P x_1813F5112;
  P nF5111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T19 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T18 = CALL1(1,VARREF(YgooStypesYlen),T19);
  nF5111 = T18;
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),nF5111,YPint((P)0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_193,3,f_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T5 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_514));
    x_1813F5112 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1813F5112,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,out_);
    x_1814F5113 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1814F5113,LITREF(lit_515));
    T6 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1814F5113,nF5111);
    T14 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    x_1815F5114 = T13;
    LOOP_242: {
      P a242_0;
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1815F5114);
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1815F5114);
        xF5115 = T12;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL4(1,VARREF(YevalSg2cYgen_ref),xF5115,f_,d_,out_);
        T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1815F5114);
        a242_0 = T11;
        x_1815F5114 = a242_0;
        goto LOOP_242;
        T7 = T10;
      } else {
        T7 = YPfalse;
      }
    }
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1813F5112,YPchr((P)41));
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T16 = T17;
    } else {
      T16 = YPfalse;
    }
    T0 = T16;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_195) {
  P e_,f_,d_,out_;
  P x_1817F5116;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,YPfalse,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_517));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_1817F5116 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1817F5116,YPchr((P)40));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1817F5116,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T7);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1817F5116,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T8,f_,d_,out_);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1817F5116,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_out_list_builder_196) {
  P f_,out_,elts_;
  P eF5120;
  P x_1820F5119;
  P x_1819F5118;
  P x_1818F5117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(f_, 0);
  ARG(out_, 1);
  ARG(elts_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_520));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_521));
    CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
    x_1818F5117 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1818F5117,YPchr((P)40));
    x_1819F5118 = out_;
    T7 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1819F5118,T6);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    x_1820F5119 = T14;
    LOOP_243: {
      P a243_0;
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1820F5119);
      T9 = CALL1(1,VARREF(Ynot),T10);
      if (T9 != YPfalse) {
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1820F5119);
        eF5120 = T13;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL1(0,f_,eF5120);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1820F5119);
        a243_0 = T12;
        x_1820F5119 = a243_0;
        goto LOOP_243;
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
    }
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1818F5117,YPchr((P)41));
    T0 = T15;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_197) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYgen_ref),x_,YPfalse,YPint((P)0),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_fab_list_198) {
  P out_,refs_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(refs_, 1);
  T1 = FUNFAB(fun_197,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_specs_199) {
  P out_,sig_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(sig_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreq_sig_specs),sig_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_200) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_pc),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_201) {
  P e_,f_,d_,out_;
  P x_1822F5121;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = FUNFAB(fun_200,3,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T2,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T3 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T4 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_529));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  x_1822F5121 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1822F5121,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1822F5121,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T6,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1822F5121,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T7,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1822F5121,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T8,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1822F5121,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_530));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T9);
  T10 = CALL2(1,VARREF(YgooSioSportYput),x_1822F5121,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T11 = T12;
  } else {
    T11 = YPfalse;
  }
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_to_c_202) {
  P e_,f_,d_,out_;
  P x_1823F5122;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_532));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_1823F5122 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1823F5122,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T4,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1823F5122,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T5,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1823F5122,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYfunction_names),e_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T6,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1823F5122,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_533));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1823F5122,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T9 = T10;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_generate_function_forwards_203) {
  P out_,definitions_;
  P defF5124;
  P x_1824F5123;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_536));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_1824F5123 = T6;
  LOOP_244: {
    P a244_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1824F5123);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1824F5123);
      defF5124 = T5;
      CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),out_,defF5124);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1824F5123);
      a244_0 = T4;
      x_1824F5123 = a244_0;
      goto LOOP_244;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_204) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_205) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_generate_function_forward_206) {
  P out_,defn_;
  P iF5131;
  P firstQF5130;
  P tmpF5129;
  P x_1828F5128;
  P x_1829F5127;
  P x_1827F5126;
  P x_1826F5125;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  x_1826F5125 = out_;
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_539);
  } else {
    T0 = LITREF(lit_540);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1826F5125,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1826F5125,LITREF(lit_541));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1826F5125,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1826F5125,LITREF(lit_542));
  x_1827F5126 = out_;
  T18 = fun_204;
  T19 = fun_205;
  T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1829F5127 = T16;
  T23 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T22 = CALL1(1,VARREF(YgooStypesYlen),T23);
  T21 = CALL1(1,VARREF(YgooScolsSseqYbelow),T22);
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
  x_1828F5128 = T20;
  LOOP_245: {
    P a245_0,a245_1;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1829F5127);
    tmpF5129 = T8;
    if (tmpF5129 != YPfalse) {
      T6 = tmpF5129;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1828F5128);
      T6 = T7;
    }
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1829F5127);
      firstQF5130 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1828F5128);
      iF5131 = T14;
      T9 = CALL1(1,VARREF(Ynot),firstQF5130);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_1827F5126,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_545));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1829F5127);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1828F5128);
      a245_0 = T12;
      a245_1 = T13;
      x_1829F5127 = a245_0;
      x_1828F5128 = a245_1;
      goto LOOP_245;
      T4 = T11;
    } else {
      T4 = YPfalse;
    }
  }
  T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_546));
UNLINK_STACK();
  QRET(T24);
}

LOCCODEDEF(fun_generate_function_binding_207) {
  P out_,defn_;
  P x_1832F5135;
  P nameF5134;
  P x_1831F5133;
  P nameF5132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T17 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF5132 = T17;
  T2 = CALL2(1,VARREF(YisaQ),nameF5132,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),nameF5132);
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_549),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF5132);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nameF5132,YPfalse);
    if (T8 != YPfalse) {
      x_1831F5133 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1831F5133,LITREF(lit_550));
      T10 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T9 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1831F5133,T10);
      T7 = T9;
    } else {
      T15 = CALL2(1,VARREF(YisaQ),nameF5132,VARREF(YevalSastYLlocal_bindingG));
      if (T15 != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),nameF5132);
        T14 = T16;
      } else {
        T14 = nameF5132;
      }
      nameF5134 = T14;
      x_1832F5135 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1832F5135,LITREF(lit_551));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF5134);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1832F5135,T11);
      CALL2(1,VARREF(YgooSioSportYputs),x_1832F5135,LITREF(lit_552));
      T13 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T12 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1832F5135,T13);
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_forward_208) {
  P out_,defn_;
  P boundQF5136;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF5136 = T2;
  if (boundQF5136 != YPfalse) {
    T0 = LITREF(lit_554);
  } else {
    T0 = LITREF(lit_555);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,defn_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_556));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_209) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_bodies_210) {
  P out_,definitions_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_559));
  T1 = FUNFAB(fun_209,1,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_211) {
  P def_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(def_, 0);
  T2 = CALL2(1,VARREF(YisaQ),def_,VARREF(YevalSastYLast_primitiveG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YevalSg2cYgenerate_closure_structure),def_,FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_functions_212) {
  P definitions_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_211,3,f_,d_,out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_closure_structure_213) {
  P definition_,f_,d_,out_;
  P x_1835F5139;
  P x_1834F5138;
  P x_1833F5137;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_pc),T0,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T2 = CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,out_);
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  x_1833F5137 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1833F5137,LITREF(lit_566));
  T5 = CALL1(1,VARREF(YevalSastYfunction_inlineableQ),definition_);
  if (T5 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_567));
    T4 = T6;
  } else {
    T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_568));
    T4 = T7;
  }
  T3 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1833F5137,T4);
  x_1834F5138 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1834F5138,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1834F5138,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T8,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1834F5138,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T9,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1834F5138,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYfunction_names),definition_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T10,f_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1834F5138,YPchr((P)44));
  T11 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T11 != YPfalse) {
    x_1835F5139 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1835F5139,LITREF(lit_569));
    T13 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T12 = CALL1(1,VARREF(YgooSmathYnum_to_str),T13);
    CALL2(1,VARREF(YgooSioSportYputs),x_1835F5139,T12);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1835F5139,LITREF(lit_570));
  } else {
    T16 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_571));
    T15 = CALL2(1,VARREF(YgooSioSportYputs),out_,T16);
  }
  CALL2(1,VARREF(YgooSioSportYput),x_1834F5138,YPchr((P)44));
  T17 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T17,f_,d_,out_);
  T18 = CALL2(1,VARREF(YgooSioSportYput),x_1834F5138,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T20 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T19 = T20;
  } else {
    T19 = YPfalse;
  }
UNLINK_STACK();
  QRET(T19);
}

LOCCODEDEF(fun_generate_function_body_reference_214) {
  P out_,definition_;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_574));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_575));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_return_215) {
  P defn_,f_,d_,out_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T0 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_578));
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T1,f_,d_,out_);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_return_216) {
  P defn_,f_,d_,out_;
  P x_1836F5140;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(defn_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T0 = CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  } else {
  }
  T2 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T1 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_580));
  x_1836F5140 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1836F5140,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL4(1,VARREF(YevalSg2cYgen_ref),T4,f_,d_,out_);
  T5 = CALL2(1,VARREF(YgooSioSportYput),x_1836F5140,YPchr((P)41));
  if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
UNLINK_STACK();
  QRET(T6);
}

LOCCODEDEF(fun_217) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_218) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_generate_function_code_219) {
  P out_,e_;
  P bindingF5148;
  P firstQF5147;
  P tmpF5146;
  P x_1840F5145;
  P x_1841F5144;
  P x_1839F5143;
  P x_1838F5142;
  P x_1837F5141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  x_1837F5141 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1837F5141,LITREF(lit_583));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_584);
  } else {
    T0 = LITREF(lit_46);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1837F5141,T0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_inlineableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_585);
  } else {
    T1 = LITREF(lit_46);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1837F5141,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1837F5141,LITREF(lit_586));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,out_);
  x_1838F5142 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1838F5142,YPchr((P)40));
  x_1839F5143 = out_;
  T19 = fun_217;
  T20 = fun_218;
  T18 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T19,T20);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1841F5144 = T17;
  T22 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1840F5145 = T21;
  LOOP_246: {
    P a246_0,a246_1;
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1841F5144);
    tmpF5146 = T9;
    if (tmpF5146 != YPfalse) {
      T7 = tmpF5146;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1840F5145);
      T7 = T8;
    }
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1841F5144);
      firstQF5147 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1840F5145);
      bindingF5148 = T15;
      T10 = CALL1(1,VARREF(Ynot),firstQF5147);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSportYput),x_1839F5143,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_589));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5148,out_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1841F5144);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1840F5145);
      a246_0 = T13;
      a246_1 = T14;
      x_1841F5144 = a246_0;
      x_1840F5145 = a246_1;
      goto LOOP_246;
      T5 = T12;
    } else {
      T5 = YPfalse;
    }
  }
  T23 = CALL2(1,VARREF(YgooSioSportYput),x_1838F5142,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_590));
  T24 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T24,out_);
  T25 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T25,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_591));
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,e_,YPint((P)1),out_);
  CALL4(1,VARREF(YevalSg2cYgenerate_return),e_,YPfalse,YPint((P)1),out_);
  T27 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_592));
UNLINK_STACK();
  QRET(T27);
}

LOCCODEDEF(fun_dispatcherQ_220) {
  P definition_;
  P tmpF5151;
  P nameF5150;
  P bindingF5149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(definition_, 0);
  T11 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF5149 = T11;
  T1 = CALL2(1,VARREF(YisaQ),bindingF5149,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF5149);
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T10);
    nameF5150 = T9;
    T8 = CALL2(1,VARREF(YgooSlogYE),nameF5150,LITREF(lit_595));
    tmpF5151 = T8;
    if (tmpF5151 != YPfalse) {
      T2 = tmpF5151;
    } else {
      T4 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF5150,LITREF(lit_596));
      T6 = CALL1(1,VARREF(YgooStypesYlen),nameF5150);
      T7 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_597));
      T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
      T3 = CALL2(1,VARREF(YgooSlogYE),T4,T5);
      T2 = T3;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_221) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_222) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_223) {
  P b_;
  P x_1847F5152;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSmoduleYLbindingG));
  if (T1 != YPfalse) {
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T2 = CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    } else {
    }
    T3 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T3 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_607));
    } else {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_608));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1847F5152 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1847F5152,LITREF(lit_609));
    T7 = BOXGET(FREEREF(1));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    CALL2(1,VARREF(YgooSioSportYputs),x_1847F5152,T6);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1847F5152,LITREF(lit_610));
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_294));
    } else {
    }
    T12 = BOXGET(FREEREF(1));
    T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
    T10 = BOXPUT(T11,FREEREF(1));
    T0 = T10;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_code_224) {
  P out_,definition_;
  P bF5161;
  P firstQF5160;
  P tmpF5159;
  P x_1844F5158;
  P x_1845F5157;
  P x_1843F5156;
  P boundQF5155;
  P bindingsF5154;
  P offsetF5153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  offsetF5153 = YPint((P)0);
  offsetF5153 = BOXFAB(offsetF5153);
  T35 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF5154 = T35;
  T34 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  T33 = CALL2(1,VARREF(YisaQ),T34,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF5155 = T33;
  if (boundQF5155 != YPfalse) {
    T1 = LITREF(lit_599);
  } else {
    T1 = LITREF(lit_600);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_601));
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5154);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T4 = CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_602));
    x_1843F5156 = out_;
    T19 = fun_221;
    T20 = fun_222;
    T18 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T19,T20);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    x_1845F5157 = T17;
    T22 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
    x_1844F5158 = T21;
    LOOP_247: {
      P a247_0,a247_1;
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1845F5157);
      tmpF5159 = T9;
      if (tmpF5159 != YPfalse) {
        T7 = tmpF5159;
      } else {
        T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1844F5158);
        T7 = T8;
      }
      T6 = CALL1(1,VARREF(Ynot),T7);
      if (T6 != YPfalse) {
        T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1845F5157);
        firstQF5160 = T16;
        T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1844F5158);
        bF5161 = T15;
        T10 = CALL1(1,VARREF(Ynot),firstQF5160);
        if (T10 != YPfalse) {
          T11 = CALL2(1,VARREF(YgooSioSportYput),x_1843F5156,YPchr((P)44));
        } else {
        }
        CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF5161,out_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1845F5157);
        T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1844F5158);
        a247_0 = T13;
        a247_1 = T14;
        x_1845F5157 = a247_0;
        x_1844F5158 = a247_1;
        goto LOOP_247;
        T5 = T12;
      } else {
        T5 = YPfalse;
      }
    }
    if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
      T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      T23 = T24;
    } else {
      T23 = YPfalse;
    }
  } else {
  }
  T25 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T25,out_);
  T26 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T26,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_605));
  T27 = FUNFAB(fun_223,2,out_,offsetF5153);
  CALL2(1,VARREF(YgooSmacrosYdo),T27,bindingsF5154);
  T28 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T28,definition_,YPint((P)1),out_);
  T30 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T29 = CALL1(1,VARREF(Ynot),T30);
  if (T29 != YPfalse) {
    T31 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_611));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYgenerate_return),definition_,definition_,YPint((P)1),out_);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_612));
UNLINK_STACK();
  QRET(T32);
}

LOCCODEDEF(fun_generate_local_temporaries_225) {
  P temps_,out_;
  P tempF5163;
  P x_1848F5162;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(temps_, 0);
  ARG(out_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  x_1848F5162 = T8;
  LOOP_248: {
    P a248_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1848F5162);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1848F5162);
      tempF5163 = T7;
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T3 = CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_615));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF5163,out_);
      if (DYNREF(YevalSg2cYTgen_statementsQT) != YPfalse) {
        T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_294));
      } else {
      }
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1848F5162);
      a248_0 = T6;
      x_1848F5162 = a248_0;
      goto LOOP_248;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_registers_226) {
  P regs_,out_;
  P tmpF5168;
  P iF5167;
  P jF5166;
  P jF5165;
  P nregsF5164;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(regs_, 0);
  ARG(out_, 1);
  T14 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF5164 = T14;
  jF5165 = YPint((P)0);
  LOOP_249: {
    P a249_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),jF5165,nregsF5164);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_618));
      jF5166 = jF5165;
      iF5167 = YPint((P)0);
      LOOP_250: {
        P a250_0,a250_1;
        T5 = CALL2(1,VARREF(YgooSlogYE),iF5167,VARREF(YevalSg2cYTregisters_per_lineT));
        tmpF5168 = T5;
        if (tmpF5168 != YPfalse) {
          T3 = tmpF5168;
        } else {
          T4 = CALL2(1,VARREF(YgooSlogYE),jF5166,nregsF5164);
          T3 = T4;
        }
        if (T3 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_619));
          a249_0 = jF5166;
          jF5165 = a249_0;
          goto LOOP_249;
          T2 = T6;
        } else {
          T8 = CALL2(1,VARREF(YgooSlogYE),iF5167,YPint((P)0));
          T7 = CALL1(1,VARREF(Ynot),T8);
          if (T7 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
          } else {
          }
          T10 = CALL2(1,VARREF(YgooSmacrosYelt),regs_,jF5166);
          CALL4(1,VARREF(YevalSg2cYgen_ref),T10,YPfalse,YPint((P)0),out_);
          T12 = CALL2(1,VARREF(YgooSmathYA),jF5166,YPint((P)1));
          T13 = CALL2(1,VARREF(YgooSmathYA),iF5167,YPint((P)1));
          a250_0 = T12;
          a250_1 = T13;
          jF5166 = a250_0;
          iF5167 = a250_1;
          goto LOOP_250;
          T2 = T11;
        }
      }
      T0 = T2;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_info_name_227) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_622),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_maybe_declare_228) {
  P modname_;
  P x_1850F5169;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1850F5169 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1850F5169,LITREF(lit_627));
    T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1850F5169,T3);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1850F5169,LITREF(lit_628));
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_229) {
  P binding_;
  P home_modF5170;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
  home_modF5170 = T4;
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(0,FREEREF(1),home_modF5170);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P out_,mod_;
  P maybe_declareF5173;
  P envF5172;
  P seenF5171;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF5171 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF5172 = T6;
  T5 = FUNSHELL(0,fun_maybe_declare_228,2);
  maybe_declareF5173 = T5;
  FUNINIT(maybe_declareF5173, 2,seenF5171,out_);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5172);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),T1);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF5173,T0);
  T3 = FUNFAB(fun_229,2,mod_,maybe_declareF5173);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_231) {
  P local_name_,binding_;
  P x_1854F5174;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1854F5174 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1854F5174,LITREF(lit_639));
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T4);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1854F5174,T3);
    CALL2(1,VARREF(YgooSioSportYputs),x_1854F5174,LITREF(lit_640));
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T6);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1854F5174,T5);
    CALL2(1,VARREF(YgooSioSportYputs),x_1854F5174,LITREF(lit_641));
    T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,local_name_);
    if (T8 != YPfalse) {
      T7 = LITREF(lit_642);
    } else {
      T10 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T7 = T10;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1854F5174,T7);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1854F5174,LITREF(lit_643));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_232) {
  P binding_;
  P x_1859F5179;
  P x_1858F5178;
  P x_1857F5177;
  P x_1856F5176;
  P x_1855F5175;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1855F5175 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1855F5175,LITREF(lit_647));
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1855F5175,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1855F5175,LITREF(lit_648));
    T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
    x_1856F5176 = T14;
    x_1857F5177 = VARREF(YgooSmacrosYEE);
    T6 = CALL2(1,x_1857F5177,x_1856F5176,LITREF(lit_170));
    if (T6 != YPfalse) {
      x_1858F5178 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1858F5178,LITREF(lit_649));
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1858F5178,T7);
      T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1858F5178,LITREF(lit_650));
      T5 = T8;
    } else {
      T10 = CALL2(1,x_1857F5177,x_1856F5176,LITREF(lit_172));
      if (T10 != YPfalse) {
        x_1859F5179 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1859F5179,LITREF(lit_651));
        T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1859F5179,T11);
        T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1859F5179,LITREF(lit_652));
        T9 = T12;
      } else {
        T13 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_653));
        T9 = T13;
      }
      T5 = T9;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P out_,mod_;
  P x_1865F5195;
  P x_1864F5194;
  P x_1863F5193;
  P x_1862F5192;
  P bindingF5191;
  P exported_asF5190;
  P tup38F5189;
  P x_1860F5188;
  P x_1853F5187;
  P nF5186;
  P x_1851F5185;
  P uses_namesF5184;
  P usesF5183;
  P envF5182;
  P info_nameF5181;
  P nameF5180;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T41 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF5180 = T41;
  T40 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF5180);
  info_nameF5181 = T40;
  T39 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF5182 = T39;
  T38 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5182);
  usesF5183 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF5183);
  uses_namesF5184 = T37;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_632));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_633));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF5184);
  x_1851F5185 = T8;
  LOOP_251: {
    P a251_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1851F5185);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1851F5185);
      nF5186 = T7;
      x_1853F5187 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1853F5187,LITREF(lit_634));
      T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF5186);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1853F5187,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1853F5187,LITREF(lit_635));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1851F5185);
      a251_0 = T6;
      x_1851F5185 = a251_0;
      goto LOOP_251;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_636));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_637));
  T9 = FUNFAB(fun_231,2,mod_,out_);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_named_static_global_bindings),T9,T10);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_644));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_645));
  T11 = FUNFAB(fun_232,2,mod_,out_);
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T11,T12);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_654));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_655));
  T31 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),mod_);
  T30 = CALL1(1,VARREF(YgooScolsScolYenum),T31);
  x_1860F5188 = T30;
  LOOP_252: {
    P a252_0;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1860F5188);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1860F5188);
      T29 = CALL1(1,VARREF(YgooScolsScolYnow),x_1860F5188);
      T27 = CALL2(1,VARREF(Ytup),T28,T29);
      tup38F5189 = T27;
      T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F5189,YPint((P)0));
      exported_asF5190 = T26;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F5189,YPint((P)1));
      bindingF5191 = T25;
      x_1862F5192 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1862F5192,LITREF(lit_656));
      T17 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF5191);
      T16 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T17);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1862F5192,T16);
      CALL2(1,VARREF(YgooSioSportYputs),x_1862F5192,LITREF(lit_657));
      T20 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF5191);
      T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,exported_asF5190);
      if (T19 != YPfalse) {
        T18 = LITREF(lit_658);
      } else {
        T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF5190);
        T18 = T21;
      }
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1862F5192,T18);
      T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1862F5192,LITREF(lit_659));
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1860F5188);
      a252_0 = T24;
      x_1860F5188 = a252_0;
      goto LOOP_252;
      T13 = T23;
    } else {
      T13 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_660));
  x_1863F5193 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1863F5193,LITREF(lit_661));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1863F5193,info_nameF5181);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),x_1863F5193,LITREF(lit_662));
  x_1864F5194 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1864F5194,LITREF(lit_663));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1864F5194,info_nameF5181);
  T33 = CALL2(1,VARREF(YgooSioSportYputs),x_1864F5194,LITREF(lit_664));
  x_1865F5195 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1865F5195,LITREF(lit_665));
  T34 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF5180);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1865F5195,T34);
  T35 = CALL2(1,VARREF(YgooSioSportYputs),x_1865F5195,LITREF(lit_666));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_667));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_668));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_669));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_670));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_671));
  T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_672));
UNLINK_STACK();
  QRET(T36);
}

LOCCODEDEF(fun_module_init_name_234) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_675),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_init_decl_235) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_678),T1,LITREF(lit_679));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_module_init_236) {
  P out_,mod_,form_;
  P x_1873F5208;
  P nF5207;
  P x_1871F5206;
  P x_1870F5205;
  P x_1869F5204;
  P x_1868F5203;
  P nF5202;
  P x_1866F5201;
  P uses_namesF5200;
  P usesF5199;
  P envF5198;
  P init_declF5197;
  P nameF5196;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T28 = LITREF(lit_682);
  } else {
    T29 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T28 = T29;
  }
  nameF5196 = T28;
  T27 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF5196);
  init_declF5197 = T27;
  T26 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF5198 = T26;
  T25 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5198);
  usesF5199 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF5199);
  uses_namesF5200 = T24;
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_683));
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF5200);
    x_1866F5201 = T9;
    LOOP_253: {
      P a253_0;
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1866F5201);
      T2 = CALL1(1,VARREF(Ynot),T3);
      if (T2 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1866F5201);
        nF5202 = T8;
        x_1868F5203 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1868F5203,LITREF(lit_684));
        T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF5202);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1868F5203,T4);
        T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1868F5203,LITREF(lit_685));
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1866F5201);
        a253_0 = T7;
        x_1866F5201 = a253_0;
        goto LOOP_253;
        T1 = T6;
      } else {
        T1 = YPfalse;
      }
    }
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_686));
  x_1869F5204 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1869F5204,LITREF(lit_687));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1869F5204,init_declF5197);
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1869F5204,LITREF(lit_688));
  x_1870F5205 = out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1870F5205,init_declF5197);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1870F5205,LITREF(lit_689));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_690));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_691));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_692));
  T12 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T12 != YPfalse) {
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF5200);
    x_1871F5206 = T21;
    LOOP_254: {
      P a254_0;
      T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1871F5206);
      T14 = CALL1(1,VARREF(Ynot),T15);
      if (T14 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1871F5206);
        nF5207 = T20;
        x_1873F5208 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1873F5208,LITREF(lit_693));
        T16 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF5207);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1873F5208,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1873F5208,LITREF(lit_694));
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1871F5206);
        a254_0 = T19;
        x_1871F5206 = a254_0;
        goto LOOP_254;
        T13 = T18;
      } else {
        T13 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_695));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_696));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_697));
UNLINK_STACK();
  QRET(T23);
}

LOCCODEDEF(fun_generate_main_237) {
  P out_,mod_;
  P x_1878F5215;
  P x_1877F5214;
  P x_1876F5213;
  P x_1875F5212;
  P x_1874F5211;
  P info_nameF5210;
  P nameF5209;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF5209 = T10;
  T9 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF5209);
  info_nameF5210 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_700));
  x_1874F5211 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1874F5211,LITREF(lit_701));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1874F5211,info_nameF5210);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1874F5211,LITREF(lit_702));
  x_1875F5212 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1875F5212,LITREF(lit_703));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF5209);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1875F5212,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1875F5212,LITREF(lit_704));
  x_1876F5213 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1876F5213,LITREF(lit_705));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1876F5213,info_nameF5210);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1876F5213,LITREF(lit_706));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_707));
  x_1877F5214 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1877F5214,LITREF(lit_708));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_709));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1877F5214,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1877F5214,LITREF(lit_710));
  x_1878F5215 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1878F5215,LITREF(lit_711));
  T6 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF5209);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1878F5215,T6);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1878F5215,LITREF(lit_712));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_713));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_714));
UNLINK_STACK();
  QRET(T8);
}

P YevalSg2cY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140;
DEFCREGS();
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPfab_met(FUNCODEREF(fun_module_loader_appname_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(29),YPfalse);
  T4 = VARREF_OR(YevalSg2cYmodule_loader_appname,YPfalse);
  T5 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_3 = YPPsym((P)"module-loader-app-modname");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_1 = YPfab_met(FUNCODEREF(fun_module_loader_app_modname_1),T6,LITREF(lit_3),LITREF(lit_4),sloc(30),YPfalse);
  T8 = VARREF_OR(YevalSg2cYmodule_loader_app_modname,YPfalse);
  T9 = fun_module_loader_app_modname_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSg2cYmodule_loader_app_modname,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<g2c-module>");
  T11 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmoduleG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T11);
  VARSET(YevalSg2cYLg2c_moduleG,T10);
  lit_6 = YPPsym((P)"module-src-file");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_2 = YPfab_met(FUNCODEREF(fun_module_src_file_2),T12,LITREF(lit_6),LITREF(lit_7),sloc(33),YPfalse);
  T14 = VARREF_OR(YevalSg2cYmodule_src_file,YPfalse);
  T15 = fun_module_src_file_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYmodule_src_file,T13);
  lit_8 = YPPsym((P)"module-src-file-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_3 = YPfab_met(FUNCODEREF(fun_module_src_file_setter_3),T16,LITREF(lit_8),LITREF(lit_9),sloc(33),YPfalse);
  T18 = VARREF_OR(YevalSg2cYmodule_src_file_setter,YPfalse);
  T19 = fun_module_src_file_setter_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYmodule_src_file_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_4 = YPfab_met(FUNCODEREF(fun_module_mtime_4),T20,LITREF(lit_10),LITREF(lit_11),sloc(34),YPfalse);
  T22 = VARREF_OR(YevalSg2cYmodule_mtime,YPfalse);
  T23 = fun_module_mtime_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYmodule_mtime,T21);
  lit_12 = YPPsym((P)"module-mtime-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_5 = YPfab_met(FUNCODEREF(fun_module_mtime_setter_5),T24,LITREF(lit_12),LITREF(lit_13),sloc(34),YPfalse);
  T26 = VARREF_OR(YevalSg2cYmodule_mtime_setter,YPfalse);
  T27 = fun_module_mtime_setter_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYmodule_mtime_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-loader-module-type");
  lit_15 = YPPlist(1,YPPsym((P)"loader"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_6 = YPfab_met(FUNCODEREF(fun_module_loader_module_type_6),T28,LITREF(lit_14),LITREF(lit_15),sloc(36),YPfalse);
  T30 = VARREF_OR(YevalSmoduleYmodule_loader_module_type,YPfalse);
  T31 = fun_module_loader_module_type_6;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSmoduleYmodule_loader_module_type,T29);
  lit_16 = YPPsym((P)"load-module");
  lit_17 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_18 = YPsb((P)"START");
  lit_19 = YPsb((P)"OPTIMIZE");
  lit_20 = Ynil;
  lit_21 = YPPlist(1,YPPsym((P)"name"));
  lit_22 = YPsb((P)"EMIT");
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T37,YPfalse,LITREF(lit_20),sloc(60),YPfalse);
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T36,YPfalse,LITREF(lit_20),sloc(60),YPfalse);
  T35 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T35,YPfalse,LITREF(lit_20),sloc(59),YPfalse);
  T34 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T34,YPfalse,LITREF(lit_20),sloc(59),YPfalse);
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T33,YPfalse,LITREF(lit_21),sloc(62),YPfalse);
  T32 = YPfab_sig(YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  fun_load_module_12 = YPfab_met(FUNCODEREF(fun_load_module_12),T32,LITREF(lit_16),LITREF(lit_17),sloc(41),YPfalse);
  T39 = VARREF_OR(YevalSmoduleYload_module,YPfalse);
  T40 = fun_load_module_12;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSmoduleYload_module,T38);
  lit_23 = YPPsym((P)"module-up-to-date?");
  lit_24 = YPPlist(1,YPPsym((P)"mod"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPfab_met(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),T41,LITREF(lit_23),LITREF(lit_24),sloc(76),YPfalse);
  T42 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T42);
  lit_25 = YPPsym((P)"purge-outdated-modules");
  lit_26 = YPPlist(1,YPPsym((P)"loader"));
  lit_27 = YPPlist(1,YPPsym((P)"mod"));
  lit_28 = YPPlist(1,YPPsym((P)"name"));
  lit_29 = YPsb((P)" has changed.\n");
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T45,YPfalse,LITREF(lit_27),sloc(84),YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T44,YPfalse,LITREF(lit_28),sloc(90),YPfalse);
  T43 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPfab_met(FUNCODEREF(YevalSg2cYpurge_outdated_modules),T43,LITREF(lit_25),LITREF(lit_26),sloc(79),YPfalse);
  T46 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T46);
  lit_30 = YPPsym((P)"g2c-def-app");
  lit_31 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_def_app),T47,LITREF(lit_30),LITREF(lit_31),sloc(103),YPfalse);
  T48 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T48);
  lit_32 = YPPsym((P)"g2c-build-app");
  lit_33 = YPPlist(1,YPPsym((P)"loader"));
  lit_34 = YPsb((P)"Searching for undefined global bindings.\n");
  T51 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T51,YPfalse,LITREF(lit_20),sloc(110),YPfalse);
  T50 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T50,YPfalse,LITREF(lit_20),sloc(110),YPfalse);
  T49 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_build_app),T49,LITREF(lit_32),LITREF(lit_33),sloc(109),YPfalse);
  T52 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T52);
  lit_35 = YPPsym((P)"g2c-test");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  lit_37 = YPsb((P)"g2c-");
  lit_38 = YPPsym((P)"eval/main");
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPfab_met(FUNCODEREF(YevalSg2cYg2c_test),T53,LITREF(lit_35),LITREF(lit_36),sloc(119),YPfalse);
  T54 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T54);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_39 = YPPsym((P)"g2c-ast");
  lit_40 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_41 = YPsb((P)"exp-%d-%d");
  T61 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T61,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T60 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T60,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T59 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T59,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T58 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T58,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T57 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T57,YPfalse,LITREF(lit_20),sloc(130),YPfalse);
  T56 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T56,YPfalse,LITREF(lit_20),sloc(130),YPfalse);
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPfab_met(FUNCODEREF(fun_g2c_ast_28),T55,LITREF(lit_39),LITREF(lit_40),sloc(124),YPfalse);
  T63 = VARREF_OR(YevalSg2cYg2c_ast,YPfalse);
  T64 = fun_g2c_ast_28;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSg2cYg2c_ast,T62);
  lit_42 = YPPsym((P)"g2c-exp");
  lit_43 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPfab_met(FUNCODEREF(fun_g2c_exp_29),T65,LITREF(lit_42),LITREF(lit_43),sloc(136),YPfalse);
  T67 = VARREF_OR(YevalSg2cYg2c_exp,YPfalse);
  T68 = fun_g2c_exp_29;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSg2cYg2c_exp,T66);
  lit_44 = YPPsym((P)"compile-load");
  lit_45 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"mod"));
  lit_46 = YPsb((P)"");
  lit_47 = YPPlist(1,YPPsym((P)"_1"));
  lit_48 = YPsb((P)" -I");
  lit_49 = YPPlist(1,YPPsym((P)"_1"));
  lit_50 = YPsb((P)" -l");
  lit_51 = YPsb((P)".so");
  lit_52 = YPsb((P)".so");
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T71,YPfalse,LITREF(lit_47),sloc(142),YPfalse);
  T70 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T70,YPfalse,LITREF(lit_49),sloc(144),YPfalse);
  T69 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_load_32 = YPfab_met(FUNCODEREF(fun_compile_load_32),T69,LITREF(lit_44),LITREF(lit_45),sloc(140),YPfalse);
  T73 = VARREF_OR(YevalSg2cYcompile_load,YPfalse);
  T74 = fun_compile_load_32;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSg2cYcompile_load,T72);
  lit_53 = YPPsym((P)"g2c-eval");
  lit_54 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T75 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_33 = YPfab_met(FUNCODEREF(fun_g2c_eval_33),T75,LITREF(lit_53),LITREF(lit_54),sloc(149),YPfalse);
  T77 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T78 = fun_g2c_eval_33;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YevalStopYg2c_eval,T76);
  lit_55 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T79 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_34 = YPfab_met(FUNCODEREF(fun_g2c_eval_34),T79,LITREF(lit_53),LITREF(lit_55),sloc(153),YPfalse);
  T81 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T82 = fun_g2c_eval_34;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalStopYg2c_eval,T80);
  lit_56 = YPsb((P)"g2c");
  T83 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_56),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T83);
  lit_57 = YPPsym((P)"g2c-top");
  T84 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_35 = YPfab_met(FUNCODEREF(fun_g2c_top_35),T84,LITREF(lit_57),LITREF(lit_20),sloc(159),YPfalse);
  T86 = VARREF_OR(YevalSg2cYg2c_top,YPfalse);
  T87 = fun_g2c_top_35;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSg2cYg2c_top,T85);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_58 = YPPsym((P)"g2c-clean");
  lit_59 = YPsb((P)"g2c");
  T88 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_36 = YPfab_met(FUNCODEREF(fun_g2c_clean_36),T88,LITREF(lit_58),LITREF(lit_20),sloc(161),YPfalse);
  T90 = VARREF_OR(YevalSg2cYg2c_clean,YPfalse);
  T91 = fun_g2c_clean_36;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSg2cYg2c_clean,T89);
  lit_60 = YPPsym((P)"compute-ast");
  lit_61 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_62 = YPsb((P)"READ");
  lit_63 = YPsb((P)"AST");
  T92 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_37 = YPfab_met(FUNCODEREF(fun_compute_ast_37),T92,LITREF(lit_60),LITREF(lit_61),sloc(167),YPfalse);
  T94 = VARREF_OR(YevalSg2cYcompute_ast,YPfalse);
  T95 = fun_compute_ast_37;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSg2cYcompute_ast,T93);
  lit_64 = YPPsym((P)"compute-program");
  lit_65 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_66 = YPsb((P)"ANA");
  lit_67 = YPsb((P)"BOX");
  lit_68 = YPsb((P)"LFT");
  lit_69 = YPsb((P)"EXT");
  lit_70 = YPsb((P)"CLO");
  lit_71 = YPsb((P)"TMP");
  lit_72 = YPsb((P)"REG");
  T96 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_38 = YPfab_met(FUNCODEREF(fun_compute_program_38),T96,LITREF(lit_64),LITREF(lit_65),sloc(177),YPfalse);
  T98 = VARREF_OR(YevalSg2cYcompute_program,YPfalse);
  T99 = fun_compute_program_38;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSg2cYcompute_program,T97);
  lit_73 = YPPsym((P)"generate-c-module");
  lit_74 = YPPlist(4,YPPsym((P)"out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T100 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_39 = YPfab_met(FUNCODEREF(fun_generate_c_module_39),T100,LITREF(lit_73),LITREF(lit_74),sloc(203),YPfalse);
  T102 = VARREF_OR(YevalSg2cYgenerate_c_module,YPfalse);
  T103 = fun_generate_c_module_39;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSg2cYgenerate_c_module,T101);
  lit_75 = YPPsym((P)"generate-c-application");
  lit_76 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_77 = YPsb((P)"-init");
  T106 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T106,YPfalse,LITREF(lit_20),sloc(220),YPfalse);
  T105 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T105,YPfalse,LITREF(lit_20),sloc(220),YPfalse);
  T104 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_42 = YPfab_met(FUNCODEREF(fun_generate_c_application_42),T104,LITREF(lit_75),LITREF(lit_76),sloc(216),YPfalse);
  T108 = VARREF_OR(YevalSg2cYgenerate_c_application,YPfalse);
  T109 = fun_generate_c_application_42;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSg2cYgenerate_c_application,T107);
  lit_78 = YPPlist(1,YPPsym((P)"exp"));
  lit_79 = YPPlist(1,YPPsym((P)"return"));
  lit_80 = YPPsym((P)"x-1623");
  lit_81 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_82 = YPPsym((P)"for-mods");
  lit_83 = YPsb((P)"Match Pattern Failure");
  lit_84 = YPPsym((P)"do-module-loader-modules");
  lit_85 = YPPsym((P)"fun");
  lit_86 = Ynil;
  T112 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1623_43 = YPfab_met(FUNCODEREF(fun_x_1623_43),T112,LITREF(lit_80),LITREF(lit_81),YPfalse,YPfalse);
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T111,YPfalse,LITREF(lit_79),YPfalse,YPfalse);
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T110,YPfalse,LITREF(lit_78),YPfalse,YPfalse);
  T113 = fun_45;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T113);
  lit_87 = YPPsym((P)"generate-makefile");
  lit_88 = YPPlist(1,YPPsym((P)"loader"));
  lit_89 = YPsb((P)"-init");
  lit_90 = YPsb((P)"Makefile");
  lit_91 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_92 = YPsb((P)"%,$(C_OBJS))\n");
  lit_93 = YPsb((P)"%");
  lit_94 = YPsb((P)": %");
  lit_95 = YPsb((P)" ..");
  lit_96 = YPsb((P)"grt.h ..");
  lit_97 = YPsb((P)"grt-protos.h\n");
  lit_98 = YPsb((P)"\t$(CC) -I.. ");
  lit_99 = YPPlist(1,YPPsym((P)"mod"));
  lit_100 = YPPlist(1,YPPsym((P)"i"));
  lit_101 = YPsb((P)"-I");
  lit_102 = YPsb((P)" ");
  lit_103 = YPsb((P)"$(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_104 = YPsb((P)"OBJS = \\\n");
  lit_105 = YPPlist(1,YPPsym((P)"mod"));
  lit_106 = YPPsym((P)"put-obj");
  lit_107 = YPPlist(1,YPPsym((P)"name"));
  lit_108 = YPsb((P)"\t");
  lit_109 = YPsb((P)" \\\n");
  lit_110 = YPPlist(1,YPPsym((P)"name"));
  lit_111 = YPsb((P)".c");
  lit_112 = YPPlist(1,YPPsym((P)"n"));
  lit_113 = YPsb((P)"\t");
  lit_114 = YPsb((P)"\n\n");
  lit_115 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_116 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_117 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)");
  lit_118 = YPPlist(1,YPPsym((P)"mod"));
  lit_119 = YPPlist(1,YPPsym((P)"l"));
  lit_120 = YPsb((P)" -l");
  lit_121 = YPsb((P)"\n\nclean:\n\trm -f ");
  lit_122 = YPsb((P)" $(OBJS)\n");
  T136 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T135 = fun_46 = YPfab_met(FUNCODEREF(fun_46),T136,YPfalse,LITREF(lit_100),sloc(241),YPfalse);
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T133 = fun_47 = YPfab_met(FUNCODEREF(fun_47),T134,YPfalse,LITREF(lit_99),sloc(240),YPfalse);
  T132 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T131 = fun_put_obj_48 = YPfab_met(FUNCODEREF(fun_put_obj_48),T132,LITREF(lit_106),LITREF(lit_107),sloc(246),YPfalse);
  T130 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T129 = fun_49 = YPfab_met(FUNCODEREF(fun_49),T130,YPfalse,LITREF(lit_110),sloc(250),YPfalse);
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T127 = fun_50 = YPfab_met(FUNCODEREF(fun_50),T128,YPfalse,LITREF(lit_112),sloc(251),YPfalse);
  T126 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T125 = fun_51 = YPfab_met(FUNCODEREF(fun_51),T126,YPfalse,LITREF(lit_105),sloc(245),YPfalse);
  T124 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T123 = fun_52 = YPfab_met(FUNCODEREF(fun_52),T124,YPfalse,LITREF(lit_119),sloc(257),YPfalse);
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T121 = fun_53 = YPfab_met(FUNCODEREF(fun_53),T122,YPfalse,LITREF(lit_118),sloc(256),YPfalse);
  T120 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T119 = fun_54 = YPfab_met(FUNCODEREF(fun_54),T120,YPfalse,LITREF(lit_20),sloc(235),YPfalse);
  T118 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T117 = fun_55 = YPfab_met(FUNCODEREF(fun_55),T118,YPfalse,LITREF(lit_20),sloc(235),YPfalse);
  T116 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T115 = fun_generate_makefile_56 = YPfab_met(FUNCODEREF(fun_generate_makefile_56),T116,LITREF(lit_87),LITREF(lit_88),sloc(229),YPfalse);
  T139 = VARREF_OR(YevalSg2cYgenerate_makefile,YPfalse);
  T140 = fun_generate_makefile_56;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  T137 = VARSET(YevalSg2cYgenerate_makefile,T138);
  T114 = T137;
  return T114;
}

P YevalSg2cY___main_1___() {
  P iF5225;
  P x_1659F5224;
  P iF5223;
  P x_1657F5222;
  P mangleF5221;
  P x_1655F5220;
  P iF5219;
  P x_1653F5218;
  P tableF5217;
  P vecF5216;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174;
DEFCREGS();
  lit_123 = YPPsym((P)"generate-c-forms");
  lit_124 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_125 = YPsb((P)"\n/* C-FORMS: */\n\n");
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_forms_57 = YPfab_met(FUNCODEREF(fun_generate_c_forms_57),T0,LITREF(lit_123),LITREF(lit_124),sloc(260),YPfalse);
  T2 = VARREF_OR(YevalSg2cYgenerate_c_forms,YPfalse);
  T3 = fun_generate_c_forms_57;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSg2cYgenerate_c_forms,T1);
  lit_126 = YPPsym((P)"pp");
  lit_127 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_58 = YPfab_met(FUNCODEREF(fun_pp_58),T4,LITREF(lit_126),LITREF(lit_127),sloc(270),YPfalse);
  T6 = VARREF_OR(YevalSg2cYpp,YPfalse);
  T7 = fun_pp_58;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSg2cYpp,T5);
  lit_128 = YPsb((P)"_mod");
  VARSET(YevalSg2cYDnow_mod_var_name,LITREF(lit_128));
  lit_129 = YPPsym((P)"include-filename");
  lit_130 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_include_filename_59 = YPfab_met(FUNCODEREF(fun_include_filename_59),T8,LITREF(lit_129),LITREF(lit_130),sloc(276),YPfalse);
  T10 = VARREF_OR(YevalSg2cYinclude_filename,YPfalse);
  T11 = fun_include_filename_59;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSg2cYinclude_filename,T9);
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  lit_132 = YPsb((P)"<");
  lit_133 = YPsb((P)".h>");
  T12 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_include_filename_60 = YPfab_met(FUNCODEREF(fun_include_filename_60),T12,LITREF(lit_129),LITREF(lit_131),sloc(278),YPfalse);
  T14 = VARREF_OR(YevalSg2cYinclude_filename,YPfalse);
  T15 = fun_include_filename_60;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYinclude_filename,T13);
  lit_134 = YPPlist(1,YPPsym((P)"x"));
  lit_135 = YPsb((P)".h");
  lit_136 = YPsb((P)"\"");
  lit_137 = YPsb((P)"\"");
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_include_filename_61 = YPfab_met(FUNCODEREF(fun_include_filename_61),T16,LITREF(lit_129),LITREF(lit_134),sloc(282),YPfalse);
  T18 = VARREF_OR(YevalSg2cYinclude_filename,YPfalse);
  T19 = fun_include_filename_61;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYinclude_filename,T17);
  lit_138 = YPPsym((P)"generate-header");
  lit_139 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_140 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_141 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_142 = YPsb((P)"#include \"dlgrt.h\"\n");
  lit_143 = YPPlist(1,YPPsym((P)"i"));
  lit_144 = YPsb((P)"#include ");
  lit_145 = YPsb((P)"\nstatic PSTR ");
  lit_146 = YPsb((P)" = PNUL;\n");
  lit_147 = YPsb((P)"\nstatic P sloc (int line) {\n");
  lit_148 = YPsb((P)"  if (");
  lit_149 = YPsb((P)" == PNUL) ");
  lit_150 = YPsb((P)" = ");
  lit_151 = YPsb((P)";\n");
  lit_152 = YPsb((P)"  return ");
  lit_153 = YPsb((P)"%src-loc");
  lit_154 = YPsb((P)"(");
  lit_155 = YPsb((P)"%ib");
  lit_156 = YPsb((P)"((P)(PINT)line), ");
  lit_157 = YPsb((P)");\n");
  lit_158 = YPsb((P)"}\n");
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPfab_met(FUNCODEREF(fun_62),T21,YPfalse,LITREF(lit_143),sloc(292),YPfalse);
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_63 = YPfab_met(FUNCODEREF(fun_generate_header_63),T20,LITREF(lit_138),LITREF(lit_139),sloc(285),YPfalse);
  T23 = VARREF_OR(YevalSg2cYgenerate_header,YPfalse);
  T24 = fun_generate_header_63;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YevalSg2cYgenerate_header,T22);
  lit_159 = YPPsym((P)"generate-trailer");
  lit_160 = YPPlist(1,YPPsym((P)"out"));
  lit_161 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_64 = YPfab_met(FUNCODEREF(fun_generate_trailer_64),T25,LITREF(lit_159),LITREF(lit_160),sloc(305),YPfalse);
  T27 = VARREF_OR(YevalSg2cYgenerate_trailer,YPfalse);
  T28 = fun_generate_trailer_64;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSg2cYgenerate_trailer,T26);
  lit_162 = YPPsym((P)"generate-global-environment");
  lit_163 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_164 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_165 = YPsb((P)" */\n\n");
  lit_166 = YPPsym((P)"gen-binding");
  lit_167 = YPPlist(1,YPPsym((P)"b"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gen_binding_65 = YPfab_met(FUNCODEREF(fun_gen_binding_65),T30,LITREF(lit_166),LITREF(lit_167),sloc(317),YPfalse);
  T29 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_66 = YPfab_met(FUNCODEREF(fun_generate_global_environment_66),T29,LITREF(lit_162),LITREF(lit_163),sloc(315),YPfalse);
  T32 = VARREF_OR(YevalSg2cYgenerate_global_environment,YPfalse);
  T33 = fun_generate_global_environment_66;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSg2cYgenerate_global_environment,T31);
  lit_168 = YPPsym((P)"generate-global-binding");
  lit_169 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"imported?"),YPPsym((P)"gb"));
  lit_170 = YPPsym((P)"global");
  lit_171 = YPPsym((P)"runtime");
  lit_172 = YPPsym((P)"dynamic");
  lit_173 = YPsb((P)"RTV");
  lit_174 = YPsb((P)"DYN");
  lit_175 = YPsb((P)"EXT");
  lit_176 = YPsb((P)"DEF");
  lit_177 = YPsb((P)"(");
  lit_178 = YPsb((P)",");
  lit_179 = YPsb((P)",");
  lit_180 = YPsb((P)");\n");
  T34 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_67 = YPfab_met(FUNCODEREF(fun_generate_global_binding_67),T34,LITREF(lit_168),LITREF(lit_169),sloc(324),YPfalse);
  T36 = VARREF_OR(YevalSg2cYgenerate_global_binding,YPfalse);
  T37 = fun_generate_global_binding_67;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSg2cYgenerate_global_binding,T35);
  lit_181 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_181));
  lit_182 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_182));
  lit_183 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_183));
  lit_184 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_184));
  lit_185 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_185));
  lit_186 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_186));
  T38 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T38);
  T39 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T39);
  T40 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T40);
  T41 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T41);
  T42 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T42);
  T43 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T43);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T44 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T44);
  lit_187 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_188 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_189 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_190 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_191 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_192 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_193 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_194 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_195 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_196 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_197 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_198 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_199 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_200 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_201 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_202 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_203 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_204 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T45 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_187),LITREF(lit_188),LITREF(lit_189),LITREF(lit_190),LITREF(lit_191),LITREF(lit_192),LITREF(lit_193),LITREF(lit_194),LITREF(lit_195),LITREF(lit_196),LITREF(lit_197),LITREF(lit_198),LITREF(lit_199),LITREF(lit_200),LITREF(lit_201),LITREF(lit_202),LITREF(lit_203),LITREF(lit_204));
  VARSET(YevalSg2cYDmangles_data,T45);
  lit_205 = YPPsym((P)"char-buffer-as-string");
  lit_206 = YPPlist(1,YPPsym((P)"buffer"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPfab_met(FUNCODEREF(YevalSg2cYchar_buffer_as_string),T46,LITREF(lit_205),LITREF(lit_206),sloc(367),YPfalse);
  T47 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T47);
  lit_207 = YPsb((P)"\\t");
  lit_208 = YPsb((P)"\\f");
  lit_209 = YPsb((P)"\\r");
  lit_210 = YPsb((P)"\\n");
  lit_211 = YPsb((P)"\\\"");
  lit_212 = YPsb((P)"\\\\");
  T56 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T55 = XCALL2(1,VARREF(YgooScolsScolYfill),T56,YPfalse);
  vecF5216 = T55;
  T48 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_207),vecF5216,T48);
  T49 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_208),vecF5216,T49);
  T50 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_209),vecF5216,T50);
  T51 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_210),vecF5216,T51);
  T52 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_211),vecF5216,T52);
  T53 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_212),vecF5216,T53);
  T54 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF5216);
  VARSET(YevalSg2cYDc_escapes,T54);
  lit_213 = YPPsym((P)"mangle-string-literal");
  lit_214 = YPPlist(1,YPPsym((P)"str"));
  T57 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_69 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_69),T57,LITREF(lit_213),LITREF(lit_214),sloc(388),YPfalse);
  T59 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T60 = fun_mangle_string_literal_69;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSg2cYmangle_string_literal,T58);
  lit_215 = YPPlist(1,YPPsym((P)"sym"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_70 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_70),T61,LITREF(lit_213),LITREF(lit_215),sloc(403),YPfalse);
  T63 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T64 = fun_mangle_string_literal_70;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSg2cYmangle_string_literal,T62);
  lit_216 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_216));
  lit_217 = YPPsym((P)"mangle-integer");
  lit_218 = YPPlist(1,YPPsym((P)"number"));
  lit_219 = YPPsym((P)"process-integer");
  lit_220 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_71 = YPfab_met(FUNCODEREF(fun_process_integer_71),T66,LITREF(lit_219),LITREF(lit_220),sloc(410),YPfalse);
  T65 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_72 = YPfab_met(FUNCODEREF(fun_mangle_integer_72),T65,LITREF(lit_217),LITREF(lit_218),sloc(408),YPfalse);
  T68 = VARREF_OR(YevalSg2cYmangle_integer,YPfalse);
  T69 = fun_mangle_integer_72;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSg2cYmangle_integer,T67);
  T113 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T112 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T113);
  tableF5217 = T112;
  T79 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T78 = XCALL1(1,VARREF(YgooScolsScolYenum),T79);
  x_1653F5218 = T78;
  LOOP_255: {
    P a255_0;
    T72 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1653F5218);
    T71 = XCALL1(1,VARREF(Ynot),T72);
    if (T71 != YPfalse) {
      T77 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1653F5218);
      iF5219 = T77;
      T74 = XCALL1(1,VARREF(YevalSg2cYmangle_integer),iF5219);
      T73 = XCALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T74,VARREF(YevalSg2cYDescape_separator));
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T73,tableF5217,iF5219);
      T76 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1653F5218);
      a255_0 = T76;
      x_1653F5218 = a255_0;
      goto LOOP_255;
      T70 = T75;
    } else {
      T70 = YPfalse;
    }
  }
  T89 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  x_1655F5220 = T89;
  LOOP_256: {
    P a256_0;
    T82 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1655F5220);
    T81 = XCALL1(1,VARREF(Ynot),T82);
    if (T81 != YPfalse) {
      T88 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1655F5220);
      mangleF5221 = T88;
      T83 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF5221,YPint((P)1));
      T85 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF5221,YPint((P)0));
      T84 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T85);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T83,tableF5217,T84);
      T87 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1655F5220);
      a256_0 = T87;
      x_1655F5220 = a256_0;
      goto LOOP_256;
      T80 = T86;
    } else {
      T80 = YPfalse;
    }
  }
  T99 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T100 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T98 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T99,VARREF(YgooSmagYLE),T100);
  T97 = XCALL1(1,VARREF(YgooScolsScolYenum),T98);
  x_1657F5222 = T97;
  LOOP_257: {
    P a257_0;
    T92 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1657F5222);
    T91 = XCALL1(1,VARREF(Ynot),T92);
    if (T91 != YPfalse) {
      T96 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1657F5222);
      iF5223 = T96;
      T93 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF5223);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T93,tableF5217,iF5223);
      T95 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1657F5222);
      a257_0 = T95;
      x_1657F5222 = a257_0;
      goto LOOP_257;
      T90 = T94;
    } else {
      T90 = YPfalse;
    }
  }
  T110 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T111 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T109 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T110,VARREF(YgooSmagYLE),T111);
  T108 = XCALL1(1,VARREF(YgooScolsScolYenum),T109);
  x_1659F5224 = T108;
  LOOP_258: {
    P a258_0;
    T103 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1659F5224);
    T102 = XCALL1(1,VARREF(Ynot),T103);
    if (T102 != YPfalse) {
      T107 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1659F5224);
      iF5225 = T107;
      T104 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF5225);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T104,tableF5217,iF5225);
      T106 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1659F5224);
      a258_0 = T106;
      x_1659F5224 = a258_0;
      goto LOOP_258;
      T101 = T105;
    } else {
      T101 = YPfalse;
    }
  }
  VARSET(YevalSg2cYDname_mangler_table,tableF5217);
  lit_221 = YPPsym((P)"mangler-reset");
  lit_222 = YPPlist(1,YPPsym((P)"buffer"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPfab_met(FUNCODEREF(YevalSg2cYmangler_reset),T114,LITREF(lit_221),LITREF(lit_222),sloc(439),YPfalse);
  T115 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T115);
  lit_223 = YPPsym((P)"mangle-name-into");
  lit_224 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T116 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPfab_met(FUNCODEREF(YevalSg2cYmangle_name_into),T116,LITREF(lit_223),LITREF(lit_224),sloc(442),YPfalse);
  T117 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T117);
  lit_225 = YPPsym((P)"mangle-raw-name");
  lit_226 = YPPlist(1,YPPsym((P)"name"));
  T118 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_75 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_75),T118,LITREF(lit_225),LITREF(lit_226),sloc(447),YPfalse);
  T120 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T121 = fun_mangle_raw_name_75;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSg2cYmangle_raw_name,T119);
  lit_227 = YPPlist(1,YPPsym((P)"name"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_76 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_76),T122,LITREF(lit_225),LITREF(lit_227),sloc(452),YPfalse);
  T124 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T125 = fun_mangle_raw_name_76;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSg2cYmangle_raw_name,T123);
  lit_228 = YPPsym((P)"mangle-local-name");
  lit_229 = YPPlist(1,YPPsym((P)"name"));
  T126 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_77 = YPfab_met(FUNCODEREF(fun_mangle_local_name_77),T126,LITREF(lit_228),LITREF(lit_229),sloc(455),YPfalse);
  T128 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T129 = fun_mangle_local_name_77;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYmangle_local_name,T127);
  lit_230 = YPPlist(1,YPPsym((P)"name"));
  T130 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_78 = YPfab_met(FUNCODEREF(fun_mangle_local_name_78),T130,LITREF(lit_228),LITREF(lit_230),sloc(461),YPfalse);
  T132 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T133 = fun_mangle_local_name_78;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYmangle_local_name,T131);
  lit_231 = YPPsym((P)"buf-cat2!");
  lit_232 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T134 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPfab_met(FUNCODEREF(YevalSg2cYbuf_cat2X),T134,LITREF(lit_231),LITREF(lit_232),sloc(465),YPfalse);
  T135 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T135);
  lit_233 = YPPsym((P)"mangle-module-into");
  lit_234 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T136 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_80 = YPfab_met(FUNCODEREF(fun_mangle_module_into_80),T136,LITREF(lit_233),LITREF(lit_234),sloc(472),YPfalse);
  T138 = VARREF_OR(YevalSg2cYmangle_module_into,YPfalse);
  T139 = fun_mangle_module_into_80;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YevalSg2cYmangle_module_into,T137);
  lit_235 = YPPsym((P)"mangle-global-name");
  lit_236 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T140 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_81 = YPfab_met(FUNCODEREF(fun_mangle_global_name_81),T140,LITREF(lit_235),LITREF(lit_236),sloc(479),YPfalse);
  T142 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T143 = fun_mangle_global_name_81;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSg2cYmangle_global_name,T141);
  lit_237 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T144 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_82 = YPfab_met(FUNCODEREF(fun_mangle_global_name_82),T144,LITREF(lit_235),LITREF(lit_237),sloc(490),YPfalse);
  T146 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T147 = fun_mangle_global_name_82;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSg2cYmangle_global_name,T145);
  lit_238 = YPPsym((P)"mangle-boot-name");
  lit_239 = YPPlist(1,YPPsym((P)"name"));
  T148 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_boot_name),T148,LITREF(lit_238),LITREF(lit_239),sloc(495),YPfalse);
  T149 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T149);
  lit_240 = YPPsym((P)"mangle-quotation-name");
  lit_241 = YPPlist(1,YPPsym((P)"name"));
  lit_242 = YPsb((P)"lit_");
  T150 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_quotation_name),T150,LITREF(lit_240),LITREF(lit_241),sloc(498),YPfalse);
  T151 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T151);
  lit_243 = YPPsym((P)"mangle-binding");
  lit_244 = YPPlist(1,YPPsym((P)"binding"));
  lit_245 = YPPsym((P)"quotation");
  T152 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_85 = YPfab_met(FUNCODEREF(fun_mangle_binding_85),T152,LITREF(lit_243),LITREF(lit_244),sloc(504),YPfalse);
  T154 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T155 = fun_mangle_binding_85;
  T153 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T154,T155);
  VARSET(YevalSg2cYmangle_binding,T153);
  lit_246 = YPPsym((P)"mangle-local-marked-name");
  lit_247 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T156 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_local_marked_name),T156,LITREF(lit_246),LITREF(lit_247),sloc(511),YPfalse);
  T157 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T157);
  lit_248 = YPPlist(1,YPPsym((P)"binding"));
  T158 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_87 = YPfab_met(FUNCODEREF(fun_mangle_binding_87),T158,LITREF(lit_243),LITREF(lit_248),sloc(518),YPfalse);
  T160 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T161 = fun_mangle_binding_87;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSg2cYmangle_binding,T159);
  lit_249 = YPPlist(1,YPPsym((P)"binding"));
  T162 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_88 = YPfab_met(FUNCODEREF(fun_mangle_binding_88),T162,LITREF(lit_243),LITREF(lit_249),sloc(522),YPfalse);
  T164 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T165 = fun_mangle_binding_88;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSg2cYmangle_binding,T163);
  lit_250 = YPPlist(1,YPPsym((P)"exp"));
  lit_251 = YPPlist(1,YPPsym((P)"return"));
  lit_252 = YPPsym((P)"x-1666");
  lit_253 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_254 = YPPsym((P)"for-commas");
  lit_255 = YPPsym((P)"let");
  lit_256 = YPPsym((P)"for");
  lit_257 = YPPsym((P)"first?");
  lit_258 = YPPsym((P)"first-then");
  lit_259 = YPPsym((P)"op");
  lit_260 = YPPsym((P)"unless");
  lit_261 = YPPsym((P)"put");
  T172 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T171 = fun_x_1666_89 = YPfab_met(FUNCODEREF(fun_x_1666_89),T172,LITREF(lit_252),LITREF(lit_253),YPfalse,YPfalse);
  T170 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T169 = fun_90 = YPfab_met(FUNCODEREF(fun_90),T170,YPfalse,LITREF(lit_251),YPfalse,YPfalse);
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T167 = fun_91 = YPfab_met(FUNCODEREF(fun_91),T168,YPfalse,LITREF(lit_250),YPfalse,YPfalse);
  T174 = fun_91;
  T173 = YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T174);
  T166 = T173;
  return T166;
}

P YevalSg2cY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186;
DEFCREGS();
  lit_262 = YPPlist(1,YPPsym((P)"exp"));
  lit_263 = YPPlist(1,YPPsym((P)"return"));
  lit_264 = YPPsym((P)"x-1670");
  lit_265 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_266 = YPPsym((P)"maybe-between-parentheses");
  lit_267 = YPPsym((P)"not");
  lit_268 = YPPsym((P)"*gen-statements?*");
  lit_269 = YPPsym((P)"when");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1670_92 = YPfab_met(FUNCODEREF(fun_x_1670_92),T2,LITREF(lit_264),LITREF(lit_265),YPfalse,YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPfab_met(FUNCODEREF(fun_93),T1,YPfalse,LITREF(lit_263),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPfab_met(FUNCODEREF(fun_94),T0,YPfalse,LITREF(lit_262),YPfalse,YPfalse);
  T3 = fun_94;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"maybe-between-parentheses"),T3);
  lit_270 = YPPlist(1,YPPsym((P)"exp"));
  lit_271 = YPPlist(1,YPPsym((P)"return"));
  lit_272 = YPPsym((P)"x-1674");
  lit_273 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_274 = YPPsym((P)"between-parentheses");
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1674_95 = YPfab_met(FUNCODEREF(fun_x_1674_95),T6,LITREF(lit_272),LITREF(lit_273),YPfalse,YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPfab_met(FUNCODEREF(fun_96),T5,YPfalse,LITREF(lit_271),YPfalse,YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T4,YPfalse,LITREF(lit_270),YPfalse,YPfalse);
  T7 = fun_97;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T7);
  lit_275 = YPPlist(1,YPPsym((P)"exp"));
  lit_276 = YPPlist(1,YPPsym((P)"return"));
  lit_277 = YPPsym((P)"x-1678");
  lit_278 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_279 = YPPsym((P)"between-parentheses-comma-separated");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1678_98 = YPfab_met(FUNCODEREF(fun_x_1678_98),T10,LITREF(lit_277),LITREF(lit_278),YPfalse,YPfalse);
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPfab_met(FUNCODEREF(fun_99),T9,YPfalse,LITREF(lit_276),YPfalse,YPfalse);
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T8,YPfalse,LITREF(lit_275),YPfalse,YPfalse);
  T11 = fun_100;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T11);
  lit_280 = YPPsym((P)"gen-result");
  lit_281 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_282 = YPsb((P)"T");
  lit_283 = YPsb((P)" = ");
  T12 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_101 = YPfab_met(FUNCODEREF(fun_gen_result_101),T12,LITREF(lit_280),LITREF(lit_281),sloc(559),YPfalse);
  T14 = VARREF_OR(YevalSg2cYgen_result,YPfalse);
  T15 = fun_gen_result_101;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYgen_result,T13);
  lit_284 = YPPsym((P)"gen-depth");
  lit_285 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"out"));
  lit_286 = YPsb((P)"  ");
  T16 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_102 = YPfab_met(FUNCODEREF(fun_gen_depth_102),T16,LITREF(lit_284),LITREF(lit_285),sloc(563),YPfalse);
  T18 = VARREF_OR(YevalSg2cYgen_depth,YPfalse);
  T19 = fun_gen_depth_102;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYgen_depth,T17);
  DYNDEFSET(YevalSg2cYTgen_statementsQT,YPtrue);
  lit_287 = YPPlist(1,YPPsym((P)"exp"));
  lit_288 = YPPlist(1,YPPsym((P)"return"));
  lit_289 = YPPsym((P)"x-1685");
  lit_290 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_291 = YPPsym((P)"with-statement");
  lit_292 = YPPsym((P)"seq");
  lit_293 = YPPsym((P)"puts");
  lit_294 = YPsb((P)";\n");
  T22 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1685_103 = YPfab_met(FUNCODEREF(fun_x_1685_103),T22,LITREF(lit_289),LITREF(lit_290),YPfalse,YPfalse);
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPfab_met(FUNCODEREF(fun_104),T21,YPfalse,LITREF(lit_288),YPfalse,YPfalse);
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPfab_met(FUNCODEREF(fun_105),T20,YPfalse,LITREF(lit_287),YPfalse,YPfalse);
  T23 = fun_105;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T23);
  lit_295 = YPPlist(1,YPPsym((P)"exp"));
  lit_296 = YPPlist(1,YPPsym((P)"return"));
  lit_297 = YPPsym((P)"x-1689");
  lit_298 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_299 = YPPsym((P)"may-comma");
  lit_300 = YPsb((P)", ");
  T26 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1689_106 = YPfab_met(FUNCODEREF(fun_x_1689_106),T26,LITREF(lit_297),LITREF(lit_298),YPfalse,YPfalse);
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPfab_met(FUNCODEREF(fun_107),T25,YPfalse,LITREF(lit_296),YPfalse,YPfalse);
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPfab_met(FUNCODEREF(fun_108),T24,YPfalse,LITREF(lit_295),YPfalse,YPfalse);
  T27 = fun_108;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"may-comma"),T27);
  lit_301 = YPPlist(1,YPPsym((P)"exp"));
  lit_302 = YPPlist(1,YPPsym((P)"return"));
  lit_303 = YPPsym((P)"x-1693");
  lit_304 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_305 = YPPsym((P)"with-statement-may-comma");
  T30 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1693_109 = YPfab_met(FUNCODEREF(fun_x_1693_109),T30,LITREF(lit_303),LITREF(lit_304),YPfalse,YPfalse);
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPfab_met(FUNCODEREF(fun_110),T29,YPfalse,LITREF(lit_302),YPfalse,YPfalse);
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPfab_met(FUNCODEREF(fun_111),T28,YPfalse,LITREF(lit_301),YPfalse,YPfalse);
  T31 = fun_111;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement-may-comma"),T31);
  lit_306 = YPPlist(1,YPPsym((P)"exp"));
  lit_307 = YPPlist(1,YPPsym((P)"return"));
  lit_308 = YPPsym((P)"x-1697");
  lit_309 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_310 = YPPsym((P)"with-expression");
  T34 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1697_112 = YPfab_met(FUNCODEREF(fun_x_1697_112),T34,LITREF(lit_308),LITREF(lit_309),YPfalse,YPfalse);
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPfab_met(FUNCODEREF(fun_113),T33,YPfalse,LITREF(lit_307),YPfalse,YPfalse);
  T32 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPfab_met(FUNCODEREF(fun_114),T32,YPfalse,LITREF(lit_306),YPfalse,YPfalse);
  T35 = fun_114;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T35);
  lit_311 = YPPlist(1,YPPsym((P)"exp"));
  lit_312 = YPPlist(1,YPPsym((P)"return"));
  lit_313 = YPPsym((P)"x-1701");
  lit_314 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_315 = YPPsym((P)"with-used-expression");
  lit_316 = YPPsym((P)"program-register");
  T38 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1701_115 = YPfab_met(FUNCODEREF(fun_x_1701_115),T38,LITREF(lit_313),LITREF(lit_314),YPfalse,YPfalse);
  T37 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPfab_met(FUNCODEREF(fun_116),T37,YPfalse,LITREF(lit_312),YPfalse,YPfalse);
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPfab_met(FUNCODEREF(fun_117),T36,YPfalse,LITREF(lit_311),YPfalse,YPfalse);
  T39 = fun_117;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T39);
  lit_317 = YPPsym((P)"generate-quotation-forwards");
  lit_318 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_319 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_320 = YPsb((P)"DEFLIT(lit_");
  lit_321 = YPsb((P)");\n");
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_118 = YPfab_met(FUNCODEREF(fun_generate_quotation_forwards_118),T40,LITREF(lit_317),LITREF(lit_318),sloc(596),YPfalse);
  T42 = VARREF_OR(YevalSg2cYgenerate_quotation_forwards,YPfalse);
  T43 = fun_generate_quotation_forwards_118;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T41);
  lit_322 = YPPsym((P)"generate-quotations");
  lit_323 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_324 = YPsb((P)"lit_");
  lit_325 = YPsb((P)" = ");
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_119 = YPfab_met(FUNCODEREF(fun_generate_quotations_119),T44,LITREF(lit_322),LITREF(lit_323),sloc(601),YPfalse);
  T46 = VARREF_OR(YevalSg2cYgenerate_quotations,YPfalse);
  T47 = fun_generate_quotations_119;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSg2cYgenerate_quotations,T45);
  T48 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  VARSET(YevalSg2cYTlitsT,T48);
  T49 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  VARSET(YevalSg2cYTlits_atT,T49);
  lit_326 = YPPsym((P)"@lit");
  lit_327 = YPPlist(1,YPPsym((P)"n"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOlit = YPfab_met(FUNCODEREF(YOlit),T50,LITREF(lit_326),LITREF(lit_327),sloc(610),YPfalse);
  T51 = YOlit;
  VARSET(YOlit,T51);
  lit_328 = YPPsym((P)"ref-lit");
  lit_329 = YPPlist(1,YPPsym((P)"x"));
  T53 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_121 = YPfab_met(FUNCODEREF(fun_121),T53,YPfalse,LITREF(lit_20),YPfalse,YPfalse);
  T52 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ref_lit_122 = YPfab_met(FUNCODEREF(fun_ref_lit_122),T52,LITREF(lit_328),LITREF(lit_329),sloc(612),YPfalse);
  T55 = VARREF_OR(YevalSg2cYref_lit,YPfalse);
  T56 = fun_ref_lit_122;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSg2cYref_lit,T54);
  lit_330 = YPPsym((P)"generate-quotation");
  lit_331 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_332 = YPsb((P)"%lit");
  lit_333 = YPsb((P)"((P)");
  lit_334 = YPsb((P)")");
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPfab_met(FUNCODEREF(fun_generate_quotation_123),T57,LITREF(lit_330),LITREF(lit_331),sloc(615),YPfalse);
  T59 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T60 = fun_generate_quotation_123;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSg2cYgenerate_quotation,T58);
  lit_335 = YPPsym((P)"false-name");
  lit_336 = YPsb((P)"%false");
  T61 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_124 = YPfab_met(FUNCODEREF(fun_false_name_124),T61,LITREF(lit_335),LITREF(lit_20),sloc(618),YPfalse);
  T63 = VARREF_OR(YevalSg2cYfalse_name,YPfalse);
  T64 = fun_false_name_124;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSg2cYfalse_name,T62);
  lit_337 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_338 = YPsb((P)"%true");
  lit_339 = YPsb((P)"%false");
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_125 = YPfab_met(FUNCODEREF(fun_generate_quotation_125),T65,LITREF(lit_330),LITREF(lit_337),sloc(621),YPfalse);
  T67 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T68 = fun_generate_quotation_125;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSg2cYgenerate_quotation,T66);
  lit_340 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_341 = YPsb((P)"nil");
  T70 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T69 = YPfab_sig(YPPlist(2,VARREF(YLanyG),T70),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_126 = YPfab_met(FUNCODEREF(fun_generate_quotation_126),T69,LITREF(lit_330),LITREF(lit_340),sloc(624),YPfalse);
  T72 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T73 = fun_generate_quotation_126;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSg2cYgenerate_quotation,T71);
  lit_342 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_343 = YPPlist(1,YPPsym((P)"x"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPfab_met(FUNCODEREF(fun_127),T75,YPfalse,LITREF(lit_343),sloc(628),YPfalse);
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_128 = YPfab_met(FUNCODEREF(fun_generate_quotation_128),T74,LITREF(lit_330),LITREF(lit_342),sloc(627),YPfalse);
  T77 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T78 = fun_generate_quotation_128;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YevalSg2cYgenerate_quotation,T76);
  lit_344 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_345 = YPsb((P)"%int");
  lit_346 = YPsb((P)"((P)");
  lit_347 = YPsb((P)")");
  T79 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_129 = YPfab_met(FUNCODEREF(fun_generate_quotation_129),T79,LITREF(lit_330),LITREF(lit_344),sloc(630),YPfalse);
  T81 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T82 = fun_generate_quotation_129;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalSg2cYgenerate_quotation,T80);
  lit_348 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_349 = YPsb((P)"%chr");
  lit_350 = YPsb((P)"((P)");
  lit_351 = YPsb((P)")");
  T83 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_130 = YPfab_met(FUNCODEREF(fun_generate_quotation_130),T83,LITREF(lit_330),LITREF(lit_348),sloc(633),YPfalse);
  T85 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T86 = fun_generate_quotation_130;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSg2cYgenerate_quotation,T84);
  lit_352 = YPPsym((P)"float-to-c-string");
  lit_353 = YPPlist(1,YPPsym((P)"o"));
  lit_354 = YPPlist(1,YPPsym((P)"done"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPfab_met(FUNCODEREF(fun_131),T88,YPfalse,LITREF(lit_354),sloc(639),YPfalse);
  T87 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_132 = YPfab_met(FUNCODEREF(fun_float_to_c_string_132),T87,LITREF(lit_352),LITREF(lit_353),sloc(636),YPfalse);
  T90 = VARREF_OR(YevalSg2cYfloat_to_c_string,YPfalse);
  T91 = fun_float_to_c_string_132;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSg2cYfloat_to_c_string,T89);
  lit_355 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_356 = YPsb((P)"%flo");
  lit_357 = YPsb((P)"(FLOINT(");
  lit_358 = YPsb((P)"))");
  T92 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_133 = YPfab_met(FUNCODEREF(fun_generate_quotation_133),T92,LITREF(lit_330),LITREF(lit_355),sloc(651),YPfalse);
  T94 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T95 = fun_generate_quotation_133;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSg2cYgenerate_quotation,T93);
  lit_359 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_360 = YPsb((P)"%sb");
  lit_361 = YPsb((P)"((P)");
  lit_362 = YPsb((P)")");
  T96 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_134 = YPfab_met(FUNCODEREF(fun_generate_quotation_134),T96,LITREF(lit_330),LITREF(lit_359),sloc(655),YPfalse);
  T98 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T99 = fun_generate_quotation_134;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSg2cYgenerate_quotation,T97);
  lit_363 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_364 = YPsb((P)"XCALLN(1, ");
  lit_365 = YPsb((P)"vec");
  lit_366 = YPsb((P)", ");
  lit_367 = YPsb((P)", ");
  lit_368 = YPsb((P)")");
  T100 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_135 = YPfab_met(FUNCODEREF(fun_generate_quotation_135),T100,LITREF(lit_330),LITREF(lit_363),sloc(659),YPfalse);
  T102 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T103 = fun_generate_quotation_135;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSg2cYgenerate_quotation,T101);
  lit_369 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_370 = YPsb((P)"XCALLN(1, ");
  lit_371 = YPsb((P)"tup");
  lit_372 = YPsb((P)", ");
  lit_373 = YPsb((P)", ");
  lit_374 = YPsb((P)")");
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_136 = YPfab_met(FUNCODEREF(fun_generate_quotation_136),T104,LITREF(lit_330),LITREF(lit_369),sloc(667),YPfalse);
  T106 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T107 = fun_generate_quotation_136;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_quotation,T105);
  lit_375 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_376 = YPsb((P)"%%sym");
  lit_377 = YPsb((P)"((P)");
  lit_378 = YPsb((P)")");
  T108 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_137 = YPfab_met(FUNCODEREF(fun_generate_quotation_137),T108,LITREF(lit_330),LITREF(lit_375),sloc(675),YPfalse);
  T110 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T111 = fun_generate_quotation_137;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YevalSg2cYgenerate_quotation,T109);
  lit_379 = YPPsym((P)"binding->c");
  lit_380 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"out"));
  T112 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPfab_met(FUNCODEREF(YevalSg2cYbinding_Gc),T112,LITREF(lit_379),LITREF(lit_380),sloc(684),YPfalse);
  T113 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T113);
  lit_381 = YPPsym((P)"reference->c");
  lit_382 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T115 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T114 = YPfab_gen(T115,LITREF(lit_381),LITREF(lit_382),YPfalse);
  VARSET(YevalSg2cYreference_Gc,T114);
  lit_383 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T116 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_139 = YPfab_met(FUNCODEREF(fun_reference_Gc_139),T116,LITREF(lit_381),LITREF(lit_383),sloc(691),YPfalse);
  T118 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T119 = fun_reference_Gc_139;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalSg2cYreference_Gc,T117);
  lit_384 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  lit_385 = YPsb((P)"LITREF");
  lit_386 = YPsb((P)"RTVREF");
  lit_387 = YPsb((P)"DYNREF");
  lit_388 = YPsb((P)"VARREF");
  T120 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_140 = YPfab_met(FUNCODEREF(fun_reference_Gc_140),T120,LITREF(lit_381),LITREF(lit_384),sloc(694),YPfalse);
  T122 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T123 = fun_reference_Gc_140;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YevalSg2cYreference_Gc,T121);
  lit_389 = YPPsym((P)"to-c");
  lit_390 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T125 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T124 = YPfab_gen(T125,LITREF(lit_389),LITREF(lit_390),YPfalse);
  VARSET(YevalSg2cYto_c,T124);
  lit_391 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T126 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_141 = YPfab_met(FUNCODEREF(fun_to_c_141),T126,LITREF(lit_389),LITREF(lit_391),sloc(706),YPfalse);
  T128 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T129 = fun_to_c_141;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYto_c,T127);
  lit_392 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T130 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_142 = YPfab_met(FUNCODEREF(fun_to_c_142),T130,LITREF(lit_389),LITREF(lit_392),sloc(712),YPfalse);
  T132 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T133 = fun_to_c_142;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYto_c,T131);
  lit_393 = YPPsym((P)"gen-ref*");
  lit_394 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T134 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_143 = YPfab_met(FUNCODEREF(fun_gen_refT_143),T134,LITREF(lit_393),LITREF(lit_394),sloc(716),YPfalse);
  T136 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T137 = fun_gen_refT_143;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSg2cYgen_refT,T135);
  lit_395 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_396 = YPsb((P)"FREEREF");
  T138 = YPfab_sig(YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_144 = YPfab_met(FUNCODEREF(fun_gen_refT_144),T138,LITREF(lit_393),LITREF(lit_395),sloc(719),YPfalse);
  T140 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T141 = fun_gen_refT_144;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSg2cYgen_refT,T139);
  lit_397 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_398 = YPsb((P)"T");
  lit_399 = YPsb((P)"T_1");
  T142 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_145 = YPfab_met(FUNCODEREF(fun_gen_refT_145),T142,LITREF(lit_393),LITREF(lit_397),sloc(724),YPfalse);
  T144 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T145 = fun_gen_refT_145;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(YevalSg2cYgen_refT,T143);
  lit_400 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_401 = YPsb((P)"(P)");
  T146 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_146 = YPfab_met(FUNCODEREF(fun_gen_refT_146),T146,LITREF(lit_393),LITREF(lit_400),sloc(728),YPfalse);
  T148 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T149 = fun_gen_refT_146;
  T147 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T148,T149);
  VARSET(YevalSg2cYgen_refT,T147);
  lit_402 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T150 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_147 = YPfab_met(FUNCODEREF(fun_gen_refT_147),T150,LITREF(lit_393),LITREF(lit_402),sloc(731),YPfalse);
  T152 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T153 = fun_gen_refT_147;
  T151 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T152,T153);
  VARSET(YevalSg2cYgen_refT,T151);
  lit_403 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T154 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_148 = YPfab_met(FUNCODEREF(fun_gen_refT_148),T154,LITREF(lit_393),LITREF(lit_403),sloc(734),YPfalse);
  T156 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T157 = fun_gen_refT_148;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSg2cYgen_refT,T155);
  lit_404 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T158 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_149 = YPfab_met(FUNCODEREF(fun_gen_refT_149),T158,LITREF(lit_393),LITREF(lit_404),sloc(737),YPfalse);
  T160 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T161 = fun_gen_refT_149;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSg2cYgen_refT,T159);
  lit_405 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T162 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_150 = YPfab_met(FUNCODEREF(fun_gen_refT_150),T162,LITREF(lit_393),LITREF(lit_405),sloc(740),YPfalse);
  T164 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T165 = fun_gen_refT_150;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSg2cYgen_refT,T163);
  lit_406 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T166 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_refT_151 = YPfab_met(FUNCODEREF(fun_gen_refT_151),T166,LITREF(lit_393),LITREF(lit_406),sloc(743),YPfalse);
  T168 = VARREF_OR(YevalSg2cYgen_refT,YPfalse);
  T169 = fun_gen_refT_151;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSg2cYgen_refT,T167);
  lit_407 = YPPsym((P)"gen-ref");
  lit_408 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T170 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSg2cYgen_ref = YPfab_met(FUNCODEREF(YevalSg2cYgen_ref),T170,LITREF(lit_407),LITREF(lit_408),sloc(746),YPfalse);
  T171 = YevalSg2cYgen_ref;
  VARSET(YevalSg2cYgen_ref,T171);
  lit_409 = YPPsym((P)"to-pc");
  lit_410 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T172 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_pc_153 = YPfab_met(FUNCODEREF(fun_to_pc_153),T172,LITREF(lit_409),LITREF(lit_410),sloc(756),YPfalse);
  T174 = VARREF_OR(YevalSg2cYto_pc,YPfalse);
  T175 = fun_to_pc_153;
  T173 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T174,T175);
  VARSET(YevalSg2cYto_pc,T173);
  lit_411 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_412 = YPsb((P)"RTVSET(");
  lit_413 = YPsb((P)"DYNDEFSET(");
  lit_414 = YPsb((P)"DYNSET(");
  lit_415 = YPsb((P)"VARSET(");
  lit_416 = YPsb((P)",");
  lit_417 = YPsb((P)")");
  T176 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPfab_met(FUNCODEREF(fun_to_c_154),T176,LITREF(lit_389),LITREF(lit_411),sloc(760),YPfalse);
  T178 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T179 = fun_to_c_154;
  T177 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T178,T179);
  VARSET(YevalSg2cYto_c,T177);
  lit_418 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_419 = YPsb((P)"RTV");
  lit_420 = YPsb((P)"VARREF_OR");
  T182 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T181 = fun_to_c_155 = YPfab_met(FUNCODEREF(fun_to_c_155),T182,LITREF(lit_389),LITREF(lit_418),sloc(774),YPfalse);
  T185 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T186 = fun_to_c_155;
  T184 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T185,T186);
  T183 = VARSET(YevalSg2cYto_c,T184);
  T180 = T183;
  return T180;
}

P YevalSg2cY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215;
DEFCREGS();
  lit_421 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_422 = YPsb((P)"BOXGET");
  T0 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPfab_met(FUNCODEREF(fun_to_c_156),T0,LITREF(lit_389),LITREF(lit_421),sloc(785),YPfalse);
  T2 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T3 = fun_to_c_156;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSg2cYto_c,T1);
  lit_423 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_424 = YPsb((P)"BOXPUT");
  lit_425 = YPsb((P)" = ");
  T4 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_157 = YPfab_met(FUNCODEREF(fun_to_c_157),T4,LITREF(lit_389),LITREF(lit_423),sloc(793),YPfalse);
  T6 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T7 = fun_to_c_157;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSg2cYto_c,T5);
  lit_426 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_427 = YPsb((P)" = BOXFAB");
  T8 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPfab_met(FUNCODEREF(fun_to_c_158),T8,LITREF(lit_389),LITREF(lit_426),sloc(806),YPfalse);
  T10 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T11 = fun_to_c_158;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSg2cYto_c,T9);
  lit_428 = YPPsym((P)"bb?");
  lit_429 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_159 = YPfab_met(FUNCODEREF(fun_bbQ_159),T12,LITREF(lit_428),LITREF(lit_429),sloc(814),YPfalse);
  T14 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T15 = fun_bbQ_159;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYbbQ,T13);
  lit_430 = YPPlist(1,YPPsym((P)"x"));
  lit_431 = YPPsym((P)"%bb");
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_160 = YPfab_met(FUNCODEREF(fun_bbQ_160),T16,LITREF(lit_428),LITREF(lit_430),sloc(816),YPfalse);
  T18 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T19 = fun_bbQ_160;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYbbQ,T17);
  lit_432 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_161 = YPfab_met(FUNCODEREF(fun_bbQ_161),T20,LITREF(lit_428),LITREF(lit_432),sloc(820),YPfalse);
  T22 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T23 = fun_bbQ_161;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYbbQ,T21);
  lit_433 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_434 = YPsb((P)"if (");
  lit_435 = YPsb((P)") {\n");
  lit_436 = YPsb((P)" != ");
  lit_437 = YPsb((P)") {\n");
  lit_438 = YPsb((P)"} else {\n");
  lit_439 = YPsb((P)"}\n");
  lit_440 = YPsb((P)"((");
  lit_441 = YPsb((P)" != ");
  lit_442 = YPsb((P)") ? ");
  lit_443 = YPsb((P)" : ");
  lit_444 = YPsb((P)")");
  T24 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_162 = YPfab_met(FUNCODEREF(fun_to_c_162),T24,LITREF(lit_389),LITREF(lit_433),sloc(823),YPfalse);
  T26 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T27 = fun_to_c_162;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYto_c,T25);
  lit_445 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  lit_447 = YPsb((P)"(");
  lit_448 = YPPlist(1,YPPsym((P)"x"));
  lit_449 = YPPlist(1,YPPsym((P)"x"));
  lit_450 = YPsb((P)")");
  T31 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_163 = YPfab_met(FUNCODEREF(fun_163),T31,YPfalse,LITREF(lit_446),sloc(851),YPfalse);
  T30 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_164 = YPfab_met(FUNCODEREF(fun_164),T30,YPfalse,LITREF(lit_448),sloc(853),YPfalse);
  T29 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_165 = YPfab_met(FUNCODEREF(fun_165),T29,YPfalse,LITREF(lit_449),sloc(853),YPfalse);
  T28 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_166 = YPfab_met(FUNCODEREF(fun_to_c_166),T28,LITREF(lit_389),LITREF(lit_445),sloc(849),YPfalse);
  T33 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T34 = fun_to_c_166;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSg2cYto_c,T32);
  DYNDEFSET(YevalSg2cYTloop_arg_counterT,YPint((P)-1));
  lit_451 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_452 = YPsb((P)"LOOP_");
  lit_453 = YPsb((P)": {\n");
  lit_454 = YPsb((P)"P ");
  lit_455 = YPPlist(1,YPPsym((P)"x"));
  lit_456 = YPPlist(1,YPPsym((P)"x"));
  lit_457 = YPsb((P)"a");
  lit_458 = YPsb((P)"_");
  lit_459 = YPsb((P)"}\n");
  T37 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_167 = YPfab_met(FUNCODEREF(fun_167),T37,YPfalse,LITREF(lit_455),sloc(865),YPfalse);
  T36 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_168 = YPfab_met(FUNCODEREF(fun_168),T36,YPfalse,LITREF(lit_456),sloc(865),YPfalse);
  T35 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPfab_met(FUNCODEREF(fun_to_c_169),T35,LITREF(lit_389),LITREF(lit_451),sloc(858),YPfalse);
  T39 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T40 = fun_to_c_169;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSg2cYto_c,T38);
  lit_460 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_461 = YPsb((P)"a");
  lit_462 = YPsb((P)"_");
  lit_463 = YPsb((P)" = ");
  lit_464 = YPsb((P)" = a");
  lit_465 = YPsb((P)"_");
  lit_466 = YPsb((P)"goto LOOP_");
  T41 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLloop_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPfab_met(FUNCODEREF(fun_to_c_170),T41,LITREF(lit_389),LITREF(lit_460),sloc(871),YPfalse);
  T43 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T44 = fun_to_c_170;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSg2cYto_c,T42);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_467 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_468 = YPsb((P)"XX");
  lit_469 = YPsb((P)"X");
  lit_470 = YPsb((P)"CALL");
  lit_471 = YPsb((P)"N");
  lit_472 = YPsb((P)"0,");
  lit_473 = YPsb((P)"1,");
  lit_474 = YPsb((P)",");
  T45 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_171 = YPfab_met(FUNCODEREF(fun_to_c_171),T45,LITREF(lit_389),LITREF(lit_467),sloc(889),YPfalse);
  T47 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T48 = fun_to_c_171;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalSg2cYto_c,T46);
  lit_475 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_476 = YPsb((P)"%next-methods-reg-setter");
  T49 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmethod_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_172 = YPfab_met(FUNCODEREF(fun_to_c_172),T49,LITREF(lit_389),LITREF(lit_475),sloc(906),YPfalse);
  T51 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T52 = fun_to_c_172;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSg2cYto_c,T50);
  lit_477 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_478 = YPPlist(1,YPPsym((P)"x"));
  lit_479 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_173 = YPfab_met(FUNCODEREF(fun_173),T55,YPfalse,LITREF(lit_478),sloc(916),YPfalse);
  T54 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_174 = YPfab_met(FUNCODEREF(fun_174),T54,YPfalse,LITREF(lit_479),sloc(916),YPfalse);
  T53 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_175 = YPfab_met(FUNCODEREF(fun_to_c_175),T53,LITREF(lit_389),LITREF(lit_477),sloc(915),YPfalse);
  T57 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T58 = fun_to_c_175;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSg2cYto_c,T56);
  lit_480 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"oot"));
  lit_481 = YPsb((P)"(P)(PINT)(");
  lit_482 = YPsb((P)";\n{ ");
  lit_483 = YPsb((P)");");
  lit_484 = YPsb((P)"}\n");
  T63 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_176 = YPfab_met(FUNCODEREF(fun_176),T63,YPfalse,LITREF(lit_20),sloc(920),YPfalse);
  T62 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_177 = YPfab_met(FUNCODEREF(fun_177),T62,YPfalse,LITREF(lit_20),sloc(920),YPfalse);
  T61 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_178 = YPfab_met(FUNCODEREF(fun_178),T61,YPfalse,LITREF(lit_20),sloc(929),YPfalse);
  T60 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_179 = YPfab_met(FUNCODEREF(fun_179),T60,YPfalse,LITREF(lit_20),sloc(929),YPfalse);
  T59 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLc_inlineG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_180 = YPfab_met(FUNCODEREF(fun_to_c_180),T59,LITREF(lit_389),LITREF(lit_480),sloc(919),YPfalse);
  T65 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T66 = fun_to_c_180;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSg2cYto_c,T64);
  lit_485 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_486 = YPsb((P)"check_type");
  lit_487 = YPsb((P)" = ");
  T67 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_181 = YPfab_met(FUNCODEREF(fun_to_c_181),T67,LITREF(lit_389),LITREF(lit_485),sloc(940),YPfalse);
  T69 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T70 = fun_to_c_181;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSg2cYto_c,T68);
  lit_488 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_489 = YPsb((P)" = ");
  lit_490 = YPPlist(2,YPPsym((P)"lb"),YPPsym((P)"lf"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_182 = YPfab_met(FUNCODEREF(fun_182),T72,YPfalse,LITREF(lit_490),sloc(965),YPfalse);
  T71 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_183 = YPfab_met(FUNCODEREF(fun_to_c_183),T71,LITREF(lit_389),LITREF(lit_488),sloc(958),YPfalse);
  T74 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T75 = fun_to_c_183;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSg2cYto_c,T73);
  lit_491 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_492 = YPsb((P)"with_exit");
  T76 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_184 = YPfab_met(FUNCODEREF(fun_to_c_184),T76,LITREF(lit_389),LITREF(lit_491),sloc(969),YPfalse);
  T78 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T79 = fun_to_c_184;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSg2cYto_c,T77);
  lit_493 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_494 = YPsb((P)"with_cleanup");
  T80 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_185 = YPfab_met(FUNCODEREF(fun_to_c_185),T80,LITREF(lit_389),LITREF(lit_493),sloc(975),YPfalse);
  T82 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T83 = fun_to_c_185;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSg2cYto_c,T81);
  lit_495 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_496 = YPsb((P)"XCALLN");
  lit_497 = YPsb((P)"1");
  lit_498 = YPsb((P)"%with-monitor");
  lit_499 = YPsb((P)"5");
  T84 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_186 = YPfab_met(FUNCODEREF(fun_to_c_186),T84,LITREF(lit_389),LITREF(lit_495),sloc(984),YPfalse);
  T86 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T87 = fun_to_c_186;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSg2cYto_c,T85);
  lit_500 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_501 = YPsb((P)"(P)");
  lit_502 = YPPlist(1,YPPsym((P)"x"));
  lit_503 = YPPlist(1,YPPsym((P)"x"));
  T90 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_187 = YPfab_met(FUNCODEREF(fun_187),T90,YPfalse,LITREF(lit_502),sloc(1009),YPfalse);
  T89 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_188 = YPfab_met(FUNCODEREF(fun_188),T89,YPfalse,LITREF(lit_503),sloc(1009),YPfalse);
  T88 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_189 = YPfab_met(FUNCODEREF(fun_to_c_189),T88,LITREF(lit_389),LITREF(lit_500),sloc(1002),YPfalse);
  T92 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T93 = fun_to_c_189;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSg2cYto_c,T91);
  lit_504 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_505 = YPPlist(1,YPPsym((P)"x"));
  lit_506 = YPsb((P)"FUNFAB");
  lit_507 = YPsb((P)",");
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPfab_met(FUNCODEREF(fun_190),T95,YPfalse,LITREF(lit_505),sloc(1018),YPfalse);
  T94 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_191 = YPfab_met(FUNCODEREF(fun_to_c_191),T94,LITREF(lit_389),LITREF(lit_504),sloc(1012),YPfalse);
  T97 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T98 = fun_to_c_191;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSg2cYto_c,T96);
  lit_508 = YPPsym((P)"funshell-to-c");
  lit_509 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_510 = YPsb((P)"FUNSHELL");
  T99 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_192 = YPfab_met(FUNCODEREF(fun_funshell_to_c_192),T99,LITREF(lit_508),LITREF(lit_509),sloc(1027),YPfalse);
  T101 = VARREF_OR(YevalSg2cYfunshell_to_c,YPfalse);
  T102 = fun_funshell_to_c_192;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSg2cYfunshell_to_c,T100);
  lit_511 = YPPsym((P)"funinit-to-c");
  lit_512 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_513 = YPPlist(1,YPPsym((P)"x"));
  lit_514 = YPsb((P)"FUNINIT");
  lit_515 = YPsb((P)", ");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPfab_met(FUNCODEREF(fun_193),T104,YPfalse,LITREF(lit_513),sloc(1043),YPfalse);
  T103 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_194 = YPfab_met(FUNCODEREF(fun_funinit_to_c_194),T103,LITREF(lit_511),LITREF(lit_512),sloc(1040),YPfalse);
  T106 = VARREF_OR(YevalSg2cYfuninit_to_c,YPfalse);
  T107 = fun_funinit_to_c_194;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYfuninit_to_c,T105);
  lit_516 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_517 = YPsb((P)"%macro");
  T108 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_195 = YPfab_met(FUNCODEREF(fun_to_c_195),T108,LITREF(lit_389),LITREF(lit_516),sloc(1052),YPfalse);
  T110 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T111 = fun_to_c_195;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YevalSg2cYto_c,T109);
  lit_518 = YPPsym((P)"out-list-builder");
  lit_519 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"out"),YPPsym((P)"elts"));
  lit_520 = YPsb((P)"nil");
  lit_521 = YPsb((P)"%%list");
  T112 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_196 = YPfab_met(FUNCODEREF(fun_out_list_builder_196),T112,LITREF(lit_518),LITREF(lit_519),sloc(1061),YPfalse);
  T114 = VARREF_OR(YevalSg2cYout_list_builder,YPfalse);
  T115 = fun_out_list_builder_196;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSg2cYout_list_builder,T113);
  lit_522 = YPPsym((P)"gen-fab-list");
  lit_523 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"refs"));
  lit_524 = YPPlist(1,YPPsym((P)"x"));
  T117 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPfab_met(FUNCODEREF(fun_197),T117,YPfalse,LITREF(lit_524),sloc(1074),YPfalse);
  T116 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_198 = YPfab_met(FUNCODEREF(fun_gen_fab_list_198),T116,LITREF(lit_522),LITREF(lit_523),sloc(1073),YPfalse);
  T119 = VARREF_OR(YevalSg2cYgen_fab_list,YPfalse);
  T120 = fun_gen_fab_list_198;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSg2cYgen_fab_list,T118);
  lit_525 = YPPsym((P)"generate-function-specs");
  lit_526 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"sig"));
  T121 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_199 = YPfab_met(FUNCODEREF(fun_generate_function_specs_199),T121,LITREF(lit_525),LITREF(lit_526),sloc(1076),YPfalse);
  T123 = VARREF_OR(YevalSg2cYgenerate_function_specs,YPfalse);
  T124 = fun_generate_function_specs_199;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSg2cYgenerate_function_specs,T122);
  lit_527 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_528 = YPPlist(1,YPPsym((P)"x"));
  lit_529 = YPsb((P)"%fab-sig");
  lit_530 = YPsb((P)"nil");
  T126 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_200 = YPfab_met(FUNCODEREF(fun_200),T126,YPfalse,LITREF(lit_528),sloc(1080),YPfalse);
  T125 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_201 = YPfab_met(FUNCODEREF(fun_to_c_201),T125,LITREF(lit_389),LITREF(lit_527),sloc(1079),YPfalse);
  T128 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T129 = fun_to_c_201;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYto_c,T127);
  lit_531 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_532 = YPsb((P)"%fab-gen");
  lit_533 = YPsb((P)"%false");
  T130 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_202 = YPfab_met(FUNCODEREF(fun_to_c_202),T130,LITREF(lit_389),LITREF(lit_531),sloc(1091),YPfalse);
  T132 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T133 = fun_to_c_202;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYto_c,T131);
  lit_534 = YPPsym((P)"generate-function-forwards");
  lit_535 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_536 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  T134 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_203 = YPfab_met(FUNCODEREF(fun_generate_function_forwards_203),T134,LITREF(lit_534),LITREF(lit_535),sloc(1104),YPfalse);
  T136 = VARREF_OR(YevalSg2cYgenerate_function_forwards,YPfalse);
  T137 = fun_generate_function_forwards_203;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSg2cYgenerate_function_forwards,T135);
  lit_537 = YPPsym((P)"generate-function-forward");
  lit_538 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_539 = YPsb((P)"static");
  lit_540 = YPsb((P)"extern");
  lit_541 = YPsb((P)" P ");
  lit_542 = YPsb((P)" (");
  lit_543 = YPPlist(1,YPPsym((P)"x"));
  lit_544 = YPPlist(1,YPPsym((P)"x"));
  lit_545 = YPsb((P)"P");
  lit_546 = YPsb((P)");\n");
  T140 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_204 = YPfab_met(FUNCODEREF(fun_204),T140,YPfalse,LITREF(lit_543),sloc(1113),YPfalse);
  T139 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_205 = YPfab_met(FUNCODEREF(fun_205),T139,YPfalse,LITREF(lit_544),sloc(1113),YPfalse);
  T138 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_206 = YPfab_met(FUNCODEREF(fun_generate_function_forward_206),T138,LITREF(lit_537),LITREF(lit_538),sloc(1109),YPfalse);
  T142 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T143 = fun_generate_function_forward_206;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSg2cYgenerate_function_forward,T141);
  lit_547 = YPPsym((P)"generate-function-binding");
  lit_548 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_549 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_550 = YPsb((P)"fun_");
  lit_551 = YPsb((P)"fun_");
  lit_552 = YPsb((P)"_");
  T144 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_207 = YPfab_met(FUNCODEREF(fun_generate_function_binding_207),T144,LITREF(lit_547),LITREF(lit_548),sloc(1117),YPfalse);
  T146 = VARREF_OR(YevalSg2cYgenerate_function_binding,YPfalse);
  T147 = fun_generate_function_binding_207;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSg2cYgenerate_function_binding,T145);
  lit_553 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_554 = YPsb((P)"FUNFOR(");
  lit_555 = YPsb((P)"LOCFOR(");
  lit_556 = YPsb((P)");\n");
  T148 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_208 = YPfab_met(FUNCODEREF(fun_generate_function_forward_208),T148,LITREF(lit_537),LITREF(lit_553),sloc(1130),YPfalse);
  T150 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T151 = fun_generate_function_forward_208;
  T149 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T150,T151);
  VARSET(YevalSg2cYgenerate_function_forward,T149);
  lit_557 = YPPsym((P)"generate-function-bodies");
  lit_558 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_559 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_560 = YPPlist(1,YPPsym((P)"def"));
  T153 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_209 = YPfab_met(FUNCODEREF(fun_209),T153,YPfalse,LITREF(lit_560),sloc(1138),YPfalse);
  T152 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_210 = YPfab_met(FUNCODEREF(fun_generate_function_bodies_210),T152,LITREF(lit_557),LITREF(lit_558),sloc(1136),YPfalse);
  T155 = VARREF_OR(YevalSg2cYgenerate_function_bodies,YPfalse);
  T156 = fun_generate_function_bodies_210;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YevalSg2cYgenerate_function_bodies,T154);
  lit_561 = YPPsym((P)"generate-functions");
  lit_562 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_563 = YPPlist(1,YPPsym((P)"def"));
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_211 = YPfab_met(FUNCODEREF(fun_211),T158,YPfalse,LITREF(lit_563),sloc(1143),YPfalse);
  T157 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_212 = YPfab_met(FUNCODEREF(fun_generate_functions_212),T157,LITREF(lit_561),LITREF(lit_562),sloc(1142),YPfalse);
  T160 = VARREF_OR(YevalSg2cYgenerate_functions,YPfalse);
  T161 = fun_generate_functions_212;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSg2cYgenerate_functions,T159);
  lit_564 = YPPsym((P)"generate-closure-structure");
  lit_565 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_566 = YPsb((P)" = ");
  lit_567 = YPsb((P)"%fab-met-inlineable");
  lit_568 = YPsb((P)"%fab-met");
  lit_569 = YPsb((P)"sloc(");
  lit_570 = YPsb((P)")");
  lit_571 = YPsb((P)"%false");
  T162 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_213 = YPfab_met(FUNCODEREF(fun_generate_closure_structure_213),T162,LITREF(lit_564),LITREF(lit_565),sloc(1148),YPfalse);
  T164 = VARREF_OR(YevalSg2cYgenerate_closure_structure,YPfalse);
  T165 = fun_generate_closure_structure_213;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSg2cYgenerate_closure_structure,T163);
  lit_572 = YPPsym((P)"generate-function-body-reference");
  lit_573 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_574 = YPsb((P)"FUNCODEREF(");
  lit_575 = YPsb((P)")");
  T166 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_214 = YPfab_met(FUNCODEREF(fun_generate_function_body_reference_214),T166,LITREF(lit_572),LITREF(lit_573),sloc(1166),YPfalse);
  T168 = VARREF_OR(YevalSg2cYgenerate_function_body_reference,YPfalse);
  T169 = fun_generate_function_body_reference_214;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSg2cYgenerate_function_body_reference,T167);
  lit_576 = YPPsym((P)"generate-return");
  lit_577 = YPPlist(4,YPPsym((P)"defn"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_578 = YPsb((P)"return ");
  T170 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_return_215 = YPfab_met(FUNCODEREF(fun_generate_return_215),T170,LITREF(lit_576),LITREF(lit_577),sloc(1175),YPfalse);
  T172 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T173 = fun_generate_return_215;
  T171 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T172,T173);
  VARSET(YevalSg2cYgenerate_return,T171);
  lit_579 = YPPlist(4,YPPsym((P)"defn"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_580 = YPsb((P)"RET");
  T174 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_return_216 = YPfab_met(FUNCODEREF(fun_generate_return_216),T174,LITREF(lit_576),LITREF(lit_579),sloc(1179),YPfalse);
  T176 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T177 = fun_generate_return_216;
  T175 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T176,T177);
  VARSET(YevalSg2cYgenerate_return,T175);
  lit_581 = YPPsym((P)"generate-function-code");
  lit_582 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"e"));
  lit_583 = YPsb((P)"\n");
  lit_584 = YPsb((P)"static ");
  lit_585 = YPsb((P)"INLINE ");
  lit_586 = YPsb((P)"P ");
  lit_587 = YPPlist(1,YPPsym((P)"x"));
  lit_588 = YPPlist(1,YPPsym((P)"x"));
  lit_589 = YPsb((P)"P ");
  lit_590 = YPsb((P)" {\n");
  lit_591 = YPsb((P)"DEFCREGS();\n");
  lit_592 = YPsb((P)"}\n");
  T180 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_217 = YPfab_met(FUNCODEREF(fun_217),T180,YPfalse,LITREF(lit_587),sloc(1192),YPfalse);
  T179 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_218 = YPfab_met(FUNCODEREF(fun_218),T179,YPfalse,LITREF(lit_588),sloc(1192),YPfalse);
  T178 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_219 = YPfab_met(FUNCODEREF(fun_generate_function_code_219),T178,LITREF(lit_581),LITREF(lit_582),sloc(1186),YPfalse);
  T182 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T183 = fun_generate_function_code_219;
  T181 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T182,T183);
  VARSET(YevalSg2cYgenerate_function_code,T181);
  lit_593 = YPPsym((P)"dispatcher?");
  lit_594 = YPPlist(1,YPPsym((P)"definition"));
  lit_595 = YPsb((P)"%dispatch");
  lit_596 = YPsb((P)"-dispatch");
  lit_597 = YPsb((P)"-dispatch");
  T184 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_220 = YPfab_met(FUNCODEREF(fun_dispatcherQ_220),T184,LITREF(lit_593),LITREF(lit_594),sloc(1202),YPfalse);
  T186 = VARREF_OR(YevalSg2cYdispatcherQ,YPfalse);
  T187 = fun_dispatcherQ_220;
  T185 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T186,T187);
  VARSET(YevalSg2cYdispatcherQ,T185);
  lit_598 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_599 = YPsb((P)"\nFUNCODEDEF(");
  lit_600 = YPsb((P)"\nLOCCODEDEF(");
  lit_601 = YPsb((P)") {\n");
  lit_602 = YPsb((P)"P ");
  lit_603 = YPPlist(1,YPPsym((P)"x"));
  lit_604 = YPPlist(1,YPPsym((P)"x"));
  lit_605 = YPsb((P)"LINK_STACK();\n");
  lit_606 = YPPlist(1,YPPsym((P)"b"));
  lit_607 = YPsb((P)"NARGS(");
  lit_608 = YPsb((P)"ARG(");
  lit_609 = YPsb((P)", ");
  lit_610 = YPsb((P)")");
  lit_611 = YPsb((P)"UNLINK_STACK();\n");
  lit_612 = YPsb((P)"}\n");
  T191 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_221 = YPfab_met(FUNCODEREF(fun_221),T191,YPfalse,LITREF(lit_603),sloc(1220),YPfalse);
  T190 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_222 = YPfab_met(FUNCODEREF(fun_222),T190,YPfalse,LITREF(lit_604),sloc(1220),YPfalse);
  T189 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPfab_met(FUNCODEREF(fun_223),T189,YPfalse,LITREF(lit_606),sloc(1226),YPfalse);
  T188 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_224 = YPfab_met(FUNCODEREF(fun_generate_function_code_224),T188,LITREF(lit_581),LITREF(lit_598),sloc(1210),YPfalse);
  T193 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T194 = fun_generate_function_code_224;
  T192 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T193,T194);
  VARSET(YevalSg2cYgenerate_function_code,T192);
  lit_613 = YPPsym((P)"generate-local-temporaries");
  lit_614 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"out"));
  lit_615 = YPsb((P)"P ");
  T195 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_225 = YPfab_met(FUNCODEREF(fun_generate_local_temporaries_225),T195,LITREF(lit_613),LITREF(lit_614),sloc(1246),YPfalse);
  T197 = VARREF_OR(YevalSg2cYgenerate_local_temporaries,YPfalse);
  T198 = fun_generate_local_temporaries_225;
  T196 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T197,T198);
  VARSET(YevalSg2cYgenerate_local_temporaries,T196);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_616 = YPPsym((P)"generate-registers");
  lit_617 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"out"));
  lit_618 = YPsb((P)"P ");
  lit_619 = YPsb((P)";\n");
  T199 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_226 = YPfab_met(FUNCODEREF(fun_generate_registers_226),T199,LITREF(lit_616),LITREF(lit_617),sloc(1255),YPfalse);
  T201 = VARREF_OR(YevalSg2cYgenerate_registers,YPfalse);
  T202 = fun_generate_registers_226;
  T200 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T201,T202);
  VARSET(YevalSg2cYgenerate_registers,T200);
  lit_620 = YPPsym((P)"module-info-name");
  lit_621 = YPPlist(1,YPPsym((P)"name"));
  lit_622 = YPsb((P)"module_info_");
  T203 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_227 = YPfab_met(FUNCODEREF(fun_module_info_name_227),T203,LITREF(lit_620),LITREF(lit_621),sloc(1267),YPfalse);
  T205 = VARREF_OR(YevalSg2cYmodule_info_name,YPfalse);
  T206 = fun_module_info_name_227;
  T204 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T205,T206);
  VARSET(YevalSg2cYmodule_info_name,T204);
  lit_623 = YPPsym((P)"declare-imported-module-infos");
  lit_624 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_625 = YPPsym((P)"maybe-declare");
  lit_626 = YPPlist(1,YPPsym((P)"modname"));
  lit_627 = YPsb((P)"extern MODULE_INFO ");
  lit_628 = YPsb((P)";\n");
  lit_629 = YPPlist(1,YPPsym((P)"binding"));
  T213 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T212 = fun_maybe_declare_228 = YPfab_met(FUNCODEREF(fun_maybe_declare_228),T213,LITREF(lit_625),LITREF(lit_626),sloc(1276),YPfalse);
  T211 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T210 = fun_229 = YPfab_met(FUNCODEREF(fun_229),T211,YPfalse,LITREF(lit_629),sloc(1283),YPfalse);
  T209 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T208 = YevalSg2cYdeclare_imported_module_infos = YPfab_met(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),T209,LITREF(lit_623),LITREF(lit_624),sloc(1273),YPfalse);
  T215 = YevalSg2cYdeclare_imported_module_infos;
  T214 = VARSET(YevalSg2cYdeclare_imported_module_infos,T215);
  T207 = T214;
  return T207;
}

P YevalSg2cY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
DEFCREGS();
  lit_630 = YPPsym((P)"generate-module-info");
  lit_631 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_632 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_633 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_634 = YPsb((P)"  {&");
  lit_635 = YPsb((P)"},\n");
  lit_636 = YPsb((P)"  {NULL}\n};\n");
  lit_637 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_638 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_639 = YPsb((P)"  {");
  lit_640 = YPsb((P)", &");
  lit_641 = YPsb((P)", ");
  lit_642 = YPsb((P)"NULL");
  lit_643 = YPsb((P)"},\n");
  lit_644 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_645 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_646 = YPPlist(1,YPPsym((P)"binding"));
  lit_647 = YPsb((P)"  {");
  lit_648 = YPsb((P)", ");
  lit_649 = YPsb((P)"CVAR, &");
  lit_650 = YPsb((P)"},\n");
  lit_651 = YPsb((P)"DVAR, &");
  lit_652 = YPsb((P)"},\n");
  lit_653 = YPsb((P)"PVAR, NULL},\n");
  lit_654 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_655 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_656 = YPsb((P)"  {");
  lit_657 = YPsb((P)", ");
  lit_658 = YPsb((P)"NULL");
  lit_659 = YPsb((P)"},\n");
  lit_660 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_661 = YPsb((P)"\nextern MODULE_INFO ");
  lit_662 = YPsb((P)";\n");
  lit_663 = YPsb((P)"MODULE_INFO ");
  lit_664 = YPsb((P)" = {\n");
  lit_665 = YPsb((P)"  ");
  lit_666 = YPsb((P)",\n");
  lit_667 = YPsb((P)"  NULL,\n");
  lit_668 = YPsb((P)"  use_infos,\n");
  lit_669 = YPsb((P)"  import_infos,\n");
  lit_670 = YPsb((P)"  binding_infos,\n");
  lit_671 = YPsb((P)"  export_infos,\n");
  lit_672 = YPsb((P)"};\n");
  T2 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_231 = YPfab_met(FUNCODEREF(fun_231),T2,YPfalse,LITREF(lit_638),sloc(1310),YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPfab_met(FUNCODEREF(fun_232),T1,YPfalse,LITREF(lit_646),sloc(1324),YPfalse);
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPfab_met(FUNCODEREF(YevalSg2cYgenerate_module_info),T0,LITREF(lit_630),LITREF(lit_631),sloc(1292),YPfalse);
  T3 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T3);
  lit_673 = YPPsym((P)"module-init-name");
  lit_674 = YPPlist(1,YPPsym((P)"name"));
  lit_675 = YPsb((P)"load_module_");
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_234 = YPfab_met(FUNCODEREF(fun_module_init_name_234),T4,LITREF(lit_673),LITREF(lit_674),sloc(1355),YPfalse);
  T6 = VARREF_OR(YevalSg2cYmodule_init_name,YPfalse);
  T7 = fun_module_init_name_234;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSg2cYmodule_init_name,T5);
  lit_676 = YPPsym((P)"module-init-decl");
  lit_677 = YPPlist(1,YPPsym((P)"name"));
  lit_678 = YPsb((P)"void ");
  lit_679 = YPsb((P)" (void)");
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_235 = YPfab_met(FUNCODEREF(fun_module_init_decl_235),T8,LITREF(lit_676),LITREF(lit_677),sloc(1358),YPfalse);
  T10 = VARREF_OR(YevalSg2cYmodule_init_decl,YPfalse);
  T11 = fun_module_init_decl_235;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSg2cYmodule_init_decl,T9);
  lit_680 = YPPsym((P)"generate-module-init");
  lit_681 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_682 = YPsb((P)"dl");
  lit_683 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_684 = YPsb((P)"extern ");
  lit_685 = YPsb((P)";\n");
  lit_686 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_687 = YPsb((P)"extern ");
  lit_688 = YPsb((P)";\n\n");
  lit_689 = YPsb((P)" {\n");
  lit_690 = YPsb((P)"  static int need_init = 1;\n");
  lit_691 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_692 = YPsb((P)"  need_init = 0;\n");
  lit_693 = YPsb((P)"  ");
  lit_694 = YPsb((P)"();\n");
  lit_695 = YPsb((P)"\n");
  lit_696 = YPsb((P)"\n");
  lit_697 = YPsb((P)"}\n");
  T12 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_236 = YPfab_met(FUNCODEREF(fun_generate_module_init_236),T12,LITREF(lit_680),LITREF(lit_681),sloc(1361),YPfalse);
  T14 = VARREF_OR(YevalSg2cYgenerate_module_init,YPfalse);
  T15 = fun_generate_module_init_236;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYgenerate_module_init,T13);
  lit_698 = YPPsym((P)"generate-main");
  lit_699 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_700 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_701 = YPsb((P)"extern MODULE_INFO ");
  lit_702 = YPsb((P)";\n");
  lit_703 = YPsb((P)"extern ");
  lit_704 = YPsb((P)";\n\n");
  lit_705 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_706 = YPsb((P)";\n\n");
  lit_707 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_708 = YPsb((P)"  ");
  lit_709 = YPsb((P)"%init-world");
  lit_710 = YPsb((P)"(argc, argv);\n");
  lit_711 = YPsb((P)"  ");
  lit_712 = YPsb((P)"();\n");
  lit_713 = YPsb((P)"  return 0;\n");
  lit_714 = YPsb((P)"}\n");
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_237 = YPfab_met(FUNCODEREF(fun_generate_main_237),T16,LITREF(lit_698),LITREF(lit_699),sloc(1387),YPfalse);
  T18 = VARREF_OR(YevalSg2cYgenerate_main,YPfalse);
  T19 = fun_generate_main_237;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYgenerate_main,T17);
  T20 = YPfalse;
  return T20;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalSoptimize;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSconditions;
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
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSsystem},
  {&module_info_gooSioSwrite},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSstr},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {&module_info_evalSoptimize},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@pair", &module_info_gooSboot, NULL},
  {"c-inline-refs", &module_info_evalSast, NULL},
  {"load", &module_info_evalStop, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"unconstrained-type?", &module_info_evalSoptimize, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
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
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
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
  {"application-tail?", &module_info_evalSast, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"load-file", &module_info_evalStop, NULL},
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
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"potentially-joint?", &module_info_evalSoptimize, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"$", &module_info_evalStop, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
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
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"module-c-forms", &module_info_evalSmodule, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
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
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
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
  {"<module>", &module_info_evalSmodule, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
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
  {"function-index", &module_info_evalSast, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
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
  {"$bot", &module_info_gooStypes, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"sorted-applicable-methods-using-types", &module_info_evalSoptimize, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"analyze-calls", &module_info_evalSoptimize, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"c-inline-strs", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
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
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"top", &module_info_evalStop, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"<c-inline>", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
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
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
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
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
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
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"c-inline-expr?", &module_info_evalSast, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"type-equiv?", &module_info_evalSoptimize, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ref-lit", CVAR, &YevalSg2cYref_lit},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"---main-3---", PVAR, NULL},
  {"*lits-at*", CVAR, &YevalSg2cYTlits_atT},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"bb?", CVAR, &YevalSg2cYbbQ},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"with-statement-may-comma", PVAR, NULL},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"with-statement", PVAR, NULL},
  {"may-comma", PVAR, NULL},
  {"maybe-between-parentheses", PVAR, NULL},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"*gen-statements?*", DVAR, &YevalSg2cYTgen_statementsQT},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"---main-0---", PVAR, NULL},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"include-filename", CVAR, &YevalSg2cYinclude_filename},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"%print-cpu-usage", PVAR, NULL},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"---main-2---", PVAR, NULL},
  {"for-commas", PVAR, NULL},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"to-pc", CVAR, &YevalSg2cYto_pc},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"*lits*", CVAR, &YevalSg2cYTlitsT},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"with-expression", PVAR, NULL},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"between-parentheses", PVAR, NULL},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"---main-4---", PVAR, NULL},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"pp", CVAR, &YevalSg2cYpp},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"with-used-expression", PVAR, NULL},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"for-mods", PVAR, NULL},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-c-forms", CVAR, &YevalSg2cYgenerate_c_forms},
  {"*loop-arg-counter*", DVAR, &YevalSg2cYTloop_arg_counterT},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"---main-1---", PVAR, NULL},
  {"gen-ref*", CVAR, &YevalSg2cYgen_refT},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-build-app", NULL},
  {"g2c-ast", NULL},
  {"g2c-clean", NULL},
  {"g2c-goo", NULL},
  {"g2c-exp", NULL},
  {"g2c-def-app", NULL},
  {"g2c-top", NULL},
  {"g2c-test", NULL},
  {"g2c-eval", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSg2c;
MODULE_INFO module_info_evalSg2c = {
  "eval/g2c",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalSoptimize (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSsystem();
  load_module_gooSioSwrite();
  load_module_gooScolsScol();
  load_module_gooScolsSstr();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();
  load_module_evalSoptimize();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();
  (P)YevalSg2cY___main_3___();
  (P)YevalSg2cY___main_4___();

}

/* END OF GENERATED CODE. */
