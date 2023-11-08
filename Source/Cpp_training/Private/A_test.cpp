// Fill out your copyright notice in the Description page of Project Settings.


#include "A_test.h"
#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list <string> PublishedVideoTitles;


};

int main ()
{
	YoutubeChannel ytChannel;
	ytChannel.Name"CodeBeauty";
	ytChannel.OwnerName"Saldina";
	ytChannel.SubscribersCount = 1800;
	ytChannel.PublishedVideoTitles = "C++ for beginners Video 1", "HTLM & CSS Video 1", "C++ OOP Video 1";

	cout << "Name: " << ytChannel.Name << endl;
	cout << "OwnerName: " << ytChannel.OwnerName << endl;
	cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
	cout << "Videos:" << endl;
 	for(string VideoTitle: ytChannel.PublishedVideoTitles) {
		cout<<VideoTitle << endl;
	}



}

// Sets default values
AA_test::AA_test()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AA_test::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA_test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

