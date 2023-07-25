#pragma once

#include "Components/ActorComponent.h"

#include "KGInteractionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KNIGHTGAME_API UKGInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UKGInteractionComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	float interactionSphereRadius;
};
