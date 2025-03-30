LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

@LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
@	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
@	end

@LilycoveCity_DepartmentStore_4F_EventScript_Woman::
@	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
@	end

@LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
@	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
@	end

LilycoveCity_DepartmentStore_4F_EventScript_NormalClerk::
	lock
	faceplayer
	message gText_NormalHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_NormalTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_NormalTMs:
	.2byte ITEM_TM_TAKE_DOWN
	.2byte ITEM_TM_SCARY_FACE
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_FACADE
	.2byte ITEM_TM_SWIFT
	.2byte ITEM_TM_ENDURE
	.2byte ITEM_TM_FALSE_SWIPE
	.2byte ITEM_TM_BODY_SLAM
	.2byte ITEM_TM_SLEEP_TALK
	.2byte ITEM_TM_METRONOME
	.2byte ITEM_TM_SWORDS_DANCE
	.2byte ITEM_TM_SUBSTITUTE
	.2byte ITEM_TM_HYPER_VOICE
	.2byte ITEM_TM_ENCORE
	.2byte ITEM_TM_HELPING_HAND
	.2byte ITEM_TM_BATON_PASS
	.2byte ITEM_TM_GIGA_IMPACT
	.2byte ITEM_TM_HYPER_BEAM
	.2byte ITEM_TM_TERA_BLAST
	.2byte ITEM_TM_ROAR
	.2byte ITEM_TM_SUPER_FANG
	.2byte ITEM_TM_UPROAR
	.2byte ITEM_TM_WEATHER_BALL
	.2byte ITEM_TM_PAIN_SPLIT
	.2byte ITEM_TM_DOUBLE_EDGE
	.2byte ITEM_TM_ENDEAVOR
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScriptFire_Clerk::
	lock
	faceplayer
	message gText_FireHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_FireTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_FireTMs:
	.2byte ITEM_TM_FIRE_FANG
	.2byte ITEM_TM_FIRE_SPIN
	.2byte ITEM_TM_FLAME_CHARGE
	.2byte ITEM_TM_SUNNY_DAY
	.2byte ITEM_TM_FIRE_PUNCH
	.2byte ITEM_TM_WILL_O_WISP
	.2byte ITEM_TM_HEAT_WAVE
	.2byte ITEM_TM_FLAMETHROWER
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_FIRE_PLEDGE
	.2byte ITEM_TM_OVERHEAT
	.2byte ITEM_TM_FLARE_BLITZ
	.2byte ITEM_TM_HEAT_CRASH
	.2byte ITEM_TM_BURNING_JEALOUSY
	.2byte ITEM_TM_TEMPER_FLARE
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_WaterClerk::
	lock
	faceplayer
	message gText_WaterHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_WaterTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_WaterTMs:
	.2byte ITEM_TM_WATER_PULSE
	.2byte ITEM_TM_CHILLING_WATER
	.2byte ITEM_TM_RAIN_DANCE
	.2byte ITEM_TM_LIQUIDATION
	.2byte ITEM_TM_HYDRO_PUMP
	.2byte ITEM_TM_WATER_PLEDGE
	.2byte ITEM_TM_HYDRO_CANNON
	.2byte ITEM_TM_SCALD
	.2byte ITEM_TM_FLIP_TURN
	.2byte ITEM_TM_WHIRLPOOL
	.2byte ITEM_TM_MUDDY_WATER
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_GrassClerk::
	lock
	faceplayer
	message gText_GrassHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_GrassTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_GrassTMs:
	.2byte ITEM_TM_TRAILBLAZE
	.2byte ITEM_TM_MAGICAL_LEAF
	.2byte ITEM_TM_BULLET_SEED
	.2byte ITEM_TM_SEED_BOMB
	.2byte ITEM_TM_GRASS_KNOT
	.2byte ITEM_TM_GIGA_DRAIN
	.2byte ITEM_TM_ENERGY_BALL
	.2byte ITEM_TM_GRASSY_TERRAIN
	.2byte ITEM_TM_GRASS_PLEDGE
	.2byte ITEM_TM_FRENZY_PLANT
	.2byte ITEM_TM_LEAF_STORM
	.2byte ITEM_TM_SOLAR_BEAM
	.2byte ITEM_TM_SOLAR_BLADE
	.2byte ITEM_TM_GRASSY_GLIDE
	.2byte ITEM_TM_PETAL_BLIZZARD
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_ElectricClerk::
	lock
	faceplayer
	message gText_ElectricHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_ElectricTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_ElectricTMs:
	.2byte ITEM_TM_THUNDER_FANG
	.2byte ITEM_TM_CHARGE_BEAM
	.2byte ITEM_TM_VOLT_SWITCH
	.2byte ITEM_TM_THUNDER_PUNCH
	.2byte ITEM_TM_ELECTRO_BALL
	.2byte ITEM_TM_THUNDER_WAVE
	.2byte ITEM_TM_EERIE_IMPULSE
	.2byte ITEM_TM_THUNDERBOLT
	.2byte ITEM_TM_ELECTRIC_TERRAIN
	.2byte ITEM_TM_WILD_CHARGE
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_CHARGE
	.2byte ITEM_TM_SUPERCELL_SLAM
	.2byte ITEM_TM_ELECTROWEB
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_IceClerk::
	lock
	faceplayer
	message gText_IceHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_IceTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_IceTMs:
	.2byte ITEM_TM_ICE_FANG
	.2byte ITEM_TM_ICY_WIND
	.2byte ITEM_TM_AVALANCHE
	.2byte ITEM_TM_SNOWSCAPE
	.2byte ITEM_TM_ICE_PUNCH
	.2byte ITEM_TM_ICE_SPINNER
	.2byte ITEM_TM_ICE_BEAM
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HAZE
	.2byte ITEM_TM_ICICLE_SPEAR
	.2byte ITEM_TM_TRIPLE_AXEL
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_FightingClerk::
	lock
	faceplayer
	message gText_FightingHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_FightingTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_FightingTMs:
	.2byte ITEM_TM_LOW_KICK
	.2byte ITEM_TM_LOW_SWEEP
	.2byte ITEM_TM_BRICK_BREAK
	.2byte ITEM_TM_BULK_UP
	.2byte ITEM_TM_DRAIN_PUNCH
	.2byte ITEM_TM_BODY_PRESS
	.2byte ITEM_TM_AURA_SPHERE
	.2byte ITEM_TM_REVERSAL
	.2byte ITEM_TM_FOCUS_BLAST
	.2byte ITEM_TM_CLOSE_COMBAT
	.2byte ITEM_TM_VACUUM_WAVE
	.2byte ITEM_TM_FOCUS_PUNCH
	.2byte ITEM_TM_COACHING
	.2byte ITEM_TM_UPPER_HAND
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_PoisonClerk::
	lock
	faceplayer
	message gText_PoisonHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_PoisonTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_PoisonTMs:
	.2byte ITEM_TM_ACID_SPRAY
	.2byte ITEM_TM_POISON_TAIL
	.2byte ITEM_TM_VENOSHOCK
	.2byte ITEM_TM_POISON_JAB
	.2byte ITEM_TM_TOXIC_SPIKES
	.2byte ITEM_TM_GUNK_SHOT
	.2byte ITEM_TM_SLUDGE_BOMB
	.2byte ITEM_TM_TOXIC
	.2byte ITEM_TM_SLUDGE_WAVE
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_GroundClerk::
	lock
	faceplayer
	message gText_GroundHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_GroundTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_GroundTMs:
	.2byte ITEM_TM_MUD_SLAP
	.2byte ITEM_TM_BULLDOZE
	.2byte ITEM_TM_MUD_SHOT
	.2byte ITEM_TM_DIG
	.2byte ITEM_TM_STOMPING_TANTRUM
	.2byte ITEM_TM_SPIKES
	.2byte ITEM_TM_DRILL_RUN
	.2byte ITEM_TM_EARTH_POWER
	.2byte ITEM_TM_EARTHQUAKE
	.2byte ITEM_TM_SAND_TOMB
	.2byte ITEM_TM_HIGH_HORSEPOWER
	.2byte ITEM_TM_SCORCHING_SANDS
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_FlyingClerk::
	lock
	faceplayer
	message gText_FlyingHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_FlyingTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_FlyingTMs:
	.2byte ITEM_TM_AERIAL_ACE
	.2byte ITEM_TM_AIR_CUTTER
	.2byte ITEM_TM_AIR_SLASH
	.2byte ITEM_TM_HURRICANE
	.2byte ITEM_TM_BRAVE_BIRD
	.2byte ITEM_TM_DUAL_WINGBEAT
	.2byte ITEM_TM_FEATHER_DANCE
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_PsychicClerk::
	lock
	faceplayer
	message gText_PsychicHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_PsychicTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_PsychicTMs:
	.2byte ITEM_TM_AGILITY
	.2byte ITEM_TM_PSYBEAM
	.2byte ITEM_TM_STORED_POWER
	.2byte ITEM_TM_PSYSHOCK
	.2byte ITEM_TM_ZEN_HEADBUTT
	.2byte ITEM_TM_PSYCHIC_FANGS
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_TM_REST
	.2byte ITEM_TM_IMPRISON
	.2byte ITEM_TM_SKILL_SWAP
	.2byte ITEM_TM_TRICK
	.2byte ITEM_TM_PSYCHIC
	.2byte ITEM_TM_AMNESIA
	.2byte ITEM_TM_CALM_MIND
	.2byte ITEM_TM_PSYCHIC_TERRAIN
	.2byte ITEM_TM_TRICK_ROOM
	.2byte ITEM_TM_GRAVITY
	.2byte ITEM_TM_FUTURE_SIGHT
	.2byte ITEM_TM_EXPANDING_FORCE
	.2byte ITEM_TM_PSYCHIC_NOISE
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_BugClerk::
	lock
	faceplayer
	message gText_BugHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_BugTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_BugTMs:
	.2byte ITEM_TM_STRUGGLE_BUG
	.2byte ITEM_TM_POUNCE
	.2byte ITEM_TM_U_TURN
	.2byte ITEM_TM_LEECH_LIFE
	.2byte ITEM_TM_X_SCISSOR
	.2byte ITEM_TM_POLLEN_PUFF
	.2byte ITEM_TM_BUG_BUZZ
	.2byte ITEM_TM_BUG_BITE
	.2byte ITEM_TM_LUNGE
	.2byte ITEM_TM_SKITTER_SMACK
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_RockClerk::
	lock
	faceplayer
	message gText_RockHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_RockTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_RockTMs:
	.2byte ITEM_TM_ROCK_TOMB
	.2byte ITEM_TM_SANDSTORM
	.2byte ITEM_TM_ROCK_BLAST
	.2byte ITEM_TM_ROCK_SLIDE
	.2byte ITEM_TM_POWER_GEM
	.2byte ITEM_TM_STEALTH_ROCK
	.2byte ITEM_TM_STONE_EDGE
	.2byte ITEM_TM_SMACK_DOWN
	.2byte ITEM_TM_METEOR_BEAM
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_GhostClerk::
	lock
	faceplayer
	message gText_GhostHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_GhostTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_GhostTMs:
	.2byte ITEM_TM_CONFUSE_RAY
	.2byte ITEM_TM_HEX
	.2byte ITEM_TM_NIGHT_SHADE
	.2byte ITEM_TM_SHADOW_CLAW
	.2byte ITEM_TM_SHADOW_BALL
	.2byte ITEM_TM_PHANTOM_FORCE
	.2byte ITEM_TM_SPITE
	.2byte ITEM_TM_POLTERGEIST
	.2byte ITEM_TM_CURSE
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_DragonClerk::
	lock
	faceplayer
	message gText_DragonHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DragonTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DragonTMs:
	.2byte ITEM_TM_DRAGON_TAIL
	.2byte ITEM_TM_DRAGON_CLAW
	.2byte ITEM_TM_DRAGON_DANCE
	.2byte ITEM_TM_DRAGON_PULSE
	.2byte ITEM_TM_OUTRAGE
	.2byte ITEM_TM_DRACO_METEOR
	.2byte ITEM_TM_SCALE_SHOT
	.2byte ITEM_TM_BREAKING_SWIPE
	.2byte ITEM_TM_DRAGON_CHEER
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_DarkClerk::
	lock
	faceplayer
	message gText_DarkHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DarkTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DarkTMs:
	.2byte ITEM_TM_FAKE_TEARS
	.2byte ITEM_TM_THIEF
	.2byte ITEM_TM_SNARL
	.2byte ITEM_TM_FLING
	.2byte ITEM_TM_FOUL_PLAY
	.2byte ITEM_TM_TAUNT
	.2byte ITEM_TM_DARK_PULSE
	.2byte ITEM_TM_CRUNCH
	.2byte ITEM_TM_NASTY_PLOT
	.2byte ITEM_TM_KNOCK_OFF
	.2byte ITEM_TM_LASH_OUT
	.2byte ITEM_TM_THROAT_CHOP
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_SteelClerk::
	lock
	faceplayer
	message gText_SteelHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_SteelTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_SteelTMs:
	.2byte ITEM_TM_METAL_CLAW
	.2byte ITEM_TM_SMART_STRIKE
	.2byte ITEM_TM_FLASH_CANNON
	.2byte ITEM_TM_IRON_HEAD
	.2byte ITEM_TM_IRON_DEFENSE
	.2byte ITEM_TM_HEAVY_SLAM
	.2byte ITEM_TM_STEEL_BEAM
	.2byte ITEM_TM_GYRO_BALL
	.2byte ITEM_TM_METAL_SOUND
	.2byte ITEM_TM_HARD_PRESS
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_FairyClerk::
	lock
	faceplayer
	message gText_FairyHowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_FairyTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_FairyTMs:
	.2byte ITEM_TM_CHARM
	.2byte ITEM_TM_DISARMING_VOICE
	.2byte ITEM_TM_DRAINING_KISS
	.2byte ITEM_TM_DAZZLING_GLEAM
	.2byte ITEM_TM_PLAY_ROUGH
	.2byte ITEM_TM_MISTY_TERRAIN
	.2byte ITEM_TM_MISTY_EXPLOSION
	.2byte ITEM_TM_ALLURING_VOICE
	pokemartlistend

@LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
@	.string "Hmm…\p"
@	.string "An attacking move…\n"
@	.string "Or a defensive move…\p"
@	.string "It's no easy matter to decide which TM\n"
@	.string "moves should be taught to POKéMON…$"

@LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
@	.string "There are so many different kinds of\n"
@	.string "TM moves.\p"
@	.string "A catalog I read said there are fifty\n"
@	.string "different kinds.$"

@LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
@	.string "I'd like to get all the different TMs,\n"
@	.string "but a POKéMON learns only four moves.$"

