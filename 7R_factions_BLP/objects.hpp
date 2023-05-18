class FlagCarrierCore;
class FlagCarrier : FlagCarrierCore {class EventHandlers;};

class 7R_blp_Flag : FlagCarrier{
	_general_macro = "7R_blp_Flag";
	author = "Skitz";
	displayName = "Flag (Brigadas de Liberación Populares)";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers{
		init = "(_this select 0) setFlagTexture '\7R Factions\7R_factions_blp\data\blp_flag.paa'";
	};
	//editorPreview = "\7R Factions\7R_factions_blp\data\previews\7R_blp_Flag.jpg";
};