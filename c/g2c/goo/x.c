/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/x");
  return YPsrc_loc(YPib((P)(PINT)line), _mod);
}

/* MODULE ENVIRONMENT: goo/x */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YOmap,"goo/boot","@map");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Yerror,"goo/boot","error");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ynil,"goo/boot","nil");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YPfalse,"goo/boot","%false");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ynot,"goo/boot","not");
EXT(YLstrG,"goo/boot","<str>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YOlit,"goo/boot","@lit");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yhead,"goo/boot","head");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YPtrue,"goo/boot","%true");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YOdo,"goo/boot","@do");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YLboxG,"goo/boot","<box>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YgooSxYto_c,"goo/x","to-c");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ytail,"goo/boot","tail");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLlogG,"goo/boot","<log>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ynew,"goo/boot","new");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOfold,"goo/boot","@fold");
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
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOpick,"goo/boot","@pick");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YtT,"goo/boot","t*");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLcolG,"goo/boot","<col>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_5);

/* FUNCTIONS: */

LOCFOR(fun_to_c_0);
LOCFOR(fun_to_c_1);
LOCFOR(fun_to_c_2);
LOCFOR(fun_to_c_3);
LOCFOR(fun_to_c_4);
LOCFOR(fun_to_c_5);
extern P YgooSxY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_to_c_0) {
  P x_;
  P xF5379;
  P xF5378;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF5378 = x_;
  xF5379 = xF5378;
  T0 = (P)YPiGG(xF5379,(P)2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_1) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPfu(x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_2) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPsu(x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_3) {
  P x_;
  P xF5381;
  P xF5380;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF5380 = x_;
  xF5381 = xF5380;
  T0 = (P)YPiGG(xF5381,(P)2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_4) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPbu(x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_5) {
  P x_;
  P xF5382;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF5382 = x_;
  T0 = (P)YPuntag_into(xF5382);
UNLINK_STACK();
  QRET(T0);
}

P YgooSxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
DEFCREGS();
  lit_0 = YPPsym((P)"to-c");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooSxYto_c,T0);
  lit_2 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_to_c_0 = YPfab_met(FUNCODEREF(fun_to_c_0),T2,LITREF(lit_0),LITREF(lit_2),sloc(5),YPfalse);
  T4 = VARREF_OR(YgooSxYto_c,YPfalse);
  T5 = fun_to_c_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSxYto_c,T3);
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_to_c_1 = YPfab_met(FUNCODEREF(fun_to_c_1),T6,LITREF(lit_0),LITREF(lit_3),sloc(6),YPfalse);
  T8 = VARREF_OR(YgooSxYto_c,YPfalse);
  T9 = fun_to_c_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSxYto_c,T7);
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_to_c_2 = YPfab_met(FUNCODEREF(fun_to_c_2),T10,LITREF(lit_0),LITREF(lit_4),sloc(7),YPfalse);
  T12 = VARREF_OR(YgooSxYto_c,YPfalse);
  T13 = fun_to_c_2;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSxYto_c,T11);
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_to_c_3 = YPfab_met(FUNCODEREF(fun_to_c_3),T14,LITREF(lit_0),LITREF(lit_5),sloc(8),YPfalse);
  T16 = VARREF_OR(YgooSxYto_c,YPfalse);
  T17 = fun_to_c_3;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSxYto_c,T15);
  lit_6 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLlogG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_to_c_4 = YPfab_met(FUNCODEREF(fun_to_c_4),T18,LITREF(lit_0),LITREF(lit_6),sloc(9),YPfalse);
  T20 = VARREF_OR(YgooSxYto_c,YPfalse);
  T21 = fun_to_c_4;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooSxYto_c,T19);
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_to_c_5 = YPfab_met(FUNCODEREF(fun_to_c_5),T22,LITREF(lit_0),LITREF(lit_7),sloc(10),YPfalse);
  T24 = VARREF_OR(YgooSxYto_c,YPfalse);
  T25 = fun_to_c_5;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSxYto_c,T23);
  T26 = YPfalse;
  return T26;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
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
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
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
  {"%next-methods", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
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
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
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
  {"%define-method", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
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
  {"ct", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
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
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
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
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
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
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
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
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
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
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
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
  {"%met-code", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
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
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"to-c", CVAR, &YgooSxYto_c},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%lb", NULL},
  {"c-ment", NULL},
  {"c-expr", NULL},
  {"%fb", NULL},
  {"to-c", NULL},
  {"%bb", NULL},
  {"%cb", NULL},
  {"%ib", NULL},
  {"%sb", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSx;
MODULE_INFO module_info_gooSx = {
  "goo/x",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);

/* EXPRESSION: */

extern void load_module_gooSx (void);

void load_module_gooSx (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();

  (P)YgooSxY___main_0___();

}

/* END OF GENERATED CODE. */
