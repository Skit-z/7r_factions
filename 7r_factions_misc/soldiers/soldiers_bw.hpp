class rhs_vkpo_base;

class 7r_fieldblouse_base : rhs_vkpo_base{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
	class EventHandlers;
};

class 7r_fleck_fieldblouse_base : 7r_fieldblouse_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "BW Flecktarn Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_fleck_fieldblouse";

	model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base.p3d";

	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\bw\7r_fleck_field_blouse_vest_co.paa","\7r_factions\7r_factions_misc\data\bw\7r_fleck_field_blouse_pant_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_fleck_fieldblouse_gloves_base :7r_fieldblouse_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "BW Flecktarn Base";
	side = 1;
	faction = "BLU_F";
	GenericNames = "NATOMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"LanguageENG_F","Head_NATO"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";
	modelSides[] = {0,1,2,3};

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_fleck_fieldblouse_gloves";

	model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base_gloves.p3d";

	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"\7r_factions\7r_factions_misc\data\bw\7r_fleck_field_blouse_vest_co.paa","\7r_factions\7r_factions_misc\data\bw\7r_fleck_field_blouse_pant_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};

	class HitPoints : HitPoints{};
};