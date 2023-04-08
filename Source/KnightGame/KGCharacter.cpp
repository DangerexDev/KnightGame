#include "KGCharacter.h"

#include "EnhancedInputComponent.h"

AKGCharacter::AKGCharacter()
{
}

void AKGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* const EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AKGCharacter::Interact);
	}
}

void AKGCharacter::Interact()
{
}
