
class Infantry
{
	name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_cartel_o_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_cartel_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_cartel_o_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_cartel_o_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_cartel_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_cartel_o_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_04";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_cartel_o_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_cartel_o_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_cartel_o_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_04"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_cartel_o_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_cartel_o_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_cartel_o_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_02"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_04";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_cartel_o_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_cartel_o_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_cartel_o_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_cartel_o_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_cartel_o_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};

class Motorized
{
	name = "Motorized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_cartel_o_offroad_squad_m2
	{
		name = "Offroad Squad (M2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_cartel_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_cartel_o_offroad_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_cartel_o_offroad_m2";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_cartel_o_offroad_squad_at
	{
		name = "Offroad Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_cartel_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_cartel_o_offroad_at";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_cartel_o_offroad_at";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_cartel_o_offroad_squad_mixed
	{
		name = "Offroad Squad (M2/AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_cartel_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_cartel_o_offroad_m2";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
		class Unit9
		{
			
			side = 0;
			vehicle = "7r_cartel_o_offroad_at";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};
	class 7r_cartel_o_ural_squad
	{
		name = "Ural 375D Squad"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa"; 
		faction = "7r_cartel_o"; //Faction 
		side = 0; //Side 
		class Unit0
		{
			side = 0;
			vehicle = "7r_cartel_o_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 0;
			vehicle = "7r_cartel_o_autorifleman";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 0;
			vehicle = "7r_cartel_o_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 0;
			vehicle = "7r_cartel_o_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 0;
			vehicle = "7r_cartel_o_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 0;
			vehicle = "7r_cartel_o_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 0;
			vehicle = "7r_cartel_o_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
		class Unit8
		{
			
			side = 0;
			vehicle = "7r_cartel_o_ural";
			rank = "PRIVATE";
			position[] = {0,-10,0};
		};
	};
};