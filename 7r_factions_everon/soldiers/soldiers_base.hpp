class rhs_uniform_gorka_1_beryozka_unit;

class 7r_gorka_1_base : rhs_uniform_gorka_1_beryozka_unit{
	class HitPoints;
	scope = 0;
	icon = "iconMan";
	modelSides[] = {0,1,2,3};
	class EventHandlers;
	class Attributes;
};

class 7r_ena_gorka_1_base : 7r_gorka_1_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ENA Base";
	side = 1;
	faction = "7r_ena";
	GenericNames = "FrenchMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguageENGFRE_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_ena_gorka_1";

	CBA_facewearList[] = {
		"7r_scrim_semi", 3,
		"VSM_FaceMask_olive", 1,
		"", 1.8,
		"G_Spectacles", .2
	};

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_everon\data\7r_ena_gorka_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if ((local (_this select 0)) && (unit getVariable ""7r_randomization"")) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};

	class Attributes : Attributes{
		class 7r_randomization{
			condition = "objectControllable";
			control = "Checkbox";
			defaultValue = "(true)";
			displayName = "Unit Randomization";
			expression = "_this setVariable ['%s',_value];";
			property = "7r_randomization";
			tooltip = "Enable Headgear/Facewear randomisation. This overrides any Eden assigned helmet or goggles";
			typeName = "BOOL";
		};
	};
};

class 7r_ena_gorka_1_base_ns : 7r_gorka_1_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ENA Base";
	side = 1;
	faction = "7r_ena";
	GenericNames = "FrenchMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguageENGFRE_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_ena_gorka_1";

	CBA_facewearList[] = {
		"VSM_FaceMask_olive", 1,
		"", 1.8,
		"G_Spectacles", 0.2
	};

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_everon\data\7r_ena_gorka_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if ((local (_this select 0)) && (unit getVariable ""7r_randomization"")) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};

	class Attributes : Attributes{
		class 7r_randomization{
			condition = "objectControllable";
			control = "Checkbox";
			defaultValue = "(true)";
			displayName = "Unit Randomization";
			expression = "_this setVariable ['%s',_value];";
			property = "7r_randomization";
			tooltip = "Enable Headgear/Facewear randomisation. This overrides any Eden assigned helmet or goggles";
			typeName = "BOOL";
		};
	};
};

class 7r_ena_gorka_1_base_nr : 7r_gorka_1_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ENA Base";
	side = 1;
	faction = "7r_ena";
	GenericNames = "FrenchMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguageENGFRE_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_ena_gorka_1";

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_everon\data\7r_ena_gorka_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_ena_gorka_1_winter_base : 7r_gorka_1_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ENA Base (Winter)";
	side = 1;
	faction = "7r_ena";
	GenericNames = "FrenchMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguageENGFRE_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_ena_gorka_1_winter";

	CBA_facewearList[] = {
		"G_Balaclava_blk", 0.25,
		"VSM_FaceMask_olive", 0.45,
		"VSM_FaceMask_black", 0.3,
	};

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_everon\data\7r_ena_gorka_winter_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if ((local (_this select 0)) && (unit getVariable ""7r_randomization"")) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};

	class Attributes : Attributes{
		class 7r_randomization{
			condition = "objectControllable";
			control = "Checkbox";
			defaultValue = "(true)";
			displayName = "Unit Randomization";
			expression = "_this setVariable ['%s',_value];";
			property = "7r_randomization";
			tooltip = "Enable Headgear/Facewear randomisation. This overrides any Eden assigned helmet or goggles";
			typeName = "BOOL";
		};
	};
};

class 7r_ena_gorka_1_winter_base_nr : 7r_gorka_1_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "ENA Base (Winter)";
	side = 1;
	faction = "7r_ena";
	GenericNames = "FrenchMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguageENGFRE_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_ena_gorka_1_winter";

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_everon\data\7r_ena_gorka_winter_co.paa"};

	class HitPoints : HitPoints{};
};

class 7r_efa_gorka_1_base : 7r_gorka_1_base {
	author = "Skitz";
	scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	displayName = "EFA Base";
	side = 2;
	faction = "7r_efa";
	GenericNames = "FrenchMen";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] = {"Head_Euro","LanguageENGFRE_F"};
	editorPreview = "\7r_factions\7R_factions_main\data\7R_preview.jpg";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnmagazines[] = {};

	attendant = 0;
	nakedUniform = "U_BasicBody";
	uniformClass = "7r_efa_gorka_1";

	CBA_facewearList[] = {
		"rhs_scarf", 0.25,
		"G_Bandanna_aviator",0.2,
		"VSM_FaceMask_olive", 0.25,
		"VSM_FaceMask_black", 0.3,
	};

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\7r_factions\7R_factions_everon\data\7r_efa_gorka_co.paa"};

	class HitPoints : HitPoints{};
	// If the parent class doesn't have the headgear randomization
	class EventHandlers : EventHandlers
	{
		// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above) 
		init = "if ((local (_this select 0)) && (unit getVariable ""7r_randomization"")) then {[unit] call CBA_fnc_randomizeFacewear;};";
	};

	class Attributes : Attributes{
		class 7r_randomization{
			condition = "objectControllable";
			control = "Checkbox";
			defaultValue = "(true)";
			displayName = "Unit Randomization";
			expression = "_this setVariable ['%s',_value];";
			property = "7r_randomization";
			tooltip = "Enable Headgear/Facewear randomisation. This overrides any Eden assigned helmet or goggles";
			typeName = "BOOL";
		};
	};
};