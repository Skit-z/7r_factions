class 7r_adf_pl_rifleman_01 : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Rifleman (M21S)";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_rifleman_01.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"rhs_ess_black","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_ess_black","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};

};

class 7r_adf_pl_rifleman_02 : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Rifleman (M16A2)";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_rifleman_02.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_rifleman_03 : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Rifleman (FN-FAL)";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_rifleman_03.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_l1a1_wood","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_l1a1_wood","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_20Rnd_762x51_m80_fnfal"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_20Rnd_762x51_m80_fnfal"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_rifleman_lat : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Rifleman (LAT)";
	icon = "iconManAT";
	nameSound = "veh_infantry_AT_s";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_rifleman_lat.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","rhs_weap_m72a7","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","rhs_weap_m72a7","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_rifleman_light : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Rifleman (Light)";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_rifleman_light.jpg";
	backpack = "VSM_OGA_OD_Backpack_Compact";

	linkedItems[] = {"V_BandollierB_oli","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"V_BandollierB_oli","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_autorifleman : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Autorifleman";
	icon = "iconManMG";
	nameSound = "veh_infantry_MG_s";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AR";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_autorifleman.jpg";

	linkedItems[] = {"VSM_Shemagh_OD","V_TacVest_oli","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","V_TacVest_oli","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m249_bipod","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_bipod","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_556x45_M855_soft_pouch",MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_556x45_M855_soft_pouch",MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_machinegunner : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Machinegunner";
	icon = "iconManMG";
	nameSound = "veh_infantry_MG_s";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_MG";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_machinegunner.jpg";

	linkedItems[] = {"V_TacVest_oli","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"V_TacVest_oli","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_fnmag","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_fnmag","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_762x51",MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhsusf_100Rnd_762x51",MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_mg_assist : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Machinegunner Assistant";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_MG";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_mg_assist.jpg";

	linkedItems[] = {"rhs_ess_black","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_ess_black","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP"),MAG_3("rhsusf_100Rnd_762x51")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP"),MAG_3("rhsusf_100Rnd_762x51")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_team_leader : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Team Leader";
	icon = "iconManLeader";
	nameSound = "veh_infantry_officer_s";
	
	backpack = "VSM_OGA_OD_Backpack_Compact";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_team_leader.jpg";

	linkedItems[] = {"VSM_Shemagh_OD","V_TacVest_oli","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","V_TacVest_oli","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21a_pbg40","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21a_pbg40","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_8("rhs_VOG25"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_8("rhs_VOG25"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_squad_leader : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Squad Leader";
	icon = "iconManLeader";
	nameSound = "veh_infantry_officer_s";
	
	backpack = "VSM_OGA_OD_Backpack_Compact";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_squad_leader.jpg";

	linkedItems[] = {"rhs_googles_clear","rhsgref_chestrig","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_googles_clear","rhsgref_chestrig","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_officer : 7r_adf_uniform_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Officer";
	icon = "iconManOfficer";
	nameSound = "veh_infantry_officer_s";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_officer.jpg";

	linkedItems[] = {"V_BandollierB_oli","H_Beret_blk","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"V_BandollierB_oli","H_Beret_blk","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_field_officer : 7r_adf_uniform_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Officer (Field)";
	icon = "iconManOfficer";
	nameSound = "veh_infantry_officer_s";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_field_officer.jpg";

	linkedItems[] = {"V_BandollierB_oli","H_Beret_blk","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"V_BandollierB_oli","H_Beret_blk","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_anti_tank : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Anti-Tank Specialist";
	icon = "iconManAT";
	nameSound = "veh_infantry_AT_s";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AT";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_anti_tank.jpg";

	linkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","rhs_weap_maaws","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","rhs_weap_maaws","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_anti_tank_assist : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Anti-Tank Assistant";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AT";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_anti_tank_assist.jpg";

	linkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_medic : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Medic";
	icon = "iconManMedic";
	nameSound = "veh_infantry_medic_s";
	attendant = 1;

	backpack = "VSM_OGA_OD_Backpack_Kitbag_med";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_medic.jpg";

	linkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","rhsgref_chestrig","7r_adf_pasgt_ess","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

};

class 7r_adf_pl_grenadier : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Grenadier";
	uniformClass = "7r_adf_uniform_pl_ssl";
	backpack = "VSM_OGA_OD_Backpack_Compact";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_grenadier.jpg";

	linkedItems[] = {"VSM_Shemagh_OD","V_TacVest_oli","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","V_TacVest_oli","7r_adf_pasgt_ess_bare","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21a_pbg40","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21a_pbg40","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_8("rhs_VOG25"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_8("rhs_VOG25"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_engineer : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Engineer";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_engineer.jpg";

	backpack = "B_Messenger_Black_F_ENG";

	linkedItems[] = {"rhs_googles_clear","V_BandollierB_oli","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_googles_clear","V_BandollierB_oli","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_demolitions : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Demolitions";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_demolitions.jpg";

	backpack = "B_Messenger_Black_F_DEMO";

	linkedItems[] = {"VSM_Shemagh_OD","V_BandollierB_oli","7r_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"VSM_Shemagh_OD","V_BandollierB_oli","7r_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m16a2","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_rto : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "RTO";
	uniformClass = "7r_adf_uniform_pl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_rto.jpg";

	backpack = "B_RadioBag_01_black_F";

	linkedItems[] = {"rhs_googles_clear","V_BandollierB_oli","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_googles_clear","V_BandollierB_oli","7r_adf_patrolcap","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m21s","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_marksman : 7r_adf_uniform_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Marksman";
	nameSound = "veh_infantry_sniper_s";
	
	backpack = "VSM_OGA_OD_Backpack_Compact";
	uniformClass = "7r_adf_uniform_pl_ssl";
	
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_marksman.jpg";

	linkedItems[] = {"rhs_googles_clear","V_BandollierB_oli","7r_adf_boonie","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_googles_clear","V_BandollierB_oli","7r_adf_boonie","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m14_rail_fiberglass_scoped","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m14_rail_fiberglass_scoped","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("20Rnd_762x51_Mag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("20Rnd_762x51_Mag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_crew_commander : 7r_adf_uniform_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Crew Commander";
	
	uniformClass = "7r_adf_uniform_pl";
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_crew_commander.jpg";

	linkedItems[] = {"7r_csat_6sh117_od_svd","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"7r_csat_6sh117_od_svd","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_adf_pl_crew : 7r_adf_uniform_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	faction = "7r_adf_pl";
	displayName = "Crew";
	
	uniformClass = "7r_adf_uniform_pl";
	editorPreview = "\7r_factions\7r_factions_adf\data\previews\7r_adf_pl_crew.jpg";

	linkedItems[] = {"rhs_ess_black","7r_csat_6sh117_od_svd","rhsusf_cvc_green_alt_helmet","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhs_ess_black","7r_csat_6sh117_od_svd","rhsusf_cvc_green_alt_helmet","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m4_handguard","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4_handguard","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_3("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_3("rhs_mag_30Rnd_556x45_M855_Stanag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};