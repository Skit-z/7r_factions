
class Infantry
{
	name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_blp_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7R_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7R_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7R_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7R_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7R_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_blp_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7R_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7R_blp_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7R_blp_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7R_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_blp_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7R_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7R_blp_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7R_blp_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7R_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7R_blp_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7R_blp_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_blp_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7R_blp_rifleman_04";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7R_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_blp_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_blp_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7R_blp_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7R_blp_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_blp_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_rifleman_04"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7R_blp_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7R_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_blp_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7R_blp_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7R_blp_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_blp_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_blp_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_rifleman_02"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_rifleman_04";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_blp_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_blp_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_blp_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_blp_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_blp_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7R_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7R_blp_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7R_blp_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};

class Motorized
{
	name = "Motorized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_blp_offroad_squad_m2
	{
		name = "Offroad Squad (M2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7r_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7r_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7r_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 2;
			vehicle = "7r_blp_offroad_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 2;
			vehicle = "7r_blp_offroad_m2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_blp_offroad_squad_at
	{
		name = "Offroad Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7r_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7r_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7r_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 2;
			vehicle = "7r_blp_offroad_at";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 2;
			vehicle = "7r_blp_offroad_at";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_blp_offroad_squad_mixed
	{
		name = "Offroad Squad (M2/AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7r_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7r_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7r_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 2;
			vehicle = "7r_blp_offroad_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 2;
			vehicle = "7r_blp_offroad_at";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_blp_ural_squad
	{
		name = "Ural 375D Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7r_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7r_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7r_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 2;
			vehicle = "7r_blp_ural";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
	};
};

class Mechanized
{
	name = "Mechanized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_blp_m113_squad_m2
	{
		name = "M113A3 Squad (M2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa"; 
		faction = "7r_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7r_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7r_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7r_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 2;
			vehicle = "7r_blp_m113a3_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 2;
			vehicle = "7r_blp_m113a3_m2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_blp_m113_squad_mk19
	{
		name = "M113A3 Squad (MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa"; 
		faction = "7r_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7r_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7r_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7r_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 2;
			vehicle = "7r_blp_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 2;
			vehicle = "7r_blp_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_blp_m113_squad_mixed
	{
		name = "M113A3 Squad (M2/MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa"; 
		faction = "7r_blp"; //Faction 
		side = 2; //Side 
		class Unit0
		{
			side = 2;
			vehicle = "7r_blp_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 2;
			vehicle = "7r_blp_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "7r_blp_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "7r_blp_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "7r_blp_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "7r_blp_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "7r_blp_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "7r_blp_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 2;
			vehicle = "7r_blp_m113a3_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 2;
			vehicle = "7r_blp_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
};