// Lean compiler output
// Module: DersAdam
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "DersAdam.Adim.tetik"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__0_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__0_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__1 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__1_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "DersAdam.Adim.kavram"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__2 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__2_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__2_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__3 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__3_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "DersAdam.Adim.saldiri_plani"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__4 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__4_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__4_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__5 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__5_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "DersAdam.Adim.islenmis_ornek"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__6 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__6_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__6_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__7 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__7_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "DersAdam.Adim.soluk_tamamla"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__8 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__8_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__8_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__9 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__9_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "DersAdam.Adim.tatbikat"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__10 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__10_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__10_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__11 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__11_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "DersAdam.Adim.tuzak"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__12 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__12_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__12_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__13 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__13_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "DersAdam.Adim.kanca"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__14 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__14_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__14_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__15 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__15_value;
static const lean_string_object lp_leanpy_DersAdam_instReprAdim_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "DersAdam.Adim.izle"};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__16 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__16_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprAdim_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__16_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__17 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim_repr___closed__17_value;
static lean_once_cell_t lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__18;
static lean_once_cell_t lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprAdim_repr___closed__19;
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprAdim_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprAdim_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_leanpy_DersAdam_instReprAdim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_leanpy_DersAdam_instReprAdim_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_leanpy_DersAdam_instReprAdim___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim___closed__0_value;
LEAN_EXPORT const lean_object* lp_leanpy_DersAdam_instReprAdim = (const lean_object*)&lp_leanpy_DersAdam_instReprAdim___closed__0_value;
LEAN_EXPORT uint8_t lp_leanpy_DersAdam_Adim_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leanpy_DersAdam_instDecidableEqAdim(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instDecidableEqAdim___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_sira(uint8_t);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_sira___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_TOPLAM__ADIM;
static const lean_string_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__0_value;
static const lean_string_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "iskelet"};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__1 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__1_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__1_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__2 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__2_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__2_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__3 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__3_value;
static const lean_string_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__4 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__4_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__4_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__3_value),((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__6 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__6_value;
static lean_once_cell_t lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7;
static const lean_string_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__8 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__8_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__8_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__9 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__9_value;
static const lean_string_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cozum_gizli"};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__10 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__10_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__10_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__11 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__11_value;
static lean_once_cell_t lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__12;
static const lean_string_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__13 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__13_value;
static lean_once_cell_t lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__14;
static lean_once_cell_t lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__0_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__16 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__16_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__13_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__17 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprSoluk_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_leanpy_DersAdam_instReprSoluk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_leanpy_DersAdam_instReprSoluk_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_leanpy_DersAdam_instReprSoluk___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk___closed__0_value;
LEAN_EXPORT const lean_object* lp_leanpy_DersAdam_instReprSoluk = (const lean_object*)&lp_leanpy_DersAdam_instReprSoluk___closed__0_value;
LEAN_EXPORT lean_object* lp_leanpy_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "adimlar"};
static const lean_object* lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__0_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__0_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__1 = (const lean_object*)&lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__1_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__1_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__2 = (const lean_object*)&lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__2_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__2_value),((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__3 = (const lean_object*)&lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprBlok_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprBlok_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprBlok_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_leanpy_DersAdam_instReprBlok___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_leanpy_DersAdam_instReprBlok_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_leanpy_DersAdam_instReprBlok___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprBlok___closed__0_value;
LEAN_EXPORT const lean_object* lp_leanpy_DersAdam_instReprBlok = (const lean_object*)&lp_leanpy_DersAdam_instReprBlok___closed__0_value;
static const lean_string_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ad"};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__0_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__0_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__1 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__1_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__1_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__2 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__2_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__2_value),((lean_object*)&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__3 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__3_value;
static lean_once_cell_t lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__4;
static const lean_string_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dosya_sayisi"};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__5 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__5_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__5_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__6 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__6_value;
static lean_once_cell_t lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__7;
static const lean_string_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "yontem_var"};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__8 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__8_value;
static const lean_ctor_object lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__8_value)}};
static const lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__9 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__9_value;
static lean_once_cell_t lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__10;
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprDers_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprDers_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_leanpy_DersAdam_instReprDers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_leanpy_DersAdam_instReprDers_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_leanpy_DersAdam_instReprDers___closed__0 = (const lean_object*)&lp_leanpy_DersAdam_instReprDers___closed__0_value;
LEAN_EXPORT const lean_object* lp_leanpy_DersAdam_instReprDers = (const lean_object*)&lp_leanpy_DersAdam_instReprDers___closed__0_value;
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_YONTEM__ESIGI;
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
default: 
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorIdx___boxed(lean_object* v_x_11_){
_start:
{
uint8_t v_x_boxed_12_; lean_object* v_res_13_; 
v_x_boxed_12_ = lean_unbox(v_x_11_);
v_res_13_ = lp_leanpy_DersAdam_Adim_ctorIdx(v_x_boxed_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_toCtorIdx(uint8_t v_x_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lp_leanpy_DersAdam_Adim_ctorIdx(v_x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_toCtorIdx___boxed(lean_object* v_x_16_){
_start:
{
uint8_t v_x_4__boxed_17_; lean_object* v_res_18_; 
v_x_4__boxed_17_ = lean_unbox(v_x_16_);
v_res_18_ = lp_leanpy_DersAdam_Adim_toCtorIdx(v_x_4__boxed_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim___redArg(lean_object* v_k_19_){
_start:
{
lean_inc(v_k_19_);
return v_k_19_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim___redArg___boxed(lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lp_leanpy_DersAdam_Adim_ctorElim___redArg(v_k_20_);
lean_dec(v_k_20_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim(lean_object* v_motive_22_, lean_object* v_ctorIdx_23_, uint8_t v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_inc(v_k_26_);
return v_k_26_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ctorElim___boxed(lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
uint8_t v_t_boxed_32_; lean_object* v_res_33_; 
v_t_boxed_32_ = lean_unbox(v_t_29_);
v_res_33_ = lp_leanpy_DersAdam_Adim_ctorElim(v_motive_27_, v_ctorIdx_28_, v_t_boxed_32_, v_h_30_, v_k_31_);
lean_dec(v_k_31_);
lean_dec(v_ctorIdx_28_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim___redArg(lean_object* v_tetik_34_){
_start:
{
lean_inc(v_tetik_34_);
return v_tetik_34_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim___redArg___boxed(lean_object* v_tetik_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = lp_leanpy_DersAdam_Adim_tetik_elim___redArg(v_tetik_35_);
lean_dec(v_tetik_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim(lean_object* v_motive_37_, uint8_t v_t_38_, lean_object* v_h_39_, lean_object* v_tetik_40_){
_start:
{
lean_inc(v_tetik_40_);
return v_tetik_40_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tetik_elim___boxed(lean_object* v_motive_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_tetik_44_){
_start:
{
uint8_t v_t_boxed_45_; lean_object* v_res_46_; 
v_t_boxed_45_ = lean_unbox(v_t_42_);
v_res_46_ = lp_leanpy_DersAdam_Adim_tetik_elim(v_motive_41_, v_t_boxed_45_, v_h_43_, v_tetik_44_);
lean_dec(v_tetik_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim___redArg(lean_object* v_kavram_47_){
_start:
{
lean_inc(v_kavram_47_);
return v_kavram_47_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim___redArg___boxed(lean_object* v_kavram_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = lp_leanpy_DersAdam_Adim_kavram_elim___redArg(v_kavram_48_);
lean_dec(v_kavram_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim(lean_object* v_motive_50_, uint8_t v_t_51_, lean_object* v_h_52_, lean_object* v_kavram_53_){
_start:
{
lean_inc(v_kavram_53_);
return v_kavram_53_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kavram_elim___boxed(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_kavram_57_){
_start:
{
uint8_t v_t_boxed_58_; lean_object* v_res_59_; 
v_t_boxed_58_ = lean_unbox(v_t_55_);
v_res_59_ = lp_leanpy_DersAdam_Adim_kavram_elim(v_motive_54_, v_t_boxed_58_, v_h_56_, v_kavram_57_);
lean_dec(v_kavram_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim___redArg(lean_object* v_saldiri__plani_60_){
_start:
{
lean_inc(v_saldiri__plani_60_);
return v_saldiri__plani_60_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim___redArg___boxed(lean_object* v_saldiri__plani_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_leanpy_DersAdam_Adim_saldiri__plani_elim___redArg(v_saldiri__plani_61_);
lean_dec(v_saldiri__plani_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim(lean_object* v_motive_63_, uint8_t v_t_64_, lean_object* v_h_65_, lean_object* v_saldiri__plani_66_){
_start:
{
lean_inc(v_saldiri__plani_66_);
return v_saldiri__plani_66_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_saldiri__plani_elim___boxed(lean_object* v_motive_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_saldiri__plani_70_){
_start:
{
uint8_t v_t_boxed_71_; lean_object* v_res_72_; 
v_t_boxed_71_ = lean_unbox(v_t_68_);
v_res_72_ = lp_leanpy_DersAdam_Adim_saldiri__plani_elim(v_motive_67_, v_t_boxed_71_, v_h_69_, v_saldiri__plani_70_);
lean_dec(v_saldiri__plani_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim___redArg(lean_object* v_islenmis__ornek_73_){
_start:
{
lean_inc(v_islenmis__ornek_73_);
return v_islenmis__ornek_73_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim___redArg___boxed(lean_object* v_islenmis__ornek_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lp_leanpy_DersAdam_Adim_islenmis__ornek_elim___redArg(v_islenmis__ornek_74_);
lean_dec(v_islenmis__ornek_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim(lean_object* v_motive_76_, uint8_t v_t_77_, lean_object* v_h_78_, lean_object* v_islenmis__ornek_79_){
_start:
{
lean_inc(v_islenmis__ornek_79_);
return v_islenmis__ornek_79_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_islenmis__ornek_elim___boxed(lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_islenmis__ornek_83_){
_start:
{
uint8_t v_t_boxed_84_; lean_object* v_res_85_; 
v_t_boxed_84_ = lean_unbox(v_t_81_);
v_res_85_ = lp_leanpy_DersAdam_Adim_islenmis__ornek_elim(v_motive_80_, v_t_boxed_84_, v_h_82_, v_islenmis__ornek_83_);
lean_dec(v_islenmis__ornek_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim___redArg(lean_object* v_soluk__tamamla_86_){
_start:
{
lean_inc(v_soluk__tamamla_86_);
return v_soluk__tamamla_86_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim___redArg___boxed(lean_object* v_soluk__tamamla_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_leanpy_DersAdam_Adim_soluk__tamamla_elim___redArg(v_soluk__tamamla_87_);
lean_dec(v_soluk__tamamla_87_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim(lean_object* v_motive_89_, uint8_t v_t_90_, lean_object* v_h_91_, lean_object* v_soluk__tamamla_92_){
_start:
{
lean_inc(v_soluk__tamamla_92_);
return v_soluk__tamamla_92_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_soluk__tamamla_elim___boxed(lean_object* v_motive_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_soluk__tamamla_96_){
_start:
{
uint8_t v_t_boxed_97_; lean_object* v_res_98_; 
v_t_boxed_97_ = lean_unbox(v_t_94_);
v_res_98_ = lp_leanpy_DersAdam_Adim_soluk__tamamla_elim(v_motive_93_, v_t_boxed_97_, v_h_95_, v_soluk__tamamla_96_);
lean_dec(v_soluk__tamamla_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim___redArg(lean_object* v_tatbikat_99_){
_start:
{
lean_inc(v_tatbikat_99_);
return v_tatbikat_99_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim___redArg___boxed(lean_object* v_tatbikat_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = lp_leanpy_DersAdam_Adim_tatbikat_elim___redArg(v_tatbikat_100_);
lean_dec(v_tatbikat_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim(lean_object* v_motive_102_, uint8_t v_t_103_, lean_object* v_h_104_, lean_object* v_tatbikat_105_){
_start:
{
lean_inc(v_tatbikat_105_);
return v_tatbikat_105_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tatbikat_elim___boxed(lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_tatbikat_109_){
_start:
{
uint8_t v_t_boxed_110_; lean_object* v_res_111_; 
v_t_boxed_110_ = lean_unbox(v_t_107_);
v_res_111_ = lp_leanpy_DersAdam_Adim_tatbikat_elim(v_motive_106_, v_t_boxed_110_, v_h_108_, v_tatbikat_109_);
lean_dec(v_tatbikat_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim___redArg(lean_object* v_tuzak_112_){
_start:
{
lean_inc(v_tuzak_112_);
return v_tuzak_112_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim___redArg___boxed(lean_object* v_tuzak_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_leanpy_DersAdam_Adim_tuzak_elim___redArg(v_tuzak_113_);
lean_dec(v_tuzak_113_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim(lean_object* v_motive_115_, uint8_t v_t_116_, lean_object* v_h_117_, lean_object* v_tuzak_118_){
_start:
{
lean_inc(v_tuzak_118_);
return v_tuzak_118_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_tuzak_elim___boxed(lean_object* v_motive_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_tuzak_122_){
_start:
{
uint8_t v_t_boxed_123_; lean_object* v_res_124_; 
v_t_boxed_123_ = lean_unbox(v_t_120_);
v_res_124_ = lp_leanpy_DersAdam_Adim_tuzak_elim(v_motive_119_, v_t_boxed_123_, v_h_121_, v_tuzak_122_);
lean_dec(v_tuzak_122_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim___redArg(lean_object* v_kanca_125_){
_start:
{
lean_inc(v_kanca_125_);
return v_kanca_125_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim___redArg___boxed(lean_object* v_kanca_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = lp_leanpy_DersAdam_Adim_kanca_elim___redArg(v_kanca_126_);
lean_dec(v_kanca_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim(lean_object* v_motive_128_, uint8_t v_t_129_, lean_object* v_h_130_, lean_object* v_kanca_131_){
_start:
{
lean_inc(v_kanca_131_);
return v_kanca_131_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_kanca_elim___boxed(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_kanca_135_){
_start:
{
uint8_t v_t_boxed_136_; lean_object* v_res_137_; 
v_t_boxed_136_ = lean_unbox(v_t_133_);
v_res_137_ = lp_leanpy_DersAdam_Adim_kanca_elim(v_motive_132_, v_t_boxed_136_, v_h_134_, v_kanca_135_);
lean_dec(v_kanca_135_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim___redArg(lean_object* v_izle_138_){
_start:
{
lean_inc(v_izle_138_);
return v_izle_138_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim___redArg___boxed(lean_object* v_izle_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = lp_leanpy_DersAdam_Adim_izle_elim___redArg(v_izle_139_);
lean_dec(v_izle_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim(lean_object* v_motive_141_, uint8_t v_t_142_, lean_object* v_h_143_, lean_object* v_izle_144_){
_start:
{
lean_inc(v_izle_144_);
return v_izle_144_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_izle_elim___boxed(lean_object* v_motive_145_, lean_object* v_t_146_, lean_object* v_h_147_, lean_object* v_izle_148_){
_start:
{
uint8_t v_t_boxed_149_; lean_object* v_res_150_; 
v_t_boxed_149_ = lean_unbox(v_t_146_);
v_res_150_ = lp_leanpy_DersAdam_Adim_izle_elim(v_motive_145_, v_t_boxed_149_, v_h_147_, v_izle_148_);
lean_dec(v_izle_148_);
return v_res_150_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(2u);
v___x_179_ = lean_nat_to_int(v___x_178_);
return v___x_179_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_to_int(v___x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprAdim_repr(uint8_t v_x_182_, lean_object* v_prec_183_){
_start:
{
lean_object* v___y_185_; lean_object* v___y_192_; lean_object* v___y_199_; lean_object* v___y_206_; lean_object* v___y_213_; lean_object* v___y_220_; lean_object* v___y_227_; lean_object* v___y_234_; lean_object* v___y_241_; 
switch(v_x_182_)
{
case 0:
{
lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_247_ = lean_unsigned_to_nat(1024u);
v___x_248_ = lean_nat_dec_le(v___x_247_, v_prec_183_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
v___x_249_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_185_ = v___x_249_;
goto v___jp_184_;
}
else
{
lean_object* v___x_250_; 
v___x_250_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_185_ = v___x_250_;
goto v___jp_184_;
}
}
case 1:
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_unsigned_to_nat(1024u);
v___x_252_ = lean_nat_dec_le(v___x_251_, v_prec_183_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
v___x_253_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_192_ = v___x_253_;
goto v___jp_191_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_192_ = v___x_254_;
goto v___jp_191_;
}
}
case 2:
{
lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_255_ = lean_unsigned_to_nat(1024u);
v___x_256_ = lean_nat_dec_le(v___x_255_, v_prec_183_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; 
v___x_257_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_199_ = v___x_257_;
goto v___jp_198_;
}
else
{
lean_object* v___x_258_; 
v___x_258_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_199_ = v___x_258_;
goto v___jp_198_;
}
}
case 3:
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(1024u);
v___x_260_ = lean_nat_dec_le(v___x_259_, v_prec_183_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_206_ = v___x_261_;
goto v___jp_205_;
}
else
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_206_ = v___x_262_;
goto v___jp_205_;
}
}
case 4:
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(1024u);
v___x_264_ = lean_nat_dec_le(v___x_263_, v_prec_183_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_213_ = v___x_265_;
goto v___jp_212_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_213_ = v___x_266_;
goto v___jp_212_;
}
}
case 5:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1024u);
v___x_268_ = lean_nat_dec_le(v___x_267_, v_prec_183_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_220_ = v___x_269_;
goto v___jp_219_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_220_ = v___x_270_;
goto v___jp_219_;
}
}
case 6:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(1024u);
v___x_272_ = lean_nat_dec_le(v___x_271_, v_prec_183_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_227_ = v___x_273_;
goto v___jp_226_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_227_ = v___x_274_;
goto v___jp_226_;
}
}
case 7:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(1024u);
v___x_276_ = lean_nat_dec_le(v___x_275_, v_prec_183_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_234_ = v___x_277_;
goto v___jp_233_;
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_234_ = v___x_278_;
goto v___jp_233_;
}
}
default: 
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(1024u);
v___x_280_ = lean_nat_dec_le(v___x_279_, v_prec_183_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__18, &lp_leanpy_DersAdam_instReprAdim_repr___closed__18_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__18);
v___y_241_ = v___x_281_;
goto v___jp_240_;
}
else
{
lean_object* v___x_282_; 
v___x_282_ = lean_obj_once(&lp_leanpy_DersAdam_instReprAdim_repr___closed__19, &lp_leanpy_DersAdam_instReprAdim_repr___closed__19_once, _init_lp_leanpy_DersAdam_instReprAdim_repr___closed__19);
v___y_241_ = v___x_282_;
goto v___jp_240_;
}
}
}
v___jp_184_:
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_186_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__1));
lean_inc(v___y_185_);
v___x_187_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_187_, 0, v___y_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = 0;
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_188_);
v___x_190_ = l_Repr_addAppParen(v___x_189_, v_prec_183_);
return v___x_190_;
}
v___jp_191_:
{
lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_193_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__3));
lean_inc(v___y_192_);
v___x_194_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_194_, 0, v___y_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = 0;
v___x_196_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*1, v___x_195_);
v___x_197_ = l_Repr_addAppParen(v___x_196_, v_prec_183_);
return v___x_197_;
}
v___jp_198_:
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_200_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__5));
lean_inc(v___y_199_);
v___x_201_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_201_, 0, v___y_199_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = 0;
v___x_203_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_203_, 0, v___x_201_);
lean_ctor_set_uint8(v___x_203_, sizeof(void*)*1, v___x_202_);
v___x_204_ = l_Repr_addAppParen(v___x_203_, v_prec_183_);
return v___x_204_;
}
v___jp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_207_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__7));
lean_inc(v___y_206_);
v___x_208_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_208_, 0, v___y_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = 0;
v___x_210_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set_uint8(v___x_210_, sizeof(void*)*1, v___x_209_);
v___x_211_ = l_Repr_addAppParen(v___x_210_, v_prec_183_);
return v___x_211_;
}
v___jp_212_:
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_214_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__9));
lean_inc(v___y_213_);
v___x_215_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_215_, 0, v___y_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = 0;
v___x_217_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set_uint8(v___x_217_, sizeof(void*)*1, v___x_216_);
v___x_218_ = l_Repr_addAppParen(v___x_217_, v_prec_183_);
return v___x_218_;
}
v___jp_219_:
{
lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_221_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__11));
lean_inc(v___y_220_);
v___x_222_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_222_, 0, v___y_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = 0;
v___x_224_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*1, v___x_223_);
v___x_225_ = l_Repr_addAppParen(v___x_224_, v_prec_183_);
return v___x_225_;
}
v___jp_226_:
{
lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_228_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__13));
lean_inc(v___y_227_);
v___x_229_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_229_, 0, v___y_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = 0;
v___x_231_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set_uint8(v___x_231_, sizeof(void*)*1, v___x_230_);
v___x_232_ = l_Repr_addAppParen(v___x_231_, v_prec_183_);
return v___x_232_;
}
v___jp_233_:
{
lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_235_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__15));
lean_inc(v___y_234_);
v___x_236_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_236_, 0, v___y_234_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = 0;
v___x_238_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*1, v___x_237_);
v___x_239_ = l_Repr_addAppParen(v___x_238_, v_prec_183_);
return v___x_239_;
}
v___jp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_242_ = ((lean_object*)(lp_leanpy_DersAdam_instReprAdim_repr___closed__17));
lean_inc(v___y_241_);
v___x_243_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_243_, 0, v___y_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = 0;
v___x_245_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set_uint8(v___x_245_, sizeof(void*)*1, v___x_244_);
v___x_246_ = l_Repr_addAppParen(v___x_245_, v_prec_183_);
return v___x_246_;
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprAdim_repr___boxed(lean_object* v_x_283_, lean_object* v_prec_284_){
_start:
{
uint8_t v_x_513__boxed_285_; lean_object* v_res_286_; 
v_x_513__boxed_285_ = lean_unbox(v_x_283_);
v_res_286_ = lp_leanpy_DersAdam_instReprAdim_repr(v_x_513__boxed_285_, v_prec_284_);
lean_dec(v_prec_284_);
return v_res_286_;
}
}
LEAN_EXPORT uint8_t lp_leanpy_DersAdam_Adim_ofNat(lean_object* v_n_289_){
_start:
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(3u);
v___x_291_ = lean_nat_dec_le(v_n_289_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = lean_unsigned_to_nat(5u);
v___x_293_ = lean_nat_dec_le(v_n_289_, v___x_292_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_294_ = lean_unsigned_to_nat(6u);
v___x_295_ = lean_nat_dec_le(v_n_289_, v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_unsigned_to_nat(7u);
v___x_297_ = lean_nat_dec_le(v_n_289_, v___x_296_);
if (v___x_297_ == 0)
{
uint8_t v___x_298_; 
v___x_298_ = 8;
return v___x_298_;
}
else
{
uint8_t v___x_299_; 
v___x_299_ = 7;
return v___x_299_;
}
}
else
{
uint8_t v___x_300_; 
v___x_300_ = 6;
return v___x_300_;
}
}
else
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = lean_unsigned_to_nat(4u);
v___x_302_ = lean_nat_dec_le(v_n_289_, v___x_301_);
if (v___x_302_ == 0)
{
uint8_t v___x_303_; 
v___x_303_ = 5;
return v___x_303_;
}
else
{
uint8_t v___x_304_; 
v___x_304_ = 4;
return v___x_304_;
}
}
}
else
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = lean_unsigned_to_nat(1u);
v___x_306_ = lean_nat_dec_le(v_n_289_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(2u);
v___x_308_ = lean_nat_dec_le(v_n_289_, v___x_307_);
if (v___x_308_ == 0)
{
uint8_t v___x_309_; 
v___x_309_ = 3;
return v___x_309_;
}
else
{
uint8_t v___x_310_; 
v___x_310_ = 2;
return v___x_310_;
}
}
else
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = lean_nat_dec_le(v_n_289_, v___x_311_);
if (v___x_312_ == 0)
{
uint8_t v___x_313_; 
v___x_313_ = 1;
return v___x_313_;
}
else
{
uint8_t v___x_314_; 
v___x_314_ = 0;
return v___x_314_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_Adim_ofNat___boxed(lean_object* v_n_315_){
_start:
{
uint8_t v_res_316_; lean_object* v_r_317_; 
v_res_316_ = lp_leanpy_DersAdam_Adim_ofNat(v_n_315_);
lean_dec(v_n_315_);
v_r_317_ = lean_box(v_res_316_);
return v_r_317_;
}
}
LEAN_EXPORT uint8_t lp_leanpy_DersAdam_instDecidableEqAdim(uint8_t v_x_318_, uint8_t v_y_319_){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_320_ = lp_leanpy_DersAdam_Adim_ctorIdx(v_x_318_);
v___x_321_ = lp_leanpy_DersAdam_Adim_ctorIdx(v_y_319_);
v___x_322_ = lean_nat_dec_eq(v___x_320_, v___x_321_);
lean_dec(v___x_321_);
lean_dec(v___x_320_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instDecidableEqAdim___boxed(lean_object* v_x_323_, lean_object* v_y_324_){
_start:
{
uint8_t v_x_13__boxed_325_; uint8_t v_y_14__boxed_326_; uint8_t v_res_327_; lean_object* v_r_328_; 
v_x_13__boxed_325_ = lean_unbox(v_x_323_);
v_y_14__boxed_326_ = lean_unbox(v_y_324_);
v_res_327_ = lp_leanpy_DersAdam_instDecidableEqAdim(v_x_13__boxed_325_, v_y_14__boxed_326_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_sira(uint8_t v_x_329_){
_start:
{
switch(v_x_329_)
{
case 0:
{
lean_object* v___x_330_; 
v___x_330_ = lean_unsigned_to_nat(1u);
return v___x_330_;
}
case 1:
{
lean_object* v___x_331_; 
v___x_331_ = lean_unsigned_to_nat(2u);
return v___x_331_;
}
case 2:
{
lean_object* v___x_332_; 
v___x_332_ = lean_unsigned_to_nat(3u);
return v___x_332_;
}
case 3:
{
lean_object* v___x_333_; 
v___x_333_ = lean_unsigned_to_nat(4u);
return v___x_333_;
}
case 4:
{
lean_object* v___x_334_; 
v___x_334_ = lean_unsigned_to_nat(5u);
return v___x_334_;
}
case 5:
{
lean_object* v___x_335_; 
v___x_335_ = lean_unsigned_to_nat(6u);
return v___x_335_;
}
case 6:
{
lean_object* v___x_336_; 
v___x_336_ = lean_unsigned_to_nat(7u);
return v___x_336_;
}
case 7:
{
lean_object* v___x_337_; 
v___x_337_ = lean_unsigned_to_nat(8u);
return v___x_337_;
}
default: 
{
lean_object* v___x_338_; 
v___x_338_ = lean_unsigned_to_nat(9u);
return v___x_338_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_sira___boxed(lean_object* v_x_339_){
_start:
{
uint8_t v_x_94__boxed_340_; lean_object* v_res_341_; 
v_x_94__boxed_340_ = lean_unbox(v_x_339_);
v_res_341_ = lp_leanpy_DersAdam_sira(v_x_94__boxed_340_);
return v_res_341_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_TOPLAM__ADIM(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_unsigned_to_nat(9u);
return v___x_342_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(11u);
v___x_357_ = lean_nat_to_int(v___x_356_);
return v___x_357_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_unsigned_to_nat(15u);
v___x_365_ = lean_nat_to_int(v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__0));
v___x_368_ = lean_string_length(v___x_367_);
return v___x_368_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_obj_once(&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__14, &lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__14_once, _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__14);
v___x_370_ = lean_nat_to_int(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___redArg(lean_object* v_x_375_){
_start:
{
lean_object* v_iskelet_376_; uint8_t v_cozum__gizli_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_411_; 
v_iskelet_376_ = lean_ctor_get(v_x_375_, 0);
v_cozum__gizli_377_ = lean_ctor_get_uint8(v_x_375_, sizeof(void*)*1);
v_isSharedCheck_411_ = !lean_is_exclusive(v_x_375_);
if (v_isSharedCheck_411_ == 0)
{
v___x_379_ = v_x_375_;
v_isShared_380_ = v_isSharedCheck_411_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_iskelet_376_);
lean_dec(v_x_375_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_411_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_387_; lean_object* v___x_389_; 
v___x_381_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5));
v___x_382_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__6));
v___x_383_ = lean_obj_once(&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7, &lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7_once, _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7);
v___x_384_ = l_String_quote(v_iskelet_376_);
v___x_385_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
v___x_386_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_383_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = 0;
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 6);
lean_ctor_set(v___x_379_, 0, v___x_386_);
v___x_389_ = v___x_379_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_386_);
v___x_389_ = v_reuseFailAlloc_410_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
lean_ctor_set_uint8(v___x_389_, sizeof(void*)*1, v___x_387_);
v___x_390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_382_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__9));
v___x_392_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_390_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_box(1);
v___x_394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_392_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__11));
v___x_396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
lean_ctor_set(v___x_397_, 1, v___x_381_);
v___x_398_ = lean_obj_once(&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__12, &lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__12_once, _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__12);
v___x_399_ = l_Bool_repr___redArg(v_cozum__gizli_377_);
v___x_400_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_401_, 0, v___x_400_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*1, v___x_387_);
v___x_402_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_397_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = lean_obj_once(&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15, &lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15_once, _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15);
v___x_404_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__16));
v___x_405_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___x_402_);
v___x_406_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__17));
v___x_407_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_405_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_403_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
v___x_409_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*1, v___x_387_);
return v___x_409_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprSoluk_repr(lean_object* v_x_412_, lean_object* v_prec_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lp_leanpy_DersAdam_instReprSoluk_repr___redArg(v_x_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprSoluk_repr___boxed(lean_object* v_x_415_, lean_object* v_prec_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = lp_leanpy_DersAdam_instReprSoluk_repr(v_x_415_, v_prec_416_);
lean_dec(v_prec_416_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_420_, lean_object* v_x_421_, lean_object* v_x_422_){
_start:
{
if (lean_obj_tag(v_x_422_) == 0)
{
lean_dec(v_x_420_);
return v_x_421_;
}
else
{
lean_object* v_head_423_; lean_object* v_tail_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_436_; 
v_head_423_ = lean_ctor_get(v_x_422_, 0);
v_tail_424_ = lean_ctor_get(v_x_422_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_x_422_);
if (v_isSharedCheck_436_ == 0)
{
v___x_426_ = v_x_422_;
v_isShared_427_ = v_isSharedCheck_436_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_tail_424_);
lean_inc(v_head_423_);
lean_dec(v_x_422_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_436_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
lean_inc(v_x_420_);
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 5);
lean_ctor_set(v___x_426_, 1, v_x_420_);
lean_ctor_set(v___x_426_, 0, v_x_421_);
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_x_421_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_x_420_);
v___x_429_ = v_reuseFailAlloc_435_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_430_; uint8_t v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_430_ = lean_unsigned_to_nat(0u);
v___x_431_ = lean_unbox(v_head_423_);
lean_dec(v_head_423_);
v___x_432_ = lp_leanpy_DersAdam_instReprAdim_repr(v___x_431_, v___x_430_);
v___x_433_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_429_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v_x_421_ = v___x_433_;
v_x_422_ = v_tail_424_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0_spec__1(lean_object* v_x_437_, lean_object* v_x_438_, lean_object* v_x_439_){
_start:
{
if (lean_obj_tag(v_x_439_) == 0)
{
lean_dec(v_x_437_);
return v_x_438_;
}
else
{
lean_object* v_head_440_; lean_object* v_tail_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_453_; 
v_head_440_ = lean_ctor_get(v_x_439_, 0);
v_tail_441_ = lean_ctor_get(v_x_439_, 1);
v_isSharedCheck_453_ = !lean_is_exclusive(v_x_439_);
if (v_isSharedCheck_453_ == 0)
{
v___x_443_ = v_x_439_;
v_isShared_444_ = v_isSharedCheck_453_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_tail_441_);
lean_inc(v_head_440_);
lean_dec(v_x_439_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_453_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
lean_inc(v_x_437_);
if (v_isShared_444_ == 0)
{
lean_ctor_set_tag(v___x_443_, 5);
lean_ctor_set(v___x_443_, 1, v_x_437_);
lean_ctor_set(v___x_443_, 0, v_x_438_);
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_x_438_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_x_437_);
v___x_446_ = v_reuseFailAlloc_452_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_447_; uint8_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_unbox(v_head_440_);
lean_dec(v_head_440_);
v___x_449_ = lp_leanpy_DersAdam_instReprAdim_repr(v___x_448_, v___x_447_);
v___x_450_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_446_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = lp_leanpy_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0_spec__1_spec__2(v_x_437_, v___x_450_, v_tail_441_);
return v___x_451_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0___lam__0(uint8_t v___y_454_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_unsigned_to_nat(0u);
v___x_456_ = lp_leanpy_DersAdam_instReprAdim_repr(v___y_454_, v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_457_){
_start:
{
uint8_t v___y_296__boxed_458_; lean_object* v_res_459_; 
v___y_296__boxed_458_ = lean_unbox(v___y_457_);
v_res_459_ = lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0___lam__0(v___y_296__boxed_458_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0(lean_object* v_x_460_, lean_object* v_x_461_){
_start:
{
if (lean_obj_tag(v_x_460_) == 0)
{
lean_object* v___x_462_; 
lean_dec(v_x_461_);
v___x_462_ = lean_box(0);
return v___x_462_;
}
else
{
lean_object* v_tail_463_; 
v_tail_463_ = lean_ctor_get(v_x_460_, 1);
if (lean_obj_tag(v_tail_463_) == 0)
{
lean_object* v_head_464_; uint8_t v___x_465_; lean_object* v___x_466_; 
lean_dec(v_x_461_);
v_head_464_ = lean_ctor_get(v_x_460_, 0);
lean_inc(v_head_464_);
lean_dec_ref_known(v_x_460_, 2);
v___x_465_ = lean_unbox(v_head_464_);
lean_dec(v_head_464_);
v___x_466_ = lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0___lam__0(v___x_465_);
return v___x_466_;
}
else
{
lean_object* v_head_467_; uint8_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
lean_inc(v_tail_463_);
v_head_467_ = lean_ctor_get(v_x_460_, 0);
lean_inc(v_head_467_);
lean_dec_ref_known(v_x_460_, 2);
v___x_468_ = lean_unbox(v_head_467_);
lean_dec(v_head_467_);
v___x_469_ = lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0___lam__0(v___x_468_);
v___x_470_ = lp_leanpy_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0_spec__1(v_x_461_, v___x_469_, v_tail_463_);
return v___x_470_;
}
}
}
}
static lean_object* _init_lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = ((lean_object*)(lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__2));
v___x_480_ = lean_string_length(v___x_479_);
return v___x_480_;
}
}
static lean_object* _init_lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_obj_once(&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__5, &lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__5_once, _init_lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__5);
v___x_482_ = lean_nat_to_int(v___x_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg(lean_object* v_a_487_){
_start:
{
if (lean_obj_tag(v_a_487_) == 0)
{
lean_object* v___x_488_; 
v___x_488_ = ((lean_object*)(lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__1));
return v___x_488_;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; lean_object* v___x_498_; 
v___x_489_ = ((lean_object*)(lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__3));
v___x_490_ = lp_leanpy_Std_Format_joinSep___at___00List_repr___at___00DersAdam_instReprBlok_repr_spec__0_spec__0(v_a_487_, v___x_489_);
v___x_491_ = lean_obj_once(&lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__6, &lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__6_once, _init_lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__6);
v___x_492_ = ((lean_object*)(lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__7));
v___x_493_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
lean_ctor_set(v___x_493_, 1, v___x_490_);
v___x_494_ = ((lean_object*)(lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg___closed__8));
v___x_495_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
v___x_496_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_491_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = 0;
v___x_498_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_498_, 0, v___x_496_);
lean_ctor_set_uint8(v___x_498_, sizeof(void*)*1, v___x_497_);
return v___x_498_;
}
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprBlok_repr___redArg(lean_object* v_x_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_509_ = ((lean_object*)(lp_leanpy_DersAdam_instReprBlok_repr___redArg___closed__3));
v___x_510_ = lean_obj_once(&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7, &lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7_once, _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__7);
v___x_511_ = lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg(v_x_508_);
v___x_512_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = 0;
v___x_514_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1, v___x_513_);
v___x_515_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_509_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = lean_obj_once(&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15, &lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15_once, _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15);
v___x_517_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__16));
v___x_518_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
lean_ctor_set(v___x_518_, 1, v___x_515_);
v___x_519_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__17));
v___x_520_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_518_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_516_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_522_, 0, v___x_521_);
lean_ctor_set_uint8(v___x_522_, sizeof(void*)*1, v___x_513_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprBlok_repr(lean_object* v_x_523_, lean_object* v_prec_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lp_leanpy_DersAdam_instReprBlok_repr___redArg(v_x_523_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprBlok_repr___boxed(lean_object* v_x_526_, lean_object* v_prec_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = lp_leanpy_DersAdam_instReprBlok_repr(v_x_526_, v_prec_527_);
lean_dec(v_prec_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0(lean_object* v_a_529_, lean_object* v_n_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___redArg(v_a_529_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0___boxed(lean_object* v_a_532_, lean_object* v_n_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = lp_leanpy_List_repr___at___00DersAdam_instReprBlok_repr_spec__0(v_a_532_, v_n_533_);
lean_dec(v_n_533_);
return v_res_534_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_unsigned_to_nat(6u);
v___x_547_ = lean_nat_to_int(v___x_546_);
return v___x_547_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_unsigned_to_nat(16u);
v___x_552_ = lean_nat_to_int(v___x_551_);
return v___x_552_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = lean_unsigned_to_nat(14u);
v___x_557_ = lean_nat_to_int(v___x_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprDers_repr___redArg(lean_object* v_x_558_){
_start:
{
lean_object* v_ad_559_; lean_object* v_dosya__sayisi_560_; uint8_t v_yontem__var_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_ad_559_ = lean_ctor_get(v_x_558_, 0);
lean_inc_ref(v_ad_559_);
v_dosya__sayisi_560_ = lean_ctor_get(v_x_558_, 1);
lean_inc(v_dosya__sayisi_560_);
v_yontem__var_561_ = lean_ctor_get_uint8(v_x_558_, sizeof(void*)*2);
lean_dec_ref(v_x_558_);
v___x_562_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__5));
v___x_563_ = ((lean_object*)(lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__3));
v___x_564_ = lean_obj_once(&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__4, &lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__4_once, _init_lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__4);
v___x_565_ = l_String_quote(v_ad_559_);
v___x_566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
v___x_567_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_564_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = 0;
v___x_569_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set_uint8(v___x_569_, sizeof(void*)*1, v___x_568_);
v___x_570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_563_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
v___x_571_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__9));
v___x_572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = lean_box(1);
v___x_574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_572_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = ((lean_object*)(lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__6));
v___x_576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_574_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
v___x_577_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
lean_ctor_set(v___x_577_, 1, v___x_562_);
v___x_578_ = lean_obj_once(&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__7, &lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__7_once, _init_lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__7);
v___x_579_ = l_Nat_reprFast(v_dosya__sayisi_560_);
v___x_580_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
v___x_581_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_578_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set_uint8(v___x_582_, sizeof(void*)*1, v___x_568_);
v___x_583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_577_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v___x_571_);
v___x_585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v___x_573_);
v___x_586_ = ((lean_object*)(lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__9));
v___x_587_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_562_);
v___x_589_ = lean_obj_once(&lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__10, &lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__10_once, _init_lp_leanpy_DersAdam_instReprDers_repr___redArg___closed__10);
v___x_590_ = l_Bool_repr___redArg(v_yontem__var_561_);
v___x_591_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_589_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set_uint8(v___x_592_, sizeof(void*)*1, v___x_568_);
v___x_593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_588_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_obj_once(&lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15, &lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15_once, _init_lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__15);
v___x_595_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__16));
v___x_596_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v___x_593_);
v___x_597_ = ((lean_object*)(lp_leanpy_DersAdam_instReprSoluk_repr___redArg___closed__17));
v___x_598_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_594_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_600_, 0, v___x_599_);
lean_ctor_set_uint8(v___x_600_, sizeof(void*)*1, v___x_568_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprDers_repr(lean_object* v_x_601_, lean_object* v_prec_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = lp_leanpy_DersAdam_instReprDers_repr___redArg(v_x_601_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* lp_leanpy_DersAdam_instReprDers_repr___boxed(lean_object* v_x_604_, lean_object* v_prec_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = lp_leanpy_DersAdam_instReprDers_repr(v_x_604_, v_prec_605_);
lean_dec(v_prec_605_);
return v_res_606_;
}
}
static lean_object* _init_lp_leanpy_DersAdam_YONTEM__ESIGI(void){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = lean_unsigned_to_nat(20u);
return v___x_609_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leanpy_DersAdam(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_leanpy_DersAdam_TOPLAM__ADIM = _init_lp_leanpy_DersAdam_TOPLAM__ADIM();
lean_mark_persistent(lp_leanpy_DersAdam_TOPLAM__ADIM);
lp_leanpy_DersAdam_YONTEM__ESIGI = _init_lp_leanpy_DersAdam_YONTEM__ESIGI();
lean_mark_persistent(lp_leanpy_DersAdam_YONTEM__ESIGI);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
