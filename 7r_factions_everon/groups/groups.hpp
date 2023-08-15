class Infantry
{
	name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	class 7r_ena_RifleSquad
	{
		name = "Squad (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rifleman_light";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_rifleman_01";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_ena_rifleman_lat";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7R_ena_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_ena_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_ena_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_ena_WeaponSquad
	{
		name = "Squad (Weapons)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_grenadier";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_ena_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7r_ena_machinegunner";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_ena_mg_assist";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7r_ena_machinegunner";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_ena_ATSquad
	{
		name = "Squad (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_squad_leader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rifleman_03";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_medic";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "7R_ena_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {9,-2,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "7R_ena_marksman";
			rank = "PRIVATE";
			position[] = {11,-2,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "7R_ena_anti_tank";
			rank = "PRIVATE";
			position[] = {13,-2,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "7R_ena_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {15,-2,0};
		};
	};
	class 7r_ena_RifleTeam
	{
		name = "Team (Rifle)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_rifleman_02";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_MGTeam
	{
		name = "Team (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_mg_assist";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7r_ena_machinegunner";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7r_ena_machinegunner";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_ATTeam
	{
		name = "Team (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_rifleman_01"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rifleman_lat";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_anti_tank_assist";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_anti_tank";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_EngineerTeam
	{
		name = "Team (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_rifleman_02"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_engineer";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_demolitions";
			rank = "PRIVATE";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_rifleman_lat";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_HQTeam
	{
		name = "Team (HQ)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_squad_leader";
			rank = "SERGEANT";
			position[] = {3,-2,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "7R_ena_rto";
			rank = "CORPORAL";
			position[] = {5,-2,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "7R_ena_rifleman_light";
			rank = "PRIVATE";
			position[] = {7,-2,0};
		};
	};
	class 7r_ena_RiflePair_01
	{
		name = "Pair (Rifle-1)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rifleman_02";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_RiflePair_02
	{
		name = "Pair (Rifle-2)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_rifleman_01"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rifleman_03";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_RiflePair_03
	{
		name = "Pair (Light)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_rifleman_light"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rifleman_light";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_MGPair
	{
		name = "Pair (MG)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_mg_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7r_ena_machinegunner";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_ATPair
	{
		name = "Pair (AT)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_anti_tank_assist"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_anti_tank";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_EngineerPair
	{
		name = "Pair (Engineer)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_engineer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_demolitions";
			rank = "PRIVATE";
			position[] = {3,-2,0};
		};
	};
	class 7r_ena_HQPair
	{
		name = "Pair (Command)"; //Name of Group
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; 
		faction = "7R_ena"; //Faction 
		side = 1; //Side 
		class Unit0
		{
			side = 1;
			vehicle = "7R_ena_Field_Officer"; //Class name of desired solider
			rank = "LIEUTENANT"; // Rank
			position[] = {0,0,0}; //Position in the formation 
		};
		class Unit1
		{
			side = 1;
			vehicle = "7R_ena_rto";
			rank = "CORPORAL";
			position[] = {3,-2,0};
		};
	};
};

// class Motorized
// {
// 	name = "Motorized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
// 	class 7r_ena_uaz_squad_hmg
// 	{
// 		name = "UAZ Squad (DShKM)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_uaz_dshkm";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_uaz_dshkm";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7r_ena_uaz_squad_gmg
// 	{
// 		name = "UAZ Squad (AGS-30)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_uaz_ags30";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_uaz_ags30";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7r_ena_uaz_squad_mixed
// 	{
// 		name = "UAZ Squad (DShKM/AGS-30)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_uaz_dshkm";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_uaz_ags30";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7r_ena_gaz_squad
// 	{
// 		name = "GAZ-66 Squad"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_gaz66";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 	};
// };

// class Mechanized
// {
// 	name = "Mechanized"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
// 	class 7r_ena_btr60_squad
// 	{
// 		name = "BTR-60PB Squad"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_btr60";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_btr60";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7r_ena_btr80_squad
// 	{
// 		name = "BTR-80 Squad"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_btr80";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_btr80";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7r_ena_brdm2_squad
// 	{
// 		name = "BRDM-2 Squad"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_brdm2";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_brdm2_hq";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7r_ena_bmp1_squad
// 	{
// 		name = "BMP-1 Squad"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_bmp1";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_bmp1";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// 	class 7r_ena_bmp2_squad
// 	{
// 		name = "BMP-2 Squad"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_squad_leader"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_autorifleman";
// 			rank = "CORPORAL";
// 			position[] = {3,-2,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_medic";
// 			rank = "PRIVATE";
// 			position[] = {5,-2,0};
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_01";
// 			rank = "PRIVATE";
// 			position[] = {7,-2,0};
// 		};
// 		class Unit4
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_rifleman_lat";
// 			rank = "PRIVATE";
// 			position[] = {9,-2,0};
// 		};
// 		class Unit5
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_marksman";
// 			rank = "PRIVATE";
// 			position[] = {11,-2,0};
// 		};
// 		class Unit6
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_mg_assist";
// 			rank = "PRIVATE";
// 			position[] = {13,-2,0};
// 		};
// 		class Unit7
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_machinegunner";
// 			rank = "PRIVATE";
// 			position[] = {15,-2,0};
// 		};
// 		class Unit8
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_bmp2";
// 			rank = "PRIVATE";
// 			position[] = {0,-10,0};
// 		};
// 		class Unit9
// 		{
			
// 			side = 1;
// 			vehicle = "7r_ena_bmp2";
// 			rank = "PRIVATE";
// 			position[] = {10,-10,0};
// 		};
// 	};
// };

// class Armor
// {
// 	name = "Armor"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
// 	class 7r_ena_t72_squad
// 	{
// 		name = "Tank Section (T-72)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t72ba"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t72bb";
// 			rank = "CORPORAL";
// 			position[] = {15,-15,0};
// 		};
// 	};
// 	class 7r_ena_t80_squad
// 	{
// 		name = "Tank Section (T-80)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t80b"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t80b";
// 			rank = "CORPORAL";
// 			position[] = {15,-15,0};
// 		};
// 	};
// 	class 7r_ena_mixed_tank_squad
// 	{
// 		name = "Tank Section (T-72/T-80)"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t72bb"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t80b";
// 			rank = "CORPORAL";
// 			position[] = {15,-15,0};
// 		};
// 	};
// 	class 7r_ena_tank_platoon
// 	{
// 		name = "Tank Platoon"; //Name of Group
// 		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; 
// 		faction = "7r_ena"; //Faction 
// 		side = 1; //Side 
// 		class Unit0
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t72bb"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {0,0,0}; //Position in the formation 
// 		};
// 		class Unit1
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t80b";
// 			rank = "CORPORAL";
// 			position[] = {15,-15,0};
// 		};
// 		class Unit2
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t72ba"; //Class name of desired solider
// 			rank = "SERGEANT"; // Rank
// 			position[] = {-15,-15,0}; //Position in the formation 
// 		};
// 		class Unit3
// 		{
// 			side = 1;
// 			vehicle = "7r_ena_t80b";
// 			rank = "CORPORAL";
// 			position[] = {30,-30,0};
// 		};
// 	};
	
// };