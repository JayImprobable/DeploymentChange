// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::FirstClientTravel()
{
	UE_LOG(LogTemp, Warning, TEXT("*** BEFORE CLIENT TRAVEL ***"));

	FString TravelURL = TEXT("127.0.0.1:7777");
	this->ClientTravel(TravelURL, TRAVEL_Absolute, false /*bSeamless*/);

	UE_LOG(LogTemp, Warning, TEXT("*** AFTER CLIENT TRAVEL ***"));
}
