class Infantry_o
{
	name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_adf_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_adf_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_adf_o_autorifleman";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_adf_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_adf_o_autorifleman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_adf_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_autorifleman";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_adf_o_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_adf_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_02";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_adf_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_adf_o_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_adf_o_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};

class Motorized_o
{
	name = "Motorized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_adf_m1025_squad_m2
	{
		name = "M1025 Squad (M2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_o_m1025_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_o_m1025_m2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_o_m1025_squad_mk19
	{
		name = "M1025 Squad (MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_o_m1025_mk19";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_o_m1025_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_o_m1025_squad_mixed
	{
		name = "M1025 Squad (M2/MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_o_m1025_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_o_m1025_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_o_ural_squad
	{
		name = "Ural 375D Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_o_ural";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
	};
};

class Mechanized_o
{
	name = "Mechanized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_adf_o_m113_squad_m2
	{
		name = "M113A3 Squad (M2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_o_m113a3_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_o_m113a3_m2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_o_m113_squad_mk19
	{
		name = "M113A3 Squad (MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_o_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_o_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_adf_o_m113_squad_mixed
	{
		name = "M113A3 Squad (M2/MK19)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa"; 
		faction = "7r_adf_o"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7r_adf_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_adf_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_adf_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7r_adf_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_adf_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7r_adf_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_adf_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 1;
			vehicle = "7r_adf_o_m113a3_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 1;
			vehicle = "7r_adf_o_m113a3_mk19";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
};

