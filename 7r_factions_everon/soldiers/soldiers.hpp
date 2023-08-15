class 7r_ena_rifleman_01 : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (Vz. 58P)";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_rifleman_01.jpg";

	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};

};

class 7r_ena_rifleman_02 : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (Vz. 58V)";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_rifleman_02.jpg";
	
	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_rifleman_03 : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (M1 Garand)";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_rifleman_03.jpg";
	
	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m1garand_sa43","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m1garand_sa43","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_12("rhsgref_8Rnd_762x63_M2B_M1rifle"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_12("rhsgref_8Rnd_762x63_M2B_M1rifle"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_rifleman_lat : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (LAT)";
	icon = "iconManAT";
	nameSound = "veh_infantry_AT_s";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_rifleman_lat.jpg";
	
	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","rhs_weap_m72a7","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","rhs_weap_m72a7","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_rifleman_light : 7r_ena_gorka_1_base_ns {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (Light)";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_rifleman_light.jpg";

	linkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m3a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m3a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_1143x23_M1911B_SMG"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsgref_30rnd_1143x23_M1911B_SMG"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_autorifleman : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Autorifleman";
	icon = "iconManMG";
	nameSound = "veh_infantry_MG_s";

	backpack = "B_FieldPack_green_F_RPK";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_autorifleman.jpg";

	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"7r_weap_car_lsw","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"7r_weap_car_lsw","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhs_mag_100Rnd_556x45_M855_cmag_mixed",MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhs_mag_100Rnd_556x45_M855_cmag_mixed",MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_machinegunner : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Machinegunner";
	icon = "iconManMG";
	nameSound = "veh_infantry_MG_s";

	backpack = "rhsgref_hidf_alicepack_MG";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_machinegunner.jpg";

	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_mg42","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mg42","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhsgref_296Rnd_792x57_SmE_belt",MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),"rhsgref_296Rnd_792x57_SmE_belt",MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_mg_assist : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Machinegunner Assistant";

	backpack = "rhsgref_hidf_alicepack_MG";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_mg_assist.jpg";

	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP"),MAG_3("rhsgref_296Rnd_792x57_SmE_belt")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP"),MAG_3("rhsgref_296Rnd_792x57_SmE_belt")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_team_leader : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Team Leader";
	icon = "iconManLeader";
	nameSound = "veh_infantry_officer_s";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_team_leader.jpg";
	
	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhs_weap_m1garand_sa43","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m1garand_sa43","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_12("rhsgref_8Rnd_762x63_M2B_M1rifle"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_12("rhsgref_8Rnd_762x63_M2B_M1rifle"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_squad_leader : 7r_ena_gorka_1_base_ns {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Squad Leader";
	icon = "iconManLeader";
	nameSound = "veh_infantry_officer_s";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_squad_leader.jpg";
	
	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_chicom","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnlinkedItems[] = {"rhsgref_chicom","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_5("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_5("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_officer : 7r_ena_gorka_1_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer";
	icon = "iconManOfficer";
	nameSound = "veh_infantry_officer_s";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_officer.jpg";

	linkedItems[] = {"G_Aviator","rhsgref_alice_webbing","7r_ena_beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnlinkedItems[] = {"G_Aviator","rhsgref_alice_webbing","7r_ena_beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_field_officer : 7r_ena_gorka_1_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer (Field)";
	icon = "iconManOfficer";
	nameSound = "veh_infantry_officer_s";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_field_officer.jpg";

	linkedItems[] = {"G_Aviator","rhsgref_alice_webbing","7r_ena_beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnlinkedItems[] = {"G_Aviator","rhsgref_alice_webbing","7r_ena_beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhs_weap_m3a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m3a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_5("rhsgref_30rnd_1143x23_M1911B_SMG"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_5("rhsgref_30rnd_1143x23_M1911B_SMG"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_anti_tank : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Anti-Tank Specialist";
	icon = "iconManAT";
	nameSound = "veh_infantry_AT_s";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AT";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_anti_tank.jpg";

	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","rhs_weap_maaws","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","rhs_weap_maaws","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),"rhs_mag_maaws_HEAT",MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),"rhs_mag_maaws_HEAT",MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_anti_tank_assist : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Anti-Tank Assistant";

	backpack = "VSM_OGA_OD_Backpack_Kitbag_AT";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_anti_tank_assist.jpg";

	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_alt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_medic : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Medic";
	icon = "iconManMedic";
	nameSound = "veh_infantry_medic_s";
	attendant = 1;

	backpack = "rhs_medic_bag_med";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_medic.jpg";

	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet_frog_alt","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

};

class 7r_ena_grenadier : 7r_ena_gorka_1_base {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Grenadier";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_grenadier.jpg";
	
	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","7r_ena_m1_helmet","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m79","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m79","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_8("1Rnd_HE_Grenade_shell"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_8("1Rnd_HE_Grenade_shell"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_engineer : 7r_ena_gorka_1_base_ns {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Engineer";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_engineer.jpg";

	backpack = "B_TacticalPack_blk_ENG";

	linkedItems[] = {"rhsgref_chicom","rhsgref_hat_m43cap_heer1_tilted","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","rhsgref_hat_m43cap_heer1_tilted","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_demolitions : 7r_ena_gorka_1_base_ns {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Demolitions";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_demolitions.jpg";

	backpack = "B_TacticalPack_blk_DEMO";

	linkedItems[] = {"rhsgref_chicom","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_chicom","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_rto : 7r_ena_gorka_1_base_ns {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "RTO";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_rto.jpg";

	backpack = "rhs_r148";

	linkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_m43cap_heer1_tilted","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnlinkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_m43cap_heer1_tilted","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhs_30Rnd_762x39mm_Savz58"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_marksman : 7r_ena_gorka_1_base_ns {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Marksman";
	nameSound = "veh_infantry_sniper_s";
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7R_factions_lpdf\data\previews\7R_lpdf_marksman.jpg";
	
	backpack = "B_FieldPack_green_F";
	linkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnlinkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_m43cap_heer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhs_weap_m24sws_scoped","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m24sws_scoped","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsusf_5Rnd_762x51_m118_special_Mag"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_2("SmokeShell"),MAG_6("rhsusf_5Rnd_762x51_m118_special_Mag"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_crew_commander : 7r_ena_gorka_1_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Crew Commander";
	
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7r_factions_lpdf\data\previews\7r_lpdf_crew_commander.jpg";

	linkedItems[] = {"G_Aviator","rhsgref_alice_webbing","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnlinkedItems[] = {"G_Aviator","rhsgref_alice_webbing","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};

class 7r_ena_crew : 7r_ena_gorka_1_base_nr {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Crew";
	
	uniformClass = "7r_ena_gorka_1";
	editorPreview = "\7r_factions\7r_factions_lpdf\data\previews\7r_lpdf_crew.jpg";

	linkedItems[] = {"rhsgref_alice_webbing","rhs_tsh4","ItemMap","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"rhsgref_alice_webbing","rhs_tsh4","ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {"rhs_weap_m3a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m3a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

	magazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_5("rhsgref_30rnd_1143x23_M1911B_SMG"),MAG_3("rhsusf_mag_7x45acp_MHP")};
	respawnmagazines[] = {MAG_2("HandGrenade"),MAG_4("SmokeShell"),MAG_5("rhsgref_30rnd_1143x23_M1911B_SMG"),MAG_3("rhsusf_mag_7x45acp_MHP")};

	items[] = {MAG_2("FirstAidKit")};
};