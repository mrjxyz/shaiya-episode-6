#pragma once
#include <array>
#include <cstdint>

namespace shaiya
{
    using CloakBadge = std::array<uint8_t, 6>;
    using CraftName = std::array<char, 21>;
    using Gems = std::array<uint8_t, 6>;

    using ItemId = uint32_t;
    using ItemName = std::array<char, 32>;

    template<size_t N>
    using ItemQuality = std::array<uint16_t, N>;

    template<size_t N>
    using ItemQualityLv = std::array<uint8_t, N>;

    using ProductCode = std::array<char, 21>;
    using ProductName = std::array<char, 51>;

    enum struct Bag : uint8_t
    {
        Warehouse = 100,
        Bank = 200,
        Unknown = 250,
        GuildWarehouse = 255,
        Skill = 100,
        BasicAction = 101
    };

    #pragma pack(push, 1)
    struct BillingItem
    {
        uint8_t type;
        uint8_t typeId;
        uint8_t count;
    };
    #pragma pack(pop)

    #pragma pack(push, 1)
    struct EquipmentItem
    {
        uint8_t type;
        uint8_t typeId;
        uint8_t enchantStep;
    };
    #pragma pack(pop)

    template<size_t N>
    using Equipment = std::array<EquipmentItem, N>;

    #pragma pack(push, 1)
    template<size_t N>
    struct ItemArray
    {
        std::array<uint8_t, N> type;
        std::array<uint8_t, N> typeId;
    };
    #pragma pack(pop)

    enum struct ItemEffect : uint8_t
    {
        HypnosisCure = 1,
        StunCure,
        SilenceCure,
        DarknessCure,
        StopCure,
        SlowCure,
        FaintProtection,
        DeathProtection,
        VenomCure,
        DiseaseCure,
        DisorderCure,
        ArcanePotion = 17,
        CurePotion,
        DispelPotion,
        AbolishingPotion,
        BlessingPotion,
        HolyPotion,
        PerfectCure = 26,
        GoddessBlessing = 30,
        PartyMemberSummon,
        PartyMemberMoveTo,
        SkillReset,
        StatReset,
        WarehouseRecall,
        LinkingHammer,
        Resurrection,
        MessageToServer,
        Teleportation,
        RepairHammer,
        TargetResurrection,
        ItemCreate,
        IncreaseFame,
        AppearanceChange,
        SexChange,
        Firework,
        CapitalRecall,
        BootleggeryRecall,
        ArenaRecall,
        ExpRemoval,
        NameChange,
        Etin1,
        Etin10,
        Etin100,
        Etin1000,
        GuildHouseRecall,
        LuckyCharm,
        ExtractionHammer,
        MoveWar,
        RecreationRune = 62,
        EnergyCrystal,
        EquipMale,
        EquipFemale,
        PerfectLinkingHammer = 69,
        MobGen = 73,
        PremiumLapisiaLv1 = 76,
        PremiumLapisiaLv2,
        PremiumLapisiaLv3,
        CrowleyEssence = 85,
        StrRecreationRune,
        DexRecreationRune,
        IntRecreationRune,
        WisRecreationRune,
        RecRecreationRune,
        LucRecreationRune,
        CrowleyLiquid,
        StrVial,
        DexVial,
        IntVial,
        WisVial,
        RecVial,
        LucVial,
        ChaoticSquare,
        DungeonMap,
        CraftingHammer = 102,
        SafetyCharm,
        TownMoveScroll,
        ItemAbilityTransfer,
        Catalyst,
        EnchantEnhancer,
        Dye = 110,
        HaloReactor,
        Spellbook,
        EternalContinuousResurrection,
        EternalPreventItemDrop,
        EternalPreventExpDrop,
        TyrosStone,
        AbsoluteRecreationRune,
        NpcRecall = 200,
        Item500 = 210,
        PetPickGoldDrop = 212,
        PetPickItemDrop,
        PetPickDrop
    };

    enum struct ItemType : uint8_t
    {
        OneHandedSword = 1,
        TwoHandedSword,
        OneHandedAxe,
        TwoHandedAxe,
        DualWeapon,
        Spear,
        OneHandedBlunt,
        TwoHandedBlunt,
        ReverseDagger,
        Dagger,
        Javelin,
        Staff,
        Bow,
        Crossbow,
        Knuckles,
        LightHelmet,
        LightUpperArmor,
        LightLowerArmor,
        LightShield,
        LightGloves,
        LightShoes,
        Ring,
        Necklace,
        LightCloak,
        Consumable25,
        Gold,
        Quest27,
        Quest28,
        Quest29,
        Lapis,
        FuryHelmet,
        FuryUpperArmor,
        FuryLowerArmor,
        FuryShield,
        FuryGloves,
        FuryShoes,
        Ring2,
        Consumable38,
        FuryCloak,
        Bracelet,
        Consumable41,
        Vehicle,
        Etin,
        Consumable44,
        OneHandedSword2,
        TwoHandedSword2,
        OneHandedAxe2,
        TwoHandedAxe2,
        DualWeapon2,
        DualWeapon3,
        Spear2,
        Spear3,
        OneHandedBlunt2,
        OneHandedBlunt3,
        TwoHandedBlunt2,
        TwoHandedBlunt3,
        ReverseDagger2,
        Dagger2,
        Javelin2,
        Staff2,
        Staff3,
        Bow2,
        Bow3,
        Crossbow2,
        Knuckles2,
        LightHelmet2,
        LightUpperArmor2,
        LightLowerArmor2,
        LightShield2,
        LightGloves2,
        LightShoes2,
        LightHelmet3,
        LightUpperArmor3,
        LightLowerArmor3,
        LightShield3,
        LightGloves3,
        LightShoes3,
        Consumable78,
        Consumable79,
        Consumable80,
        FuryHelmet2,
        FuryUpperArmor2,
        FuryLowerArmor2,
        FuryShield2,
        FuryGloves2,
        FuryShoes2,
        FuryHelmet3,
        FuryUpperArmor3,
        FuryLowerArmor3,
        FuryShield3,
        FuryGloves3,
        FuryShoes3,
        Unknown93,
        GoldBar,
        Lapisian,
        Necklace2,
        Bracelet2,
        Lapis98,
        Quest99,
        Special100,
        Special101,
        Special102,
        Special103,
        Pet = 120,
        Wings,
        Costume = 150
    };

    enum struct MakeType : char
    {
        Billing = 'B',
        MobDrop = 'D',
        G = 'G',
        QuestResult = 'Q',
        S = 'S',
        Exchange = 'T',
        UserDrop = 'U',
        V = 'V',
        CashShop = 'X'
    };

    enum struct ReqOg : uint8_t
    {
        Tradable,
        AccountBound,
        CharacterBound
    };
}
