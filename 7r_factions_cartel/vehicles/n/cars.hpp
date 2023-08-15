class I_G_Offroad_01_F;

class 7r_cartel_offroad : I_G_Offroad_01_F{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_cartel";
	side = 2;
	displayName = "Offroad";
	editorPreview = "\7r_factions\7R_factions_cartel\data\previews\7r_cartel_offroad.jpg";
	crew = "7r_cartel_rifleman_01";
	hiddenSelectionstextures[] = {};
	textureList[] = {"beige",1,"blue",1,"bluecustom",1,"darkred",1,"green",1,"red",1,"white",1};
	class textureSources{
		class beige{
			displayName = "Beige";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
			factions[] = {};
		};
		class blue{
			displayName = "Blue";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
			factions[] = {};
		};
		class bluecustom{
			displayName = "Blue Custom";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
			factions[] = {};
		};
		class darkred{
			displayName = "Dark Red";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
			factions[] = {};
		};
		class green{
			displayName = "Green";
			textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"};
			factions[] = {};
		};
		class red{
			displayName = "Red";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
			factions[] = {};
		};
		class white{
			displayName = "White";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
			factions[] = {};
		};
	};
};

class I_G_Offroad_01_armed_F;
class I_G_Offroad_01_armed_F_copy : I_G_Offroad_01_armed_F {scope = 0; class Turrets; class animationSources;};
class I_G_Offroad_01_armed_F_copy2 : I_G_Offroad_01_armed_F_copy {scope = 0;
	class Turrets : Turrets{
		class M2_Turret;
		class MainTurret;
	};
	class animationSources : animationSources{
		class muzzle_hide_MG;
		class muzzle_rot_MG;
		class ReloadAnim;
		class ReloadMagazine;
		class Revolving;
	};
};

class 7r_cartel_offroad_m2 : I_G_Offroad_01_armed_F_copy2{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_cartel";
	side = 2;
	displayName = "Offroad (M2)";
	editorPreview = "\7r_factions\7R_factions_cartel\data\previews\7r_cartel_offroad_m2.jpg";
	crew = "7r_cartel_rifleman_02";
	hiddenSelectionstextures[] = {};
	
	textureList[] = {"beige",1,"blue",1,"bluecustom",1,"darkred",1,"green",1,"red",1,"white",1};
	class textureSources{
		class beige{
			displayName = "Beige";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
			factions[] = {};
		};
		class blue{
			displayName = "Blue";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
			factions[] = {};
		};
		class bluecustom{
			displayName = "Blue Custom";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
			factions[] = {};
		};
		class darkred{
			displayName = "Dark Red";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
			factions[] = {};
		};
		class green{
			displayName = "Green";
			textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"};
			factions[] = {};
		};
		class red{
			displayName = "Red";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
			factions[] = {};
		};
		class white{
			displayName = "White";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
			factions[] = {};
		};
	};
	animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"Hide_Shield",0.1};
	class Turrets : Turrets{
		class M2_Turret : M2_Turret{
			gunnerType = "7r_cartel_rifleman_03";
			magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red"};
			weapons[] = {"RHS_M2_offroad"};
			};
	};
	class animationSources : animationSources{
		class muzzle_hide_MG : muzzle_hide_MG{
			source = "reload";
			weapon = "RHS_M2_offroad";	
		};
		class muzzle_rot_MG : muzzle_rot_MG{
			source = "ammorandom";
			weapon = "RHS_M2_offroad";	
		};
		class ReloadAnim : ReloadAnim{
			source = "reload";
			weapon = "RHS_M2_offroad";	
		};
		class ReloadMagazine : ReloadMagazine{
			source = "reloadmagazine";
			weapon = "RHS_M2_offroad";	
		};
		class Revolving : Revolving{
			source = "revolving";
			weapon = "RHS_M2_offroad";	
		};
	};
};

class I_G_Offroad_01_AT_F;
class I_G_Offroad_01_AT_F_copy : I_G_Offroad_01_AT_F {scope = 0; class Turrets; class animationSources;};
class I_G_Offroad_01_AT_F_copy2 : I_G_Offroad_01_AT_F_copy {scope = 0;
	class Turrets : Turrets{
		class AT_Turret;
		class MainTurret;
	};
	class animationSources : animationSources{
		class SPG9_reload;
		class SPG9_reloadmagazine;
	};
};

class 7r_cartel_offroad_at : I_G_Offroad_01_AT_F_copy2{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_cartel";
	side = 2;
	displayName = "Offroad (SPG-9)";
	hiddenSelectionstextures[] = {};
	editorPreview = "\7r_factions\7R_factions_cartel\data\previews\7r_cartel_offroad_at.jpg";
	crew = "7r_cartel_rifleman_03";
	
	textureList[] = {"beige",1,"blue",1,"bluecustom",1,"darkred",1,"green",1,"red",1,"white",1};
	class textureSources{
		class beige{
			displayName = "Beige";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
			factions[] = {};
		};
		class blue{
			displayName = "Blue";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
			factions[] = {};
		};
		class bluecustom{
			displayName = "Blue Custom";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
			factions[] = {};
		};
		class darkred{
			displayName = "Dark Red";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
			factions[] = {};
		};
		class green{
			displayName = "Green";
			textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"};
			factions[] = {};
		};
		class red{
			displayName = "Red";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
			factions[] = {};
		};
		class white{
			displayName = "White";
			textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
			factions[] = {};
		};
	};
	animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
	class Turrets : Turrets{
		class AT_Turret : AT_Turret{
			gunnerType = "7r_cartel_rifleman_01";
			magazines[] = {"rhs_mag_OG9V","rhs_mag_OG9V","rhs_mag_OG9V","rhs_mag_OG9V","rhs_mag_OG9V","rhs_mag_OG9V","rhs_mag_OG9V","rhs_mag_PG9V","rhs_mag_PG9V","rhs_mag_PG9V","rhs_mag_PG9V","rhs_mag_PG9V","rhs_mag_PG9V"};
			weapons[] = {"rhs_weap_SPG9"};
			};
	};
	class animationSources : animationSources{
		class SPG9_reload : SPG9_reload{
			source = "reload";
			weapon = "rhs_weap_SPG9";	
		};
		class SPG9_reloadmagazine : SPG9_reloadmagazine{
			source = "reloadmagazine";
			weapon = "rhs_weap_SPG9";
		};	
	};
};