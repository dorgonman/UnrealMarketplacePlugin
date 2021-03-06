//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated cpp file for the UE4 PlayFab plugin.
//
// API: Profiles
//////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayFabProfilesAPI.h"
#include "PlayFabProfilesModels.h"
#include "PlayFabProfilesModelDecoder.h"
#include "PlayFabPrivate.h"
#include "PlayFabEnums.h"

UPlayFabProfilesAPI::UPlayFabProfilesAPI(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UPlayFabProfilesAPI::SetRequestObject(UPlayFabJsonObject* JsonObject)
{
    RequestJsonObj = JsonObject;
}

UPlayFabJsonObject* UPlayFabProfilesAPI::GetResponseObject()
{
    return ResponseJsonObj;
}

FString UPlayFabProfilesAPI::PercentEncode(const FString& Text)
{
    FString OutText = Text;

    OutText = OutText.Replace(TEXT("!"), TEXT("%21"));
    OutText = OutText.Replace(TEXT("\""), TEXT("%22"));
    OutText = OutText.Replace(TEXT("#"), TEXT("%23"));
    OutText = OutText.Replace(TEXT("$"), TEXT("%24"));
    //OutText = OutText.Replace(TEXT("&"), TEXT("%26"));
    OutText = OutText.Replace(TEXT("'"), TEXT("%27"));
    OutText = OutText.Replace(TEXT("("), TEXT("%28"));
    OutText = OutText.Replace(TEXT(")"), TEXT("%29"));
    OutText = OutText.Replace(TEXT("*"), TEXT("%2A"));
    OutText = OutText.Replace(TEXT("+"), TEXT("%2B"));
    OutText = OutText.Replace(TEXT(","), TEXT("%2C"));
    //OutText = OutText.Replace(TEXT("/"), TEXT("%2F"));
    OutText = OutText.Replace(TEXT(":"), TEXT("%3A"));
    OutText = OutText.Replace(TEXT(";"), TEXT("%3B"));
    OutText = OutText.Replace(TEXT("="), TEXT("%3D"));
    //OutText = OutText.Replace(TEXT("?"), TEXT("%3F"));
    OutText = OutText.Replace(TEXT("@"), TEXT("%40"));
    OutText = OutText.Replace(TEXT("["), TEXT("%5B"));
    OutText = OutText.Replace(TEXT("]"), TEXT("%5D"));
    OutText = OutText.Replace(TEXT("{"), TEXT("%7B"));
    OutText = OutText.Replace(TEXT("}"), TEXT("%7D"));

    return OutText;
}

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Profiles API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Account Management
//////////////////////////////////////////////////////
/** Gets the global title access policy  */
UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetGlobalPolicy(FProfilesGetGlobalPolicyRequest request,
    FDelegateOnSuccessGetGlobalPolicy onSuccess,
    FDelegateOnFailurePlayFabError onFailure,
    UObject* customData)
{
    // Objects containing request data
    UPlayFabProfilesAPI* manager = NewObject<UPlayFabProfilesAPI>();
    if (manager->IsSafeForRootSet()) manager->AddToRoot();
    UPlayFabJsonObject* OutRestJsonObj = NewObject<UPlayFabJsonObject>();
    manager->mCustomData = customData;

    // Assign delegates
    manager->OnSuccessGetGlobalPolicy = onSuccess;
    manager->OnFailure = onFailure;
    manager->OnPlayFabResponse.AddDynamic(manager, &UPlayFabProfilesAPI::HelperGetGlobalPolicy);

    // Setup the request
    manager->PlayFabRequestURL = "/Profile/GetGlobalPolicy";
    manager->useEntityToken = true;

    // Serialize all the request properties to json

    // Add Request to manager
    manager->SetRequestObject(OutRestJsonObj);

    return manager;
}

// Implements FOnPlayFabProfilesRequestCompleted
void UPlayFabProfilesAPI::HelperGetGlobalPolicy(FPlayFabBaseModel response, UObject* customData, bool successful)
{
    FPlayFabError error = response.responseError;
    if (error.hasError && OnFailure.IsBound())
    {
        OnFailure.Execute(error, customData);
    }
    else if (!error.hasError && OnSuccessGetGlobalPolicy.IsBound())
    {
        FProfilesGetGlobalPolicyResponse result = UPlayFabProfilesModelDecoder::decodeGetGlobalPolicyResponseResponse(response.responseData);
        OnSuccessGetGlobalPolicy.Execute(result, mCustomData);
    }
    this->RemoveFromRoot();
}

/** Retrieves the entity's profile. */
UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetProfile(FProfilesGetEntityProfileRequest request,
    FDelegateOnSuccessGetProfile onSuccess,
    FDelegateOnFailurePlayFabError onFailure,
    UObject* customData)
{
    // Objects containing request data
    UPlayFabProfilesAPI* manager = NewObject<UPlayFabProfilesAPI>();
    if (manager->IsSafeForRootSet()) manager->AddToRoot();
    UPlayFabJsonObject* OutRestJsonObj = NewObject<UPlayFabJsonObject>();
    manager->mCustomData = customData;

    // Assign delegates
    manager->OnSuccessGetProfile = onSuccess;
    manager->OnFailure = onFailure;
    manager->OnPlayFabResponse.AddDynamic(manager, &UPlayFabProfilesAPI::HelperGetProfile);

    // Setup the request
    manager->PlayFabRequestURL = "/Profile/GetProfile";
    manager->useEntityToken = true;

    // Serialize all the request properties to json
    OutRestJsonObj->SetBoolField(TEXT("DataAsObject"), request.DataAsObject);
    if (request.Entity != nullptr) OutRestJsonObj->SetObjectField(TEXT("Entity"), request.Entity);

    // Add Request to manager
    manager->SetRequestObject(OutRestJsonObj);

    return manager;
}

// Implements FOnPlayFabProfilesRequestCompleted
void UPlayFabProfilesAPI::HelperGetProfile(FPlayFabBaseModel response, UObject* customData, bool successful)
{
    FPlayFabError error = response.responseError;
    if (error.hasError && OnFailure.IsBound())
    {
        OnFailure.Execute(error, customData);
    }
    else if (!error.hasError && OnSuccessGetProfile.IsBound())
    {
        FProfilesGetEntityProfileResponse result = UPlayFabProfilesModelDecoder::decodeGetEntityProfileResponseResponse(response.responseData);
        OnSuccessGetProfile.Execute(result, mCustomData);
    }
    this->RemoveFromRoot();
}

/** Retrieves the entity's profile. */
UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetProfiles(FProfilesGetEntityProfilesRequest request,
    FDelegateOnSuccessGetProfiles onSuccess,
    FDelegateOnFailurePlayFabError onFailure,
    UObject* customData)
{
    // Objects containing request data
    UPlayFabProfilesAPI* manager = NewObject<UPlayFabProfilesAPI>();
    if (manager->IsSafeForRootSet()) manager->AddToRoot();
    UPlayFabJsonObject* OutRestJsonObj = NewObject<UPlayFabJsonObject>();
    manager->mCustomData = customData;

    // Assign delegates
    manager->OnSuccessGetProfiles = onSuccess;
    manager->OnFailure = onFailure;
    manager->OnPlayFabResponse.AddDynamic(manager, &UPlayFabProfilesAPI::HelperGetProfiles);

    // Setup the request
    manager->PlayFabRequestURL = "/Profile/GetProfiles";
    manager->useEntityToken = true;

    // Serialize all the request properties to json
    OutRestJsonObj->SetBoolField(TEXT("DataAsObject"), request.DataAsObject);
    if (request.Entities.Num() == 0) {
        OutRestJsonObj->SetFieldNull(TEXT("Entities"));
    } else {
        OutRestJsonObj->SetObjectArrayField(TEXT("Entities"), request.Entities);
    }

    // Add Request to manager
    manager->SetRequestObject(OutRestJsonObj);

    return manager;
}

// Implements FOnPlayFabProfilesRequestCompleted
void UPlayFabProfilesAPI::HelperGetProfiles(FPlayFabBaseModel response, UObject* customData, bool successful)
{
    FPlayFabError error = response.responseError;
    if (error.hasError && OnFailure.IsBound())
    {
        OnFailure.Execute(error, customData);
    }
    else if (!error.hasError && OnSuccessGetProfiles.IsBound())
    {
        FProfilesGetEntityProfilesResponse result = UPlayFabProfilesModelDecoder::decodeGetEntityProfilesResponseResponse(response.responseData);
        OnSuccessGetProfiles.Execute(result, mCustomData);
    }
    this->RemoveFromRoot();
}

/** Sets the global title access policy  */
UPlayFabProfilesAPI* UPlayFabProfilesAPI::SetGlobalPolicy(FProfilesSetGlobalPolicyRequest request,
    FDelegateOnSuccessSetGlobalPolicy onSuccess,
    FDelegateOnFailurePlayFabError onFailure,
    UObject* customData)
{
    // Objects containing request data
    UPlayFabProfilesAPI* manager = NewObject<UPlayFabProfilesAPI>();
    if (manager->IsSafeForRootSet()) manager->AddToRoot();
    UPlayFabJsonObject* OutRestJsonObj = NewObject<UPlayFabJsonObject>();
    manager->mCustomData = customData;

    // Assign delegates
    manager->OnSuccessSetGlobalPolicy = onSuccess;
    manager->OnFailure = onFailure;
    manager->OnPlayFabResponse.AddDynamic(manager, &UPlayFabProfilesAPI::HelperSetGlobalPolicy);

    // Setup the request
    manager->PlayFabRequestURL = "/Profile/SetGlobalPolicy";
    manager->useEntityToken = true;

    // Serialize all the request properties to json
    if (request.Permissions.Num() == 0) {
        OutRestJsonObj->SetFieldNull(TEXT("Permissions"));
    } else {
        OutRestJsonObj->SetObjectArrayField(TEXT("Permissions"), request.Permissions);
    }

    // Add Request to manager
    manager->SetRequestObject(OutRestJsonObj);

    return manager;
}

// Implements FOnPlayFabProfilesRequestCompleted
void UPlayFabProfilesAPI::HelperSetGlobalPolicy(FPlayFabBaseModel response, UObject* customData, bool successful)
{
    FPlayFabError error = response.responseError;
    if (error.hasError && OnFailure.IsBound())
    {
        OnFailure.Execute(error, customData);
    }
    else if (!error.hasError && OnSuccessSetGlobalPolicy.IsBound())
    {
        FProfilesSetGlobalPolicyResponse result = UPlayFabProfilesModelDecoder::decodeSetGlobalPolicyResponseResponse(response.responseData);
        OnSuccessSetGlobalPolicy.Execute(result, mCustomData);
    }
    this->RemoveFromRoot();
}

/** Updates the entity's language. The precedence hierarchy for communication to the player is Title Player Account language, Master Player Account language, and then title default language if the first two aren't set or supported. */
UPlayFabProfilesAPI* UPlayFabProfilesAPI::SetProfileLanguage(FProfilesSetProfileLanguageRequest request,
    FDelegateOnSuccessSetProfileLanguage onSuccess,
    FDelegateOnFailurePlayFabError onFailure,
    UObject* customData)
{
    // Objects containing request data
    UPlayFabProfilesAPI* manager = NewObject<UPlayFabProfilesAPI>();
    if (manager->IsSafeForRootSet()) manager->AddToRoot();
    UPlayFabJsonObject* OutRestJsonObj = NewObject<UPlayFabJsonObject>();
    manager->mCustomData = customData;

    // Assign delegates
    manager->OnSuccessSetProfileLanguage = onSuccess;
    manager->OnFailure = onFailure;
    manager->OnPlayFabResponse.AddDynamic(manager, &UPlayFabProfilesAPI::HelperSetProfileLanguage);

    // Setup the request
    manager->PlayFabRequestURL = "/Profile/SetProfileLanguage";
    manager->useEntityToken = true;

    // Serialize all the request properties to json
    if (request.Entity != nullptr) OutRestJsonObj->SetObjectField(TEXT("Entity"), request.Entity);
    OutRestJsonObj->SetNumberField(TEXT("ExpectedVersion"), request.ExpectedVersion);
    if (request.Language.IsEmpty() || request.Language == "") {
        OutRestJsonObj->SetFieldNull(TEXT("Language"));
    } else {
        OutRestJsonObj->SetStringField(TEXT("Language"), request.Language);
    }

    // Add Request to manager
    manager->SetRequestObject(OutRestJsonObj);

    return manager;
}

// Implements FOnPlayFabProfilesRequestCompleted
void UPlayFabProfilesAPI::HelperSetProfileLanguage(FPlayFabBaseModel response, UObject* customData, bool successful)
{
    FPlayFabError error = response.responseError;
    if (error.hasError && OnFailure.IsBound())
    {
        OnFailure.Execute(error, customData);
    }
    else if (!error.hasError && OnSuccessSetProfileLanguage.IsBound())
    {
        FProfilesSetProfileLanguageResponse result = UPlayFabProfilesModelDecoder::decodeSetProfileLanguageResponseResponse(response.responseData);
        OnSuccessSetProfileLanguage.Execute(result, mCustomData);
    }
    this->RemoveFromRoot();
}

/** Sets the profiles access policy */
UPlayFabProfilesAPI* UPlayFabProfilesAPI::SetProfilePolicy(FProfilesSetEntityProfilePolicyRequest request,
    FDelegateOnSuccessSetProfilePolicy onSuccess,
    FDelegateOnFailurePlayFabError onFailure,
    UObject* customData)
{
    // Objects containing request data
    UPlayFabProfilesAPI* manager = NewObject<UPlayFabProfilesAPI>();
    if (manager->IsSafeForRootSet()) manager->AddToRoot();
    UPlayFabJsonObject* OutRestJsonObj = NewObject<UPlayFabJsonObject>();
    manager->mCustomData = customData;

    // Assign delegates
    manager->OnSuccessSetProfilePolicy = onSuccess;
    manager->OnFailure = onFailure;
    manager->OnPlayFabResponse.AddDynamic(manager, &UPlayFabProfilesAPI::HelperSetProfilePolicy);

    // Setup the request
    manager->PlayFabRequestURL = "/Profile/SetProfilePolicy";
    manager->useEntityToken = true;

    // Serialize all the request properties to json
    if (request.Entity != nullptr) OutRestJsonObj->SetObjectField(TEXT("Entity"), request.Entity);
    if (request.Statements.Num() == 0) {
        OutRestJsonObj->SetFieldNull(TEXT("Statements"));
    } else {
        OutRestJsonObj->SetObjectArrayField(TEXT("Statements"), request.Statements);
    }

    // Add Request to manager
    manager->SetRequestObject(OutRestJsonObj);

    return manager;
}

// Implements FOnPlayFabProfilesRequestCompleted
void UPlayFabProfilesAPI::HelperSetProfilePolicy(FPlayFabBaseModel response, UObject* customData, bool successful)
{
    FPlayFabError error = response.responseError;
    if (error.hasError && OnFailure.IsBound())
    {
        OnFailure.Execute(error, customData);
    }
    else if (!error.hasError && OnSuccessSetProfilePolicy.IsBound())
    {
        FProfilesSetEntityProfilePolicyResponse result = UPlayFabProfilesModelDecoder::decodeSetEntityProfilePolicyResponseResponse(response.responseData);
        OnSuccessSetProfilePolicy.Execute(result, mCustomData);
    }
    this->RemoveFromRoot();
}



void UPlayFabProfilesAPI::OnProcessRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    // Be sure that we have no data from previous response
    ResetResponseData();

    if (!IsValidLowLevel())
    {
        UE_LOG(LogPlayFab, Error, TEXT("The request object is invalid during OnProcessRequestComplete."));
        return;
    }
    if (!OnPlayFabResponse.IsBound())
    {
        UE_LOG(LogPlayFab, Error, TEXT("OnPlayFabResponse has come un-bound during OnProcessRequestComplete."));
        return;
    }

    FPlayFabBaseModel myResponse;

    // Check we have result to process further
    if (!bWasSuccessful)
    {
        UE_LOG(LogPlayFab, Error, TEXT("Request failed: %s"), *Request->GetURL());

        // Broadcast the result event
        myResponse.responseError.hasError = true;
        myResponse.responseError.ErrorCode = 503;
        myResponse.responseError.ErrorName = "Unable to contact server";
        myResponse.responseError.ErrorMessage = "Unable to contact server";

        OnPlayFabResponse.Broadcast(myResponse, mCustomData, false);

        return;
    }

    // Save response data as a string
    ResponseContent = Response->GetContentAsString();

    // Save response code as int32
    ResponseCode = Response->GetResponseCode();

    // Try to deserialize data to JSON
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(ResponseContent);
    FJsonSerializer::Deserialize(JsonReader, ResponseJsonObj->GetRootObject());

    // Decide whether the request was successful
    bIsValidJsonResponse = bWasSuccessful && ResponseJsonObj->GetRootObject().IsValid();

    // Log errors
    if (!bIsValidJsonResponse)
        UE_LOG(LogPlayFab, Warning, TEXT("JSON could not be decoded!"));

    // Log response state
    UE_LOG(LogPlayFab, Log, TEXT("Response : %s"), *ResponseContent);

    myResponse.responseError.decodeError(ResponseJsonObj);
    myResponse.responseData = ResponseJsonObj;
    IPlayFab* pfSettings = &(IPlayFab::Get());

    if (returnsEntityToken)
        pfSettings->setEntityToken(myResponse.responseData->GetObjectField("data")->GetStringField("EntityToken"));

    // Broadcast the result event
    OnPlayFabResponse.Broadcast(myResponse, mCustomData, myResponse.responseError.hasError);
    pfSettings->ModifyPendingCallCount(-1);
}

void UPlayFabProfilesAPI::Activate()
{
    IPlayFab* pfSettings = &(IPlayFab::Get());

    FString RequestUrl;
    RequestUrl = pfSettings->getUrl(PlayFabRequestURL);

    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(RequestUrl);
    HttpRequest->SetVerb(TEXT("POST"));

    // Headers
    auto entityToken = pfSettings->getEntityToken();
    auto clientToken = pfSettings->getSessionTicket();
    auto devSecretKey = pfSettings->getSecretApiKey();
    if (useEntityToken && entityToken.Len() > 0)
        HttpRequest->SetHeader(TEXT("X-EntityToken"), entityToken);
    else if (useSessionTicket && clientToken.Len() > 0)
        HttpRequest->SetHeader(TEXT("X-Authentication"), clientToken);
    else if (useSecretKey && devSecretKey.Len() > 0)
        HttpRequest->SetHeader(TEXT("X-SecretKey"), devSecretKey);
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("X-PlayFabSDK"), pfSettings->getVersionString());
    HttpRequest->SetHeader(TEXT("X-ReportErrorAsSuccess"), TEXT("true")); // FHttpResponsePtr doesn't provide sufficient information when an error code is returned
    for (TMap<FString, FString>::TConstIterator It(RequestHeaders); It; ++It)
        HttpRequest->SetHeader(It.Key(), It.Value());

    // Serialize data to json string
    FString OutputString;
    TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(RequestJsonObj->GetRootObject().ToSharedRef(), Writer);

    // Set Json content
    HttpRequest->SetContentAsString(OutputString);

    UE_LOG(LogPlayFab, Log, TEXT("Request: %s"), *OutputString);

    // Bind event
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UPlayFabProfilesAPI::OnProcessRequestComplete);

    // Execute the request
    pfSettings->ModifyPendingCallCount(1);
    HttpRequest->ProcessRequest();
}

void UPlayFabProfilesAPI::ResetResponseData()
{
    if (ResponseJsonObj != nullptr)
        ResponseJsonObj->Reset();
    else
        ResponseJsonObj = NewObject<UPlayFabJsonObject>();
    bIsValidJsonResponse = false;
}
