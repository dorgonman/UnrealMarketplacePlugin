//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "Core/PlayFabProfilesAPI.h"
#include "Core/PlayFabSettings.h"
#include "Core/PlayFabResultHandler.h"
#include "PlayFab.h"

using namespace PlayFab;
using namespace PlayFab::ProfilesModels;

UPlayFabProfilesAPI::UPlayFabProfilesAPI() {}

UPlayFabProfilesAPI::~UPlayFabProfilesAPI() {}

int UPlayFabProfilesAPI::GetPendingCalls() const
{
    return PlayFabRequestHandler::GetPendingCalls();
}

FString UPlayFabProfilesAPI::GetBuildIdentifier() const
{
    return PlayFabSettings::buildIdentifier;
}

void UPlayFabProfilesAPI::SetTitleId(const FString& titleId)
{
    PlayFabSettings::SetTitleId(titleId);
}

void UPlayFabProfilesAPI::SetDevSecretKey(const FString& developerSecretKey)
{
    PlayFabSettings::SetDeveloperSecretKey(developerSecretKey);
}

bool UPlayFabProfilesAPI::GetGlobalPolicy(
    
    const FGetGlobalPolicyDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    if (PlayFabSettings::GetEntityToken().Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }
    auto HttpRequest = PlayFabRequestHandler::SendRequest(PlayFabSettings::GetUrl(TEXT("/Profile/GetGlobalPolicy")), TEXT("{}"), TEXT("X-EntityToken"), PlayFabSettings::GetEntityToken());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabProfilesAPI::OnGetGlobalPolicyResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabProfilesAPI::OnGetGlobalPolicyResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetGlobalPolicyDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ProfilesModels::FGetGlobalPolicyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabProfilesAPI::GetProfile(
    ProfilesModels::FGetEntityProfileRequest& request,
    const FGetProfileDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    if (PlayFabSettings::GetEntityToken().Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }
    auto HttpRequest = PlayFabRequestHandler::SendRequest(PlayFabSettings::GetUrl(TEXT("/Profile/GetProfile")), request.toJSONString(), TEXT("X-EntityToken"), PlayFabSettings::GetEntityToken());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabProfilesAPI::OnGetProfileResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabProfilesAPI::OnGetProfileResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetProfileDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ProfilesModels::FGetEntityProfileResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabProfilesAPI::GetProfiles(
    ProfilesModels::FGetEntityProfilesRequest& request,
    const FGetProfilesDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    if (PlayFabSettings::GetEntityToken().Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }
    auto HttpRequest = PlayFabRequestHandler::SendRequest(PlayFabSettings::GetUrl(TEXT("/Profile/GetProfiles")), request.toJSONString(), TEXT("X-EntityToken"), PlayFabSettings::GetEntityToken());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabProfilesAPI::OnGetProfilesResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabProfilesAPI::OnGetProfilesResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetProfilesDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ProfilesModels::FGetEntityProfilesResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabProfilesAPI::SetGlobalPolicy(
    ProfilesModels::FSetGlobalPolicyRequest& request,
    const FSetGlobalPolicyDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    if (PlayFabSettings::GetEntityToken().Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }
    auto HttpRequest = PlayFabRequestHandler::SendRequest(PlayFabSettings::GetUrl(TEXT("/Profile/SetGlobalPolicy")), request.toJSONString(), TEXT("X-EntityToken"), PlayFabSettings::GetEntityToken());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabProfilesAPI::OnSetGlobalPolicyResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabProfilesAPI::OnSetGlobalPolicyResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetGlobalPolicyDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ProfilesModels::FSetGlobalPolicyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabProfilesAPI::SetProfileLanguage(
    ProfilesModels::FSetProfileLanguageRequest& request,
    const FSetProfileLanguageDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    if (PlayFabSettings::GetEntityToken().Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }
    auto HttpRequest = PlayFabRequestHandler::SendRequest(PlayFabSettings::GetUrl(TEXT("/Profile/SetProfileLanguage")), request.toJSONString(), TEXT("X-EntityToken"), PlayFabSettings::GetEntityToken());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabProfilesAPI::OnSetProfileLanguageResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabProfilesAPI::OnSetProfileLanguageResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetProfileLanguageDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ProfilesModels::FSetProfileLanguageResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabProfilesAPI::SetProfilePolicy(
    ProfilesModels::FSetEntityProfilePolicyRequest& request,
    const FSetProfilePolicyDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    if (PlayFabSettings::GetEntityToken().Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }
    auto HttpRequest = PlayFabRequestHandler::SendRequest(PlayFabSettings::GetUrl(TEXT("/Profile/SetProfilePolicy")), request.toJSONString(), TEXT("X-EntityToken"), PlayFabSettings::GetEntityToken());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabProfilesAPI::OnSetProfilePolicyResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabProfilesAPI::OnSetProfilePolicyResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetProfilePolicyDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ProfilesModels::FSetEntityProfilePolicyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

