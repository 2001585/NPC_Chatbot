#include "MyNPC.h"

AMyNPC::AMyNPC() {
    PrimaryActorTick.bCanEverTick = false;

    // �ؽ�Ʈ ������ ������Ʈ ���� �� �ʱ�ȭ
    TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
    TextRenderComponent->SetupAttachment(RootComponent);

    TextRenderComponent->SetText(FText::FromString("NPC"));
    TextRenderComponent->SetTextRenderColor(FColor::White);
    TextRenderComponent->SetHorizontalAlignment(EHTA_Center);
    TextRenderComponent->SetVerticalAlignment(EVRTA_TextCenter);
}

void AMyNPC::BeginPlay() {
    Super::BeginPlay();
}

void AMyNPC::UpdateText(const FString& Text) {
    if (TextRenderComponent) {
        TextRenderComponent->SetText(FText::FromString(Text));
    }
}
