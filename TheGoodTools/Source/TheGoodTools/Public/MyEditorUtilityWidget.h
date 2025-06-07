// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"

#include "Engine/StaticMeshActor.h"
#include "Engine/ReflectionCapture.h"
#include "Engine/SkyLight.h"

#include "MyEditorUtilityWidget.generated.h"


/**
 * 
 */
UCLASS()
class THEGOODTOOLS_API UMyEditorUtilityWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganizeWorldOutliner")
	TMap<UClass*, FName> FolderMap = {
		{AStaticMeshActor::StaticClass(), "Static Meshes"},
		{AReflectionCapture::StaticClass(), "ReflectionCaptures"},
		{ASkyLight::StaticClass(), "Lights"}
	};


	UFUNCTION(CallInEditor, BlueprintCallable, Category = "CleanUp")
	void OrganizeWorldOutliner();

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "CleanUp")
	void DeleteNullSMActors();


};
