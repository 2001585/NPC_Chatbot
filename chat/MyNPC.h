#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "MyNPC.generated.h"

UCLASS()
class LASTLASTTEST_API AMyNPC : public AActor {
    GENERATED_BODY()

public:
    // ������
    AMyNPC();

    // �ؽ�Ʈ ������Ʈ �޼���
    UFUNCTION(BlueprintCallable, Category = "NPC")
    void UpdateText(const FString& Text);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UTextRenderComponent* TextRenderComponent;

    virtual void BeginPlay() override;
};
