static const struct BattleTowerSpread sExpertBossBattle_Brendan_Battle1[] =
{
	{
		.species = SPECIES_MEDITITE,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HUGE POWER
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_ROCKSMASH,
			MOVE_BULLETPUNCH,
			MOVE_ROCKTOMB,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CORPHISH,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_AQUAJET,
			MOVE_AERIALACE,
			MOVE_ROCKTOMB,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NUMEL,
		.nature = NATURE_LONELY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY_Simple
		.item = ITEM_PASSHO_BERRY,
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_FLAMECHARGE,
			MOVE_ROCKTOMB,
			MOVE_BULLDOZE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TREECKO,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_ORAN_BERRY,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_BULLETSEED,
			MOVE_DRAINPUNCH,
			MOVE_ROCKTOMB,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route22_GarySquirtle[] =
{
	{
		.species = SPECIES_SNUBBULL,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_intimidate
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_COVET,
			MOVE_THUNDERWAVE,
			MOVE_FIREFANG,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LITLEO,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RIVALRY
		.item = ITEM_WISE_GLASSES,
		.moves =
		{
			MOVE_INCINERATE,
			MOVE_ROUND,
			MOVE_HIDDENPOWER, //grass
			MOVE_SLEEPTALK,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SQUIRTLE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_Torrent
		.item = ITEM_ORAN_BERRY,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_AQUAJET,
			MOVE_ROCKTOMB,
			MOVE_CURSE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route22_GaryBulbasaur[] =
{
	{
		.species = SPECIES_SNUBBULL,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_intimidate
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_COVET,
			MOVE_THUNDERWAVE,
			MOVE_FIREFANG,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SLOWPOKE,
		.nature = NATURE_BOLD,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_Regenerator
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_WATERPULSE,
			MOVE_PSYBEAM, 
			MOVE_TELEPORT,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BULBASAUR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_overgrow
		.item = ITEM_ORAN_BERRY,
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_MEGADRAIN,
			MOVE_SLUDGE,
			MOVE_GROWTH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route22_GaryCharmander[] =
{
	{
		.species = SPECIES_SNUBBULL,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_intimidate
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_COVET,
			MOVE_THUNDERWAVE,
			MOVE_FIREFANG,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SLOWPOKE,
		.nature = NATURE_BOLD,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_Regenerator
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_WATERPULSE,
			MOVE_PSYBEAM, 
			MOVE_TELEPORT,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARMANDER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_flame body
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_FIREFANG,
			MOVE_THUNDERPUNCH,
			MOVE_SLASH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_ViridianBug_Miniboss[] =
{
	{
		.species = SPECIES_KRICKETUNE,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_Technician
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_BUGBITE,
			MOVE_BULLETSEED,
			MOVE_BULLDOZE,
			MOVE_ROCKTOMB,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DUSTOX,
		.nature = NATURE_BOLD,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_shield dust
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_PROTECT,
			MOVE_ROOST,
			MOVE_PSYBEAM,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLBEAT,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY_prankster
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_HIDDENPOWER, //bug
			MOVE_MEGADRAIN,
			MOVE_FLASH,
			MOVE_WATERPULSE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Falkner_Battle1[] =
{
	{
		.species = SPECIES_TRUMBEAK,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILL LINK
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_FLAMECHARGE,
			MOVE_PLUCK,
			MOVE_BULLETSEED,
			MOVE_SLEEPTALK,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EMOLGA,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_ORAN_BERRY,
		.moves =
		{
			MOVE_SHOCKWAVE,
			MOVE_AIRCUTTER,
			MOVE_HIDDENPOWER, //ground
			MOVE_SLEEPTALK,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_YANMA,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SPEEDBOOST
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_MEGADRAIN,
			MOVE_ANCIENTPOWER,
			MOVE_HIDDENPOWER, //bug
			MOVE_AIRCUTTER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RUFFLET,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Hustle
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_AERIALACE,
			MOVE_SLASH,
			MOVE_ROCKSMASH,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FARFETCHD_G,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_LEEK,
		.moves =
		{
			MOVE_ROCKSMASH,
			MOVE_SLAM,
			MOVE_BRUTALSWING,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Brock_Battle1[] =
{
	{
		.species = SPECIES_HIPPOPOTAS,
		.nature = NATURE_CAREFUL,
		.level = 13,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SAND STREAM
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_BULLDOZE,
			MOVE_ROCKTOMB,
			MOVE_TOXIC,
			MOVE_SLACKOFF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CACNEA,
		.nature = NATURE_BASHFUL,
		.level = 15,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_Sand Rush
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_BULLETSEED,
			MOVE_THUNDERPUNCH,
			MOVE_PINMISSILE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LUNATONE,
		.nature = NATURE_BASHFUL,
		.level = 14,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_PSYBEAM, 
			MOVE_HIDDENPOWER, //ground 
			MOVE_ICYWIND,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LILEEP,
		.nature = NATURE_BOLD,
		.level = 16,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY storm drain
		.item = ITEM_ORAN_BERRY,
		.moves =
		{
			MOVE_STOCKPILE,
			MOVE_RECOVER,
			MOVE_HIDDENPOWER, //rock
			MOVE_MEGADRAIN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCHEN,
		.nature = NATURE_BASHFUL,
		.level = 14,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY_doodoo thing
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_WINGATTACK,
			MOVE_ROCKTOMB,
			MOVE_BULLDOZE,
			MOVE_FACADE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SANDSHREW,
		.nature = NATURE_BASHFUL,
		.level = 14,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY sand rush
		.item = ITEM_SOFT_SAND,
		.moves =
		{
			MOVE_BULLDOZE,
			MOVE_ROCKTOMB,
			MOVE_AERIALACE,
			MOVE_SLEEPTALK,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	}
};

static const struct BattleTowerSpread sExpertBossBattle_Route3_LassMiniBoss[] =
{
	{
		.species = SPECIES_PIKACHU_FLYING,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //lightningrod
		.item = ITEM_LIGHT_BALL,
		.moves =
		{
			MOVE_ZIPPYZAP,
			MOVE_HIDDENPOWER, //flying
			MOVE_EXTREMESPEED,
			MOVE_GRASSKNOT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ORICORIO_S,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //Dancer
		.item = ITEM_SPELL_TAG,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_AIRCUTTER,
			MOVE_HIDDENPOWER, //ghost
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WHIMSICOTT,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY prankster
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LEECHSEED,
			MOVE_PROTECT, 
			MOVE_MEGADRAIN,
			MOVE_HIDDENPOWER, //psychic
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_IMPISH,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY intimidate
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_COVET, 
			MOVE_METALCLAW,
			MOVE_FIREFANG, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_MtMoon_Archer[] =
{
	{
		.species = SPECIES_SOLROCK,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_HARD_STONE,
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_ROCKTOMB, 
			MOVE_ZENHEADBUTT,
			MOVE_SELFDESTRUCT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SEVIPER,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY FATAL PRECISION
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_MEGADRAIN,
			MOVE_POISONFANG, 
			MOVE_BULLDOZE,
			MOVE_HYPNOSIS,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HOUNDOUR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //Flash Fire
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_INCINERATE,
			MOVE_SNARL, 
			MOVE_HIDDENPOWER, //electric
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MIGHTYENA,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Strong Jaw
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_BITE,
			MOVE_ICEFANG, 
			MOVE_POISONFANG,
			MOVE_HOWL,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FEAROW,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_PURSUIT,
			MOVE_PLUCK, 
			MOVE_DRILLRUN,
			MOVE_DOUBLEHIT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_MtMoon_Scientist[] =
//doubles
{
	{
		.species = SPECIES_THWACKEY,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grassy Surge
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_GRASSYGLIDE, 
			MOVE_KNOCKOFF,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLTORB_H,
		.nature = NATURE_NAIVE,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Reckless
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_MEGADRAIN,
			MOVE_SELFDESTRUCT,
			MOVE_VOLTSWITCH, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWOOBAT,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Simple
		.item = ITEM_GRASSY_SEED,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_AIRCUTTER, 
			MOVE_PSYBEAM,
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SKIDDO,
		.nature = NATURE_IMPISH,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grass Pelt
		.item = ITEM_MIRACLE_SEED,
		.moves =
		{
			MOVE_HORNLEECH,
			MOVE_BRICKBREAK, 
			MOVE_ROCKSLIDE, 
			MOVE_MILKDRINK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SABLEYE,
		.nature = NATURE_CAREFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Prankster
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WILLOWISP,
			MOVE_RECOVER, 
			MOVE_PROTECT,
			MOVE_FOULPLAY, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanGary_Squirtle[] =
{
	{
		.species = SPECIES_HITMONLEE,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Striker
		.item = ITEM_BLACK_BELT,
		.moves =
		{
			MOVE_BULLETPUNCH,
			MOVE_KNOCKOFF, 
			MOVE_FAKEOUT,
			MOVE_LOWSWEEP,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EEVEE,
		.nature = NATURE_RASH,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Adaptability
		.item = ITEM_EEVIUM_Z,
		.moves =
		{
			MOVE_LASTRESORT,
			MOVE_ROUND, 
			MOVE_DOUBLEKICK,
			MOVE_BITE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CHARGEBEAM,
			MOVE_DRAININGKISS,
			MOVE_ICYWIND, 
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sage Power
		.item = ITEM_CHARCOAL,
		.moves =
		{
			MOVE_INCINERATE,
			MOVE_GRASSKNOT, 
			MOVE_HIDDENPOWER, //rock
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARBOK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_POISON_BARB,
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_SUCKERPUNCH, 
			MOVE_CRUNCH, 
			MOVE_THUNDERFANG, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WARTORTLE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Torrent
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_WATERPULSE, 
			MOVE_ICYWIND,
			MOVE_HIDDENPOWER, //electric
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanGary_Bulbasaur[] =
{
	{
		.species = SPECIES_HITMONCHAN,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Iron Fist
		.item = ITEM_BLACK_BELT,
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_ICEPUNCH, 
			MOVE_MACHPUNCH,
			MOVE_SUCKERPUNCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CHARGEBEAM,
			MOVE_DRAININGKISS,
			MOVE_ICYWIND, 
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SIMIPOUR,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sage Power
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_WATERPULSE,
			MOVE_ICYWIND, 
			MOVE_HIDDENPOWER, //electric
			MOVE_GRASSKNOT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARBOK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_POISON_BARB,
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_SUCKERPUNCH, 
			MOVE_CRUNCH, 
			MOVE_THUNDERFANG, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EEVEE,
		.nature = NATURE_LONELY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Adaptability
		.item = ITEM_EEVIUM_Z,
		.moves =
		{
			MOVE_LASTRESORT,
			MOVE_ROUND, 
			MOVE_DOUBLEKICK,
			MOVE_BITE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_IVYSAUR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_LEECHSEED,
			MOVE_PROTECT, 
			MOVE_SLUDGE,
			MOVE_GIGADRAIN, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanGary_Charmander[] =
{
	{
		.species = SPECIES_HITMONTOP,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_BLACK_BELT,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_BULLETPUNCH, 
			MOVE_ROCKSMASH,
			MOVE_THIEF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CHARGEBEAM,
			MOVE_DRAININGKISS,
			MOVE_ICYWIND, 
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SIMISAGE,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sage Power
		.item = ITEM_MIRACLE_SEED,
		.moves =
		{
			MOVE_MEGADRAIN,
			MOVE_HIDDENPOWER, //fire 
			MOVE_POWERGEM, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARBOK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY INtimidate
		.item = ITEM_POISON_BARB,
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_SUCKERPUNCH, 
			MOVE_CRUNCH, 
			MOVE_THUNDERFANG, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EEVEE,
		.nature = NATURE_LONELY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Adaptability
		.item = ITEM_EEVIUM_Z,
		.moves =
		{
			MOVE_LASTRESORT, //turns into omniboost with z move +2 all moves
			MOVE_ROUND, 
			MOVE_DOUBLEKICK,
			MOVE_BITE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARMELEON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FIREPUNCH, 
			MOVE_THUNDERPUNCH,
			MOVE_BRICKBREAK, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBossBattle_NuggetBridge_Trainer1[] =
//bug Catcher Doubles
{
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Friend Guard
		.item = ITEM_CHARTI_BERRY,
		.moves =
		{
			MOVE_STRUGGLEBUG,
			MOVE_ELECTROWEB, 
			MOVE_AIRCUTTER,
			MOVE_DRAININGKISS,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BUTTERFREE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //CompoundEyes
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_MEGADRAIN,
			MOVE_AIRCUTTER, 
			MOVE_BUGBUZZ, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WORMADAM_SANDY,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Overcoat
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BULLDOZE,
			MOVE_BUGBITE, 
			MOVE_ROCKTOMB, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBossBattle_NuggetBridge_Trainer2[] =
//Lass Trainer Doubles
{
	{
		.species = SPECIES_JIGGLYPUFF,
		.nature = NATURE_BOLD,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Friend Guard
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ROUND,
			MOVE_DRAININGKISS, 
			MOVE_INCINERATE,
			MOVE_ICYWIND,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AMAURA,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Refrigerate 
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_ROUND,
			MOVE_ANCIENTPOWER,
			MOVE_WATERPULSE, 
			MOVE_MUDSHOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRIONNE,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Liquid Voice
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_ROUND,
			MOVE_DRAININGKISS, 
			MOVE_ICYWIND, 
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBossBattle_NuggetBridge_Trainer3[] =
//Youngster Trainer Doubles
{
	{
		.species = SPECIES_PLUSLE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Plus
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_GRASSKNOT,
			MOVE_ELECTROWEB, 
			MOVE_SIGNALBEAM,
			MOVE_CHARGEBEAM,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELECTRIKE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN , //Minus
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_SHOCKWAVE,
			MOVE_ROUND,
			MOVE_FLAMEBURST, 
			MOVE_SIGNALBEAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNOVER,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soundproof
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_ICESHARD,
			MOVE_MEGADRAIN, 
			MOVE_ICICLECRASH, 
			MOVE_WATERPULSE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBossBattle_NuggetBridge_Trainer4[] =
//Lass Trainer Singles
{
	{
		.species = SPECIES_GREEDENT,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Cheek Pouch
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_STOMPINGTANTRUM,
			MOVE_FACADE, 
			MOVE_SEEDBOMB,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOGETIC,
		.nature = NATURE_BASHFUL,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2 , //Serene Grace
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_AIRSLASH,
			MOVE_THUNDERWAVE,
			MOVE_DRAININGKISS, 
			MOVE_MAGICALLEAF, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLAMPERL,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_DEEP_SEA_TOOTH,
		.moves =
		{
			MOVE_WATERPULSE,
			MOVE_ICYWIND, 
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBossBattle_NuggetBridge_Trainer5[] =
//Picnicker Trainer Singles
{
	{
		.species = SPECIES_CRABRAWLER,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter
		.item = ITEM_BLACK_BELT,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_ROCKSMASH, 
			MOVE_ROCKTOMB,
			MOVE_FACADE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SALANDIT,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1 , //Corrosion
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT, 
			MOVE_INCINERATE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MISDREAVUS,
		.nature = NATURE_BASHFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_HEX,
			MOVE_WILLOWISP, 
			MOVE_ICYWIND, 
			MOVE_SHOCKWAVE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_NuggetBridge_Rocket[] =
{
	{
		.species = SPECIES_ARCANINE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DRAGONRAGE,
			MOVE_FLAMEWHEEL, 
			MOVE_THUNDERFANG,
			MOVE_BULLDOZE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRUDDIGON,
		.nature = NATURE_IMPISH,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //Rough Skin
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_PROTECT,
			MOVE_DRAGONTAIL, 
			MOVE_POISONTAIL, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOGEDEMARU,
		.nature = NATURE_CAREFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron barbs
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_UTURN,
			MOVE_ZIPPYZAP, 
			MOVE_IRONHEAD, 
			MOVE_NUZZLE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KOMALA,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Comatose
		.item = ITEM_SILK_SCARF,
		.moves =
		{
			MOVE_SLEEPTALK,
			MOVE_LASTRESORT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route24_Bugsy[] =
//RAIN IN OVERWORLD
{
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.level = 24,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ROCKBLAST,
			MOVE_UTURN, 
			MOVE_STEALTHROCK,
			MOVE_BULLDOZE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_CAREFUL,
		.level = 24,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //Technician
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_BULLETPUNCH,
			MOVE_AERIALACE,
			MOVE_UTURN, 
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCYTHER,
		.nature = NATURE_ADAMANT,
		.level = 23,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_AERIALACE, 
			MOVE_UTURN, 
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_JOLLY,
		.level = 23,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie
		.item = ITEM_COBA_BERRY, 
		.moves =
		{
			MOVE_BUGBITE,
			MOVE_BRICKBREAK, 
			MOVE_ROCKTOMB,
			MOVE_BULLETSEED, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARAQUANID,
		.nature = NATURE_IMPISH,
		.level = 23,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Bubble
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_BUGBITE,
			MOVE_WATERFALL, 
			MOVE_PROTECT,
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_MODEST,
		.level = 23,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_MAGNET, 
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_SIGNALBEAM, 
			MOVE_ROOST,
			MOVE_HIDDENPOWER,  //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route24_BugsyPostSurge[] =
//RAIN IN OVERWORLD
{
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.level = 24,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_ROCKBLAST, 
			MOVE_UTURN,
			MOVE_BULLDOZE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_CAREFUL,
		.level = 24,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //Technician
		.item = ITEM_SCIZORITE,
		.moves =
		{
			MOVE_BULLETPUNCH,
			MOVE_DUALWINGBEAT,
			MOVE_UTURN, 
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCYTHER,
		.nature = NATURE_ADAMANT,
		.level = 23,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_DUALWINGBEAT, 
			MOVE_BUGBITE, 
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_JOLLY,
		.level = 23,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie
		.item = ITEM_COBA_BERRY, 
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_CLOSECOMBAT, 
			MOVE_STONEEDGE,
			MOVE_BULLETSEED, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARAQUANID,
		.nature = NATURE_IMPISH,
		.level = 23,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Bubble
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_LIQUIDATION, 
			MOVE_PROTECT,
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_MODEST,
		.level = 23,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_MAGNET, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_BUGBUZZ, 
			MOVE_VOLTSWITCH,
			MOVE_ENERGYBALL,  
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Misty1[] =
{
	{
		.species = SPECIES_POLITOED,
		.nature = NATURE_SASSY,
		.level = 27,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Drizzle
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_FLIPTURN,
			MOVE_SCALD, 
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LUDICOLO,
		.nature = NATURE_MILD,
		.level = 28,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //Swift Swim
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_SCALD,
			MOVE_AURORABEAM, 
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MANTINE,
		.nature = NATURE_MODEST,
		.level = 27,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_WACAN_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_HURRICANE, 
			MOVE_ROOST, 
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FERROSEED,
		.nature = NATURE_SASSY,
		.level = 27,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Barbs
		.item = ITEM_EVIOLITE, 
		.moves =
		{
			MOVE_BULLETSEED,
			MOVE_GYROBALL, 
			MOVE_LEECHSEED,
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_MODEST,
		.level = 28,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Analytic
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_SCALD,
			MOVE_THUNDERBOLT, 
			MOVE_PSYSHOCK,
			MOVE_AURORABEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOXICROAK,
		.nature = NATURE_JOLLY,
		.level = 27,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY dry skin
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_DRAINPUNCH, 
			MOVE_POISONJAB,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Cerulean_Rocket[] =
{
	{
		.species = SPECIES_PERSIAN_A,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Feline Power
		.item = ITEM_BLACK_GLASSES,
		.moves =
		{
			MOVE_DARKPULSE,
			MOVE_WATERPULSE, 
			MOVE_PARTINGSHOT,
			MOVE_SHOCKWAVE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CROBAT,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_2, //Sniper
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_MEGADRAIN,
			MOVE_CROSSPOISON,
			MOVE_AIRCUTTER, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RATICATE,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Guts
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_STOMPINGTANTRUM, 
			MOVE_SUCKERPUNCH, 
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_OCTILLERY,
		.nature = NATURE_RASH,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Skill Link
		.item = ITEM_EXPERT_BELT, 
		.moves =
		{
			MOVE_BULLETSEED,
			MOVE_ROCKBLAST, 
			MOVE_WATERPULSE,
			MOVE_ICYWIND, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route6_Miniboss[] =
//Doubles Fight
{
	{
		.species = SPECIES_AMBIPOM,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY TEchnician
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_BEATUP, 
			MOVE_ARMTHRUST,
			MOVE_TAILSLAP,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MR_MIME_G,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //Ice Body
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_FREEZEDRY,
			MOVE_PSYSHOCK,
			MOVE_SHADOWBALL, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PERRSERKER,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tough Claws
		.item = ITEM_METAL_COAT,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_UTURN, 
			MOVE_BULLETPUNCH, 
			MOVE_IRONHEAD, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BOLTUND,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Strong Jaw
		.item = ITEM_EXPERT_BELT, 
		.moves =
		{
			MOVE_THUNDERFANG,
			MOVE_ICEFANG, 
			MOVE_FIREFANG,
			MOVE_PSYCHICFANGS, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GRANBULL,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_IAPAPA_BERRY, 
		.moves =
		{
			MOVE_BRICKBREAK,
			MOVE_PLAYROUGH, 
			MOVE_FIREPUNCH,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};


static const struct BattleTowerSpread sExpertBossBattle_Ssanne_Trainer1[] =
//DOUBLE BATTLE WITH SSANNE_TRAINER2
{
	{
		.species = SPECIES_SAMUROTT,
		.nature = NATURE_BASHFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Battle Armor
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_WATERPLEDGE,
			MOVE_FLASHCANNON, 
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sage Power
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FIREPLEDGE,
			MOVE_FOCUSBLAST, 
			MOVE_GRASSKNOT, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Ssanne_Trainer2[] =
//DOUBLE BATTLE WITH SSANNE_TRAINER1 
{
	{
		.species = SPECIES_DECIDUEYE,
		.nature = NATURE_BASHFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_MIRACLE_SEED,
		.moves =
		{
			MOVE_SPIRITSHACKLE,
			MOVE_GRASSPLEDGE, 
			MOVE_AIRSLASH, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SIMISAGE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sage Power
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_GRASSPLEDGE,
			MOVE_FOCUSBLAST, 
			MOVE_HIDDENPOWER, //fire
			MOVE_POWERGEM,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, // Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_THUNDERBOLT,
			MOVE_FLAMETHROWER, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Ssanne_Sailor1[] = 
//DOUBLE BATTLE WITH BELOW  
{
	{
		.species = SPECIES_CRADILY,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Storm Drain
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_POWERGEM,
			MOVE_GIGADRAIN, 
			MOVE_EARTHPOWER, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LUMINEON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Storm Drain
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER, //grass
			MOVE_FLIPTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GASTRODON,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, // Storm Drain
		.item = ITEM_RINDO_BERRY,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_EARTHPOWER,
			MOVE_ICEBEAM, 
			MOVE_SLUDGEWAVE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Ssanne_Sailor2[] = 
//DOUBLE BATTLE WITH ABOVE
{
	{
		.species = SPECIES_CRAMORANT,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //Gulp Missile
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SURF,
			MOVE_UTURN,
			MOVE_ICEBEAM, 
			MOVE_SAFEGUARD, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SURF,
			MOVE_EARTHPOWER, 
			MOVE_ICEBEAM,
			MOVE_REFLECT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MASQUERAIN,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_BUGBUZZ, 
			MOVE_ENERGYBALL, 
			MOVE_SAFEGUARD, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};
static const struct BattleTowerSpread sExpertBossBattle_Brendan_Battle2[] =
{
	{
		.species = SPECIES_CRAWDAUNT,
		.nature = NATURE_ADAMANT,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //adaptability
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_AQUAJET,
			MOVE_LIQUIDATION,
			MOVE_KNOCKOFF, 
			MOVE_XSCISSOR, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SLAKING,
		.nature = NATURE_JOLLY,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Truant
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_KNOCKOFF, 
			MOVE_BRICKBREAK,
			MOVE_SLACKOFF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PLUSLE,
		.nature = NATURE_TIMID,
		.level = 30,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Transistor 
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_GRASSKNOT, 
			MOVE_SURF, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.nature = NATURE_TIMID,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Trace
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_CALMMIND, 
			MOVE_MOONBLAST,
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_JOLLY,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_LEAFBLADE, 
			MOVE_DRAINPUNCH,
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HARIYAMA,
		.nature = NATURE_ADAMANT,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Guts
		.item = ITEM_FLAME_ORB, 
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_BULLETPUNCH, 
			MOVE_KNOCKOFF,
			MOVE_FAKEOUT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route11_Whitney[] =
{
	//set to player max level
	{
		.species = SPECIES_PYROAR,
		.nature = NATURE_TIMID,
		.level = 30,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Adaptability
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_HYPERVOICE, 
			MOVE_HIDDENPOWER, //grass
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WYRDEER,
		.nature = NATURE_TIMID,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Fur Coat
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_HYPERVOICE, 
			MOVE_MYSTICALFIRE,
			MOVE_CALMMIND,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LUVDISC,
		.nature = NATURE_TIMID,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY soul heart
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_LOVELYKISS,
			MOVE_SURF, 
			MOVE_MOONBLAST,
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSARING,
		.nature = NATURE_ADAMANT,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Guts
		.item = ITEM_EVIOLITE, 
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_EARTHQUAKE, 
			MOVE_SLACKOFF,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOGEKISS,
		.nature = NATURE_TIMID,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Serene Grace
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_ROOST,
			MOVE_AIRSLASH, 
			MOVE_THUNDERWAVE,
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_TIMID,
		.level = 30,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY natural cure
		.item = ITEM_ALTARIANITE, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_HYPERVOICE, 
			MOVE_FLAMETHROWER,
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_TwoIsland_Whitney[] =
{
	{
		.species = SPECIES_ZANGOOSE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Toxic Boost
		.item = ITEM_FOCUS_SASH,
		.statusCondition = STATUS_POISON, 
		.moves =
		{
			MOVE_FACADE,
			MOVE_CLOSECOMBAT, 
			MOVE_QUICKATTACK, 
			MOVE_FAKEOUT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_KASIB_BERRY, 
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_THUNDERWAVE, 
			MOVE_STEALTHROCK,
			MOVE_MILKDRINK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EXPLOUD,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Punk Rock
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZOROARK_H,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Serene Grace
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_HYPERVOICE, 
			MOVE_FLAMETHROWER,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSALUNA, //pre status burn
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Guts
		.item = ITEM_ASSAULT_VEST,
		.statusCondition = STATUS_BURN, 
		.moves =
		{
			MOVE_FACADE,
			MOVE_EARTHQUAKE, 
			MOVE_SUCKERPUNCH,
			MOVE_SHADOWCLAW,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_IMPISH,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Thick Fat
		.item = ITEM_SNORLAXITE, 
		.moves =
		{
			MOVE_CURSE,
			MOVE_REST, 
			MOVE_SLEEPTALK,
			MOVE_BODYSLAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_TwoIsland_AceT[] =
{
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PYROBALL,
			MOVE_CLOSECOMBAT, 
			MOVE_THUNDERPUNCH, 
			MOVE_STEALTHROCK, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow/Technician
		.item = ITEM_SCEPTILITE, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_BULLETSEED, 
			MOVE_SCALESHOT,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_YACHE_BERRY, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_WOODHAMMER, 
			MOVE_HEADLONGRUSH,
			MOVE_HEADSMASH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Striker/Speed Boost
		.item = ITEM_BLAZIKENITE, 
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_FLAREBLITZ, 
			MOVE_KNOCKOFF,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GRENINJA, 
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDROCANNON,
			MOVE_DARKHOLE, 
			MOVE_ICEBEAM,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_INTELEON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sniper
		.item = ITEM_SCOPE_LENS, 
		.moves =
		{
			MOVE_SNIPESHOT,
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_PkmnTower_AceT1[] =
{
{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_STONEEDGE, 
			MOVE_CLOSECOMBAT, 
			MOVE_WICKEDBLOW, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ENAMORUS,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Contrary
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_FLEURCANNON,
			MOVE_PSYCHIC, 
			MOVE_SUPERPOWER,
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_SALAMENCITE, 
		.moves =
		{
			MOVE_DOUBLEEDGE,
			MOVE_DRAGONRUSH, 
			MOVE_HYPERVOICE,
			MOVE_FIREBLAST, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Striker/Speed Boost
		.item = ITEM_GHOSTIUM_Z, 
		.moves =
		{
			MOVE_KINGSSHIELD,
			MOVE_SHADOWBALL, 
			MOVE_FLASHCANNON,
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VICTINI, 
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Victory Star
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_VCREATE,
			MOVE_BOLTSTRIKE, 
			MOVE_GLACIATE,
			MOVE_ZENHEADBUTT,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
		{
		.species = SPECIES_KELDEO, 
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blademaster
		.item = ITEM_WATER_GEM,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_SACREDSWORD, 
			MOVE_ICYWIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_PkmnTower_AceT2[] =
{
	{
		.species = SPECIES_TORKOAL,
		.nature = NATURE_RELAXED,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Drought
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_LAVAPLUME, 
			MOVE_BODYPRESS, 
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_CHOICE_SPECS, 
		.moves =
		{
			MOVE_SOLARBEAM,
			MOVE_WEATHERBALL, 
			MOVE_AIRSLASH,
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Absorb
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_SOLARBEAM, 
			MOVE_EARTHPOWER,
			MOVE_SLUDGEWAVE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DODRIO_S,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rock Head
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_FLAREBLITZ, 
			MOVE_HEADSMASH,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TYRANITAR, 
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Unnerve
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_SOLARBEAM, 
			MOVE_STONEEDGE,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rough Skin
		.item = ITEM_GARCHOMPITE, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_SCALESHOT, 
			MOVE_EARTHQUAKE,
			MOVE_FIREFANG, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_PkmnTower_AceT3[] =
{
{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grassy Surge
		.item = ITEM_GRASSY_SEED, 
		.moves =
		{
			MOVE_GRASSYGLIDE,
			MOVE_UTURN, 
			MOVE_KNOCKOFF, 
			MOVE_WOODHAMMER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_DUALWINGBEAT,
			MOVE_DRAGONDANCE, 
			MOVE_FIREPUNCH,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZEBSTRIKA_S,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Illuminate
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_THUNDER, 
			MOVE_FREEZEDRY,
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Self Sufficient
		.item = ITEM_ALCREMITE, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_MOONBLAST, 
			MOVE_MYSTICALFIRE,
			MOVE_ACIDARMOR, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SAMUROTT_H, 
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blademaster
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_CEASELESSEDGE, 
			MOVE_RAZORSHELL,
			MOVE_MEGAHORN,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DECIDUEYE_H, 
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Striker
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HIGHJUMPKICK,
			MOVE_GRASSYGLIDE, 
			MOVE_SWORDSDANCE,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	}
};


static const struct BattleTowerSpread sExpertBossBattle_PkmnTower_Morty[] =
{
	{
		.species = SPECIES_MIMIKYU,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Disguise
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SHADOWCLAW,
			MOVE_PLAYROUGH, 
			MOVE_SHADOWSNEAK, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_DRAINPUNCH, 
			MOVE_SPECTRALTHIEF,
			MOVE_SHADOWSNEAK, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SILVALLY_FAIRY,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_MULTIATTACK, 
			MOVE_FLAMETHROWER,
			MOVE_PARTINGSHOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSHIFU_SINGLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY urshifu thingy 
		.item = ITEM_BLACK_GLASSES, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_CLOSECOMBAT, 
			MOVE_WICKEDBLOW,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENGAR, 
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate Shadow Tag
		.item = ITEM_GENGARITE,
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_SLUDGEWAVE, 
			MOVE_FOCUSBLAST,
			MOVE_DESTINYBOND,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_POWERWHIP, 
			MOVE_KNOCKOFF,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};
static const struct BattleTowerSpread sExpertBossBattle_Vermilion_LtSurgeGymTrainer[] =
{
	{
		.species = SPECIES_ALAKAZAM,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_SHADOWBALL, 
			MOVE_ENERGYBALL,
			MOVE_HIDDENPOWER, //fighting
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FARFETCHD,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blademaster
		.item = ITEM_LEEK,
		.moves =
		{
			MOVE_SACREDSWORD,
			MOVE_NIGHTSLASH, 
			MOVE_CUT,
			MOVE_BRAVEBIRD,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWANNA,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY No Guard
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_HYDROPUMP, 
			MOVE_ICEBEAM, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PIKACHU_SURFING,
		.nature = NATURE_NAIVE,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Lightningrod
		.item = ITEM_LIGHT_BALL, 
		.moves =
		{
			MOVE_BOUNCYBUBBLE,
			MOVE_ZIPPYZAP, 
			MOVE_EXTREMESPEED,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DUGTRIO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Arena Trap
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE, 
			MOVE_NIGHTSLASH,
			MOVE_AERIALACE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Vermilion_LtSurge[] =
{ //electric terrain
	{
		.species = SPECIES_ROTOM_FROST,
		.nature = NATURE_TIMID,
		.level = 35,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY levitate
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD, 
			MOVE_FREEZEDRY, 
			MOVE_NASTYPLOT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELECTRODE_H,
		.nature = NATURE_NAIVE,
		.level = 36,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Reckless
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_CHLOROBLAST,
			MOVE_VOLTSWITCH, 
			MOVE_HIDDENPOWER, //ice 
			MOVE_EXPLOSION, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAICHU_A,
		.nature = NATURE_MODEST,
		.level = 36,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Surge Surfer
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_RISINGVOLTAGE,
			MOVE_PSYSHOCK, 
			MOVE_NASTYPLOT,
			MOVE_SURF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HITMONLEE,
		.nature = NATURE_ADAMANT,
		.level = 36,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY unburden
		.item = ITEM_ELECTRIC_SEED, 
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_CLOSECOMBAT, 
			MOVE_ROCKSLIDE,
			MOVE_BULKUP, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_JOLLY,
		.level = 36,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_BLACK_BELT, 
		.moves =
		{
			MOVE_PLASMAFISTS,
			MOVE_MACHPUNCH, 
			MOVE_ICEPUNCH,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_MODEST,
		.level = 36,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Mold Breaker 
		.item = ITEM_AMPHAROSITE, 
		.moves =
		{
			MOVE_RISINGVOLTAGE,
			MOVE_DRAGONPULSE, 
			MOVE_FOCUSBLAST,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route9_Cooltrainer[] =
{
	{
		.species = SPECIES_ROSERADE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_CLEARSMOG,
			MOVE_MEGADRAIN, 
			MOVE_HIDDENPOWER, //fire
			MOVE_SLEEPPOWDER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRUXISH,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Strong Jaw
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_AQUAFANG,
			MOVE_PSYCHICFANGS, 
			MOVE_CRUNCH,
			MOVE_AQUAJET,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLAREON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Toxic Boost (poison doesn't self damage)
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_FLAMECHARGE,
			MOVE_SACREDFIRE, 
			MOVE_FACADE, 
			MOVE_STOMPINGTANTRUM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHATOT,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tangled Feet
		.item = ITEM_SILK_SCARF, 
		.moves =
		{
			MOVE_CHATTER,
			MOVE_BOOMBURST, 
			MOVE_HEATWAVE,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Route9_Cooltrainer2[] =
{
	{
		.species = SPECIES_SMEARGLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Own Tempo
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_VCREATE,
			MOVE_DRAGONASCENT, 
			MOVE_TRICK,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SPINDA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_ASSIST,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNEASEL_H,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Inner Focus
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ASSIST,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LIEPARD,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Prankster
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ASSIST,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_RockTunnel_Cooltrainer[] =
{
	{
		.species = SPECIES_RIBOMBEE,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Shield Dust
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STICKYWEB,
			MOVE_UTURN, 
			MOVE_MOONBLAST,
			MOVE_STUNSPORE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BOUFFALANT,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Bull Rush
		.item = ITEM_SILK_SCARF,
		.moves =
		{
			MOVE_HEADCHARGE,
			MOVE_THROATCHOP, 
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLAWITZER,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Mega Launcher
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_WATERPULSE,
			MOVE_DARKPULSE, 
			MOVE_AURASPHERE, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAMPARDOS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY mold breaker
		.item = ITEM_HARD_STONE, 
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_ACCELEROCK, 
			MOVE_EARTHQUAKE,
			MOVE_HEADSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGMORTAR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY mega launcher
		.item = ITEM_CHARCOAL, 
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_AURASPHERE, 
			MOVE_THUNDERBOLT,
			MOVE_DARKPULSE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route10_Pokenerd[] =
{
	//doubles
	{
		.species = SPECIES_NINETALES,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Drought
		.item = ITEM_AIR_BALLOON, 
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_SOLARBEAM, 
			MOVE_SCORCHINGSANDS,
			MOVE_PSYSHOCK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VICTREEBEL,
		.nature = NATURE_RASH,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_SLUDGEBOMB, 
			MOVE_SOLARBLADE,
			MOVE_WEATHERBALL, //fire
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHERRIM,
		.nature = NATURE_LONELY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flower Gift
		.item = ITEM_MIRACLE_SEED,
		.moves =
		{
			MOVE_SOLARBLADE,
			MOVE_XSCISSOR, 
			MOVE_WEATHERBALL, 
			MOVE_RETURN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SYLVEON,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Pixilate
		.item = ITEM_PIXIE_PLATE, 
		.moves =
		{
			MOVE_HYPERVOICE,
			MOVE_WEATHERBALL, 
			MOVE_MISTYEXPLOSION,
			MOVE_PSYSHOCK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route8_Pokenerd[] =
//Doubles
{
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Justified
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_METEORMASH, 
			MOVE_EXTREMESPEED,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TSAREENA,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Queenly Majesty
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_BRUTALSWING,
			MOVE_POWERWHIP, 
			MOVE_KNOCKOFF,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_HEADSMASH, 
			MOVE_ACCELEROCK, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BASCULEGION_F,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Adaptability
		.item = ITEM_WEAKNESS_POLICY, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_HYDROPUMP, 
			MOVE_ICEBEAM,
			MOVE_SHADOWSNEAK, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRAVIARY_H,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_HEATWAVE, 
			MOVE_AIRSLASH,
			MOVE_ESPERWING, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Celadon_GymTrainer1[] =
//Doubles
{
	{
		.species = SPECIES_WEAVILE,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Infiltrator
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SURF,
			MOVE_KNOCKOFF, 
			MOVE_ICICLECRASH,
			MOVE_REFLECT, //to trick ai into thinking its a support mon otherwise it won't click surf
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_COALOSSAL,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Steam Engine
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_ROCKSLIDE, 
			MOVE_EARTHPOWER,
			MOVE_SCALD,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MARACTUS,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grassy Surge
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GRASSYGLIDE,
			MOVE_DRAINPUNCH, 
			MOVE_SPIKYSHIELD, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_COPPERAJAH,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Heavy Metal
		.item = ITEM_GRASSY_SEED, 
		.moves =
		{
			MOVE_HEAVYSLAM,
			MOVE_BODYPRESS, 
			MOVE_HEATCRASH, 
			MOVE_POWERWHIP,  
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	}
};

static const struct BattleTowerSpread sExpertBossBattle_Celadon_Erika1[] =
{
	{
		.species = SPECIES_CRADILY,
		.nature = NATURE_RELAXED,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Storm Drain
		.item = ITEM_GRASSY_SEED, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_TOXIC, 
			MOVE_POWERWHIP,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_GRASSY_SEED,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_ACROBATICS, 
			MOVE_CLOSECOMBAT,
			MOVE_STONEEDGE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_JOLLY,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician in Mega
		.item = ITEM_SCEPTILITE,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_BULLETSEED, 
			MOVE_DRACOBARRAGE, 
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOXTRICITY,
		.nature = NATURE_TIMID,
		.level = 44,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY punk rock
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_VOLTSWITCH, 
			MOVE_OVERDRIVE, 
			MOVE_HIDDENPOWER, //grass  
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SLOWBRO_G,
		.nature = NATURE_BOLD,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Regenerator
		.item = ITEM_BLACK_SLUDGE, 
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_SLUDGEBOMB, 
			MOVE_FLAMETHROWER,
			MOVE_TELEPORT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KARTANA,
		.nature = NATURE_JOLLY,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_GRASSYGLIDE, //illegal
			MOVE_CUT, 
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Lavender_Morty[] =
{
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_JOLLY,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_WICKEDBLOW, 
			MOVE_EARTHQUAKE,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_ADAMANT,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY HUstle
		.item = ITEM_REAPER_CLOTH,
		.moves =
		{
			MOVE_SHADOWPUNCH,
			MOVE_SHADOWSNEAK, 
			MOVE_DYNAMICPUNCH,
			MOVE_WILLOWISP,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MISMAGIUS, // ghost/fairy
		.nature = NATURE_TIMID,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_SPELL_TAG,
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_SHADOWBALL, 
			MOVE_MOONBLAST, 
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DELPHOX,
		.nature = NATURE_MODEST,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_MINDBLOWN,
			MOVE_PSYCHIC, 
			MOVE_GRASSKNOT,
			MOVE_DAZZLINGGLEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WEAVILE,
		.nature = NATURE_JOLLY,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY infiltrator
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_TRIPLEAXEL, 
			MOVE_KNOCKOFF,
			MOVE_LOWKICK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.level = 44,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_GENGARITE, 
		.moves =
		{
			MOVE_SLUDGEWAVE,
			MOVE_SHADOWBALL, 
			MOVE_FOCUSBLAST,
			MOVE_NASTYPLOT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_GameCorner_Rocket1[] =
{
	{
		.species = SPECIES_CRUSTLE,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY sturdy
		.item = ITEM_WHITE_HERB, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ROCKBLAST, 
			MOVE_XSCISSOR,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EELEKTROSS,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_FLAMETHROWER, 
			MOVE_THUNDERBOLT,
			MOVE_HYDROPUMP,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWALOT,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_SLUDGEBOMB, 
			MOVE_EARTHPOWER, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MASQUERAIN,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY intimidate
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_QUIVERDANCE,
			MOVE_HYDROPUMP, 
			MOVE_BUGBUZZ,
			MOVE_AIRSLASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_RocketHideout_GruntMini1[] =
//Doubles
{
	{
		.species = SPECIES_WEEZING_G,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Neutralizingg Gas
		.item = ITEM_SHUCA_BERRY, 
		.moves =
		{
			MOVE_SLUDGEBOMB,
			MOVE_STRANGESTEAM, 
			MOVE_FLAMETHROWER,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SLAKING,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Truant
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_DOUBLEEDGE,
			MOVE_FIREPUNCH, 
			MOVE_KNOCKOFF,
			MOVE_ICEPUNCH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LILLIGANT_H,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Hustle
		.item = ITEM_MIRACLE_SEED,
		.moves =
		{
			MOVE_LEAFBLADE,
			MOVE_CLOSECOMBAT, 
			MOVE_STONEEDGE, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ROTOM_FROST,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_CHARTI_BERRY, 
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FROSTBREATH, 
			MOVE_FREEZEDRY,
			MOVE_HIDDENPOWER, //fire 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_RocketHideout_GruntMini2[] =
{
	{
		.species = SPECIES_STUNFISK,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Water Absorb
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_THUNDERWAVE, 
			MOVE_EARTHPOWER,
			MOVE_VOLTSWITCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRELOOM,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Poison Heal
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_SPORE,
			MOVE_SUBSTITUTE, 
			MOVE_FOCUSPUNCH,
			MOVE_ROCKSLIDE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SKUNTANK,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Aftermath
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_DARKPULSE, 
			MOVE_FIREBLAST, 
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KLINKLANG,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Steelworker
		.item = ITEM_OCCA_BERRY, 
		.moves =
		{
			MOVE_SHIFTGEAR,
			MOVE_GEARGRIND, 
			MOVE_VOLTTACKLE,
			MOVE_SUPERPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_RocketHideout_Giovanni1[] =
{
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.level = 47,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PYROBALL,
			MOVE_CLOSECOMBAT, 
			MOVE_THUNDERPUNCH,
			MOVE_STEALTHROCK,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_TIMID,
		.level = 47,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_SLUDGEWAVE, 
			MOVE_FIREBLAST,
			MOVE_THUNDERBOLT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_JOLLY,
		.level = 47,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_WHITE_HERB, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_EARTHQUAKE, 
			MOVE_WOODHAMMER,
			MOVE_HEADSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SILVALLY_GHOST,
		.nature = NATURE_JOLLY,
		.level = 47,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_GHOST_GEM, 
		.moves =
		{
			MOVE_MULTIATTACK,
			MOVE_PARTINGSHOT, 
			MOVE_THUNDERWAVE,
			MOVE_EXPLOSION, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.level = 47,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_FLYINIUM_Z, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL, 
			MOVE_EARTHQUAKE,
			MOVE_BOUNCE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KANGASKHAN,
		.nature = NATURE_JOLLY,
		.level = 47,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Inner Focus
		.item = ITEM_KANGASKHANITE, 
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_BODYSLAM, 
			MOVE_CRUNCH,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Lavender_Channeler[] =
//THIS IS A DOUBLE BATTLE
{
	{
		.species = SPECIES_PINCURCHIN,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY electric surge
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_RISINGVOLTAGE,
			MOVE_BOUNCYBUBBLE, 
			MOVE_VOLTSWITCH,
			MOVE_SPIKES,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_SPIRITBREAK,
			MOVE_LIGHTSCREEN, 
			MOVE_REFLECT,
			MOVE_DARKESTLARIAT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRIFBLIM,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_ELECTRIC_SEED,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_SHADOWBALL, 
			MOVE_AIRSLASH, 
			MOVE_STRENGTHSAP, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CRESSELIA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_ELECTRIC_SEED, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_PSYSHOCK, 
			MOVE_MOONBLAST,
			MOVE_MOONLIGHT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_POLTEAGEIST,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Cursed Body
		.item = ITEM_WHITE_HERB, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_SHADOWBALL, 
			MOVE_STOREDPOWER,
			MOVE_HIDDENPOWER, //fighting
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_Lavender_Rocket1[] =
{
	{
		.species = SPECIES_PELIPPER,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY DRIZZLE
		.item = ITEM_WACAN_BERRY, 
		.moves =
		{
			MOVE_WEATHERBALL,
			MOVE_HURRICANE, 
			MOVE_UTURN,
			MOVE_TAILWIND,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_OVERQWIL,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Swift Swim
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_GUNKSHOT, 
			MOVE_THROATCHOP,
			MOVE_DESTINYBOND,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NINETALES_A,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Serene Grace
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_BLIZZARD, 
			MOVE_FREEZEDRY,
			MOVE_WEATHERBALL,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MR_RIME,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Ice Body
		.item = ITEM_WIDE_LENS, 
		.moves =
		{
			MOVE_FREEZEDRY,
			MOVE_THUNDER, 
			MOVE_PSYCHIC,
			MOVE_HYPNOSIS, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCTOVISH,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Absorb
		.item = ITEM_WATER_GEM, 
		.moves =
		{
			MOVE_FREEZEDRY,
			MOVE_PSYCHICFANGS, 
			MOVE_ICICLECRASH,
			MOVE_FISHIOUSREND, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Lavender_Rocket2[] =
{
	{
		.species = SPECIES_KLEFKI,
		.nature = NATURE_CAREFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prankster
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SPIKES,
			MOVE_THUNDERWAVE, 
			MOVE_FOULPLAY,
			MOVE_PLAYROUGH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_OBSTAGOON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Guts
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_FACADE, 
			MOVE_PARTINGSHOT,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRAVIARY,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Defiant
		.item = ITEM_FIGHTING_GEM,
		.moves =
		{
			MOVE_BULKUP,
			MOVE_BRAVEBIRD, 
			MOVE_CLOSECOMBAT, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGALGE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY adaptability
		.item = ITEM_BLACK_SLUDGE, 
		.moves =
		{
			MOVE_DRAGONPULSE,
			MOVE_SLUDGEWAVE, 
			MOVE_FLIPTURN,
			MOVE_SCALD, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HONCHKROW,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Super Luck
		.item = ITEM_SCOPE_LENS, 
		.moves =
		{
			MOVE_DRILLPECK,
			MOVE_NIGHTSLASH, 
			MOVE_HEATWAVE,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_Lavender_Rocket3[] =
{
{
		.species = SPECIES_SLURPUFF,
		.nature = NATURE_TIMID,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Unburden
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_DAZZLINGGLEAM,
			MOVE_MISTYEXPLOSION, 
			MOVE_FIREBLAST,
			MOVE_THUNDERBOLT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HYDREIGON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY levitate
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DARKPULSE,
			MOVE_DRAGONPULSE, 
			MOVE_FIREBLAST,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Magnet Pull
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_FLASHCANNON, 
			MOVE_THUNDERBOLT, 
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Fist
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_SHADOWPUNCH, 
			MOVE_HEATCRASH,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Liquid Voice
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_DRAININGKISS, 
			MOVE_HYPERVOICE,
			MOVE_PSYCHIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route16_Biker1[] =
{
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY inner Focus
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_CLOSECOMBAT, 
			MOVE_KNOCKOFF,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sand Veil
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_BOOMBURST, 
			MOVE_WEATHERBALL,
			MOVE_SURF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DUGTRIO_A,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD, 
			MOVE_SUCKERPUNCH, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route16_Biker2[] =
{
	{
		.species = SPECIES_ZYGARDE_10,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Aura Break
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_THOUSANDARROWS,
			MOVE_EXTREMESPEED, 
			MOVE_DRACOBARRAGE, //illegal
			MOVE_GLARE,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HARIYAMA,
		.nature = NATURE_CAREFUL,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_KNOCKOFF, 
			MOVE_DRAINPUNCH,
			MOVE_HEAVYSLAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOLEM,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Veil
		.item = ITEM_ROCK_GEM,
		.moves =
		{
			MOVE_HEADSMASH,
			MOVE_HEADLONGRUSH, 
			MOVE_SUCKERPUNCH, 
			MOVE_EXPLOSION, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route16_Biker3[] =
{
	{
		.species = SPECIES_KINGLER,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter Tough Claws Mega
		.item = ITEM_KINGLERITE,
		.moves =
		{
			MOVE_CRABHAMMER,
			MOVE_METEORMASH, 
			MOVE_CLOSECOMBAT,
			MOVE_AQUAJET,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRACOZOLT,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_ELECTRIC_GEM,
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_DRAGONCLAW, 
			MOVE_EARTHQUAKE, 
			MOVE_FIREBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route16_Biker4[] =
{
	{
		.species = SPECIES_STUNFISK,
		.nature = NATURE_CALM,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Veil
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_THUNDERWAVE, 
			MOVE_EARTHPOWER,
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRACOVISH,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_WATER_GEM,
		.moves =
		{
			MOVE_FISHIOUSREND,
			MOVE_DRAGONCLAW, 
			MOVE_PSYCHICFANGS,
			MOVE_CRUNCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BEEDRILL,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Adaptability Mega
		.item = ITEM_BEEDRILLITE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_DRILLRUN, 
			MOVE_POISONJAB, 
			MOVE_PURSUIT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ROTOM_HEAT,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_OVERHEAT, 
			MOVE_THUNDERWAVE, 
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_UTURN,
			MOVE_HYDROPUMP, 
			MOVE_GUNKSHOT, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARON,
		.nature = NATURE_BASHFUL,
		.level = 1,
		.hpIv = 0,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY STURDY
		.item = ITEM_SHELL_BELL,
		.moves =
		{
			MOVE_ENDEAVOR,
			MOVE_NONE, 
			MOVE_NONE, 
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route16_Biker5[] =
{
	{
		.species = SPECIES_ACCELGOR,
		.nature = NATURE_TIMID,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_BUGBUZZ, 
			MOVE_FOCUSBLAST,
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Rush
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD, 
			MOVE_STONEEDGE,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GIGALITH,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Force
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONEEDGE, 
			MOVE_EXPLOSION,
			MOVE_BODYPRESS,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ROSERADE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_FIRE_GEM,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_WEATHERBALL, 
			MOVE_HIDDENPOWER, //fire
			MOVE_SLEEPPOWDER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Limber
		.item = ITEM_LOPUNNITE,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_RETURN, 
			MOVE_CLOSECOMBAT, 
			MOVE_TRIPLEAXEL,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route16_Biker6[] =
{
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_SASSY,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp
		.item = ITEM_RINDO_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_FLIPTURN, 
			MOVE_EARTHQUAKE,
			MOVE_YAWN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rock Head
		.item = ITEM_ROCK_GEM,
		.moves =
		{
			MOVE_BRAVEBIRD, //illegal 
			MOVE_HEADSMASH,  //illegal
			MOVE_EARTHQUAKE, 
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician Mega
		.item = ITEM_SCIZORITE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_BULLETPUNCH, 
			MOVE_ROCKSMASH,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Veil
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE,
			MOVE_SCALESHOT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CACTURNE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_NEEDLEARM,
			MOVE_SUCKERPUNCH, 
			MOVE_KNOCKOFF, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route18_Biker1[] =
{
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_NAIVE,
		.level = THREE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sturdy
		.item = ITEM_CUSTAP_BERRY, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_VOLTSWITCH, 
			MOVE_EXPLOSION,
			MOVE_BODYPRESS,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_KNOCKOFF, 
			MOVE_SUCKERPUNCH,
			MOVE_IRONHEAD,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WHISCASH,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Water Bubble
		.item = ITEM_FLYINIUM_Z, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL, 
			MOVE_EARTHQUAKE,
			MOVE_BOUNCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_FLYING_GEM, 
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_DRAGONPULSE, 
			MOVE_HYDROPUMP,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Analytic
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLIPTURN,
			MOVE_HYDROPUMP, 
			MOVE_THUNDER,
			MOVE_PSYCHIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route18_Trainer1[] = 
{
	{
		.species = SPECIES_CRAMORANT_GORGING,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY gulp missile
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SURF,
			MOVE_HURRICANE, 
			MOVE_ICEBEAM,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DECIDUEYE,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_GHOSTIUM_Z, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_HURRICANE, 
			MOVE_SPIRITSHACKLE,
			MOVE_LEAFBLADE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PORYGON2,
		.nature = NATURE_BOLD,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Download
		.item = ITEM_EVIOLITE, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_ICEBEAM, 
			MOVE_FOULPLAY,
			MOVE_TELEPORT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EMPOLEON,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Competitive
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM, 
			MOVE_FLIPTURN,
			MOVE_GRASSKNOT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Competitive
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_EARTHPOWER, 
			MOVE_SLUDGEWAVE,
			MOVE_BUBBLEBEAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route18_Trainer2[] = 
//make this dragon tamer doubles
{
	{
		.species = SPECIES_REGICE,
		.nature = NATURE_BOLD,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Filter
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_BULLDOZE,
			MOVE_THUNDER, 
			MOVE_FOCUSBLAST,
			MOVE_FREEZEDRY, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MILOTIC,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Competitive
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_BOUNCYBUBBLE,
			MOVE_ICEBEAM, 
			MOVE_MIRRORCOAT,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LAPRAS,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Absorb Liquid Voice
		.item = ITEM_LAPRASITE, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_DRACOBARRAGE, 
			MOVE_THUNDER,
			MOVE_FREEZEDRY,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_SOUL_DEW, 
		.moves =
		{
			MOVE_SURF,
			MOVE_DRACOBARRAGE, 
			MOVE_THUNDERWAVE,
			MOVE_AURASPHERE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_FLYING_GEM, 
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_THUNDER, 
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
}; 

static const struct BattleTowerSpread sExpertBossBattle_Route18_Trainer3[] = 
//make ace trainer
{
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Cursed Body
		.item = ITEM_GHOSTIUM_Z, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_THUNDER, 
			MOVE_DRACOBARRAGE,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KABUTOPS,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Swift Swim
		.item = ITEM_WATER_GEM, 
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_STONEAXE, 
			MOVE_SACREDSWORD,
			MOVE_AQUAJET,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter
		.item = ITEM_PINSIRITE, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_DOUBLEEDGE, 
			MOVE_QUICKATTACK,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_OMASTAR,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_HYDROPUMP, 
			MOVE_ICEBEAM,
			MOVE_POWERGEM,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAIKOU,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Inner Focus
		.item = ITEM_AIR_BALLOON, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_WEATHERBALL, 
			MOVE_HIDDENPOWER, //ice
			MOVE_CALMMIND,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer1[] = 
//drought in overworld, bird keeper
{
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_YACHE_BERRY, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_EARTHQUAKE, 
			MOVE_STEALTHROCK,
			MOVE_STONEEDGE,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze Tough Claws
		.item = ITEM_CHARIZARDITE_X,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_DRACOBARRAGE,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOGEKISS,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Super Luck
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_AEROBLAST,
			MOVE_FIREBLAST, 
			MOVE_MOONBLAST, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Speed Boost
		.item = ITEM_FIGHTING_GEM,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_CLOSECOMBAT, 
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TROPIUS,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GROWTH,
			MOVE_GIGADRAIN, 
			MOVE_WEATHERBALL, 
			MOVE_DRAGONPULSE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer2[] = 
//drought in overworld 
{
	{
		.species = SPECIES_SHIFTRY,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_SOLARBLADE, 
			MOVE_KNOCKOFF, 
			MOVE_PARTINGSHOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sap Sipper
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_DRACOBARRAGE, 
			MOVE_SLUDGEBOMB, 
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SYLVEON,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Pixilate
		.item = ITEM_EEVIUM_Z,
		.moves =
		{
			MOVE_LASTRESORT,
			MOVE_HYPERVOICE, 
			MOVE_WEATHERBALL, 
			MOVE_STOREDPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HEATRAN,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flash Fire
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_MAGMASTORM,
			MOVE_SOLARBEAM, 
			MOVE_EARTHPOWER, 
			MOVE_PROTECT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_BOLD,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sweet Veil
		.item = ITEM_ALCREMITE,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_MYSTICALFIRE, 
			MOVE_MISTYEXPLOSION, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer3[] = 
//drought in overworld 
{
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_WICKEDBLOW, 
			MOVE_EARTHQUAKE, 
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SOLARBEAM,
			MOVE_HIDDENPOWER, 
			MOVE_SLUDGEBOMB, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHANSEY,
		.nature = NATURE_BOLD,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Natural Cure
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_SEISMICTOSS, 
			MOVE_TELEPORT, 
			MOVE_SOFTBOILED, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHANDELURE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Shadow Tag
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_SOLARBEAM, 
			MOVE_SHADOWBALL, 
			MOVE_TRICK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_BOLD,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Natural Cure
		.item = ITEM_ALTARIANITE,
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_HYPERVOICE, 
			MOVE_ROOST, 
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer4[] =
//first doubles
{
	{
		.species = SPECIES_CHERRIM,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flower Gift 1.5x speed and attack in sun 
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PETALBLIZZARD,
			MOVE_SAFEGUARD, //needs this to trick AI into thinking its a support mon so it clicks petal blizzard
			MOVE_XSCISSOR,
			MOVE_RETURN, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Chlorophyll
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_PETALBLIZZARD,
			MOVE_SAFEGUARD, //needs this to trick AI into thinking its a support mon so it clicks petal blizzard
			MOVE_EARTHPOWER,
			MOVE_WEATHERBALL, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLORGES,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_2, //ABILITY Natural Cure
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_PETALBLIZZARD,
			MOVE_MOONBLAST, 
			MOVE_SAFEGUARD, //needs this to trick AI into thinking its a support mon so it clicks petal blizzard
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer5[] =
//second doubles
{
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sap Sipper
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DRAGONHAMMER,
			MOVE_FIREPUNCH, 
			MOVE_DRAINPUNCH,
			MOVE_POWERWHIP, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BOUFFALANT,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sap Sipper
		.item = ITEM_NORMAL_GEM, 
		.moves =
		{
			MOVE_HEADCHARGE,
			MOVE_HIGHHORSEPOWER, 
			MOVE_ZENHEADBUTT,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZEBSTRIKA,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sap Sipper
		.item = ITEM_ELECTRIUM_Z, 
		.moves =
		{
			MOVE_BOLTSTRIKE,
			MOVE_FLAREBLITZ, 
			MOVE_LOWKICK,
			MOVE_RETURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer6[] =
//drought overworld
{
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solid Rock
		.item = ITEM_RINDO_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_STONEEDGE, 
			MOVE_EARTHQUAKE,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solar Power
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_SOLARBEAM,
			MOVE_FIERYDANCE, 
			MOVE_EARTHPOWER,
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Synchronize
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_ZENHEADBUTT,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAPIDASH,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blazing Soul
		.item = ITEM_FIRE_GEM, 
		.moves =
		{
			MOVE_FIRELASH,
			MOVE_SOLARBLADE, 
			MOVE_JUMPKICK,
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Cursed Body
		.item = ITEM_GHOSTIUM_Z, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_DRACOBARRAGE, 
			MOVE_FIREBLAST,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer7[] =
//drought overworld 
{
	{
		.species = SPECIES_CRUSTLE,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sturdy
		.item = ITEM_CUSTAP_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_SPIKES, 
			MOVE_STONEEDGE,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LEAVANNY,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SOLARBLADE,
			MOVE_SWORDSDANCE, 
			MOVE_XSCISSOR,
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CAMERUPT,
		.nature = NATURE_MODEST,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solid Rock
		.item = ITEM_CAMERUPTITE, 
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_EARTHPOWER, 
			MOVE_SOLARBEAM,
			MOVE_ANCIENTPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EELEKTROSS,
		.nature = NATURE_CALM,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FIREBLAST, 
			MOVE_GIGADRAIN,
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Thick Fat
		.item = ITEM_ICIUM_Z, 
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_MOUNTAINGALE,  
			MOVE_ICESHARD,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_Route13_Trainer8[] =
//drought overworld
{
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_SOLARBEAM, 
			MOVE_PSYSHOCK,
			MOVE_WEATHERBALL, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCHEOPS,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defeatist
		.item = ITEM_SHARP_BEAK, 
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_HEADSMASH, 
			MOVE_EARTHQUAKE,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Bull Rush
		.item = ITEM_FIRE_GEM, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_CLOSECOMBAT, 
			MOVE_WILDCHARGE,
			MOVE_SOLARBEAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},	
	{
		.species = SPECIES_JOLTEON,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Volt Absorb
		.item = ITEM_EEVIUM_Z, 
		.moves =
		{
			MOVE_LASTRESORT,
			MOVE_THUNDERBOLT, 
			MOVE_WEATHERBALL,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRUDDIGON,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rough Skin
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_GLARE,
			MOVE_DRAGONHAMMER, 
			MOVE_GUNKSHOT,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route12_Electrician[] = 
//hail overworld
{
	{
		.species = SPECIES_ROTOM_FROST,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_VOLTSWITCH, 
			MOVE_THUNDERWAVE, 
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TORNADUS,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Defiant
		.item = ITEM_FLYING_GEM, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_ACROBATICS, 
			MOVE_KNOCKOFF,
			MOVE_SUPERPOWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_BLIZZARD, 
			MOVE_FIREBLAST,
			MOVE_THUNDERBOLT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tinted Lens
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BUGBUZZ,
			MOVE_AIRSLASH, 
			MOVE_UTURN, 
			MOVE_GIGADRAIN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Mega Launcher Mega
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_BLIZZARD, 
			MOVE_AURASPHERE, 
			MOVE_DARKPULSE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_BOLD,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE, 
			MOVE_PROTECT, 
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route12_Cooltrainer[] = 
//hail overworld
{
	{
		.species = SPECIES_DARMANITAN_G,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Zen Mode
		.item = ITEM_CHARTI_BERRY, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_FLAREBLITZ, 
			MOVE_ICICLECRASH,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
{
		.species = SPECIES_SANDSLASH_A,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Slush Rush
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_IRONHEAD,
			MOVE_ICICLECRASH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_CAREFUL,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_MACHPUNCH, 
			MOVE_KNOCKOFF, 
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_SHADOWBALL, 
			MOVE_FOCUSBLAST, 
			MOVE_SLUDGEWAVE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route12_Fisherman[] = 
//hail overworld
//change this trainer class
{
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_TIMID,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Snow Cloak
		.item = ITEM_LIGHT_CLAY, 
		.moves =
		{
			MOVE_AURORAVEIL,
			MOVE_BLIZZARD, 
			MOVE_SHADOWBALL,
			MOVE_DESTINYBOND,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BARBARACLE,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Tough Claws
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_LIQUIDATION, 
			MOVE_CLOSECOMBAT,
			MOVE_STONEEDGE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_NAIVE,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_BLIZZARD, 
			MOVE_LOWKICK, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};
static const struct BattleTowerSpread sExpertBossBattle_SilphCo_GarySquirtle[] =
{
	{
		.species = SPECIES_AZELF,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EXPLOSION, 
			MOVE_FLAMETHROWER,
			MOVE_PSYCHIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Weakness policy
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_AUTOTOMIZE,
			MOVE_AIRSLASH, 
			MOVE_FLAMETHROWER,
			MOVE_GIGADRAIN,
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_FIGHTING_GEM, 
		.moves =
		{
			MOVE_MACHPUNCH,
			MOVE_PLASMAFISTS, 
			MOVE_CLOSECOMBAT,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Aerilate
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_SPORE,
			MOVE_DOUBLEEDGE, 
			MOVE_LEAFBLADE,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY sheer force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_ROCKSLIDE, 
			MOVE_UTURN,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Torrent
		.item = ITEM_BLASTOISINITE, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_WATERPULSE, 
			MOVE_DARKPULSE,
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};
static const struct BattleTowerSpread sExpertBossBattle_SilphCo_GaryBulba[] =
{
	{
		.species = SPECIES_AZELF,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EXPLOSION, 
			MOVE_FLAMETHROWER,
			MOVE_PSYCHIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_AUTOTOMIZE,
			MOVE_AIRSLASH, 
			MOVE_FLAMETHROWER,
			MOVE_GIGADRAIN,
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_FIGHTING_GEM, 
		.moves =
		{
			MOVE_MACHPUNCH,
			MOVE_PLASMAFISTS, 
			MOVE_CLOSECOMBAT,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOREBYSS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dazzling
		.item = ITEM_WHITE_HERB, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_SURF, 
			MOVE_MOONBLAST,
			MOVE_PSYCHIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY sheer force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_ROCKSLIDE, 
			MOVE_UTURN,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Thick Fat
		.item = ITEM_VENUSAURITE, 
		.moves =
		{
			MOVE_SLEEPPOWDER,
			MOVE_GIGADRAIN, 
			MOVE_SLUDGEBOMB,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_SilphCo_GaryChar[] =
{
	{
		.species = SPECIES_AZELF,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EXPLOSION, 
			MOVE_FLAMETHROWER,
			MOVE_PSYCHIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Aerilate
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_SPORE,
			MOVE_DOUBLEEDGE, 
			MOVE_LEAFBLADE,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_AUTOTOMIZE,
			MOVE_AIRSLASH, 
			MOVE_FLAMETHROWER,
			MOVE_GIGADRAIN,
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_FIGHTING_GEM, 
		.moves =
		{
			MOVE_MACHPUNCH,
			MOVE_PLASMAFISTS, 
			MOVE_CLOSECOMBAT,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOREBYSS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dazzling
		.item = ITEM_WHITE_HERB, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_SURF, 
			MOVE_MOONBLAST,
			MOVE_PSYCHIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Flame Body, Tough Claws in Mega
		.item = ITEM_CHARIZARDITE_X, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_DRAGONCLAW, 
			MOVE_FLAREBLITZ,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_SilphCo_Ariana[] =
{
	{
		.species = SPECIES_INCINEROAR,
		.nature = NATURE_CAREFUL,
		.level = 55,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_KNOCKOFF, 
			MOVE_WILLOWISP,
			MOVE_FLAREBLITZ,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_MODEST,
		.level = 55,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Liquid Voice
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_HYPERVOICE,
			MOVE_SCALD, 
			MOVE_PSYCHIC,
			MOVE_ENERGYBALL,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_ADAMANT,
		.level = 56,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Intimidate
		.item = ITEM_MAWILITE,
		.moves =
		{
			MOVE_PLAYROUGH,
			MOVE_SUCKERPUNCH, 
			MOVE_IRONHEAD, 
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_SilphCo_Archer[] =
{
	{
		.species = SPECIES_ARTICUNO_G,
		.nature = NATURE_TIMID,
		.level = 55,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Competitive
		.item = ITEM_COLBUR_BERRY, 
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_FOCUSBLAST, 
			MOVE_ROOST,
			MOVE_AIRSLASH,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_QUIET,
		.level = 55,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Stance Change
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_FLASHCANNON, 
			MOVE_SHADOWSNEAK,
			MOVE_KINGSSHIELD,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_NAIVE,
		.level = 56,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Early Bird, Dark Aura Mega
		.item = ITEM_HOUNDOOMINITE,
		.moves =
		{
			MOVE_PURSUIT,
			MOVE_FIERYWRATH, 
			MOVE_HEATWAVE, 
			MOVE_SCORCHINGSANDS, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};
static const struct BattleTowerSpread sExpertBossBattle_SilphCo_Giovanni[] =
//perma sandstorm
{
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_JOLLY,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Thick Fat
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STONEEDGE,
			MOVE_ICESHARD, 
			MOVE_HEADLONGRUSH,
			MOVE_ICICLECRASH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRACOVISH,
		.nature = NATURE_ADAMANT,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_WATER_GEM,
		.moves =
		{
			MOVE_FISHIOUSREND,
			MOVE_PSYCHICFANGS, 
			MOVE_CRUNCH,
			MOVE_DRAGONCLAW,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL, 
			MOVE_EARTHQUAKE, 
			MOVE_BOUNCE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_REGIROCK,
		.nature = NATURE_CAREFUL,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solid Rock
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_CURSE,
			MOVE_DRAINPUNCH, 
			MOVE_ROCKSLIDE,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_JOLLY,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Rush
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_IRONHEAD,
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.level = 57,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Veil, Sand Force Mega
		.item = ITEM_GARCHOMPITE, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_SCALESHOT,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Saffron_Chuck[] =
//all chuck pokemon will live at 1 HP if supposed to be one shot when HP is above 75%
{
	{
		.species = SPECIES_COBALION,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Justified
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_SACREDSWORD, 
			MOVE_CUT,
			MOVE_VOLTSWITCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Touch
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_POISONJAB, 
			MOVE_KNOCKOFF,
			MOVE_EARTHQUAKE,
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KOMMO_O,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Heal
		.item = ITEM_KOMMONIUM_Z,
		.moves =
		{
			MOVE_CLANGINGSCALES,
			MOVE_CLOSECOMBAT, 
			MOVE_POISONJAB, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Speed BOost
		.item = ITEM_LIECHI_BERRY, 
		.moves =
		{
			MOVE_BLAZEKICK,
			MOVE_KNOCKOFF, 
			MOVE_THUNDERPUNCH,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dauntless Shield
		.item = ITEM_RUSTED_SHIELD, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_BEHEMOTHBASH, 
			MOVE_BODYPRESS,
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Justified, Blade Master Mega
		.item = ITEM_GALLADITE, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_DRAINPUNCH, 
			MOVE_PSYCHOCUT,
			MOVE_NIGHTSLASH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Saffron_Sabrina[] =
//doubles, perma trick room
{
	{
		.species = SPECIES_TAPU_FINI,
		.nature = NATURE_QUIET,
		.level = 59,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Misty Surge
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_MISTYEXPLOSION,
			MOVE_MUDDYWATER, 
			MOVE_MOONBLAST,
			MOVE_FLIPTURN,
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CAMERUPT,
		.nature = NATURE_QUIET,
		.level = 59,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sheer Force
		.item = ITEM_CAMERUPTITE,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_EARTHPOWER, 
			MOVE_STEAMERUPTION, 
			MOVE_SLACKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GLASTRIER,
		.nature = NATURE_BRAVE,
		.level = 59,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Moxie
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_ICEHAMMER, 
			MOVE_CLOSECOMBAT,
			MOVE_HIGHHORSEPOWER,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_QUIET,
		.level = 59,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_FIGHTINIUM_Z, 
		.moves =
		{
			MOVE_MOONBLAST, //illegal
			MOVE_FLASHCANNON, 
			MOVE_FOCUSBLAST,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_SASSY,
		.level = 59,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Fist
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DOUBLEIRONBASH,
			MOVE_HIGHHORSEPOWER, 
			MOVE_THUNDERPUNCH,
			MOVE_BRICKBREAK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_JELLICENT,
		.nature = NATURE_QUIET,
		.level = 59,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Water bubble
		.item = ITEM_WATER_GEM, 
		.moves =
		{
			MOVE_WATERSPOUT,
			MOVE_SHADOWBALL, 
			MOVE_STRENGTHSAP,
			MOVE_HYDROPUMP, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Saffron_DumbassKid[] =
//perma rain
{
	{
		.species = SPECIES_BEARTIC,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Swift Swim
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_ICEHAMMER, 
			MOVE_LIQUIDATION,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Static
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_THUNDER, 
			MOVE_HURRICANE, 
			MOVE_WEATHERBALL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FROSMOTH,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Ice Scales
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_QUIVERDANCE,
			MOVE_HURRICANE, 
			MOVE_WEATHERBALL,
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_IMPISH,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Hydration
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_CURSE,
			MOVE_REST, 
			MOVE_DRACOBARRAGE,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_BULLETPUNCH,
			MOVE_UTURN, 
			MOVE_DUALWINGBEAT,
			MOVE_ROCKSMASH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp, Swift Swim in Mega
		.item = ITEM_SWAMPERTITE, 
		.moves =
		{
			MOVE_POWERUPPUNCH,
			MOVE_WATERFALL, 
			MOVE_EARTHQUAKE,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Pewter_BrockRematch[] =
//perma sandstorm, super effective moves deal 33% less to Brock's mons, level scales
{
	{
		.species = SPECIES_TERRAKION,
		.nature = NATURE_JOLLY,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Justified
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_CLOSECOMBAT, 
			MOVE_STONEEDGE,
			MOVE_XSCISSOR,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LANDORUS,
		.nature = NATURE_NAIVE,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_UTURN,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE, 
			MOVE_GRASSKNOT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZYGARDE,
		.nature = NATURE_CAREFUL,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY power construct
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_COIL,
			MOVE_THOUSANDARROWS, 
			MOVE_REST,
			MOVE_SLEEPTALK,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SANDSLASH,
		.nature = NATURE_JOLLY,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sand Rush
		.item = ITEM_GROUNDIUM_Z, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EMPOLEON,
		.nature = NATURE_BOLD,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Competitive
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_TOXIC,
			MOVE_ROOST, 
			MOVE_ICEBEAM, 
			MOVE_SCALD, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_JOLLY,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Pressure
		.item = ITEM_AERODACTYLITE, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_STONEEDGE, 
			MOVE_EARTHQUAKE,
			MOVE_DUALWINGBEAT, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Cerulean_MistyRematch[] =
//perma rain
{
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_NAIVE,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_SURF, 
			MOVE_ICEBEAM,
			MOVE_DARKPULSE,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_MODEST,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_DRACOBARRAGE, 
			MOVE_HURRICANE,
			MOVE_FLIPTURN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SEISMITOAD,
		.nature = NATURE_MODEST,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WEATHERBALL,
			MOVE_EARTHPOWER, 
			MOVE_FOCUSBLAST,
			MOVE_POWERWHIP,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_JIRACHI,
		.nature = NATURE_TIMID,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Serene Grace
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_THUNDER, 
			MOVE_PSYSHOCK,
			MOVE_WATERPULSE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_THUNDURUS_THERIAN,
		.nature = NATURE_TIMID,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Volt Absorb
		.item = ITEM_FIGHTINIUM_Z, 
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_THUNDER, 
			MOVE_WEATHERBALL,
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_GYARADOSITE, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL, 
			MOVE_CRUNCH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Vermilion_LtSurgeRematch[] =
//perma electric terrain, perma magnet rise
{
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PLASMAFISTS,
			MOVE_CLOSECOMBAT, 
			MOVE_MACHPUNCH,
			MOVE_ICEPUNCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAICHU_A,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Surge Surfer
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_RISINGVOLTAGE,
			MOVE_SURF, 
			MOVE_PSYSHOCK, 
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sturdy
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_RISINGVOLTAGE,
			MOVE_FLASHCANNON, 
			MOVE_HIDDENPOWER, //grass
			MOVE_BODYPRESS,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Teravolt
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_HONECLAWS,
			MOVE_BOLTSTRIKE, 
			MOVE_DRAGONRUSH, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
	{
		.species = SPECIES_RAIKOU,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY inner Focus
		.item = ITEM_FIGHTINIUM_Z, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_RISINGVOLTAGE, 
			MOVE_AURASPHERE,
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate
		.item = ITEM_MANECTITE, 
		.moves =
		{
			MOVE_RISINGVOLTAGE,
			MOVE_HIDDENPOWER, //grass
			MOVE_FLAMETHROWER,
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Route8_CentiMiniBoss[] =
{
	{
		.species = SPECIES_DRUDDIGON,
		.nature = NATURE_IMPISH,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rough Skin
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_DRAGONHAMMER, 
			MOVE_GLARE,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MOLTRES_G,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Berserk
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_AGILITY,
			MOVE_FIERYWRATH, 
			MOVE_AIRSLASH, 
			MOVE_SCORCHINGSANDS, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TAPU_FINI,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY misty Surge
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_SURF, 
			MOVE_DRAININGKISS, 
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_FLYINIUM_Z, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_FLY,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_RELAXED,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Barbs
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_LEECHSEED,
			MOVE_EXPLOSION, 
			MOVE_POWERWHIP,
			MOVE_GYROBALL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CENTISKORCH,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flash Fire
		.item = ITEM_CENTISKITE, 
		.moves =
		{
			MOVE_COIL,
			MOVE_FIRELASH, 
			MOVE_LEECHLIFE,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Celadon_Flapple1[] =
{
	{
		.species = SPECIES_TAPU_KOKO,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Electric Surge
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_THUNDERBOLT, 
			MOVE_PLAYROUGH,
			MOVE_GRASSKNOT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HITMONLEE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unburden
		.item = ITEM_ELECTRIC_SEED,
		.moves =
		{
			MOVE_BULKUP,
			MOVE_CLOSECOMBAT, 
			MOVE_KNOCKOFF, 
			MOVE_POISONJAB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VAPOREON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Absorb
		.item = ITEM_EEVIUM_Z, //+2 to offensive stats only
		.moves =
		{
			MOVE_LASTRESORT,
			MOVE_SURF, 
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLAPPLE,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_APPLITE, 
		.moves =
		{
			MOVE_SCALESHOT,
			MOVE_GRAVAPPLE, 
			MOVE_DRACOMETEOR,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	
};

static const struct BattleTowerSpread sExpertBossBattle_Celadon_Flapple2[] =
{
	{
		.species = SPECIES_DODRIO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rock head
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PURSUIT,
			MOVE_BRAVEBIRD, 
			MOVE_DOUBLEEDGE,
			MOVE_JUMPKICK,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KLINKLANG,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Steel Worker
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_SHIFTGEAR,
			MOVE_GEARGRIND, 
			MOVE_VOLTTACKLE, 
			MOVE_SUPERPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CINDERACE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protean
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PYROBALL,
			MOVE_UTURN, 
			MOVE_HIGHJUMPKICK, 
			MOVE_SUCKERPUNCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_APPLETUN,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_APPLITE, 
		.moves =
		{
			MOVE_DRACOMETEOR,
			MOVE_SUPERPOWER, 
			MOVE_LEAFSTORM,
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Fuschia_Sandacondite[] =
{
	{
		.species = SPECIES_SILVALLY_FAIRY,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_MULTIATTACK,
			MOVE_THUNDERWAVE, 
			MOVE_PARTINGSHOT,
			MOVE_EXPLOSION,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ESCAVALIER,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Overcoat
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DOUBLEIRONBASH,
			MOVE_MEGAHORN, 
			MOVE_CLOSECOMBAT, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_SKYATTACK,
			MOVE_SWORDSDANCE, 
			MOVE_CLOSECOMBAT, 
			MOVE_ACROBATICS,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Illuminate
		.item = ITEM_POWER_HERB, 
		.moves =
		{
			MOVE_METEORBEAM,
			MOVE_HYDROPUMP, 
			MOVE_BLIZZARD,
			MOVE_PSYSHOCK, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CURSOLA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_POWER_HERB, 
		.moves =
		{
			MOVE_METEORBEAM,
			MOVE_SHADOWBALL, 
			MOVE_EARTHPOWER,
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SANDACONDA,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Shed Skin
		.item = ITEM_SANDACONDITE, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_BODYSLAM, 
			MOVE_COIL,
			MOVE_GLARE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Fuschia_KogaGymTrainer[] =
{
	{
		.species = SPECIES_MR_MIME,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY MISTY SURGE
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_MISTYEXPLOSION,
			MOVE_PSYSHOCK,
			MOVE_MYSTICALFIRE,
			MOVE_FOCUSBLAST,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HATTERENE,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Bounce
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MISTYEXPLOSION,
			MOVE_PSYSHOCK, 
			MOVE_MYSTICALFIRE, 
			MOVE_DRAININGKISS, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELECTRODE,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY GALVANIZE
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EXPLOSION,
			MOVE_HYPERVOICE,
			MOVE_FOCUSBLAST,
			MOVE_HIDDENPOWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TURTONATOR,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dauntless Shield
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_EXPLOSION,
			MOVE_FLAMETHROWER, 
			MOVE_DRAGONPULSE,
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SILVALLY,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EXPLOSION,
			MOVE_MULTIATTACK, 
			MOVE_PARTINGSHOT,
			MOVE_SHADOWCLAW, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Absorb
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EXPLOSION,
			MOVE_STEAMERUPTION, 
			MOVE_FLAMETHROWER,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Fuschia_Brendan[] =
{
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_SLUDGEWAVE, 
			MOVE_FOCUSBLAST,
			MOVE_GIGADRAIN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NIHILEGO,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 21, //these IVs allows beast boost to boost SpA instead of SpD
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_METEORBEAM,
			MOVE_SLUDGEWAVE, 
			MOVE_THUNDERBOLT, 
			MOVE_GRASSKNOT, 
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TAPU_KOKO,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Electric Terrain
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WILDCHARGE,
			MOVE_PLAYROUGH, 
			MOVE_RISINGVOLTAGE, 
			MOVE_GRASSKNOT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSHIFU_RAPID,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_SURGINGSTRIKES,
			MOVE_CLOSECOMBAT, 
			MOVE_AQUAJET,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DEOXYS_ATTACK,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_ICEBEAM, 
			MOVE_EXTREMESPEED,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow, Technician in Mega
		.item = ITEM_SCEPTILITE, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_DUALCHOP, 
			MOVE_BULLETSEED,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Fuschia_Koga[] =
//perma tailwind
{
	{
		.species = SPECIES_TAPU_LELE,
		.nature = NATURE_MODEST,
		.level = 68,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Psychic Surge
		.item = ITEM_TWISTED_SPOON, 
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_MOONBLAST, 
			MOVE_FOCUSBLAST,
			MOVE_HIDDENPOWER, //fire 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HOOPA_UNBOUND,
		.nature = NATURE_MODEST,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Magician
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_DARKPULSE,
			MOVE_EXPANDINGFORCE, 
			MOVE_THUNDERBOLT, 
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_ADAMANT,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Moxie
		.item = ITEM_BLACK_GLASSES,
		.moves =
		{
			MOVE_WICKEDBLOW,
			MOVE_EARTHQUAKE, 
			MOVE_CLOSECOMBAT, 
			MOVE_STONEEDGE,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM_WHITE,
		.nature = NATURE_MODEST,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Turbo Blaze
		.item = ITEM_DRAGON_FANG, 
		.moves =
		{
			MOVE_FREEZEDRY,
			MOVE_FUSIONFLARE, 
			MOVE_EARTHPOWER,
			MOVE_DYNAMAXCANNON, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_RASH,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_POISONJAB, 
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOXTRICITY,
		.nature = NATURE_RASH,
		.level = 68,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Punk Rock
		.item = ITEM_TOXTRICITITE, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_OVERDRIVE, 
			MOVE_DRAINPUNCH,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Seafoam_Pryce1[] =
//perma hail 
{
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Skill Link
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ICICLESPEAR, 
			MOVE_HYDROPUMP,
			MOVE_ROCKBLAST,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SUICUNE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_CALMMIND, 
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_TELEPORT, 
			MOVE_LIGHTOFRUIN, 
			MOVE_FLAMETHROWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Teravolt
		.item = ITEM_ICIUM_Z, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_ICICLECRASH, 
			MOVE_FUSIONBOLT,
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_LONELY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_ICICLECRASH, 
			MOVE_FREEZEDRY,
			MOVE_LOWKICK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body, Refrigerate Mega
		.item = ITEM_GLALITITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_QUICKATTACK, 
			MOVE_EARTHQUAKE,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Seafoam_Pryce2[] =
//perma hail 
{
	{
		.species = SPECIES_SANDSLASH_A,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Slush Rush
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EARTHQUAKE, 
			MOVE_ICICLESPEAR,
			MOVE_IRONHEAD,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_REUNICLUS,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_RECOVER, 
			MOVE_PSYCHIC, 
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERWAVE,
			MOVE_TELEPORT, 
			MOVE_LIGHTOFRUIN,
			MOVE_FLAMETHROWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Teravolt
		.item = ITEM_ICIUM_Z, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_ICICLECRASH, 
			MOVE_FUSIONBOLT,
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCTOVISH,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FISHIOUSREND,
			MOVE_ICICLECRASH, 
			MOVE_STONEEDGE,
			MOVE_PSYCHICFANGS, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body, Refrigerate Mega
		.item = ITEM_GLALITITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_QUICKATTACK, 
			MOVE_EARTHQUAKE,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Seafoam_Pryce3[] =
//perma hail
{
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Skill Link
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ICICLESPEAR, 
			MOVE_HYDROPUMP,
			MOVE_ROCKBLAST,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SUICUNE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_CALMMIND, 
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SOFTBOILED,
			MOVE_TELEPORT, 
			MOVE_LIGHTOFRUIN, 
			MOVE_FLAMETHROWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Teravolt
		.item = ITEM_ICIUM_Z, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_ICICLECRASH, 
			MOVE_FUSIONBOLT,
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_LONELY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_BOLTBEAK,
			MOVE_ICICLECRASH, 
			MOVE_FREEZEDRY,
			MOVE_LOWKICK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Ice Body, Refrigerate Mega
		.item = ITEM_GLALITITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_QUICKATTACK, 
			MOVE_EARTHQUAKE,
			MOVE_DOUBLEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Celadon_ErikaRe[] =
//perma grassy terrain, grass moves for erika get 75% boost if not very effective
{
	{
		.species = SPECIES_TSAREENA,
		.nature = NATURE_JOLLY,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Striker
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_GRASSYGLIDE,
			MOVE_TRIPLEAXEL, 
			MOVE_HIGHJUMPKICK,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SERPERIOR,
		.nature = NATURE_TIMID,
		.level = 68,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Contrary
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LEAFSTORM,
			MOVE_HIDDENPOWER, //fire
			MOVE_DRAGONPULSE, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_GRASSY_SEED,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_CLOSECOMBAT, 
			MOVE_ACROBATICS, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KARTANA,
		.nature = NATURE_JOLLY,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_GRASSYGLIDE, //illegal
			MOVE_CUT,
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_BOLD,
		.level = 68,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_GRASSY_SEED, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_DRAININGKISS, 
			MOVE_STOREDPOWER,
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_MODEST,
		.level = 68,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Static, Thick Fat mega
		.item = ITEM_AMPHAROSITE, 
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_DRACOBARRAGE, 
			MOVE_SIGNALBEAM,
			MOVE_FOCUSBLAST, //grass
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_May[] =
//permanent magma storm
{
	{
		.species = SPECIES_AGGRON,
		.nature = NATURE_ADAMANT,
		.level = 73,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sturdy
		.item = ITEM_CUSTAP_BERRY, 
		.moves =
		{
			MOVE_STONEEDGE,
			MOVE_HEAVYSLAM, 
			MOVE_HEATCRASH,
			MOVE_ENDEAVOR,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_JOLLY,
		.level = 73,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Aerilate
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_DOUBLEEDGE,
			MOVE_UTURN, 
			MOVE_SPORE, 
			MOVE_SYNTHESIS, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_REGIELEKI,
		.nature = NATURE_NAIVE,
		.level = 73,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Transistor
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_ELECTROBALL, 
			MOVE_VOLTSWITCH, 
			MOVE_EXPLOSION, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SLOWBRO,
		.nature = NATURE_BOLD,
		.level = 73,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Regenerator
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_SCALD,
			MOVE_BODYPRESS, 
			MOVE_TELEPORT, 
			MOVE_SLACKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_CAREFUL,
		.level = 73,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Thick Fat
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_DARKESTLARIAT, 
			MOVE_CURSE,
			MOVE_REST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_JOLLY,
		.level = 73,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Speed Boost
		.item = ITEM_BLAZIKENITE, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_CLOSECOMBAT,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_Mansion1[] =
//single battle
{
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_JOLLY,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Cursed Body
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SPIKES,
			MOVE_TRIPLEAXEL, 
			MOVE_POLTERGEIST,
			MOVE_DESTINYBOND,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SAMUROTT,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blade master
		.item = ITEM_SCOPE_LENS, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_RAZORSHELL, 
			MOVE_AQUAJET,
			MOVE_SACREDSWORD, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PIDGEOT,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tangled Feet, No Guard
		.item = ITEM_PIDGEOTITE,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_FOCUSBLAST, 
			MOVE_HEATWAVE, 
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Bull Rush
		.item = ITEM_FIGHTING_GEM,
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_FLAREBLITZ, 
			MOVE_WILDCHARGE, 
			MOVE_GRASSKNOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LEAFEON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sap Sipper
		.item = ITEM_EEVIUM_Z, //+2 to offensive stats
		.moves =
		{
			MOVE_LASTRESORT,
			MOVE_SAPPYSEED, 
			MOVE_JUMPKICK,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_DRACOBARRAGE, 
			MOVE_UTURN,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_Mansion2[] =
//double battle
{
	{
		.species = SPECIES_ARCANINE,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_WILLOWISP,
			MOVE_EXTREMESPEED, 
			MOVE_FLAREBLITZ,
			MOVE_MORNINGSUN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_ADAMANT,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Grassy Surge
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_GRASSYGLIDE, 
			MOVE_UTURN,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAPION,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sniper
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LEECHLIFE,
			MOVE_POISONJAB, 
			MOVE_WICKEDBLOW, 
			MOVE_AQUATAIL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Limber
		.item = ITEM_LOPUNNITE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_RETURN, 
			MOVE_CLOSECOMBAT, 
			MOVE_TRIPLEAXEL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SPECTRIER,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Grim Neigh
		.item = ITEM_GHOSTIUM_Z, 
		.moves =
		{
			MOVE_SHADOWBALL,
			MOVE_HIDDENPOWER, //fighting
			MOVE_DARKPULSE,
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARTICUNO_G,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Competitive
		.item = ITEM_GRASSY_SEED, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_ROOST, 
			MOVE_FREEZINGGLARE,
			MOVE_AIRSLASH, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_Jasmine[] =
//pokemon are immune to fire
{
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Heal
		.item = ITEM_TOXIC_ORB, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_HIGHHORSEPOWER, 
			MOVE_PROTECT,
			MOVE_TOXIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TAPU_BULU,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Grassy Surge
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_GRASSYGLIDE, //illegal
			MOVE_PLAYROUGH, 
			MOVE_CLOSECOMBAT,
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Full Metal Body
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_SUNSTEELSTRIKE, 
			MOVE_STONEEDGE, 
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Download
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_UTURN, 
			MOVE_FLAMETHROWER, 
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sturdy
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLASHCANNON, 
			MOVE_HIDDENPOWER, //grass
			MOVE_BODYPRESS,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AGGRON,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sturdy, Filter mega
		.item = ITEM_AGGRONITE, 
		.moves =
		{
			MOVE_CURSE,
			MOVE_HEAVYSLAM, 
			MOVE_REST,
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_AceTrainer1[] =
//Blaine Gym
//Harsh Sunlight
{
	{
		.species = SPECIES_ZAPDOS_G,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_FLYING_GEM, 
		.moves =
		{
			MOVE_ACROBATICS,
			MOVE_CLOSECOMBAT, 
			MOVE_UTURN,
			MOVE_THUNDEROUSKICK, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_FIRE_GEM, 
		.moves =
		{
			MOVE_HEADSMASH,
			MOVE_FLAREBLITZ, 
			MOVE_WILDCHARGE,
			MOVE_ACCELEROCK, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solid Rock
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_STONEEDGE, 
			MOVE_EARTHQUAKE, 
			MOVE_FIREPUNCH, 
			MOVE_MEGAHORN, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DELPHOX,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MINDBLOWN,
			MOVE_PSYCHIC, 
			MOVE_GRASSKNOT, 
			MOVE_SHADOWBALL, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CENTISKORCH,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flash Fire, Mountaineer Mega
		.item = ITEM_CENTISKITE, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_LEECHLIFE, 
			MOVE_POWERWHIP,
			MOVE_COIL,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_AceTrainer2[] =
//Blaine Gym
//Harsh Sunlight
{
	{
		.species = SPECIES_LYCANROC,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Steadfast
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_ENDEAVOR, 
			MOVE_ACCELEROCK,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_UTURN, 
			MOVE_ROCKSLIDE,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_EARTHQUAKE, 
			MOVE_ACROBATICS, 
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSALUNA,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flame Orb
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_FACADE, 
			MOVE_CLOSECOMBAT, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_FIRIUM_Z, 
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_SOLARBEAM, 
			MOVE_AIRSLASH,
			MOVE_SCORCHINGSANDS,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_AceTrainer3[] =
//Blaine Gym
//Harsh Sunlight
//Doubles
{
	{
		.species = SPECIES_CINDERACE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Libero
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_PYROBALL,
			MOVE_HIGHJUMPKICK, 
			MOVE_GUNKSHOT,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY intimidate
		.item = ITEM_SALAMENCITE, 
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_TAILWIND, 
			MOVE_DOUBLEEDGE,
			MOVE_DRACOBARRAGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRAVIARY_H,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_AIRSLASH, 
			MOVE_HEATWAVE, 
			MOVE_PSYCHIC, 
			MOVE_ESPERWING, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Mold Breaker
		.item = ITEM_GROUND_GEM,
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_IRONHEAD, 
			MOVE_EARTHQUAKE, 
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLCARONA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flame Body
		.item = ITEM_FIRE_GEM, 
		.moves =
		{
			MOVE_FIREBLAST,
			MOVE_BUGBUZZ, 
			MOVE_GIGADRAIN,
			MOVE_PSYCHIC,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Cinnabar_Blaine[] =
//harsh sunlight (water moves do no damage)
{
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_WEATHERBALL, 
			MOVE_THUNDERBOLT,
			MOVE_SOLARBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_NAIVE,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY desolate land, doesnt really matter in this battle
		.item = ITEM_RED_ORB, 
		.moves =
		{
			MOVE_PRECIPICEBLADES,
			MOVE_FIREBLAST, 
			MOVE_STONEEDGE,
			MOVE_SOLARBEAM, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny      = TRUE, 
	},
	{
		.species = SPECIES_DARMANITAN_G,
		.nature = NATURE_JOLLY,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Zen Mode
		.item = ITEM_ICE_GEM,
		.moves =
		{
			MOVE_MOUNTAINGALE, //illegal
			MOVE_FLAREBLITZ, 
			MOVE_UTURN, 
			MOVE_ROCKSLIDE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_MODEST,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GROWTH,
			MOVE_SOLARBEAM, 
			MOVE_SLUDGEBOMB, 
			MOVE_WEATHERBALL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_JOLLY,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Phoenix Down
		.item = ITEM_FLYINIUM_Z, 
		.moves =
		{
			MOVE_SACREDFIRE,
			MOVE_BRAVEBIRD, 
			MOVE_EARTHQUAKE,
			MOVE_SOLARBEAM, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.level = 76,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tough Claws Mega
		.item = ITEM_CHARIZARDITE_X, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanCave_Grunt1[] =
{
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prankster
		.item = ITEM_LIGHT_CLAY, 
		.moves =
		{
			MOVE_REFLECT,
			MOVE_LIGHTSCREEN, 
			MOVE_SPIRITBREAK,
			MOVE_DARKESTLARIAT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSARING,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Guts
		.item = ITEM_EVIOLITE, 
		.statusCondition = STATUS_BURN, 
		.moves =
		{
			MOVE_CRUNCH,
			MOVE_FACADE, 
			MOVE_CLOSECOMBAT,
			MOVE_PLAYROUGH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_SUCKERPUNCH, 
			MOVE_KNOCKOFF, 
			MOVE_IRONHEAD, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NINJASK,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Speed Boost
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_SONICSLASH, 
			MOVE_XSCISSOR, 
			MOVE_DRILLRUN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_REUNICLUS,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Regenerator
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_FUTURESIGHT,
			MOVE_PSYCHIC, 
			MOVE_FOCUSBLAST,
			MOVE_TELEPORT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHARPEDO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Speed Boost, Strong Jaw Mega
		.item = ITEM_SHARPEDONITE, 
		.moves =
		{
			MOVE_AQUAFANG,
			MOVE_CRUNCH, 
			MOVE_CLOSECOMBAT,
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanCave_Grunt2[] =
{
	{
		.species = SPECIES_QWILFISH,
		.nature = NATURE_IMPISH,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prankster
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_TOXICSPIKES,
			MOVE_EXPLOSION, 
			MOVE_WATERFALL,
			MOVE_DESTINYBOND, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MANDIBUZZ,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Overcoat 
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_FOULPLAY,
			MOVE_ROOST, 
			MOVE_TOXIC,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLISSEY,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Natural Cure
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEISMICTOSS,
			MOVE_SOFTBOILED, 
			MOVE_TELEPORT, 
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_SASSY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Regenerator
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_KNOCKOFF, 
			MOVE_EARTHQUAKE, 
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SLOWBRO,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Regenerator
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICEBEAM, 
			MOVE_FUTURESIGHT,
			MOVE_TELEPORT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GARBODOR,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Gooey, Parasitic Waste Mega
		.item = ITEM_GARBODORITE, 
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_DRAINPUNCH, 
			MOVE_FIREPUNCH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanCave_Archer[] =
{
	{
		.species = SPECIES_NINETALES,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY drought
		.item = ITEM_CHARCOAL, 
		.moves =
		{
			MOVE_WEATHERBALL,
			MOVE_SOLARBEAM, 
			MOVE_SCORCHINGSANDS,
			MOVE_HYPNOSIS, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_SOLARBEAM,
			MOVE_PSYSHOCK, 
			MOVE_WEATHERBALL,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY INtimidate
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_FLY, 
			MOVE_STONEEDGE, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Flash Fire, Solar Power Mega
		.item = ITEM_HOUNDOOMINITE, 
		.moves =
		{
			MOVE_DARKHOLE,
			MOVE_FLAMETHROWER, 
			MOVE_SUCKERPUNCH,
			MOVE_SOLARBEAM, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_GROWTH,
			MOVE_SOLARBEAM, 
			MOVE_WEATHERBALL,
			MOVE_HIDDENPOWER, //rock
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},


};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanCave_Ariana[] =
{
	{
		.species = SPECIES_WAILORD,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Blubber Defense (same as Multiscale)
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_BOUNCYBUBBLE,
			MOVE_ICEBEAM, 
			MOVE_HIDDENPOWER,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ESPEON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Bounce
		.item = ITEM_EEVIUM_Z, //+2 to offensive stats 
		.moves =
		{
			MOVE_LASTRESORT,
			MOVE_PSYCHIC, 
			MOVE_MYSTICALFIRE,
			MOVE_SHADOWBALL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BUZZWOLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_COBA_BERRY,
		.moves =
		{
			MOVE_VICTORYDANCE, //illegal
			MOVE_DRAINPUNCH, 
			MOVE_LEECHLIFE, 
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Intimidate
		.item = ITEM_MAWILITE,
		.moves =
		{
			MOVE_SUCKERPUNCH,
			MOVE_DOUBLEIRONBASH, 
			MOVE_PLAYROUGH, 
			MOVE_FIREFANG, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanCave_Giovanni[] =
//psychic terrain
{
	{
		.species = SPECIES_SPIRITOMB,
		.nature = NATURE_SASSY,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate
		.item = ITEM_FIGY_BERRY, 
		.moves =
		{
			MOVE_WILLOWISP,
			MOVE_PARTINGSHOT, 
			MOVE_SHADOWBALL,
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DELPHOX,
		.nature = NATURE_TIMID,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_EXPANDINGFORCE, 
			MOVE_GRASSKNOT,
			MOVE_SHADOWBALL, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SILVALLY_FAIRY,
		.nature = NATURE_JOLLY,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MULTIATTACK,
			MOVE_FLAMETHROWER, 
			MOVE_PARTINGSHOT, 
			MOVE_THUNDERWAVE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MOLTRES_G,
		.nature = NATURE_TIMID,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Berserk
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_NASTYPLOT, 
			MOVE_FIERYWRATH,
			MOVE_HURRICANE, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_HASTY,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Download
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_UTURN, 
			MOVE_IRONHEAD,
			MOVE_ICEBEAM, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_TIMID,
		.level = 80,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY unnerve
		.item = ITEM_NONE,
		.moves =
		{
			MOVE_EXPANDINGFORCE,
			MOVE_SOULSTRIKE, 
			MOVE_FLAMETHROWER, 
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanCave_Ketchup1[] =
//automatic tailwind
{
	{
		.species = SPECIES_NECROZMA,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor
		.item = ITEM_POWER_HERB, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_METEORBEAM, 
			MOVE_PSYSHOCK,
			MOVE_HEATWAVE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_THUNDURUS_THERIAN,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Volt Absorb
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_THUNDERBOLT, 
			MOVE_HIDDENPOWER, //flying
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGMORTAR,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Mega Launcher
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_AURASPHERE, 
			MOVE_DARKPULSE, 
			MOVE_STEAMERUPTION, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BANETTE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Insomnia/Prankster
		.item = ITEM_BANETTITE,
		.moves =
		{
			MOVE_DOUBLEEDGE, 
			MOVE_POLTERGEIST,
			MOVE_SHADOWSNEAK, 
			MOVE_DESTINYBOND, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSHIFU_RAPID,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BULKUP, 
			MOVE_SURGINGSTRIKES,
			MOVE_DRAINPUNCH, 
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSHIFU_SINGLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WICKEDBLOW,
			MOVE_CLOSECOMBAT, 
			MOVE_POISONJAB, 
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_CeruleanCave_Ketchup2[] =
//fighting spirit, lives at 1 hp if above 75%
{
	{
		.species = SPECIES_GALVANTULA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Compound Eyes
		.item = ITEM_PETAYA_BERRY, 
		.moves =
		{
			MOVE_STICKYWEB,
			MOVE_THUNDER, 
			MOVE_BUGBUZZ,
			MOVE_ENERGYBALL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Skill Link
		.item = ITEM_WHITE_HERB, 
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_LIQUIDATION, 
			MOVE_ICICLESPEAR,
			MOVE_ROCKBLAST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_AUTOTOMIZE,
			MOVE_AIRSLASH, 
			MOVE_FLAMETHROWER, 
			MOVE_FLASHCANNON, 
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Clear Body
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_SPIRITSHACKLE,
			MOVE_DRAGONDARTS, 
			MOVE_IRONTAIL, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_URSHIFU_RAPID,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_BULKUP, 
			MOVE_SURGINGSTRIKES,
			MOVE_DRAINPUNCH, 
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
	{
		.species = SPECIES_URSHIFU_SINGLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_WICKEDBLOW,
			MOVE_CLOSECOMBAT, 
			MOVE_POISONJAB, 
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Viridian_Clair[] =
//can't bring fairies to this battle, can't remove hazards
{
	{
		.species = SPECIES_SHUCKLE,
		.nature = NATURE_IMPISH,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Solid Rock
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_STICKYWEB, 
			MOVE_KNOCKOFF,
			MOVE_TOXIC, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GIRATINA,
		.nature = NATURE_ADAMANT,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_GRISEOUS_ORB,
		.moves =
		{
			MOVE_DRAGONHAMMER, //illegal
			MOVE_SPIRITSHACKLE, //illegal
			MOVE_SHADOWSNEAK, 
			MOVE_THUNDERWAVE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_MODEST,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_SHIFTGEAR,
			MOVE_MOONBLAST, //illegal
			MOVE_THUNDERBOLT, 
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_ADAMANT,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor/Neuroforce
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_PHOTONGEYSER,
			MOVE_EARTHQUAKE, 
			MOVE_DRAGONHAMMER, //illegal
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_DYNAMAXCANNON, 
			MOVE_METEORBEAM,
			MOVE_FLAMETHROWER, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DURALUDON,
		.nature = NATURE_TIMID,
		.level = 81,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Clear Body Bad Company Mega
		.item = ITEM_DURALUDONITE,
		.moves =
		{
			MOVE_DRACOMETEOR,
			MOVE_STEELBEAM, 
			MOVE_THUNDERBOLT, 
			MOVE_BODYPRESS, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};



static const struct BattleTowerSpread sExpertBossBattle_Viridian_GaryPreE4Charmander[] =
// updated to magma storm
{
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze, Drought Mega
		.item = ITEM_CHARIZARDITE_Y, 
		.moves =
		{
			MOVE_WEATHERBALL,
			MOVE_SOLARBEAM, 
			MOVE_FOCUSBLAST,
			MOVE_PROTECT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rough Skin
		.item = ITEM_YACHE_BERRY, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_SCALESHOT, 
			MOVE_EARTHQUAKE,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GROWTH,
			MOVE_SOLARBEAM, 
			MOVE_FIERYDANCE, 
			MOVE_HIDDENPOWER, //rock
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dauntless Shield
		.item = ITEM_RUSTED_SHIELD,
		.moves =
		{
			MOVE_BODYPRESS, 
			MOVE_BULKUP,
			MOVE_WILDCHARGE, 
			MOVE_BEHEMOTHBASH, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Heal
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_PROTECT,
			MOVE_EARTHQUAKE, 
			MOVE_FACADE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_ROOST, 
			MOVE_MISTBALL, 
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_Viridian_GaryPreE4Bulbasaur[] =
//swamp (pokemon get 1/4 speed)
{
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Iron Fist
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_MACHPUNCH, 
			MOVE_KNOCKOFF,
			MOVE_POISONJAB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Defiant
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_IRONHEAD, 
			MOVE_KNOCKOFF,
			MOVE_BRICKBREAK, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Liquid Voice
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_DRAININGKISS, 
			MOVE_HYPERVOICE, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHANDELURE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Shadow Tag
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FLAMETHROWER, 
			MOVE_SHADOWBALL,
			MOVE_ENERGYBALL, 
			MOVE_CALMMIND, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HYDREIGON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_NASTYPLOT, 
			MOVE_DARKPULSE,
			MOVE_FLASHCANNON, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_CHLOROBLAST,
			MOVE_SLUDGEBOMB, 
			MOVE_EARTHPOWER, 
			MOVE_SLEEPPOWDER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Viridian_GaryPreE4Squirtle[] =
// serene grace, rain
{
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Static
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_HURRICANE, 
			MOVE_THUNDER,
			MOVE_WEATHERBALL, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_RELAXED,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Barbs
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_LEECHSEED,
			MOVE_POWERWHIP, 
			MOVE_GYROBALL,
			MOVE_THUNDER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_WEAKNESS_POLICY, 
		.moves =
		{
			MOVE_AUTOTOMIZE,
			MOVE_IRONHEAD, 
			MOVE_AIRSLASH,
			MOVE_GIGADRAIN, 
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BARRASKEWDA,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_MYSTIC_WATER,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_CLOSECOMBAT, 
			MOVE_FLIPTURN, 
			MOVE_PSYCHICFANGS, 
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY hydration
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THUNDER, 
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM, 
			MOVE_REST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rain Dish
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_DARKPULSE, 
			MOVE_HYDROPUMP, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_Viridian_BrendanFinal[] =
//swamp, 1/4 your speed 
{
	{
		.species = SPECIES_TYRANTRUM,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_HEADSMASH, 
			MOVE_EARTHQUAKE, 
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAROWAK_A,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Bone Zone
		.item = ITEM_THICK_CLUB, 
		.moves =
		{
			MOVE_SHADOWBONE,
			MOVE_FIREPUNCH, 
			MOVE_BONEMERANG,
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EMPOLEON,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Competitive
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_ROOST, 
			MOVE_SCALD,
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LANDORUS,
		.nature = NATURE_RASH,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHPOWER, 
			MOVE_ROCKSLIDE,
			MOVE_PSYCHIC, 
			MOVE_HIDDENPOWER, //ice 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EXPLOUD,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Punk Rock
		.item = ITEM_SILK_SCARF,
		.moves =
		{
			MOVE_BOOMBURST, 
			MOVE_SURF,
			MOVE_FLAMETHROWER, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow Technician Mega
		.item = ITEM_SCEPTILITE,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_DUALCHOP, 
			MOVE_BULLETSEED, 
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};


static const struct BattleTowerSpread sExpertBossBattle_VictoryRoad_AceTrainer1[] =
{
	{
		.species = SPECIES_AMBIPOM,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Technician
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_TAILSLAP, 
			MOVE_ARMTHRUST,
			MOVE_BEATUP, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRUXISH,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Strong Jaw
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_AQUAFANG, 
			MOVE_PSYCHICFANGS,
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_WILLOWISP,
			MOVE_POLTERGEIST, 
			MOVE_SHADOWSNEAK, 
			MOVE_XSCISSOR, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Super Luck Blademaster
		.item = ITEM_ABSOLITE,
		.moves =
		{
			MOVE_NIGHTSLASH, 
			MOVE_SUCKERPUNCH,
			MOVE_PLAYROUGH, 
			MOVE_PSYCHOCUT, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GALVANTULA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Compound eyes
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_VOLTSWITCH, 
			MOVE_ENERGYBALL,
			MOVE_BUGBUZZ, 
			MOVE_THUNDER, 
		},
		.ball = BALL_TYPE_NET_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLACEPHALON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_SHADOWBALL, 
			MOVE_FLAMETHROWER, 
			MOVE_PSYSHOCK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_VictoryRoad_AceTrainer2[] =
{
	{
		.species = SPECIES_BRONZONG,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_TELEPORT, 
			MOVE_GYROBALL,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Water Absorb
		.item = ITEM_WATERIUM_Z, 
		.moves =
		{
			MOVE_STEAMERUPTION,
			MOVE_FLAMETHROWER, 
			MOVE_SLUDGEBOMB,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_EARTHQUAKE, 
			MOVE_DRAGONCLAW, 
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CROBAT,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Corrosion
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_NASTYPLOT, 
			MOVE_HURRICANE,
			MOVE_HEATWAVE, 
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KINGLER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter Tough Claws Mega
		.item = ITEM_KINGLERITE,
		.moves =
		{
			MOVE_CRABHAMMER, 
			MOVE_CLOSECOMBAT,
			MOVE_ICEHAMMER, 
			MOVE_AQUAJET, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAPIDASH_G,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Pastel Veil
		.item = ITEM_CHARCOAL,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_PLAYROUGH, 
			MOVE_HIGHHORSEPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_VictoryRoad_AceTrainer3[] =
{
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_FIREBLAST, 
			MOVE_THUNDERBOLT,
			MOVE_STEALTHROCK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Regenerator
		.item = ITEM_AUDINITE, 
		.moves =
		{
			MOVE_WISH,
			MOVE_PROTECT, 
			MOVE_TOXIC,
			MOVE_MOONBLAST, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Synchronize
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_DRAINPUNCH, 
			MOVE_PSYCHOCUT, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Regenerator
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FAKEOUT, 
			MOVE_KNOCKOFF,
			MOVE_CLOSECOMBAT, 
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SILVALLY_STEEL,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MULTIATTACK, 
			MOVE_FLAMETHROWER,
			MOVE_THUNDERWAVE, 
			MOVE_PARTINGSHOT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_NASTYPLOT,
			MOVE_FIREBLAST, 
			MOVE_AURASPHERE, 
			MOVE_VACUUMWAVE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_VictoryRoad_AceTrainer4[] =
{
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Limber Scrappy Hidden
		.item = ITEM_LOPUNNITE, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_RETURN, 
			MOVE_CLOSECOMBAT,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BELLOSSOM,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Chlorophyll
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_QUIVERDANCE,
			MOVE_SLEEPPOWDER, 
			MOVE_GIGADRAIN,
			MOVE_FIERYDANCE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_STAKATAKA,
		.nature = NATURE_SASSY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_BODYPRESS,
			MOVE_GYROBALL, 
			MOVE_ROCKBLAST, 
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MORPEKO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hunger Switch
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_AURAWHEEL, 
			MOVE_SEEDBOMB,
			MOVE_ZIPPYZAP, 
			MOVE_PARTINGSHOT, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_CALMMIND, 
			MOVE_DRACOBARRAGE,
			MOVE_PSYSHOCK, 
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sage Power
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_FOCUSBLAST, 
			MOVE_GRASSKNOT, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_VictoryRoad_AceTrainer5[] =
{
	{
		.species = SPECIES_ARCANINE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_WILLOWISP,
			MOVE_EXTREMESPEED, 
			MOVE_FLAREBLITZ,
			MOVE_TELEPORT, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DIANCIE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Clear Body Magic Bounce
		.item = ITEM_DIANCITE, 
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_DIAMONDSTORM, 
			MOVE_EARTHPOWER,
			MOVE_MISTYEXPLOSION, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VIRIZION,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Justified
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_LEAFBLADE, 
			MOVE_SACREDSWORD, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MUK_A,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Poison Touch
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_PURSUIT, 
			MOVE_KNOCKOFF,
			MOVE_POISONJAB, 
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MISMAGIUS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_NASTYPLOT, 
			MOVE_MOONBLAST,
			MOVE_SHADOWBALL, 
			MOVE_MYSTICALFIRE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GRAPPLOCT,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ARMTHRUST,
			MOVE_AQUAJET, 
			MOVE_MACHPUNCH, 
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_VictoryRoad_AceTrainer6[] =
{
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Clear Body
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_EXPLOSION, 
			MOVE_METEORMASH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Illuminate
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_HYDROPUMP, 
			MOVE_BLIZZARD,
			MOVE_PSYSHOCK, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PANGORO,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Iron Fist
		.item = ITEM_BLACK_GLASSES,
		.moves =
		{
			MOVE_BULLETPUNCH,
			MOVE_DRAINPUNCH, 
			MOVE_WICKEDBLOW, 
			MOVE_SUCKERPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ESPEON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_EEVIUM_Z,
		.moves =
		{
			MOVE_LASTRESORT, 
			MOVE_STOREDPOWER,
			MOVE_FIERYDANCE, 
			MOVE_DAZZLINGGLEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TAUROS,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HEADCHARGE, 
			MOVE_CLOSECOMBAT,
			MOVE_ICEBEAM, 
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter
		.item = ITEM_PINSIRITE,
		.moves =
		{
			MOVE_RETURN,
			MOVE_QUICKATTACK, 
			MOVE_CLOSECOMBAT, 
			MOVE_SWORDSDANCE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_VictoryRoad_AceTrainer7[] =
//doubles
{
	{
		.species = SPECIES_DARMANITAN, //darmanitan zen
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Zen Mode
		.item = ITEM_IAPAPA_BERRY, 
		.moves =
		{
			MOVE_TRICKROOM,
			MOVE_FLAMETHROWER, 
			MOVE_PSYCHIC,
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SCRAFTY,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_2, //ABILITY Intimidate
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_KNOCKOFF, 
			MOVE_DRAINPUNCH,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

	{
		.species = SPECIES_COPPERAJAH,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sheer Force Mega
		.item = ITEM_COPPERAJITE,
		.moves =
		{
			MOVE_DOUBLEIRONBASH,
			MOVE_CLOSECOMBAT, 
			MOVE_HEATCRASH, 
			MOVE_POWERWHIP, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RUNERIGUS,
		.nature = NATURE_RELAXED,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Shadow Shield
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_WILLOWISP, 
			MOVE_TRICKROOM,
			MOVE_EARTHQUAKE, 
			MOVE_POLTERGEIST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGALGE,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Adaptabilty
		.item = ITEM_POISON_BARB,
		.moves =
		{
			MOVE_SLUDGEWAVE, 
			MOVE_FLAMETHROWER,
			MOVE_DRACOBARRAGE, 
			MOVE_SCALD, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_BUGBUZZ, 
			MOVE_ENERGYBALL, 
			MOVE_VOLTSWITCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_E4_LoreleiRain[] =
//Heavy Rain (immunity to fire)
{
	{
		.species = SPECIES_LUDICOLO, 
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_HYDROPUMP, 
			MOVE_ENERGYBALL,
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_MILD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_MYSTIC_WATER, 
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_DRACOBARRAGE, 
			MOVE_HURRICANE,
			MOVE_WATERFALL, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Download
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_UTURN,
			MOVE_IRONHEAD, 
			MOVE_THUNDER, 
			MOVE_ICEBEAM, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_MILD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_HURRICANE, 
			MOVE_THUNDER,
			MOVE_AQUATAIL, 
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PALKIA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_LUSTROUS_ORB,
		.moves =
		{
			MOVE_DRACOBARRAGE, 
			MOVE_HYDROPUMP,
			MOVE_THUNDER, 
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp Swift Swim Mega
		.item = ITEM_SWAMPERTITE,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE, 
			MOVE_ICEPUNCH, 
			MOVE_BRICKBREAK, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_E4_LoreleiHail[] =
//perma hail 
{
	{
		.species = SPECIES_GLACEON,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Slush Rush
		.item = ITEM_CHOICE_SPECS, 
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_EARTHPOWER, 
			MOVE_FREEZEDRY,
			MOVE_HIDDENPOWER, //fire
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_HIGHHORSEPOWER, //illegal
			MOVE_STONEEDGE,
			MOVE_UTURN, 
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BEARTIC,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Slush Rush
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_ICEHAMMER,
			MOVE_LIQUIDATION, 
			MOVE_CLOSECOMBAT,
			MOVE_BRICKBREAK, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TAPU_FINI,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Misty Surge
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_MUDDYWATER, 
			MOVE_MOONBLAST, 
			MOVE_BLIZZARD, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM_WHITE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Teravolt thingy
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_BLIZZARD, 
			MOVE_FUSIONFLARE,
			MOVE_DRACOBARRAGE, //illegal
			MOVE_FREEZEDRY, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soundproof Slush Rush Mega
		.item = ITEM_ABOMASITE,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_BLIZZARD, 
			MOVE_EARTHQUAKE, 
			MOVE_HIDDENPOWER, //fire 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_E4_Bruno1[] =
//misty terrain
{
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_PYROBALL, 
			MOVE_CLOSECOMBAT,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Volt Absorb
		.item = ITEM_MISTY_SEED, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_DRAINPUNCH, 
			MOVE_PLASMAFISTS,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Serene Grace
		.item = ITEM_RUSTED_SHIELD,
		.moves =
		{
			MOVE_BULKUP,
			MOVE_BODYPRESS, 
			MOVE_BEHEMOTHBASH, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_SUNSTEELSTRIKE,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intrepid Sword
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_BEHEMOTHBASH,
			MOVE_CLOSECOMBAT, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE, 
	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Inner Focus Adaptability
		.item = ITEM_LUCARIONITE,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_CLOSECOMBAT, 
			MOVE_BULLETPUNCH, 
			MOVE_METEORMASH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_E4_Bruno2[] =
//misty terrain
{
	{
		.species = SPECIES_URSHIFU_SINGLE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unseen Fist
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_WICKEDBLOW,
			MOVE_CLOSECOMBAT, 
			MOVE_UTURN,
			MOVE_POISONJAB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Unburden
		.item = ITEM_MISTY_SEED, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_ACROBATICS, 
			MOVE_CLOSECOMBAT,
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Shield 
		.item = ITEM_RUSTED_SHIELD,
		.moves =
		{
			MOVE_BULKUP,
			MOVE_BODYPRESS, 
			MOVE_BEHEMOTHBASH, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_SUNSTEELSTRIKE,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intrepid Sword
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_BEHEMOTHBASH,
			MOVE_CLOSECOMBAT, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE, 
	},
	{
		.species = SPECIES_MEDICHAM,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Huge Power
		.item = ITEM_MEDICHAMITE,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_CLOSECOMBAT, 
			MOVE_ZENHEADBUTT, 
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_E4_Agatha1[] =
{
//psychic terrain
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STEALTHROCK, 
			MOVE_EARTHQUAKE,
			MOVE_KNOCKOFF, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEWTWO, //mewtwo x
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unnerve, Insomnia
		.item = ITEM_MEWTWONITE_X, 
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_EXPANDINGFORCE, 
			MOVE_STONEEDGE,
			MOVE_BULKUP, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dark Aura
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_OBLIVIONWING,
			MOVE_DARKHOLE, 
			MOVE_HEATWAVE,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Defiant
		.item = ITEM_PSYCHIC_SEED,
		.moves =
		{
			MOVE_BULKUP, 
			MOVE_DRAINPUNCH,
			MOVE_KNOCKOFF, 
			MOVE_POWERWHIP, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Victory Star
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_CELEBRATE, 
			MOVE_EXPANDINGFORCE,
			MOVE_PYROBALL, //illegal
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CALYREX_SHADOW,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY As One Spectrier
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_DRAININGKISS, 
			MOVE_EXPANDINGFORCE, 
			MOVE_ASTRALBARRAGE, 
			MOVE_NASTYPLOT, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_E4_Agatha2[] =
{
//psychic terrain
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STEALTHROCK, 
			MOVE_EARTHQUAKE,
			MOVE_KNOCKOFF, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Defiant
		.item = ITEM_PSYCHIC_SEED,
		.moves =
		{
			MOVE_BULKUP, 
			MOVE_DRAINPUNCH,
			MOVE_KNOCKOFF, 
			MOVE_POWERWHIP, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEWTWO, //mewtwo x
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Unnerve, Steadfast
		.item = ITEM_MEWTWONITE_X, 
		.moves =
		{
			MOVE_DRAINPUNCH,
			MOVE_EXPANDINGFORCE, 
			MOVE_STONEEDGE,
			MOVE_BULKUP, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dark Aura
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_OBLIVIONWING,
			MOVE_DARKHOLE, 
			MOVE_HEATWAVE,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Victory Star
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_CELEBRATE, 
			MOVE_EXPANDINGFORCE,
			MOVE_PYROBALL, //illegal
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CALYREX_SHADOW,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY As One Spectrier
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_DRAININGKISS, 
			MOVE_EXPANDINGFORCE, 
			MOVE_ASTRALBARRAGE, 
			MOVE_NASTYPLOT, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_E4_Lance1[] =
//can't remove hazards
{
	{
		.species = SPECIES_DEOXYS_SPEED,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_SPIKES, 
			MOVE_PSYCHIC,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Clear Body
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DOUBLEIRONBASH,
			MOVE_ICEPUNCH, 
			MOVE_EARTHQUAKE,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_PIXIE_PLATE,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_JUDGMENT, 
			MOVE_FLAMETHROWER, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_DUALWINGBEAT,
			MOVE_EARTHQUAKE, 
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_CALM,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure, Primal Armor Primal form 
		.item = ITEM_ADAMANT_ORB,
		.moves =
		{
			MOVE_ROAROFTIME, 
			MOVE_FLAMETHROWER,
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Delta Stream
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_FLAMETHROWER, 
			MOVE_EARTHQUAKE, 
			MOVE_DRAGONASCENT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_E4_Lance2[] =
//can't remove hazards
{
	{
		.species = SPECIES_DEOXYS_SPEED,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_SPIKES, 
			MOVE_PSYCHIC,
			MOVE_KNOCKOFF, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_CAREFUL,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Clear Body
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DOUBLEIRONBASH,
			MOVE_ICEPUNCH, 
			MOVE_EARTHQUAKE,
			MOVE_THUNDERPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_PIXIE_PLATE,
		.moves =
		{
			MOVE_CALMMIND,
			MOVE_JUDGMENT, 
			MOVE_FLAMETHROWER, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_DUALWINGBEAT,
			MOVE_EARTHQUAKE, 
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure, Primal Armor Primal form 
		.item = ITEM_ADAMANT_ORB,
		.moves =
		{
			MOVE_ROAROFTIME, 
			MOVE_FLAMETHROWER,
			MOVE_REST, 
			MOVE_SLEEPTALK, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Delta Stream
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_FLAMETHROWER, 
			MOVE_EARTHQUAKE, 
			MOVE_DRAGONASCENT,  
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_E4_GarySquirtle[] =
//opponent can't be statused/stat reductions
{
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Drizzle Thingy STAYS UPON SWITCHING
		.item = ITEM_BLUE_ORB, 
		.moves =
		{
			MOVE_ORIGINPULSE,
			MOVE_ICEBEAM, 
			MOVE_THUNDER,
			MOVE_LIQUIDATION, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWAMPERT, 
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp/Swift Swim
		.item = ITEM_SWAMPERTITE, 
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE, 
			MOVE_ICEPUNCH,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure/Levitate
		.item = ITEM_ETERNAMAX_ORB,
		.moves =
		{
			MOVE_DRACOBARRAGE, //illegalish
			MOVE_SLUDGEWAVE, 
			MOVE_THUNDER, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_PHOTONGEYSER,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_EXTREMESPEED,
			MOVE_SHADOWCLAW, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Clear Body Tough Claws
		.item = ITEM_METAGROSSITE,
		.moves =
		{
			MOVE_METEORMASH,
			MOVE_ICEPUNCH, 
			MOVE_THUNDERPUNCH, 
			MOVE_BULLETPUNCH, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},

};

static const struct BattleTowerSpread sExpertBossBattle_E4_GaryBulbasaur[] =
{
	//opponent can't be statused/stat reductions
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Drizzle STAYS UPON SWITCHING
		.item = ITEM_BLUE_ORB, 
		.moves =
		{
			MOVE_ORIGINPULSE,
			MOVE_ICEBEAM, 
			MOVE_THUNDER,
			MOVE_LIQUIDATION, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWAMPERT, 
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp/Swift Swim
		.item = ITEM_SWAMPERTITE, 
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE, 
			MOVE_ICEPUNCH,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Fairy Aura
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_GEOMANCY,
			MOVE_MOONBLAST, 
			MOVE_THUNDER, 
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure/Levitate
		.item = ITEM_ETERNAMAX_ORB,
		.moves =
		{
			MOVE_DRACOBARRAGE, //illegal ish
			MOVE_SLUDGEWAVE, 
			MOVE_THUNDER, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE, 
			MOVE_PHOTONGEYSER,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_SWORDSDANCE, 
			MOVE_IRONHEAD,
			MOVE_EARTHQUAKE, 
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_E4_GaryCharmander[] =
{
	//opponent can't be statused/stat reductions
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Desolate Land
		.item = ITEM_RED_ORB, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_PRECIPICEBLADES, 
			MOVE_HEATCRASH,
			MOVE_ROCKTOMB, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HOUNDOOM, 
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Flash Fire/Solar Power
		.item = ITEM_HOUNDOOMINITE, 
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_SOLARBEAM, 
			MOVE_DARKHOLE,
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Regenerator
		.item = ITEM_CHARTI_BERRY,
		.moves =
		{
			MOVE_SACREDFIRE,
			MOVE_BRAVEBIRD, 
			MOVE_SOLARBEAM, 
			MOVE_ROOST, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_CALMMIND, 
			MOVE_EARTHPOWER,
			MOVE_ICEBEAM, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Fairy Aura
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_GEOMANCY,
			MOVE_MOONBLAST, 
			MOVE_THUNDERBOLT, 
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure/Levitate
		.item = ITEM_ETERNAMAX_ORB,
		.moves =
		{
			MOVE_DRACOBARRAGE, //illegal ish
			MOVE_SLUDGEWAVE, 
			MOVE_FLAMETHROWER, 
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
};

static const struct BattleTowerSpread sHardcoreBattle_Pryce_Rematch[] =
//0x4F
//Doubles
{
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 8,
		.defEv = 0,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Snow Warning//Snow Warning
		.item = ITEM_ABOMASITE,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_BLIZZARD,
			MOVE_WOODHAMMER,
			MOVE_HIDDENPOWER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CALYREX_ICE,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 252,
		.defEv = 8,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY As One Calyrex Ice
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_GLACIALLANCE,
			MOVE_ZENHEADBUTT,
			MOVE_HIGHHORSEPOWER,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM, //transforms to Kyurem White upon death
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 0,
		.defEv = 8,
		.spAtkEv = 252,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure//Turboblaze
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_DRACOBARRAGE,
			MOVE_EARTHPOWER, //becomes Fusion Flare when Kyurem White
			MOVE_FREEZEDRY,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WISHIWASHI_SEVI,
		.nature = NATURE_QUIET,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Schooling
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DRACOBARRAGE,
			MOVE_SHADOWBALL,
			MOVE_NASTYPLOT,
			MOVE_THUNDERBOLT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DONPHAN,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_ICESHARD,
			MOVE_ROCKTOMB,
			MOVE_BONEMERANG,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_BRAVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.spAtkEv = 0,
		.spdEv = 0,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie//Skill Link
		.item = ITEM_HERACRONITE,
		.moves =
		{
			MOVE_ARMTHRUST,
			MOVE_BULLETSEED,
			MOVE_PINMISSILE,
			MOVE_ROCKBLAST,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_OneIsl_Bugsy[] =
{
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Beast Boost
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_ICEBEAM,
			MOVE_UTURN,
			MOVE_DRILLRUN,
		},
		.ball = BALL_TYPE_BEAST_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLAWITZER_S,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY As One Calyrex Ice
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ORIGINPULSE,
			MOVE_DARKPULSE,
			MOVE_AURASPHERE,
			MOVE_BUGBUZZ,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENESECT, 
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Download
		.item = ITEM_DOUSE_DRIVE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_TECHNOBLAST,
			MOVE_THUNDERBOLT, 
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Magnet Pull
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLASHCANNON,
			MOVE_VOLTSWITCH,
			MOVE_HIDDENPOWER, //grass
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS_BUG,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Multitype
		.item = ITEM_BUGINIUM_Z,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_EARTHQUAKE,
			MOVE_IRONHEAD,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Hyper Cutter
		.item = ITEM_PINSIRITE,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_EXTREMESPEED,
			MOVE_CLOSECOMBAT,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBossBattle_CapeBrink_DHBattle[] =
{
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Unnerve
		.item = ITEM_CHOPLE_BERRY, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_STONEEDGE, 
			MOVE_CRUNCH,
			MOVE_FIREPUNCH,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DARKRAI,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Bad Dreams
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DARKHOLE,
			MOVE_NASTYPLOT, 
			MOVE_DARKVOID, 
			MOVE_FOCUSBLAST, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZOROARK_H,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Illusion
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_UTURN,
			MOVE_DOUBLEEDGE, 
			MOVE_SHADOWBALL, 
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Poison Touch
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_CLOSECOMBAT, 
			MOVE_STONEEDGE,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HYDREIGON,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_DARKHOLE,
			MOVE_DRACOBARRAGE, 
			MOVE_FOCUSBLAST,
			MOVE_EARTHPOWER, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Super Luck, Blademaster Mega
		.item = ITEM_ABSOLITE, 
		.moves =
		{
			MOVE_NIGHTSLASH,
			MOVE_SUCKERPUNCH, 
			MOVE_PSYCHOCUT,
			MOVE_PLAYROUGH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Cerulean_MistyPostGame[] =
//perma rain
//doubles
{
	{
		.species = SPECIES_PIKACHU_FLYING,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Lightningrod
		.item = ITEM_LIGHT_BALL, 
		.moves =
		{
			MOVE_THUNDER,
			MOVE_HURRICANE, 
			MOVE_ELECTROWEB,
			MOVE_FAKEOUT,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Primordial Sea
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_WATERSPOUT, 
			MOVE_ORIGINPULSE,
			MOVE_THUNDER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOODRA_H,
		.nature = NATURE_BOLD,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Gooey
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRACOBARRAGE,
			MOVE_FLASHCANNON, 
			MOVE_THUNDER,
			MOVE_MUDDYWATER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Swift Swim
		.item = ITEM_WATERIUM_Z, 
		.moves =
		{
			MOVE_DRACOBARRAGE,
			MOVE_HYDROPUMP, 
			MOVE_MUDDYWATER,
			MOVE_HURRICANE, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DREDNAW,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Battle Armor
		.item = ITEM_DREDNAWITE, 
		.moves =
		{
			MOVE_JAWLOCK,
			MOVE_AQUAFANG, 
			MOVE_CRUNCH,
			MOVE_SHELLSMASH, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLOATZEL,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SURGINGSTRIKES,
			MOVE_FAKEOUT, 
			MOVE_FLIPTURN,
			MOVE_PURSUIT, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Viridian_ClairPostGame[] =
//no fairies
{
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_DRAGONDARTS,
			MOVE_SPIRITSHACKLE, 
			MOVE_UTURN,
			MOVE_DRACOMETEOR,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Primal Armor lul
		.item = ITEM_ADAMANT_ORB,
		.moves =
		{
			MOVE_ROAROFTIME,
			MOVE_FLAMETHROWER, 
			MOVE_FLASHCANNON,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_LONELY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multiscale
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DUALWINGBEAT,
			MOVE_FIREBLAST, 
			MOVE_DRAGONHAMMER,
			MOVE_DRAGONDANCE,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLAPPLE,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Dragons Maw
		.item = ITEM_APPLITE, 
		.moves =
		{
			MOVE_DRAGONENERGY,
			MOVE_ENERGYBALL, 
			MOVE_SUCKERPUNCH,
			MOVE_UTURN, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_LUM_BERRY, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_DRAGONHAMMER, 
			MOVE_FUSIONBOLT,
			MOVE_ICEHAMMER, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_HASTY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Download
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_UTURN,
			MOVE_EXTREMESPEED, 
			MOVE_ICEBEAM,
			MOVE_FLAMETHROWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_Saffron_DumbassKidPostGame[] =
//perma rain
//doubles
{
	{
		.species = SPECIES_MAGEARNA_P,
		.nature = NATURE_CALM,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Soul Heart
		.item = ITEM_SITRUS_BERRY, 
		.moves =
		{
			MOVE_HELPINGHAND,
			MOVE_MOONBLAST, 
			MOVE_FLASHCANNON,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Damp
		.item = ITEM_SWAMPERTITE,
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_ICEPUNCH, 
			MOVE_WATERFALL,
			MOVE_FLIPTURN, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prism Armor
		.item = ITEM_SOLGANIUM_Z,
		.moves =
		{
			MOVE_SUNSTEELSTRIKE,
			MOVE_DRAGONDANCE, 
			MOVE_STONEEDGE,
			MOVE_PSYCHICFANGS,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ASHGRENINJA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Bond
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_WATERSHURIKEN,
			MOVE_DARKPULSE, 
			MOVE_ICEBEAM,
			MOVE_HYDROPUMP, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PALKIA_O,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure
		.item = ITEM_LUSTROUS_ORB, 
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_SPACIALREND, 
			MOVE_THUNDER,
			MOVE_AURASPHERE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Serene Grace
		.item = ITEM_CHOICE_SPECS, 
		.moves =
		{
			MOVE_SEEDFLARE,
			MOVE_HURRICANE, 
			MOVE_EARTHPOWER,
			MOVE_HIDDENPOWER, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBossBattle_TreasureBeach_Red[] =
{
	{
		.species = SPECIES_PIKACHU_LIBRE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Lightningrod
		.item = ITEM_LIGHT_BALL, 
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_AURAWHEEL, 
			MOVE_CLOSECOMBAT,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Overgrow
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_SLUDGEBOMB, 
			MOVE_EARTHPOWER, 
			MOVE_SLEEPPOWDER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Torrent/Mega Launcher
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_SHELLSMASH,
			MOVE_ICEBEAM, 
			MOVE_DARKPULSE, 
			MOVE_ORIGINPULSE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Blaze
		.item = ITEM_CHARIZARDITE_X, 
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_FLAREBLITZ, 
			MOVE_EARTHQUAKE,
			MOVE_DRAGONCLAW, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY Thick Fat
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_EARTHQUAKE, 
			MOVE_DARKESTLARIAT,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 252,
		.spAtkEv = 0,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY Pressure/Steadfast
		.item = ITEM_MEWTWONITE_X, 
		.moves =
		{
			MOVE_BULKUP,
			MOVE_ZENHEADBUTT, 
			MOVE_CLOSECOMBAT,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBattle_Falkner_Rematch[] =
//Delta Stream
{
	{
		.species = SPECIES_PIDGEOT,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Tangled Feet
		.item = ITEM_PIDGEOTITE,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_HEATWAVE,
			MOVE_FOCUSBLAST,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BUGBUZZ,
			MOVE_AIRSLASH,
			MOVE_GIGADRAIN,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHAYMIN_SKY, 
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Serene Grace
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SEEDFLARE,
			MOVE_AIRSLASH,
			MOVE_EARTHPOWER, 
			MOVE_HIDDENPOWER, //ice
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ENAMORUS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Contrary
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_SUPERPOWER,
			MOVE_ACROBATICS,
			MOVE_PLAYROUGH,
			MOVE_KNOCKOFF,
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Phoenix Down
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_SACREDFIRE,
			MOVE_EARTHQUAKE,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Moxie
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE,
			MOVE_BOUNCE,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBattle_MtEmber_Ariana[] =
{
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Limber/Scrappy
		.item = ITEM_LOPUNNITE,
		.moves =
		{
			MOVE_FAKEOUT,
			MOVE_DOUBLEEDGE,
			MOVE_CLOSECOMBAT,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_LOVE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Protein
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM,
			MOVE_GUNKSHOT,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Multi Scale
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_DRAGONDANCE,
			MOVE_DUALWINGBEAT,
			MOVE_EARTHQUAKE,
			MOVE_FIREPUNCH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DELPHOX, 
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MINDBLOWN,
			MOVE_PSYSHOCK,
			MOVE_GRASSKNOT, 
			MOVE_DAZZLINGGLEAM, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Fairy Aura
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_GEOMANCY,
			MOVE_MOONBLAST,
			MOVE_THUNDERBOLT,
			MOVE_DRAININGKISS,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Intimidate
		.item = ITEM_MAWILITE,
		.moves =
		{
			MOVE_IRONHEAD,
			MOVE_PLAYROUGH,
			MOVE_KNOCKOFF,
			MOVE_THUNDERPUNCH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sHardcoreBattle_MtEmber_Archer[] =
//HARSH SUNLIGHT
{
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Rock Head
		.item = ITEM_SHARP_BEAK,
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_STONEEDGE,
			MOVE_HEADLONGRUSH,
			MOVE_FIREFANG,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Solar Power
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_THUNDERBOLT,
			MOVE_GRASSKNOT,
			MOVE_WEATHERBALL,
		},
		.ball = BALL_TYPE_POKE_BALL,
	},
	{
		.species = SPECIES_ZYGARDE, 
		.nature = NATURE_IMPISH,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Power Construct
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_THOUSANDARROWS,
			MOVE_EXTREMESPEED,
			MOVE_GLARE, 
			MOVE_DRAGONDANCE, 
		},
		.ball = BALL_TYPE_MASTER_BALL,
	},
	{
		.species = SPECIES_HEATRAN,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flash Fire
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_PROTECT,
			MOVE_FLAMETHROWER,
			MOVE_FLASHCANNON,
			MOVE_EARTHPOWER,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_NAIVE,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Intimidate/Aerilate
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DOUBLEEDGE,
			MOVE_FLAMETHROWER,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_TIMID,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Flash Fire Solar Power
		.item = ITEM_HOUNDOOMINITE,
		.moves =
		{
			MOVE_DARKHOLE,
			MOVE_FIREBLAST,
			MOVE_SLUDGEBOMB,
			MOVE_SOLARBEAM,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_ThreeIsland_Biker1[] =
{
	{
		.species = SPECIES_OVERQWIL,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate
		.item = ITEM_DARK_GEM,
		.moves =
		{
			MOVE_KNOCKOFF,
			MOVE_GUNKSHOT, 
			MOVE_WATERFALL, 
			MOVE_THUNDERWAVE, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_ADAMANT,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_REAPER_CLOTH, 
		.moves =
		{
			MOVE_SHADOWPUNCH,
			MOVE_DYNAMICPUNCH, 
			MOVE_SHADOWSNEAK,
			MOVE_ICEPUNCH, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	}
};

static const struct BattleTowerSpread sExpertBossBattle_ThreeIsland_Biker2[] =
{
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_IMPISH,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Prankster
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_REFLECT,
			MOVE_LIGHTSCREEN, 
			MOVE_THUNDERWAVE, 
			MOVE_SPIRITBREAK, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Tinted Lens
		.item = ITEM_GROUNDIUM_Z, 
		.moves =
		{
			MOVE_HEADLONGRUSH,
			MOVE_DRAGONCLAW, 
			MOVE_UTURN,
			MOVE_FIREPUNCH, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Technician 
		.item = ITEM_ROCK_GEM, 
		.moves =
		{
			MOVE_ACCELEROCK,
			MOVE_UTURN, 
			MOVE_CLOSECOMBAT,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	}
};

static const struct BattleTowerSpread sExpertBossBattle_ThreeIsland_Biker3[] =
{
	{
		.species = SPECIES_AVALUGG_H,
		.nature = NATURE_ADAMANT,
		.level = TWO_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ROCKBLAST,
			MOVE_ICICLESPEAR, 
			MOVE_HEADLONGRUSH, 
			MOVE_ICESHARD, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRAVIARY_H,
		.nature = NATURE_MODEST,
		.level = ONE_BELOW_PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sheer Force
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_PSYCHIC, 
			MOVE_HEATWAVE,
			MOVE_ESPERWING, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHARPEDO,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Speed Boost
		.item = ITEM_SHARPEDONITE, 
		.moves =
		{
			MOVE_PROTECT,
			MOVE_FISHIOUSREND, 
			MOVE_CRUNCH,
			MOVE_CLOSECOMBAT, 
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	}
};

static const struct BattleTowerSpread sExpertBossBattle_ThreeIsland_Biker4[] =
{
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Bull Rush
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_CLOSECOMBAT,
			MOVE_FLAREBLITZ, 
			MOVE_HEADSMASH, 
			MOVE_WILDCHARGE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CENTISKORCH_S,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Clear Body/Arena Trap
		.item = ITEM_CENTISKITE, 
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_LEECHLIFE, 
			MOVE_COIL,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOODRA_H,
		.nature = NATURE_MODEST,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sap Sipper
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DRAGONPULSE,
			MOVE_FLASHCANNON, 
			MOVE_FLAMETHROWER,
			MOVE_SLUDGEBOMB, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_JOLLY,
		.level = PLAYER_MAX_LEVEL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY unburden
		.item = ITEM_FLYING_GEM, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_ACROBATICS, 
			MOVE_BRAVEBIRD,
			MOVE_THROATCHOP, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


const struct MultiRaidTrainer gExpertBossBattles[] =
{
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Gary Second Rival Battle Squirtle
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x149,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route22_GarySquirtle,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route22_GarySquirtle),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Gary Second Rival Battle Bulbasaur
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x14A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route22_GaryBulbasaur,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route22_GaryBulbasaur),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Gary Second Rival Battle Charmander
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x14B,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route22_GaryCharmander,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route22_GaryCharmander),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Brendan Rival Battle 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x2C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Brendan_Battle1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Brendan_Battle1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Bug Catcher at end of Viridian Forest
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x68,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_ViridianBug_Miniboss,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_ViridianBug_Miniboss),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Falkner Battle 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x2D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Falkner_Battle1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Falkner_Battle1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Brock Battle 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x19E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Brock_Battle1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Brock_Battle1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Lass Mini Boss Route 3
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x75,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route3_LassMiniBoss,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route3_LassMiniBoss),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Fossil Scientist Mt Moon
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0xAA,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_MtMoon_Scientist,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_MtMoon_Scientist),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Archer Boss Mt Moon
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x2E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_MtMoon_Archer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_MtMoon_Archer),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Rival Cerulean
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x14C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_CeruleanGary_Squirtle,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanGary_Squirtle),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Rival Cerulean
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x14D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_CeruleanGary_Bulbasaur,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanGary_Bulbasaur),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Rival Cerulean
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x14E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_CeruleanGary_Charmander,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanGary_Charmander),
		},
	},
		{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Nugget Bridge Trainer1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x6E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sHardcoreBossBattle_NuggetBridge_Trainer1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBossBattle_NuggetBridge_Trainer1), //BugCatcher
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Nugget Bridge Trainer2
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x7B,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sHardcoreBossBattle_NuggetBridge_Trainer2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBossBattle_NuggetBridge_Trainer2), //Lass
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Nugget Bridge Trainer3
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x5C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sHardcoreBossBattle_NuggetBridge_Trainer3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBossBattle_NuggetBridge_Trainer3), //Youngster
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Nugget Bridge Trainer4
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x7A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sHardcoreBossBattle_NuggetBridge_Trainer4,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBossBattle_NuggetBridge_Trainer4), //Lass
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Nugget Bridge Trainer5
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x90,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sHardcoreBossBattle_NuggetBridge_Trainer5,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBossBattle_NuggetBridge_Trainer5), //PIcnicker
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Nugget Bridge Rocket
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x164,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_NuggetBridge_Rocket,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_NuggetBridge_Rocket),
		},
	},

	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Nugget Bridge Rocket
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x164,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_NuggetBridge_Rocket,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_NuggetBridge_Rocket),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Bugsy
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x2F,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route24_Bugsy,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route24_Bugsy),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Bugsy
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x8,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Route24_BugsyPostSurge,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route24_BugsyPostSurge),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Misty
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x19F,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Misty1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Misty1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Rocket Cerulean
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x163,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Cerulean_Rocket,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cerulean_Rocket),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Route 6 miniboss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x92,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route6_Miniboss,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route6_Miniboss),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Trainer Double Battle with Below Team
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x7E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Ssanne_Trainer1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Ssanne_Trainer1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Trainer Double Battle with Above Team
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1E2,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Ssanne_Trainer2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Ssanne_Trainer2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Sailor Double Battle with Below Team
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x86,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Ssanne_Sailor1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Ssanne_Sailor1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //sailor Double Battle with above team
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x87,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Ssanne_Sailor2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Ssanne_Sailor2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Brendan battle 2
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x32,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Brendan_Battle2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Brendan_Battle2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Whitney 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x31,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route11_Whitney,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route11_Whitney),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Lt Surge Gym Trainer
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A7,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Vermilion_LtSurgeGymTrainer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Vermilion_LtSurgeGymTrainer),
		},
	},

	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Lt Surge
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A0,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Vermilion_LtSurge,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Vermilion_LtSurge),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Route 9 miniboss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x9A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route9_Cooltrainer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route9_Cooltrainer),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Route 9 miniboss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x9B,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route9_Cooltrainer2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route9_Cooltrainer2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Rock tunnel mini boss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1DA,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_RockTunnel_Cooltrainer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_RockTunnel_Cooltrainer),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Route 10 Pokenerd miniboss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0xA3,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route10_Pokenerd,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route10_Pokenerd),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Route 8 miniboss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0xAB,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route8_Pokenerd,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route8_Pokenerd),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Erika Gym Trainer 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x192,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Celadon_GymTrainer1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Celadon_GymTrainer1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Erika 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A1,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Celadon_Erika1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Celadon_Erika1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Erika 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A1,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Celadon_Erika1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Celadon_Erika1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Rocket in Game Corner
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x165,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_GameCorner_Rocket1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_GameCorner_Rocket1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Morty
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x34,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Lavender_Morty,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Lavender_Morty),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //First Rocket before Giovanni 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x16E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_RocketHideout_GruntMini1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_RocketHideout_GruntMini1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Second Rocket before Giovanni 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x16F,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_RocketHideout_GruntMini2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_RocketHideout_GruntMini2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Giovanni1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x15C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_RocketHideout_Giovanni1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_RocketHideout_Giovanni1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Mini boss Lavender Tower
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x1C0,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Lavender_Channeler,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Lavender_Channeler),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Rocket 1 Lavender Tower
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x171,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Lavender_Rocket1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Lavender_Rocket1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Rocket 2 Lavender Tower
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x172,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Lavender_Rocket2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Lavender_Rocket2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Rocket 3 Lavender Tower
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x173,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Lavender_Rocket3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Lavender_Rocket3),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Biker 1 Route 16 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xC7,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route16_Biker1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route16_Biker1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Biker 2 Route 16 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xFA,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route16_Biker2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route16_Biker2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Biker 3 Route 16 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xF9,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route16_Biker3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route16_Biker3),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Biker 4 Route 16 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xC9,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route16_Biker4,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route16_Biker4),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Biker 5 Route 16 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xCA,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route16_Biker5,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route16_Biker5),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Biker 6 Route 16 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xFB,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route16_Biker6,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route16_Biker6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Route 12 Electric Guy
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x11D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route12_Electrician,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route12_Electrician),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Route 12 Cooltrainer
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1DD,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route12_Cooltrainer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS( sExpertBossBattle_Route12_Cooltrainer),
		},
	},

	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Fisherman Route 12 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xE9,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route12_Fisherman,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route12_Fisherman),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Biker 1 Route 18 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xCE,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route18_Biker1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route18_Biker1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 1 Route 18 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x135,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route18_Trainer1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route18_Trainer1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 2 Route 18 Dragon Tamer
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x134,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route18_Trainer2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route18_Trainer2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 3 Route 18 Ace Trainer
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x133,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route18_Trainer3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route18_Trainer3),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Birdkeeper 1 Route 13
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x12C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 2 Route 13
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1D3,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 3 Route 13
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1D2,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer3),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 4 Route 13 DOUBLE BATTLE
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x10C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer4,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer4),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 5 Route 13 DOUBLE BATTLE WITH ABOVE
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x10D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer5,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer5),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 6 Route 13 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x12D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer6,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 7 Route 13 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xC3,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer7,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer7),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Trainer 8 Route 13 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x12E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_Route13_Trainer8,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route13_Trainer8),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Squirtle Silph Co
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B0,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_SilphCo_GarySquirtle,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_SilphCo_GarySquirtle),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Bulbasaur Silph Co
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B1,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_SilphCo_GaryBulba,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_SilphCo_GaryBulba),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Charmander Silph Co
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B2,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_SilphCo_GaryChar,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_SilphCo_GaryChar),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Archer
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x35,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_SilphCo_Archer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_SilphCo_Archer),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ariana
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x36,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_SilphCo_Ariana,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_SilphCo_Ariana),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Giovanni 2 Silph Co
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x15D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_SilphCo_Giovanni,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_SilphCo_Giovanni),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Chuck
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x13D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Saffron_Chuck,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Saffron_Chuck),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Sabrina
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A4,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Saffron_Sabrina,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Saffron_Sabrina),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Dumbass Kid
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x19,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Saffron_DumbassKid,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Saffron_DumbassKid),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Brock Rematch
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x38,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Pewter_BrockRematch,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Pewter_BrockRematch),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Misty Rematch
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x30,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cerulean_MistyRematch,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cerulean_MistyRematch),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // LtSurge Rematch
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x33,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Vermilion_LtSurgeRematch,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Vermilion_LtSurgeRematch),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Centiskorch Boss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x12,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Route8_CentiMiniBoss,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Route8_CentiMiniBoss),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Flapplite Boss 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x10,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Celadon_Flapple1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Celadon_Flapple1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Flapplite Boss 2
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x11,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Celadon_Flapple2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Celadon_Flapple2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // sandacondite boss
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xF,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Fuschia_Sandacondite,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Fuschia_Sandacondite),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // fuschia brendan rival battle 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x39,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Fuschia_Brendan,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Fuschia_Brendan),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // First Juggler in koga gym
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x124 ,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Fuschia_KogaGymTrainer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Fuschia_KogaGymTrainer),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // fuschia Koga
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A2,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Fuschia_Koga,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Fuschia_Koga),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Pryce
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x3A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Seafoam_Pryce1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Seafoam_Pryce1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Pryce
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x3B,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Seafoam_Pryce2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Seafoam_Pryce2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Pryce
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x3C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Seafoam_Pryce3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Seafoam_Pryce3),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Erika Rematch
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x41,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Celadon_ErikaRe,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Celadon_ErikaRe),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // May
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x3D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_May,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_May),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Pokemon Mansion Miniboss 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x14F,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_Mansion1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_Mansion1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Pokemon Mansion Miniboss 2
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0xDB,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_Mansion2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_Mansion2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Jasmine
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x3E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_Jasmine,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_Jasmine),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Jasmine
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x3F,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_Jasmine,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_Jasmine),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Jasmine
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x40,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_Jasmine,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_Jasmine),
		},
	},
		{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Cinnabar Gym
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xB3,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_AceTrainer1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_AceTrainer1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Cinnabar Gym
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xD7,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_AceTrainer2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_AceTrainer2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Cinnabar Gym
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0xB4,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_AceTrainer3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_AceTrainer3),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Blaine
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A3,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cinnabar_Blaine,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cinnabar_Blaine),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Grunt 1 Cerulean Cave
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x46,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_CeruleanCave_Grunt1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanCave_Grunt1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Grunt 2 Cerulean Cave
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x48,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_CeruleanCave_Grunt2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanCave_Grunt2),
		},
	},
		{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Archer
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x43,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_CeruleanCave_Archer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanCave_Archer),
		},
	},

	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ariana
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x44,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_CeruleanCave_Ariana,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanCave_Ariana),
		},
	},

	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Giovanni Tag Battle
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x45,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_CeruleanCave_Giovanni,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanCave_Giovanni),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ketchup 1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x13,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_CeruleanCave_Ketchup1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanCave_Ketchup1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ketchup 2
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x14,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_CeruleanCave_Ketchup2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_CeruleanCave_Ketchup2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Clair
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x4A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Viridian_Clair,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Viridian_Clair),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Squirtle
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B3,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Viridian_GaryPreE4Squirtle,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Viridian_GaryPreE4Squirtle),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Bulbasaur
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B4,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Viridian_GaryPreE4Bulbasaur,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Viridian_GaryPreE4Bulbasaur),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Charmander
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B5,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Viridian_GaryPreE4Charmander,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Viridian_GaryPreE4Charmander),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Brendan Final
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Viridian_BrendanFinal,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Viridian_BrendanFinal),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ace Trainer 1 Victory Road
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x196,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_VictoryRoad_AceTrainer1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_VictoryRoad_AceTrainer1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ace Trainer 2 Victory Road
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x18C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_VictoryRoad_AceTrainer2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_VictoryRoad_AceTrainer2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ace Trainer 3 Victory Road
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x194,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_VictoryRoad_AceTrainer3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_VictoryRoad_AceTrainer3),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ace Trainer 4 Victory Road
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x193,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_VictoryRoad_AceTrainer4,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_VictoryRoad_AceTrainer4),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ace Trainer 5 Victory Road
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x18A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_VictoryRoad_AceTrainer5,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_VictoryRoad_AceTrainer5),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ace Trainer 6 Victory Road
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x189,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_VictoryRoad_AceTrainer6,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_VictoryRoad_AceTrainer6),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Ace Trainer 7 Victory Road Double Battle
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x1E5,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_VictoryRoad_AceTrainer7,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_VictoryRoad_AceTrainer7),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Lorelei 1 Hail
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x4D,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_LoreleiHail,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_LoreleiHail),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Lorelei 1 Rain
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x4E,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_LoreleiRain,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_LoreleiRain),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Bruno 1-1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x50,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_Bruno1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_Bruno1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Bruno 1-2 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x51,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_Bruno2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_Bruno2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Agatha 1-1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x53,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_Agatha1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_Agatha1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Agatha 1-2 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x54,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_Agatha2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_Agatha2),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Lance 1-1
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x56,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_Lance1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_Lance1),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Lance 1-2 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x57,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_Lance2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_Lance2),
		},
	},
		{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Champion Squirtle
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B6,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_GarySquirtle,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_GarySquirtle),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Champion Bulbasaur
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B7,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_GaryBulbasaur,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_GaryBulbasaur),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // Gary Champion Charmander 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1B8,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_E4_GaryCharmander,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_E4_GaryCharmander),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Test battle
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x7,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_TestHighestdamage,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_TestHighestdamage),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x4F,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sHardcoreBattle_Pryce_Rematch,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBattle_Pryce_Rematch),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, //Bugsy One Island
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x4B,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_OneIsl_Bugsy,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_OneIsl_Bugsy),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x3,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sHardcoreBossBattle_TreasureBeach_Red,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBossBattle_TreasureBeach_Red),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x2B,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sHardcoreBattle_Falkner_Rematch,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBattle_Falkner_Rematch),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x29,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sHardcoreBattle_MtEmber_Ariana,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBattle_MtEmber_Ariana),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x2A,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sHardcoreBattle_MtEmber_Archer,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sHardcoreBattle_MtEmber_Archer),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x4C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_TwoIsland_Whitney,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_TwoIsland_Whitney),
		},
	},
	{		
		.owNum = EVENT_OBJ_GFX_BRENDAN, // DH Tutor
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x93,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =		sHardcoreBossBattle_CapeBrink_DHBattle,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(	sHardcoreBossBattle_CapeBrink_DHBattle),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x2,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_TwoIsland_AceT,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_TwoIsland_AceT),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x7C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_PkmnTower_AceT1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_PkmnTower_AceT1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x52,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_PkmnTower_AceT2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_PkmnTower_AceT2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x71,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_PkmnTower_AceT3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_PkmnTower_AceT3),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x1C,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_PkmnTower_Morty,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_PkmnTower_Morty),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_BRENDAN, 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x20F,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_ThreeIsland_Biker1,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_ThreeIsland_Biker1),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x210,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_ThreeIsland_Biker2,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_ThreeIsland_Biker2),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x211,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	 sExpertBossBattle_ThreeIsland_Biker3,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_ThreeIsland_Biker3),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x2E6,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_ThreeIsland_Biker4,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_ThreeIsland_Biker4),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x20,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Cerulean_MistyPostGame,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Cerulean_MistyPostGame),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x26,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Viridian_ClairPostGame,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Viridian_ClairPostGame),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = DOUBLE_BATTLE,
		.gender = MALE,
		.otId = 0x23,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_Saffron_DumbassKidPostGame,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_Saffron_DumbassKidPostGame),
		},
	},
};

const u8 gNumExpertBossBattles = NELEMS(gExpertBossBattles);

static const struct BattleTowerSpread sExpertBossBattle_PuzzleBattleShedinja[] =
{
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_SHADOWSNEAK, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_SHADOWSNEAK, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHADOWSNEAK,
			MOVE_XSCISSOR, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_SHADOWSNEAK, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_SHADOWSNEAK,
			MOVE_XSCISSOR,
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Wonder Guard
		.item = ITEM_HEAVY_DUTY_BOOTS, 
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_SHADOWSNEAK, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};
static const struct BattleTowerSpread sExpertBossBattle_PuzzleBattleTeacher[] =
{
	{
		.species = SPECIES_ARON,
		.nature = NATURE_JOLLY,
		.level = 5,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Rock Head
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_STEALTHROCK,
			MOVE_DOUBLEEDGE, 
			MOVE_ROCKSLIDE,
			MOVE_BULLDOZE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PIKACHU_BELLE,
		.nature = NATURE_JOLLY,
		.level = 5,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Lightningrod
		.item = ITEM_LIGHT_BALL, 
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FREEZYFROST, 
			MOVE_VOLTTACKLE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GASTLY,
		.nature = NATURE_TIMID,
		.level = 5,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Levitate
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_SHADOWBALL, 
			MOVE_SLUDGEBOMB,
			MOVE_GIGADRAIN, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SKORUPI,
		.nature = NATURE_BRAVE,
		.level = 5,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 0,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Battle Armor
		.item = ITEM_BLACK_SLUDGE, 
		.moves =
		{
			MOVE_POISONJAB,
			MOVE_XSCISSOR, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TIMBURR,
		.nature = NATURE_TIMID,
		.level = 5,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 15,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Sheer Force
		.item = ITEM_CHOICE_SCARF, 
		.moves =
		{
			MOVE_ICEPUNCH,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LARVESTA,
		.nature = NATURE_BASHFUL,
		.level = 5,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 15,
		.ability = FRONTIER_ABILITY_1, //ABILITY Flame Body
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_UTURN, 
			MOVE_MORNINGSUN,
			MOVE_WILLOWISP, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_PuzzleBattlePostgame[] =
{
	{
		.species = SPECIES_NOCTOWL,
		.nature = NATURE_CAREFUL,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY 
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_PSYCHOSHIFT,
			MOVE_AIRSLASH, 
			MOVE_ROOST,
			MOVE_HEATWAVE, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_GENTLE,
		.level = 100,
		.hpIv = 26,
		.atkIv = 31,
		.defIv = 0,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.ability = FRONTIER_ABILITY_1, //ABILITY Lightningrod
		.item = ITEM_ROCKY_HELMET, 
		.moves =
		{
			MOVE_GYROBALL,
			MOVE_POWERWHIP, 
			MOVE_BULLDOZE,
			MOVE_BODYPRESS, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOXTRICITY,
		.nature = NATURE_TIMID,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Punk Rock
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_OVERDRIVE,
			MOVE_BOOMBURST, 
			MOVE_SLUDGEWAVE,
			MOVE_SNARL, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BRELOOM,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Technician
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_MACHPUNCH,
			MOVE_BULLETSEED, 
			MOVE_ROCKTOMB,
			MOVE_LOWSWEEP, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Stream
		.item = ITEM_HARD_STONE, 
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_CRUNCH, 
			MOVE_FIREPUNCH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_ROCKSLIDE, 
			MOVE_EARTHQUAKE,
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_PuzzleBattlePostgameTwo[] =
{
	{
		.species = SPECIES_AGGRON,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //Ability Rock Head
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_IRONHEAD, 
			MOVE_EARTHQUAKE,
			MOVE_BODYPRESS, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MACHAMP,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Guts
		.item = ITEM_FLAME_ORB, 
		.moves =
		{
			MOVE_MACHPUNCH,
			MOVE_ROCKSLIDE, 
			MOVE_EARTHQUAKE,
			MOVE_DRAINPUNCH, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCHEOPS,
		.nature = NATURE_BASHFUL,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Lightningrod
		.item = ITEM_HARD_STONE, 
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_EARTHQUAKE, 
			MOVE_DUALWINGBEAT,
			MOVE_ZENHEADBUTT, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DARMANITAN_G,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Gorilla Tactics
		.item = ITEM_CHOICE_BAND, 
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_FLAREBLITZ, 
			MOVE_EARTHQUAKE,
			MOVE_SUPERPOWER, 
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sand Stream
		.item = ITEM_HARD_STONE, 
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_CRUNCH, 
			MOVE_FIREPUNCH,
			MOVE_EARTHQUAKE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_ADAMANT,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_ROCKSLIDE, 
			MOVE_EARTHQUAKE,
			MOVE_EXTREMESPEED, 
		},
		.ball = BALL_TYPE_HISUIAN_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sExpertBossBattle_RentalBattleEevee[] =
{
	{
		.species = SPECIES_OVERQWIL,
		.nature = NATURE_CAREFUL,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Intimidate
		.item = ITEM_BLACK_SLUDGE, 
		.moves =
		{
			MOVE_TOXICSPIKES,
			MOVE_THROATCHOP, 
			MOVE_POISONJAB,
			MOVE_WATERFALL, 
		},
		.ball = BALL_TYPE_ULTRA_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOODRA_H,
		.nature = NATURE_MODEST,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Sap Sipper
		.item = ITEM_ASSAULT_VEST, 
		.moves =
		{
			MOVE_DRAGONPULSE,
			MOVE_FLASHCANNON, 
			MOVE_FLAMETHROWER,
			MOVE_THUNDERBOLT, 
		},
		.ball = BALL_TYPE_HEAVY_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCANINE_H,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Rock Head
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_FLAREBLITZ,
			MOVE_HEADSMASH, 
			MOVE_ACCELEROCK,
			MOVE_TELEPORT, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LILLIGANT_H,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Hustle
		.item = ITEM_FOCUS_SASH, 
		.moves =
		{
			MOVE_VICTORYDANCE,
			MOVE_DRAINPUNCH, 
			MOVE_LEAFBLADE,
			MOVE_STONEEDGE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AVALUGG_H,
		.nature = NATURE_IMPISH,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Sturdy
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_ICICLECRASH,
			MOVE_STONEEDGE,
			MOVE_ICESHARD,
			MOVE_RECOVER, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Blademaster
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_SWORDSDANCE,
			MOVE_XSCISSOR, 
			MOVE_ACCELEROCK,
			MOVE_STONEAXE, 
		},
		.ball = BALL_TYPE_NET_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sExpertBossBattle_RentalGambler[] =
{
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_CAREFUL,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Hustle
		.item = ITEM_REAPER_CLOTH, 
		.moves =
		{
			MOVE_METRONOME,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LUDICOLO,
		.nature = NATURE_BASHFUL,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Own Tempo
		.item = ITEM_LEPPA_BERRY, 
		.moves =
		{
			MOVE_METRONOME,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_NET_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEDICHAM,
		.nature = NATURE_JOLLY,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_1, //ABILITY Huge Power
		.item = ITEM_MEDICHAMITE, 
		.moves =
		{
			MOVE_METRONOME,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.nature = NATURE_TIMID,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_METRONOME,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_QUIET,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Magic Guard
		.item = ITEM_LIFE_ORB, 
		.moves =
		{
			MOVE_METRONOME,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_IMPISH,
		.level = 100,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.ability = FRONTIER_ABILITY_2, //ABILITY Thick Fat
		.item = ITEM_LEFTOVERS, 
		.moves =
		{
			MOVE_METRONOME,
			MOVE_NONE, 
			MOVE_NONE,
			MOVE_NONE, 
		},
		.ball = BALL_TYPE_NET_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct MultiRaidTrainer gPuzzleBossBattles[] =
{
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x7,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_PuzzleBattleShedinja,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_PuzzleBattleShedinja),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x6,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_PuzzleBattleTeacher,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_PuzzleBattleTeacher),
		},
	},
};

const u8 gNumPuzzleBossBattles = NELEMS(gPuzzleBossBattles);

const struct MultiRaidTrainer gRentalBossBattles[] =
{
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0x5,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] =	sExpertBossBattle_RentalBattleEevee,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_RentalBattleEevee),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN, 
		.trainerClass = CLASS_PKMN_TRAINER_1,
		.backSpriteId = SINGLE_BATTLE,
		.gender = MALE,
		.otId = 0xE,
		.name = sTrainerName_Xan,
		.spreads =
		{
			[0] = sExpertBossBattle_RentalGambler,
		},
		.spreadSizes =
		{
			[0] =   NELEMS(sExpertBossBattle_RentalGambler),
		},
	},
};

const u8 gNumRentalBossBattles = NELEMS(gRentalBossBattles);