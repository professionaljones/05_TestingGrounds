// Fill out your copyright notice in the Description page of Project Settings.

#include "S05_TestingGrounds.h"
#include "WP_InventorySlotWidget.h"


void UWP_InventorySlotWidget::SetEquippedItem()
{
	//Empty for now
}

void UWP_InventorySlotWidget::SetItemTexture(APickup* Item)
{
	//If the item is valid update the widget's texture.
	//If not, assign a null ptr to it so the widget won't broadcast wrong information to the player
	(Item) ? ItemTexture = Item->GetPickupTexture() : ItemTexture = nullptr;
}