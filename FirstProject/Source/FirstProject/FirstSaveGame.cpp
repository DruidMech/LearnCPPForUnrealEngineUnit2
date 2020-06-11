// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstSaveGame.h"


UFirstSaveGame::UFirstSaveGame()
{
	SaveSlotName = TEXT("TestSaveSlot");
	UserIndex = 0;

	CharacterStats.WeaponName = "";
	CharacterStats.LevelName = "";
}
