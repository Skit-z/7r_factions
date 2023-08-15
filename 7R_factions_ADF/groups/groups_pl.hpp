class Infantry_pl
{
	name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_adf_pl_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_adf_pl_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_adf_pl_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_adf_pl_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_pl_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_pl_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_pl_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_pl_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_pl_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_02";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_pl_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_pl_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_pl_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_pl_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_pl_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_pl_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};

class Motorized_pl
{
	name = "Motorized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_adf_m1025_squad_m2
	{
		name = "M1025 Squad (M2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m1025_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m1025_m2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_pl_m1025_squad_mk19
	{
		name = "M1025 Squad (MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m1025_mk19";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m1025_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_pl_m1025_squad_mixed
	{
		name = "M1025 Squad (M2/MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m1025_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m1025_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_pl_ural_squad
	{
		name = "Ural 375D Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_pl_ural";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
	};
};

class Mechanized_pl
{
	name = "Mechanized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_adf_pl_m113_squad_m2
	{
		name = "M113A3 Squad (M2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m113a3_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m113a3_m2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_pl_m113_squad_mk19
	{
		name = "M113A3 Squad (MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_pl_m113_squad_mixed
	{
		name = "M113A3 Squad (M2/MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
		faction = "7r_adf_pl"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_pl_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_pl_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_pl_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_pl_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_pl_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_pl_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_pl_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m113a3_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_pl_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
};