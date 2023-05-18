class FlagCarrierCore;
class FlagCarrier : FlagCarrierCore {class EventHandlers;};

class 7R_adf_Flag : FlagCarrier{
	_general_macro = "7R_adf_Flag";
	author = "Skitz";
	displayName = "Flag (Artemisa)";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers{
		init = "(_this select 0) setFlagTexture '\7R Factions\7R_factions_adf\data\artemisa_flag.paa'";
	};
	editorPreview = "\7R Factions\7R_factions_adf\data\previews\7R_adf_Flag.jpg";
};