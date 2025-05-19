// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEditorUtilityWidget.h"
#include <Subsystems/EditorActorSubsystem.h>

void UMyEditorUtilityWidget::OrganizeWorldOutliner()
{
	UWorld* World = GEditor->GetEditorWorldContext().World();
	UEditorActorSubsystem* ActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();
	TArray<AActor*> AllActors = ActorSubsystem->GetAllLevelActors();

	for (AActor* Actor : AllActors)
	{
		if (ensure(Actor))
		{
			const FName* FolderName = FolderMap.Find(Actor->GetClass());
			if (ensure(FolderName))
			{
				Actor->SetFolderPath(*FolderName);
			}
		}
	}
}

void UMyEditorUtilityWidget::DeleteNullSMActors()
{
	UWorld* World = GEditor->GetEditorWorldContext().World();
	UEditorActorSubsystem* ActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();
	TArray<AActor*> AllActors = ActorSubsystem->GetAllLevelActors();


	for (AActor* Actor : AllActors)
	{
		if (ensure(Actor))
		{
			AStaticMeshActor* StaticMeshActor = dynamic_cast<AStaticMeshActor*>(Actor);
			if (ensure(StaticMeshActor))
			{
				UStaticMeshComponent* StaticMeshComponent = StaticMeshActor->GetStaticMeshComponent();

				if (ensure(StaticMeshComponent) && nullptr == StaticMeshComponent->GetStaticMesh())
				{
					Actor->Destroy();
				}
			}
		}
	}
}

 