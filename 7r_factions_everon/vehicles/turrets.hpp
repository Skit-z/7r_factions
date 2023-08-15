class rhsgref_tla_dshkm;

class 7r_lpdf_dshkm : rhsgref_tla_dshkm{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	side = 2;
	//displayName = "M2HB (M3 AA)";
	crew = "7r_lpdf_rifleman_02";
};

class rhs_2b14_82mm_vmf;

class 7r_lpdf_podnos : rhs_2b14_82mm_vmf{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	side = 2;
	//displayName = "M252";
	crew = "7r_lpdf_rifleman_01";
};

class rhs_AGS30_TriPod_VMF;

class 7r_lpdf_ags30 : rhs_AGS30_TriPod_VMF{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	side = 2;
	//displayName = "Mk19 (M3)";
	crew = "7r_lpdf_rifleman_03";
};

class rhs_Metis_9k115_2_vmf;

class 7r_lpdf_metis : rhs_Metis_9k115_2_vmf{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	side = 2;
	//displayName = "SPG-9";
	crew = "7R_lpdf_rifleman_02";
};

class RHS_SPG9M_VMF;

class 7r_lpdf_spg9 : RHS_SPG9M_VMF{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	side = 2;
	//displayName = "SPG-9";
	crew = "7R_lpdf_rifleman_02";
};

class rhs_d30_vmf;

class 7r_lpdf_d30a : rhs_d30_vmf{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	side = 2;
	//displayName = "SPG-9";
	crew = "7R_lpdf_rifleman_02";
};

class rhs_d30_at_vmf;

class 7r_lpdf_d30a_at : rhs_d30_at_vmf{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	editorSubcategory = "EdSubcat_Turrets";
	side = 2;
	//displayName = "SPG-9";
	crew = "7R_lpdf_rifleman_02";
};

class StaticCannon;

class rhs_zu23_base : StaticCannon{class Turrets;};

class rhs_zu23_vmf : rhs_zu23_base{
	class Turrets : Turrets{
		class MainTurret;
		class CargoTurret_01;
	};
};

class 7r_lpdf_zu23 : rhs_zu23_vmf{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	faction = "7r_lpdf";
	editorSubcategory = "EdSubcat_AAs";
	side = 2;
	//displayName = "SPG-9";
	crew = "7R_lpdf_rifleman_02";
	class Turrets : Turrets{
		class MainTurret : MainTurret{};
		class CargoTurret_01 : CargoTurret_01{gunnerType = "7r_lpdf_squad_leader";};
	};
};