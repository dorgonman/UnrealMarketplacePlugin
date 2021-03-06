//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Matchmaker
//////////////////////////////////////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabEnums.h"
#include "PlayFabMatchmakerModels.generated.h"

class UPlayFabJsonObject;

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Matchmaker API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Matchmaking
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerAuthUserRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** Session Ticket provided by the client. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString AuthorizationTicket;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerAuthUserResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** Boolean indicating if the user has been authorized to use the external match-making service. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        bool Authorized = false;
    /** PlayFab unique identifier of the account that has been authorized. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerJoinedRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /**
     * Unique identifier of the Game Server Instance the user is joining. This must be a Game Server Instance started with the
     * Matchmaker/StartGame API.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString LobbyId;
    /** PlayFab unique identifier for the player joining. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerJoinedResponse
{
    GENERATED_USTRUCT_BODY()
public:
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerLeftRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /**
     * Unique identifier of the Game Server Instance the user is leaving. This must be a Game Server Instance started with the
     * Matchmaker/StartGame API.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString LobbyId;
    /** PlayFab unique identifier for the player leaving. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerLeftResponse
{
    GENERATED_USTRUCT_BODY()
public:
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerStartGameRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** Unique identifier of the previously uploaded build executable which is to be started. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString Build;
    /** Custom command line argument when starting game server process. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString CustomCommandLineData;
    /**
     * HTTP endpoint URL for receiving game status events, if using an external matchmaker. When the game ends, PlayFab will
     * make a POST request to this URL with the X-SecretKey header set to the value of the game's secret and an
     * application/json body of { "EventName": "game_ended", "GameID": "<gameid>" }.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString ExternalMatchmakerEventEndpoint;
    /** Game mode for this Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString GameMode;
    /** Region with which to associate the server, for filtering. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        ERegion Region;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerStartGameResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** Unique identifier for the game/lobby in the new Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString GameID;
    /** IPV4 address of the server */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString ServerIPV4Address;
    /** IPV6 address of the new Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString ServerIPV6Address;
    /** Port number for communication with the Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        int32 ServerPort = 0;
    /** Public DNS name (if any) of the server */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString ServerPublicDNSName;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerUserInfoRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /**
     * Minimum catalog version for which data is requested (filters the results to only contain inventory items which have a
     * catalog version of this or higher).
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        int32 MinCatalogVersion = 0;
    /** PlayFab unique identifier of the user whose information is being requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerUserInfoResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** Array of inventory items in the user's current inventory. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        TArray<UPlayFabJsonObject*> Inventory;
    /** Boolean indicating whether the user is a developer. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        bool IsDeveloper = false;
    /** PlayFab unique identifier of the user whose information was requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
    /** Steam unique identifier, if the user has an associated Steam account. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString SteamId;
    /** Title specific display name, if set. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString TitleDisplayName;
    /** PlayFab unique user name. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString Username;
    /** Array of virtual currency balance(s) belonging to the user. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        UPlayFabJsonObject* VirtualCurrency;
    /** Array of remaining times and timestamps for virtual currencies. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        UPlayFabJsonObject* VirtualCurrencyRechargeTimes = nullptr;
};

