class rhs_afghanka_base;

class 7r_afghanka_base : rhs_afghanka_base{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
	class EventHandlers;
};

class 7r_lpdf_base : 7R_afghanka_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "LPDF Base";
	side = 0;
	faction = "7R_lpdf";
	GenericNames = "EnochMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguagePOL_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_afghanka_lpdf_amoeba";

	CBA_facewearList[] = {
		"7r_scrim_semi", 0.75,
		"", 0.2,
		"G_Squares", 0.05
	};

	model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka.p3d";

	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_vest_co.paa","\7r_factions\7R_factions_lpdf\data\afghanka_ldf_pants_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if (local (_this select 0)) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};
};

class 7r_lpdf_base_ns : 7R_afghanka_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "LPDF Base";
	side = 0;
	faction = "7R_lpdf";
	GenericNames = "EnochMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguagePOL_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_afghanka_lpdf_amoeba";

	CBA_facewearList[] = {
		"", 0.95,
		"G_Squares", 0.05
	};

	model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka.p3d";

	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_vest_co.paa","\7r_factions\7R_factions_lpdf\data\afghanka_ldf_pants_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if (local (_this select 0)) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};
};

class 7r_lpdf_base_nr : 7R_afghanka_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "LPDF Base";
	side = 0;
	faction = "7R_lpdf";
	GenericNames = "EnochMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguagePOL_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_afghanka_lpdf_amoeba";

	model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka.p3d";

	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_vest_co.paa","\7r_factions\7R_factions_lpdf\data\afghanka_ldf_pants_co.paa"};

	class HitPoints : HitPoints{};
};


class 7r_lpdf_base_rain : 7R_afghanka_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "LPDF Base";
	side = 0;
	faction = "7R_lpdf";
	GenericNames = "EnochMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguagePOL_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_afghanka_lpdf_rain";

	model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka.p3d";

	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_vest_2_co.paa","\7r_factions\7R_factions_lpdf\data\afghanka_ldf_pants_2_co.paa"};

	class HitPoints : HitPoints{};

};

class 7r_lpdf_base_mixed1 : 7R_afghanka_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "LPDF Base";
	side = 0;
	faction = "7R_lpdf";
	GenericNames = "EnochMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguagePOL_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_afghanka_lpdf_mixed_1";

	model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka.p3d";

	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_vest_co.paa","\7r_factions\7R_factions_lpdf\data\afghanka_ldf_pants_2_co.paa"};

	class HitPoints : HitPoints{};

};

class 7r_lpdf_base_mixed2 : 7R_afghanka_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "LPDF Base";
	side = 0;
	faction = "7R_lpdf";
	GenericNames = "EnochMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguagePOL_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7R_afghanka_lpdf_mixed_2";

	model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka.p3d";

	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_lpdf\data\afghanka_ldf_vest_2_co.paa","\7r_factions\7R_factions_lpdf\data\afghanka_ldf_pants_co.paa"};

	class HitPoints : HitPoints{};

};
