
// https://discord.gg/h-m
namespace SDK {
 
    int UWorlds = 0x10C628D8;
    int Fname = 0x12144040;
    int Gameinstance = 0x1d8; // Class Engine.World -> struct UGameInstance
 
    int LocalPlayers = 0x38; // Class Engine.GameInstance -> struct TArray<struct ULocalPlayer*> LocalPlayers; 
    int PlayerController = 0x30; // Class Engine.Player - > struct APlayerController
 
    int LocalPawn = 0x338; // Class Engine.PlayerController - > struct APawn* AcknowledgedPawn 
 
    int PlayerState = 0x2b0; // Class Engine.Pawn - > struct APlayerState* PlayerState;
    int RootComponet = 0x198;  //Class Engine.Actor -> struct USceneComponent* RootComponent;
    int GameState = 0x160; // Class Engine.World -> struct AGameStateBase* GameState;
    int PersistentLevel = 0x30; // Class Engine.World -> struct ULevel* PersistentLevel;
    
    int Velocity = 0x168; // Class Engine.SceneComponent -> struct FVector ComponentVelocity;  
    int GunName = 0x98;
    int IsDBNO = 0x93a; //    FortniteGameClass.AFortPawn -> char bIsDBNO : 1 
    int IsDying = 0x758; //    FortniteGameClass.AFortPawn -> char bIsDying : 1 
 
    int Cameramanager = 0x348; // Class Engine.PlayerController -> struct APlayerCameraManager* PlayerCameraManager; 
    int Mesh = 0x318; // Class Engine.Character struct USkeletalMeshComponent* Mesh x318(0x08) 
    int Revivefromdbnotime = 0x4c78; // FortniteGameClass.AFortPlayerPawnAthena - > float ReviveFromDBNOTime; 
    int TeamId = 0x1251;  // FortniteGameClass.AFortPlayerStateAthena - > char TeamIndex;  
    int pawn_private = 0x308; // Class Engine.PlayerState -> struct APawn* PawnPrivate;  
    int bIsABot = 0x29a; // Class Engine.PlayerState -> char bIsABot : 1;  
    int RelativeLocation = 0x120; // Class Engine.SceneComponent -> struct FVector RelativeLocation;  
    int PlayerArray = 0x2a8; // Class Engine.GameStateBase -> struct TArray<struct APlayerState*> PlayerArray;  
    int DefaultFOV = 0x2a4; //Engine_classes.APlayerCameraManager - > DefaultFOV 
    int AActor = 0xA0;
    int ActorCount = 0xA8;
    int ComponetToWorld = 0x1c0;
    int BoneArray = 0x598;
    int LAST_SUMBIT_TIME = 0x2E8;
    int LAST_SUMBIT_TIME_ON_SCREEN = 0x2F0;
    int Levels = 0x170;
 
    namespace FortWeapon {
 
        int CurrentWeapons = 0xa20;// Class FortniteGame.FortPawn struct AFortWeapon* CurrentWeapon
        int WeaponData = 0x4f0; // Class FortniteGame.FortWeapon struct UFortWeaponItemDefinition* WeaponData
        int ItemName = 0x38; // Class ItemizationCoreRuntime.ItemDefinitionBase -> //struct FText ItemName;
        int Tier = 0x13b; // Class FortniteGame.FortItemDefinition - > enum class EFortItemTier Tier
        int bIsReloadingWeapon = 0x388; // Class FortniteGame.AFortWeapon -> bool bIsReloadingWeapon;
        int AmmoCount = 0xe54; // Class FortniteGame.AActor -> int32_t AmmoCount;
        int bIsTargeting = 0x581; // Class FortniteGame.CustomCharacterPartAnimInstance -> char bIsTargeting : 1;
 
 
    }
    namespace Character {
        int bIsCrouched = 0x45c; // Class Engine.Character -> char bIsCrouched : 1;
    }
    namespace FortPawn {
 
        int bIsJumping = 0xa18; //Class FortniteGame.AFortPawn - > char bIsJumping : 1; 
        int bIsSliding = 0x75b; //Class FortniteGame.AFortPawn - > char bIsSliding : 1;
        int TargetedFortPawn = 0x1890;  //Class FortniteGame.AFortPlayerController - > TargetedFortPawn
    }
}
//https://discord.gg/h-m
