#include <iostream>

std::vector<TString> tthMLfakeNPlist = {
	//"fakeSF_tthML",
	//"fakeSF_origin",
	//"fakeSFNP_tthML_ptbin0_prongbin0",
	//"fakeSFNP_tthML_ptbin1_prongbin0",
	//"fakeSFNP_tthML_ptbin2_prongbin0",
	//"fakeSFNP_tthML_ptbin0_prongbin1",
	//"fakeSFNP_tthML_ptbin1_prongbin1",
	//"fakeSFNP_tthML_ptbin2_prongbin1",
	//"fakeSFNP_origin_0",
	//"fakeSFNP_origin_1",
	//"fakeSFNP_origin_2",
	//"fakeSFNP_origin_3",
	//"fakeSFNP_origin_4",
	//"fakeSFNP_origin_5",
	//"fakeSFNP_origin_6",
	//"fakeSFNP_origin_7",
  	//fitting stats. uncertainty, 24 parameters, reduce_run 5 to apply
	"fakeSFNP_1prong_ptbin0_b_fake", 
	"fakeSFNP_1prong_ptbin0_w_jet_fake_os",
	"fakeSFNP_1prong_ptbin0_w_jet_fake_ss",
	"fakeSFNP_1prong_ptbin0_other_fake",
	"fakeSFNP_3prong_ptbin0_b_fake",
	"fakeSFNP_3prong_ptbin0_w_jet_fake_os",
	"fakeSFNP_3prong_ptbin0_w_jet_fake_ss",
	"fakeSFNP_3prong_ptbin0_other_fake",
	"fakeSFNP_1prong_ptbin1_b_fake", 
	"fakeSFNP_1prong_ptbin1_w_jet_fake_os",
	"fakeSFNP_1prong_ptbin1_w_jet_fake_ss",
	"fakeSFNP_1prong_ptbin1_other_fake",
	"fakeSFNP_3prong_ptbin1_b_fake",
	"fakeSFNP_3prong_ptbin1_w_jet_fake_os",
	"fakeSFNP_3prong_ptbin1_w_jet_fake_ss",
	"fakeSFNP_3prong_ptbin1_other_fake",
	"fakeSFNP_1prong_ptbin2_b_fake", 
	"fakeSFNP_1prong_ptbin2_w_jet_fake_os",
	"fakeSFNP_1prong_ptbin2_w_jet_fake_ss",
	"fakeSFNP_1prong_ptbin2_other_fake",
	"fakeSFNP_3prong_ptbin2_b_fake",
	"fakeSFNP_3prong_ptbin2_w_jet_fake_os",
	"fakeSFNP_3prong_ptbin2_w_jet_fake_ss",
	"fakeSFNP_3prong_ptbin2_other_fake"
	//"fake_mismodelling" //mis-modelling in SS region, the data-MC difference is added to OS w-jet faking uncertainty, make_plots (2nd time) to apply.
};

std::vector<TString> xTFWfakeNPlist={
   "FFNP_1prong_ptbin0_etabin0", 
  "FFNP_1prong_ptbin0_etabin1",
  "FFNP_1prong_ptbin1_etabin0",
  "FFNP_1prong_ptbin1_etabin1",
  "FFNP_1prong_ptbin2_etabin0",
  "FFNP_1prong_ptbin2_etabin1",
  "FFNP_3prong_ptbin0_etabin0", 
  "FFNP_3prong_ptbin0_etabin1",
  "FFNP_3prong_ptbin1_etabin0",
  "FFNP_3prong_ptbin1_etabin1",
  "FFNP_3prong_ptbin2_etabin0",
  "FFNP_3prong_ptbin2_etabin1",
  "FFNP_samesign",
  "FFNP_sideband"
};

std::vector<TString> commonNPlist = { //common NP for both tthML and xTFW
	"PRW_up",
	"PRW_down",
	"jvt_up",
	"jvt_down",
	"btag_B_0_up",
	"btag_B_0_down",
	"btag_B_1_up",
	"btag_B_1_down",
	"btag_B_2_up",
	"btag_B_2_down",
	"btag_B_3_up",
	"btag_B_3_down",
	"btag_B_4_up",
	"btag_B_4_down",
	"btag_B_5_up",
	"btag_B_5_down",
	"btag_B_6_up",
	"btag_B_6_down",
	"btag_B_7_up",
	"btag_B_7_down",
	"btag_B_8_up",
	"btag_B_8_down",
	"btag_C_0_up",
	"btag_C_0_down",
	"btag_C_1_up",
	"btag_C_1_down",
	"btag_C_2_up",
	"btag_C_2_down",
	"btag_C_3_up",
	"btag_C_3_down",
	"btag_Light_0_up",
	"btag_Light_0_down",
	"btag_Light_1_up",
	"btag_Light_1_down",
	"btag_Light_2_up",
	"btag_Light_2_down",
	"btag_Light_3_up",
	"btag_Light_3_down",
	"btag_Light_4_up",
	"btag_Light_4_down",
	"btag_extrapolation_up",
	"btag_extrapolation_down",
	"btag_extrapolation_from_charm_up",
	"btag_extrapolation_from_charm_down",
};

std::vector<TString> theoryNPlist = { // theory uncertainties, the recipe is changed, need to ask conveners.
//"LHE3Weight_muR=100,muF=200",
//"LHE3Weight_muR=100,muF=050",
//"LHE3Weight_muR=200,muF=100",
//"LHE3Weight_muR=050,muF=100",
//"LHE3Weight_muR=050,muF=050",
//"LHE3Weight_muR=200,muF=200",
//"LHE3Weight_muR=200,muF=050",
//"LHE3Weight_muR=050,muF=200",
"LHE3Weight_PDFset=260001",
"LHE3Weight_PDFset=260002",
"LHE3Weight_PDFset=260003",
"LHE3Weight_PDFset=260004",
"LHE3Weight_PDFset=260005",
"LHE3Weight_PDFset=260006",
"LHE3Weight_PDFset=260007",
"LHE3Weight_PDFset=260008",
"LHE3Weight_PDFset=260009",
"LHE3Weight_PDFset=260010",
"LHE3Weight_PDFset=260011",
"LHE3Weight_PDFset=260012",
"LHE3Weight_PDFset=260013",
"LHE3Weight_PDFset=260014",
"LHE3Weight_PDFset=260015",
"LHE3Weight_PDFset=260016",
"LHE3Weight_PDFset=260017",
"LHE3Weight_PDFset=260018",
"LHE3Weight_PDFset=260019",
"LHE3Weight_PDFset=260020",
"LHE3Weight_PDFset=260021",
"LHE3Weight_PDFset=260022",
"LHE3Weight_PDFset=260023",
"LHE3Weight_PDFset=260024",
"LHE3Weight_PDFset=260025",
"LHE3Weight_PDFset=260026",
"LHE3Weight_PDFset=260027",
"LHE3Weight_PDFset=260028",
"LHE3Weight_PDFset=260029",
"LHE3Weight_PDFset=260030",
"LHE3Weight_PDFset=260031",
"LHE3Weight_PDFset=260032",
"LHE3Weight_PDFset=260033",
"LHE3Weight_PDFset=260034",
"LHE3Weight_PDFset=260035",
"LHE3Weight_PDFset=260036",
"LHE3Weight_PDFset=260037",
"LHE3Weight_PDFset=260038",
"LHE3Weight_PDFset=260039",
"LHE3Weight_PDFset=260040",
"LHE3Weight_PDFset=260041",
"LHE3Weight_PDFset=260042",
"LHE3Weight_PDFset=260043",
"LHE3Weight_PDFset=260044",
"LHE3Weight_PDFset=260045",
"LHE3Weight_PDFset=260046",
"LHE3Weight_PDFset=260047",
"LHE3Weight_PDFset=260048",
"LHE3Weight_PDFset=260049",
"LHE3Weight_PDFset=260050",
"LHE3Weight_PDFset=260051",
"LHE3Weight_PDFset=260052",
"LHE3Weight_PDFset=260053",
"LHE3Weight_PDFset=260054",
"LHE3Weight_PDFset=260055",
"LHE3Weight_PDFset=260056",
"LHE3Weight_PDFset=260057",
"LHE3Weight_PDFset=260058",
"LHE3Weight_PDFset=260059",
"LHE3Weight_PDFset=260060",
"LHE3Weight_PDFset=260061",
"LHE3Weight_PDFset=260062",
"LHE3Weight_PDFset=260063",
"LHE3Weight_PDFset=260064",
"LHE3Weight_PDFset=260065",
"LHE3Weight_PDFset=260066",
"LHE3Weight_PDFset=260067",
"LHE3Weight_PDFset=260068",
"LHE3Weight_PDFset=260069",
"LHE3Weight_PDFset=260070",
"LHE3Weight_PDFset=260071",
"LHE3Weight_PDFset=260072",
"LHE3Weight_PDFset=260073",
"LHE3Weight_PDFset=260074",
"LHE3Weight_PDFset=260075",
"LHE3Weight_PDFset=260076",
"LHE3Weight_PDFset=260077",
"LHE3Weight_PDFset=260078",
"LHE3Weight_PDFset=260079",
"LHE3Weight_PDFset=260080",
"LHE3Weight_PDFset=260081",
"LHE3Weight_PDFset=260082",
"LHE3Weight_PDFset=260083",
"LHE3Weight_PDFset=260084",
"LHE3Weight_PDFset=260085",
"LHE3Weight_PDFset=260086",
"LHE3Weight_PDFset=260087",
"LHE3Weight_PDFset=260088",
"LHE3Weight_PDFset=260089",
"LHE3Weight_PDFset=260090",
"LHE3Weight_PDFset=260091",
"LHE3Weight_PDFset=260092",
"LHE3Weight_PDFset=260093",
"LHE3Weight_PDFset=260094",
"LHE3Weight_PDFset=260095",
"LHE3Weight_PDFset=260096",
"LHE3Weight_PDFset=260097",
"LHE3Weight_PDFset=260098",
"LHE3Weight_PDFset=260099",
"LHE3Weight_PDFset=260100",
	"ISR_up",
	"ISR_down",
	"FSR_up",
	"FSR_down"
};

std::vector<TString> xTFWNPlist = {
	"tauRecon_TOTAL_up",
	"tauRecon_TOTAL_down",
	"tauEveto_TOTAL_up",
	"tauEveto_TOTAL_down",
	"MEDIUM_tauID_1P2025_up",
	"MEDIUM_tauID_1P2025_down",
	"MEDIUM_tauID_1P2530_up",
	"MEDIUM_tauID_1P2530_down",
	"MEDIUM_tauID_1P3040_up",
	"MEDIUM_tauID_1P3040_down",
	"MEDIUM_tauID_1PGE40_up",
	"MEDIUM_tauID_1PGE40_down",
	"MEDIUM_tauID_3P2030_up",
	"MEDIUM_tauID_3P2030_down",
	"MEDIUM_tauID_3P2530_up",
	"MEDIUM_tauID_3P2530_down",
	"MEDIUM_tauID_3P3040_up",
	"MEDIUM_tauID_3P3040_down",
	"MEDIUM_tauID_3PGE30_up",
	"MEDIUM_tauID_3PGE30_down",
	"MEDIUM_tauID_HIGHPT_up",
	"MEDIUM_tauID_HIGHPT_down",
	"MEDIUM_tauID_SYST_up",
	"MEDIUM_tauID_SYST_down",
	"tauTrigger_STATDATA2018up",
	"tauTrigger_STATDATA2018down",
	"tauTrigger_STATMC2018up",
	"tauTrigger_STATMC2018down",
	"tauTrigger_SYST2018up",
	"tauTrigger_SYST2018down",
	"tauTrigger_SYSTMU2018up",
	"tauTrigger_SYSTMU2018down",
	"tauTrigger_STATDATA161718up",
	"tauTrigger_STATDATA161718down",
	"tauTrigger_STATMC161718up",
	"tauTrigger_STATMC161718down",
	"tauTrigger_SYST161718up",
	"tauTrigger_SYST161718down",
	"tauTrigger_SYSTMU161718up",
	"tauTrigger_SYSTMU161718down"
};
std::vector<TString> tthMLNPlist = {
	"Ele_Reco_up",
	"Ele_Reco_down",
	"Ele_ID_up",
	"Ele_ID_down",
	"Ele_Isol_up",
	"Ele_Isol_down",
	"Mu_ID_STAT_up",
	"Mu_ID_STAT_down",
	"Mu_ID_SYST_up",
	"Mu_ID_SYST_down",
	"Mu_ID_STAT_LOWPT_up",
	"Mu_ID_STAT_LOWPT_down",
	"Mu_ID_SYST_LOWPT_up",
	"Mu_ID_SYST_LOWPT_down",
	"Mu_Isol_STAT_up",
	"Mu_Isol_STAT_down",
	"Mu_Isol_SYST_up",
	"Mu_Isol_SYST_down",
	"Mu_TTVA_STAT_up",
	"Mu_TTVA_STAT_down",
	"Mu_TTVA_SYST_up",
	"Mu_TTVA_SYST_down",
	"tauEveto_TOTAL_up",
	"tauEveto_TOTAL_down",
	"tauEveto_E_TOTAL_up",
	"tauEveto_E_TOTAL_down",
	"tauID_TOTAL_up",
	"tauID_TOTAL_down",
	"tauID_HIGHPT_up",
	"tauID_HIGHPT_down",
	"tauRecon_TOTAL_up",
	"tauRecon_TOTAL_down",
	"tauRecon_HIGHPT_up",
	"tauRecon_HIGHPT_down",
};

std::vector<TString> tthMLtreeNPlist = {
	"EG_RESOLUTION_ALL__1down",
	"EG_RESOLUTION_ALL__1up",
	"EG_SCALE_AF2__1down",
	"EG_SCALE_AF2__1up",
	"EG_SCALE_ALL__1down",
	"EG_SCALE_ALL__1up",
	"JET_CategoryReduction_JET_BJES_Response__1down",
	"JET_CategoryReduction_JET_BJES_Response__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Detector1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Detector1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed2__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed2__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed3__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed3__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling2__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling2__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling3__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling3__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling4__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling4__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical2__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical2__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical3__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical3__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical4__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical4__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical5__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical5__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical6__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical6__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_Modelling__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_Modelling__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_highE__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_highE__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_negEta__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_negEta__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_posEta__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_posEta__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_TotalStat__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_TotalStat__1up",
	"JET_CategoryReduction_JET_Flavor_Composition__1down",
	"JET_CategoryReduction_JET_Flavor_Composition__1up",
	"JET_CategoryReduction_JET_Flavor_Response__1down",
	"JET_CategoryReduction_JET_Flavor_Response__1up",
	"JET_CategoryReduction_JET_Pileup_OffsetMu__1down",
	"JET_CategoryReduction_JET_Pileup_OffsetMu__1up",
	"JET_CategoryReduction_JET_Pileup_OffsetNPV__1down",
	"JET_CategoryReduction_JET_Pileup_OffsetNPV__1up",
	"JET_CategoryReduction_JET_Pileup_PtTerm__1down",
	"JET_CategoryReduction_JET_Pileup_PtTerm__1up",
	"JET_CategoryReduction_JET_Pileup_RhoTopology__1down",
	"JET_CategoryReduction_JET_Pileup_RhoTopology__1up",
//	"JET_CategoryReduction_JET_PunchThrough_MC16__1down",
//	"JET_CategoryReduction_JET_PunchThrough_MC16__1up",
	"JET_CategoryReduction_JET_SingleParticle_HighPt__1down",
	"JET_CategoryReduction_JET_SingleParticle_HighPt__1up",
	"JET_JER_SINGLE_NP__1up",
	"MET_SoftTrk_ResoPara",
	"MET_SoftTrk_ResoPerp",
	"MET_SoftTrk_ScaleDown",
	"MET_SoftTrk_ScaleUp",
	"MUON_ID__1down",
	"MUON_ID__1up",
	"MUON_MS__1down",
	"MUON_MS__1up",
	"MUON_SAGITTA_RESBIAS__1down",
	"MUON_SAGITTA_RESBIAS__1up",
	"MUON_SAGITTA_RHO__1down",
	"MUON_SAGITTA_RHO__1up",
	"MUON_SCALE__1down",
	"MUON_SCALE__1up",
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR__1down",
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR__1up",
	"TAUS_TRUEHADTAU_SME_TES_INSITU__1down",
	"TAUS_TRUEHADTAU_SME_TES_INSITU__1up",
	"TAUS_TRUEHADTAU_SME_TES_MODEL__1down",
	"TAUS_TRUEHADTAU_SME_TES_MODEL__1up"
};

std::vector<TString> xTFWtreeNPlist = {
  "TAUS_TRUEHADTAU_SME_TES_INSITUFIT_1up",
  "TAUS_TRUEHADTAU_SME_TES_INSITUFIT_1down",
  "TAUS_TRUEHADTAU_SME_TES_DETECTOR_1up",
  "TAUS_TRUEHADTAU_SME_TES_DETECTOR_1down",
  "TAUS_TRUEHADTAU_SME_TES_MODEL_CLOSURE_1up",
  "TAUS_TRUEHADTAU_SME_TES_MODEL_CLOSURE_1down",
  "TAUS_TRUEHADTAU_SME_TES_INSITUEXP_1up",
  "TAUS_TRUEHADTAU_SME_TES_INSITUEXP_1down",
  "TAUS_TRUEHADTAU_SME_TES_PHYSICSLIST_1up",
  "TAUS_TRUEHADTAU_SME_TES_PHYSICSLIST_1down",
  "JET_EffectiveNP_Detector1_1up",
  "JET_EffectiveNP_Detector1_1down",
  "JET_EffectiveNP_Detector2_1up",
  "JET_EffectiveNP_Detector2_1down",
  "JET_EffectiveNP_Mixed1_1up",
  "JET_EffectiveNP_Mixed1_1down",
  "JET_EffectiveNP_Mixed2_1up",
  "JET_EffectiveNP_Mixed2_1down",
  "JET_EffectiveNP_Mixed3_1up",
  "JET_EffectiveNP_Mixed3_1down",
  "JET_EffectiveNP_Modelling1_1up",
  "JET_EffectiveNP_Modelling1_1down",
  "JET_EffectiveNP_Modelling2_1up",
  "JET_EffectiveNP_Modelling2_1down",
  "JET_EffectiveNP_Modelling3_1up",
  "JET_EffectiveNP_Modelling3_1down",
  "JET_EffectiveNP_Modelling4_1up",
  "JET_EffectiveNP_Modelling4_1down",
  "JET_EffectiveNP_Statistical1_1up",
  "JET_EffectiveNP_Statistical1_1down",
  "JET_EffectiveNP_Statistical2_1up",
  "JET_EffectiveNP_Statistical2_1down",
  "JET_EffectiveNP_Statistical3_1up",
  "JET_EffectiveNP_Statistical3_1down",
  "JET_EffectiveNP_Statistical4_1up",
  "JET_EffectiveNP_Statistical4_1down",
  "JET_EffectiveNP_Statistical5_1up",
  "JET_EffectiveNP_Statistical5_1down",
  "JET_EffectiveNP_Statistical6_1up",
  "JET_EffectiveNP_Statistical6_1down",
  "JET_JER_EffectiveNP_1_1up",
  "JET_JER_EffectiveNP_1_1down",
  "JET_JER_EffectiveNP_2_1up",
  "JET_JER_EffectiveNP_2_1down",
  "JET_JER_EffectiveNP_3_1up",
  "JET_JER_EffectiveNP_3_1down",
  "JET_JER_EffectiveNP_4_1up",
  "JET_JER_EffectiveNP_4_1down",
  "JET_JER_EffectiveNP_5_1up",
  "JET_JER_EffectiveNP_5_1down",
  "JET_JER_EffectiveNP_6_1up",
  "JET_JER_EffectiveNP_6_1down",
  "JET_JER_EffectiveNP_7restTerm_1up",
  "JET_JER_EffectiveNP_7restTerm_1down",
  "JET_JER_DataVsMC_MC16_1up",
  "JET_JER_DataVsMC_MC16_1down",  
  "JET_BJES_Response_1up",
  "JET_BJES_Response_1down",
  "JET_Flavor_Composition_1up",
  "JET_Flavor_Composition_1down",
  "JET_Flavor_Response_1up",
  "JET_Flavor_Response_1down",
  "JET_Pileup_RhoTopology_1up",
  "JET_Pileup_RhoTopology_1down", 
  "JET_Pileup_OffsetMu_1up",
  "JET_Pileup_OffsetNPV_1up",
  "JET_Pileup_OffsetMu_1down",
  "JET_Pileup_OffsetNPV_1down",
  "JET_Pileup_PtTerm_1up",
  "JET_Pileup_PtTerm_1down", 
  "JET_EtaIntercalibration_TotalStat_1up",
  "JET_EtaIntercalibration_TotalStat_1down",
  "JET_EtaIntercalibration_NonClosure_2018data_1up",
  "JET_EtaIntercalibration_NonClosure_2018data_1down",
  "JET_EtaIntercalibration_NonClosure_negEta_1up",
  "JET_EtaIntercalibration_NonClosure_negEta_1down",
  "JET_EtaIntercalibration_Modelling_1up",
  "JET_EtaIntercalibration_Modelling_1down",
  "JET_EtaIntercalibration_NonClosure_highE_1up",
  "JET_EtaIntercalibration_NonClosure_highE_1down",
  "JET_EtaIntercalibration_NonClosure_posEta_1up",
  "JET_EtaIntercalibration_NonClosure_posEta_1down",
  "JET_PunchThrough_MC16_1up",
  "JET_PunchThrough_MC16_1down",
  "JET_SingleParticle_HighPt_1up",
  "JET_SingleParticle_HighPt_1down",
  "JET_TILECORR_Uncertainty_1down",
  "JET_TILECORR_Uncertainty_1up",
  "MET_SoftTrk_ResoPara",
  "MET_SoftTrk_ResoPerp",
  "MET_SoftTrk_Scale_1up",
  "MET_SoftTrk_Scale_1down"
};

std::vector<TString> sampleNPlist = {
	"ttbarsys_frag",
	"ttbarsys_hscatter",
};

std::vector<TString> xsecNPlist = {
	"ztautauXsec_up",
	"ztautauXsec_down",
	"ttbarXsec_up",
	"ttbarXsec_down",
};

std::vector<TString> tthMLmajorNPlist = {
	"tauEveto_TOTAL_up",
	"tauEveto_TOTAL_down",
	"tauEveto_E_TOTAL_up",
	"tauEveto_E_TOTAL_down",
	"tauID_TOTAL_up",
	"tauID_TOTAL_down",
	"tauID_HIGHPT_up",
	"tauID_HIGHPT_down",
	"tauRecon_TOTAL_up",
	"tauRecon_TOTAL_down",
	"tauRecon_HIGHPT_up",
	"tauRecon_HIGHPT_down",
};

std::vector<TString> tthMLmajortreeNPlist = {
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR_1down",
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR_1up",
	"TAUS_TRUEHADTAU_SME_TES_INSITU_1down",
	"TAUS_TRUEHADTAU_SME_TES_INSITU_1up",
	"TAUS_TRUEHADTAU_SME_TES_MODEL_1down",
	"TAUS_TRUEHADTAU_SME_TES_MODEL_1up"
};

std::vector<TString> xTFWmajorNPlist = {};


TString findNPname(TString &dirname, int iNP = 0, TString framework = "tthML"){

	int npidx = iNP;
	if(iNP == 0) {
		dirname = framework == "tthML"? "nominal" : "NOMINAL";
		return "NOMINAL";
	}else
		npidx--;
	std::vector<TString> *specNPlist = framework == "xTFW"?&xTFWNPlist:&tthMLNPlist;
	std::vector<TString> *treeNPlist = framework == "xTFW"?&xTFWtreeNPlist:&tthMLtreeNPlist;
	std::vector<TString> *fakeNPlist = framework == "xTFW"?&xTFWfakeNPlist:&tthMLfakeNPlist;
	std::vector<std::vector<TString>*> nlist = {fakeNPlist,&commonNPlist,specNPlist,treeNPlist,&theoryNPlist,&sampleNPlist};
	//std::vector<std::vector<TString>*> nlist = {treeNPlist,fakeNPlist,&commonNPlist,specNPlist,&theoryNPlist,&sampleNPlist};
	//except fakeNP, rerun from reduce 3 to update NPs.
	int totalNP = 0;
	for (int i = 0; i < nlist.size(); ++i)
	{
		if(npidx < nlist[i]->size()) {
			if(i == 3) dirname = nlist[i]->at(npidx);
			//if(i == 0) dirname = nlist[i]->at(npidx);
			else dirname = framework == "tthML"? "nominal" : "NOMINAL";
			return nlist[i]->at(npidx);
		}
		else npidx-=nlist[i]->size();
		totalNP += nlist[i]->size();
	}
	printf("NP %d not found, %d NPs in total\n", iNP, totalNP);
	return "";
}

//root -l
//.L weightsys_list.h
//printNPindex("tthML")
void printNPindex(TString framework = "tthML"){

	std::vector<TString> *specNPlist = framework == "xTFW"?&xTFWNPlist:&tthMLNPlist;
	std::vector<TString> *treeNPlist = framework == "xTFW"?&xTFWtreeNPlist:&tthMLtreeNPlist;
	std::vector<TString> *fakeNPlist = framework == "xTFW"?&xTFWfakeNPlist:&tthMLfakeNPlist;
	std::vector<std::vector<TString>*> nlist = {fakeNPlist,&commonNPlist,specNPlist,treeNPlist,&theoryNPlist,&sampleNPlist};

	//17 + 44 + 108 + 34 + 83 + 3
	int iNP = 1;
	std::ofstream file;
	file.open("NPlist.txt");
	for (auto ilist : nlist)
	{
		for( auto NP : *ilist){
			file << iNP << " " << NP << std::endl;
			iNP++;
		}
	}
	file.close();
}
