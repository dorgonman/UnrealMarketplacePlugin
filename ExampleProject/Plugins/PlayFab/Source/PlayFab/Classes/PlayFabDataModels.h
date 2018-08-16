//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Data
//////////////////////////////////////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabEnums.h"
#include "PlayFabDataModels.generated.h"

class UPlayFabJsonObject;

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Data API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// File
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FDataAbortFileUploadsRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity to perform this action on. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** Names of the files to have their pending uploads aborted. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        FString FileNames;
    /**
     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not
     * be performed.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataAbortFileUploadsResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity id and type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** The current version of the profile, can be used for concurrency control during updates. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataDeleteFilesRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity to perform this action on. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** Names of the files to be deleted. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        FString FileNames;
    /**
     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not
     * be performed.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataDeleteFilesResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity id and type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** The current version of the profile, can be used for concurrency control during updates. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataFinalizeFileUploadsRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity to perform this action on. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        FString FileNames;
};

USTRUCT(BlueprintType)
struct FDataFinalizeFileUploadsResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity id and type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** Collection of metadata for the entity's files */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Metadata = nullptr;
    /** The current version of the profile, can be used for concurrency control during updates. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataGetFilesRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity to perform this action on. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
};

USTRUCT(BlueprintType)
struct FDataGetFilesResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity id and type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** Collection of metadata for the entity's files */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Metadata = nullptr;
    /** The current version of the profile, can be used for concurrency control during updates. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataInitiateFileUploadsRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity to perform this action on. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        FString FileNames;
    /**
     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not
     * be performed.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataInitiateFileUploadsResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity id and type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** The current version of the profile, can be used for concurrency control during updates. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        int32 ProfileVersion = 0;
    /** Collection of file names and upload urls */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | File Models")
        TArray<UPlayFabJsonObject*> UploadDetails;
};


///////////////////////////////////////////////////////
// Object
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FDataGetObjectsRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity to perform this action on. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        UPlayFabJsonObject* Entity = nullptr;
    /**
     * Determines whether the object will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON
     * object.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        bool EscapeObject = false;
};

USTRUCT(BlueprintType)
struct FDataGetObjectsResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity id and type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        UPlayFabJsonObject* Entity = nullptr;
    /** Requested objects that the calling entity has access to */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        UPlayFabJsonObject* Objects = nullptr;
    /** The current version of the profile, can be used for concurrency control during updates. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        int32 ProfileVersion = 0;
};

USTRUCT(BlueprintType)
struct FDataSetObjectsRequest
{
    GENERATED_USTRUCT_BODY()
public:
    /** The entity to perform this action on. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        UPlayFabJsonObject* Entity = nullptr;
    /**
     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from
     * GetProfile API, you can ensure that the object set will only be performed if the profile has not been updated by any
     * other clients since the version you last loaded.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        int32 ExpectedProfileVersion = 0;
    /** Collection of objects to set on the profile. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        TArray<UPlayFabJsonObject*> Objects;
};

USTRUCT(BlueprintType)
struct FDataSetObjectsResponse
{
    GENERATED_USTRUCT_BODY()
public:
    /** New version of the entity profile. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        int32 ProfileVersion = 0;
    /** New version of the entity profile. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Data | Object Models")
        TArray<UPlayFabJsonObject*> SetResults;
};

