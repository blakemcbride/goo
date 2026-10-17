/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
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
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YLmetG,"goo/boot","<met>");
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
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynot,"goo/boot","not");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"goo/boot","head");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooStypesYtA,"goo/types","t+");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSmoduleYmodule_c_forms,"eval/module","module-c-forms");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
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
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
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
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSbignumYmpzUprint,"goo/bignum","mpz_print");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalStopYtop,"eval/top","top");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYLc_inlineG,"eval/ast","<c-inline>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYc_inline_refs,"eval/ast","c-inline-refs");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYc_inline_exprQ,"eval/ast","c-inline-expr?");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_2);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_5);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P fileF5384;
  P fileF5383;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  lit_0 = YPsb((P)"0.155");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"NOV 17, 2003");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT CSAIL\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T2 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF5383 = T2;
  if (fileF5383 != YPfalse) {
    T1 = XCALL2(1,VARREF(YevalStopYload_file),fileF5383,LITREF(lit_10));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  lit_11 = YPsb((P)"init");
  T5 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF5384 = T5;
  if (fileF5384 != YPfalse) {
    T4 = XCALL2(1,VARREF(YevalStopYload_file),fileF5384,LITREF(lit_10));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T7 = XCALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
  T6 = T7;
  return T6;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSg2c;
extern MODULE_INFO module_info_gooSbignum;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_gooSrandom;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_evalSmodule;
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
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSg2c},
  {&module_info_gooSbignum},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {&module_info_gooSrandom},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"random-unit", &module_info_gooSrandom, NULL},
  {"load", &module_info_evalStop, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"random-unit-using", &module_info_gooSrandom, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"g2c-def-app", &module_info_evalSg2c, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"g2c-build-app", &module_info_evalSg2c, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
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
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"random", &module_info_gooSrandom, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"g2c-clean", &module_info_evalSg2c, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"fab-random", &module_info_gooSrandom, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"random-using", &module_info_gooSrandom, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
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
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"module-c-forms", &module_info_evalSmodule, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
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
  {"port-line", &module_info_gooSioSport, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"g2c-exp", &module_info_evalSg2c, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
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
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"$", &module_info_evalStop, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"g2c-test", &module_info_evalSg2c, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"g2c-goo", &module_info_evalSg2c, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
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
  {"var-type", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"c-inline-strs", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"mpz_print", &module_info_gooSbignum, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"g2c-ast", &module_info_evalSg2c, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"top", &module_info_evalStop, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"<c-inline>", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
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
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"g2c-top", &module_info_evalSg2c, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"c-inline-refs", &module_info_evalSast, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"c-inline-expr?", &module_info_evalSast, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSmain;
MODULE_INFO module_info_evalSmain = {
  "eval/main",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSeval (void);
extern void load_module_gooSsystem (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSg2c (void);
extern void load_module_gooSbignum (void);
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);
extern void load_module_timeSevent (void);
extern void load_module_gooSrandom (void);
extern void load_module_gooSuser (void);

/* EXPRESSION: */

extern void load_module_evalSmain (void);

void load_module_evalSmain (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSeval();
  load_module_gooSsystem();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSg2c();
  load_module_gooSbignum();
  load_module_timeSthreads();
  load_module_timeSlock();
  load_module_timeSevent();
  load_module_gooSrandom();
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
