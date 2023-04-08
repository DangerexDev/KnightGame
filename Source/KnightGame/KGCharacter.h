#pragma once

#include "KnightGameCharacter.h"

#include "KGCharacter.generated.h"

UCLASS()
class AKGCharacter : public AKnightGameCharacter
{
	GENERATED_BODY()

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* InteractAction;

public:
	AKGCharacter();

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void Interact();
};
