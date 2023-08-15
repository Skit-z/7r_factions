class I_G_Offroad_01_F;

class 7r_blp_offroad : I_G_Offroad_01_F{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_blp";
	side = 2;
	displayName = "Offroad";
	//editorPreview = "\7r_factions\7r_factions_blp\data\previews\7r_blp_m998_2dr.jpg";
	crew = "7r_blp_rifleman_01";
	hiddenSelectionstextures[] = {};
	textureList[] = {"Guerilla_01",1,"Guerilla_02",1,"Guerilla_03",1,"Guerilla_04",1,"Guerilla_05",1,"Guerilla_06",1,"Guerilla_07",1,"Guerilla_08",1,"Guerilla_09",1,"Guerilla_10",1,"Guerilla_11",1,"Guerilla_12",1};
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

class 7r_blp_offroad_m2 : I_G_Offroad_01_armed_F_copy2{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_blp";
	side = 2;
	displayName = "Offroad (M2)";
	//editorPreview = "\7r_factions\7r_factions_blp\data\previews\7r_blp_m998_2dr.jpg";
	crew = "7r_blp_rifleman_02";
	hiddenSelectionstextures[] = {};
	textureList[] = {"Guerilla_01",1,"Guerilla_02",1,"Guerilla_03",1,"Guerilla_04",1,"Guerilla_05",1,"Guerilla_06",1,"Guerilla_07",1,"Guerilla_08",1,"Guerilla_09",1,"Guerilla_10",1,"Guerilla_11",1,"Guerilla_12",1};
	animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"Hide_Shield",0.1};
	class Turrets : Turrets{
		class M2_Turret : M2_Turret{
			gunnerType = "7r_blp_rifleman_03";
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

class 7r_blp_offroad_at : I_G_Offroad_01_AT_F_copy2{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_blp";
	side = 2;
	displayName = "Offroad (SPG-9)";
	hiddenSelectionstextures[] = {};
	//editorPreview = "\7r_factions\7r_factions_blp\data\previews\7r_blp_m998_2dr.jpg";
	crew = "7r_blp_rifleman_03";
	textureList[] = {"Guerilla_01",1,"Guerilla_02",1,"Guerilla_03",1,"Guerilla_04",1,"Guerilla_05",1,"Guerilla_06",1,"Guerilla_07",1,"Guerilla_08",1,"Guerilla_09",1,"Guerilla_10",1,"Guerilla_11",1,"Guerilla_12",1};
	animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
	class Turrets : Turrets{
		class AT_Turret : AT_Turret{
			gunnerType = "7r_blp_rifleman_01";
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