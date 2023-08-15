class H_booniehat_mgrn;

class rhsusf_patrolcap_ucp;

class rhssaf_helmet_m97_woodland;
class rhssaf_helmet_m97_woodland_black_ess;
class rhssaf_helmet_m97_woodland_black_ess_bare;

class rhssaf_beret_green;

class VSM_M81_OPS;
class VSM_M81_OPS_2;

class 7r_adf_boonie : H_booniehat_mgrn
{
	author = "Skitz";
	scope = 2;
	displayName = "Booniehat (ARTPAT)";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_boonie_ca.paa";
	
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_bdu_caps_co.paa"};
};

class 7r_adf_beret : rhssaf_beret_green
{
	author = "Skitz";
	scope = 2;
	displayName = "Beret [ADF]";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_beret_ca.paa";
	
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_beret_co.paa"};
};

class 7r_adf_beret_rg : rhssaf_beret_green
{
	author = "Skitz";
	scope = 2;
	displayName = "Beret [ADF] (Recon Group)";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_beret_rg_ca.paa";
	
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_beret_rg_co.paa"};
};

class 7r_adf_patrolcap : rhsusf_patrolcap_ucp
{
	author = "Skitz";
	scope = 2;
	displayName = "Patrol Cap (ARTPAT)";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_patrolcap_ca.paa";
	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_patrolcap_co.paa"};
};

class 7r_adf_pasgt : rhssaf_helmet_m97_woodland
{
	author = "Skitz";
	scope = 2;
	displayName = "PASGT (ARTPAT)";
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_pasgt_ca.paa";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_pasgt_co.paa"};
};

class 7r_adf_pasgt_ess : rhssaf_helmet_m97_woodland_black_ess
{
	author = "Skitz";
	scope = 2;
	displayName = "PASGT (ARTPAT/Black ESS)";
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_pasgt_ess_ca.paa";

	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_pasgt_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
};

class 7r_adf_pasgt_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
{
	author = "Skitz";
	scope = 2;
	displayName = "PASGT (ARTPAT/Black ESS/Bare)";
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess_bare";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_pasgt_ess_bare_ca.paa";

	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_pasgt_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
};

class 7r_adf_opscore : VSM_M81_OPS
{
	author = "Skitz";
	scope = 2;
	displayName = "OpsCore (ARTPAT)";
	model = "\VSM_Helmets\models\VSM_ops";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_opscore_ca.paa";

	hiddenSelections[] = {"_helmBase","_helmGear","_nvgWeight","_Peltor"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_opscore_co.paa","vsm_helmets\textures\vsm_helmet_pouch.paa","vsm_helmets\textures\secco2.paa","vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
};

class 7r_adf_opscore_2 : VSM_M81_OPS_2
{
	author = "Skitz";
	scope = 2;
	displayName = "OpsCore 2 (ARTPAT)";
	model = "\VSM_Helmets\models\VSM_ops_2";
	picture = "\7r_factions\7r_factions_adf\data\icons\7r_adf_opscore_ca.paa";

	hiddenSelections[] = {"_helmBase","_helmStrobe","_nvgBattery","_Peltor"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_adf\data\7r_adf_opscore_co.paa","vsm_helmets\textures\helmet_1_co.paa","vsm_helmets\textures\vsm_ech_2_projecthonor.paa","vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
};