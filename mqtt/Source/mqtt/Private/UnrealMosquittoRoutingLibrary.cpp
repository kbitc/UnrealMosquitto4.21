// Copyright 2019 Warp Studios, All Rights Reserved.
#include "UnrealMosquittoRoutingLibrary.h"
#include "mqtt.h"


#include <mosquitto.h>

bool UUnrealMosquittoRoutingLibrary::RoutingNotMatched(const FString & A, const FString & B)
{
	const char* topic = TCHAR_TO_ANSI(*A);
	const char* sub = TCHAR_TO_ANSI(*B);

	bool result;
	mosquitto_topic_matches_sub(sub, topic, &result);

	return !result;
}