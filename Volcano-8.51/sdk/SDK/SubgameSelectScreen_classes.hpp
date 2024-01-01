#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x213 (0x533 - 0x320)
// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
class USubgameSelectScreen_C : public UFortSubGameSelectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOutBGImage;                                    // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeInBGImage;                                     // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowCreativeImage;                                 // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SaleANIM;                                          // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Button_Shine;                                      // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P1P2;                                          // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P1;                                            // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P2;                                            // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ContractSeperator;                                 // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToggleCycle;                                       // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchTextures;                                    // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ExpandSeperator;                                   // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DescriptionIntro;                                  // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchMaterial;                                    // 0x390(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     AthenaBtn;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AthenaShine;                                       // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BGImage;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        BRContent;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonBack;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonExit;                                        // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPurchase;                                    // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRedeem;                                      // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CampaignBtn;                                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CreativeBtn;                                       // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CreativeContent;                                   // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CreativeDescriptionTextNormal;                     // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CreativeDescriptionTextSale;                       // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CreativeShine;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FullDescription;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PVEDescriptionBorderSale;                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVEDescriptionTextNormal;                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVEDescriptionTextSale;                            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVPDescriptionTextNormal;                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVPDescriptionTextSale;                            // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*               QuitConent;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_Logos;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shine;                                             // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        STWContent;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherBR;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherCreative;                                  // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherMenu;                                      // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherStW;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      TitleImage;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         WasLastPlayForward;                                // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x4A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        PveRotatorIndex;                                   // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubGameSelectRotatorItems>    Items;                                             // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class ESubGame                          SelectedSubgame;                                   // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortSubgameSelectOption, class UTexture2D*> SubGameCMSTexture;                                 // 0x4C8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShouldStartOnSTWUpsell;                            // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SaleDelayAnim;                                     // 0x520(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShineAnimDelay;                                    // 0x528(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SlideShownCampaign;                                // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlideShownBR;                                      // 0x531(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlideShownCreative;                                // 0x532(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameSelectScreen_C");
		return Clss;
	}

	void MoveBRToTop(class UVerticalBox* Parent, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UVerticalBox* K2Node_DynamicCast_AsVertical_Box, bool K2Node_DynamicCast_bSuccess);
	void AnimShineDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void AnimSaleDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetCMSTextureToKeyArt(enum class EFortSubgameSelectOption Key, enum class EFortSubgameSelectOption Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName K2Node_Select_Default, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void StartSubgameSelectMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShowUpsell(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
	void InitializeRedeemButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeShortDescriptions(class FText ShortDescription, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool CallFunc_GetIsOnSale_ReturnValue, bool CallFunc_GetIsOnSale_ReturnValue_1, class FText CallFunc_GetShortDescription_ShortDescription, bool CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetShortDescription_ShortDescription_1, bool CallFunc_GetShortDescription_ReturnValue_1, int32 Temp_int_Variable_3, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, bool CallFunc_GetIsOnSale_ReturnValue_2, int32 K2Node_Select_Default_1, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, bool Temp_bool_Variable_2, class FText CallFunc_GetShortDescription_ShortDescription_2, bool CallFunc_GetShortDescription_ReturnValue_2, int32 K2Node_Select_Default_2);
	bool IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue);
	void Update(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void AdvanceRotator(int32 CallFunc_Array_Length_ReturnValue, const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ResetKeyArtForMainMenu(const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item);
	void ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SafeSetSubGame(enum class ESubGame SubGame, bool CallFunc_InstallAllOnDemandChunks_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetDescriptionForSubGame(enum class EFortSubgameSelectOption SubGame, class FText CallFunc_GetFullDescription_FullDescription, bool CallFunc_GetFullDescription_ReturnValue, enum class ESubGame CallFunc_GetSubGameBySubGameSelectOption_ReturnValue, class FText CallFunc_GetFullDescription_FullDescription_1, bool CallFunc_GetFullDescription_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_GetFullDescription_FullDescription_2, bool CallFunc_GetFullDescription_ReturnValue_2, class FText Temp_text_Variable_1, enum class EFortSubgameSelectOption Temp_byte_Variable, class FText K2Node_Select_Default);
	void DialogResult_FA087F7E461591BDBC2AECAB522E633C(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_9B87D67040B12081C9B651A92AD99EA4(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_0A856DFB4C254288F2910E9EF8AC5903(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_4D272D064BC78DE104D73FBE689B4039(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Try_And_Remove_The_Dialog();
	void Clear_Party_and_Matchmaking_Delegates();
	void CustomEvent_0(enum class EMatchmakingCompleteResult Result);
	void CustomEvent_1();
	void Show_Busy_If_Async_Tasks_Still_Pending();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CustomEvent_2();
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRealMoneyPurchaseComleteHandler(bool bSuccess);
	void Destruct();
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ShowMinorShutdownMessage(bool bIsCampaign);
	void HandleMinorWarning_Campaign();
	void HandleMinorWarning_Athena();
	void BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRedeemCodeComplete();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnSubGameImageLoadedFromCMS(enum class EFortSubgameSelectOption SubGameOption, class UTexture2D* Image);
	void TryShowUpsellDireclty();
	void BndEvt__Button_Creative_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Creative_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SwapBGImage();
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, enum class EFortDialogResult Temp_byte_Variable, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetAccountGameplayRestrictionText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, enum class EFortDialogResult K2Node_CustomEvent_Result_3, class FName K2Node_CustomEvent_ResultName_2, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EFortDialogResult K2Node_CustomEvent_Result_2, class FName K2Node_CustomEvent_ResultName_1, class FName Temp_name_Variable_1, enum class EFortDialogResult Temp_byte_Variable_2, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable_2, enum class EFortDialogResult Temp_byte_Variable_3, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_10, class UCommonButton* K2Node_ComponentBoundEvent_Button_9, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FName Temp_name_Variable_3, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, class UCommonButton* K2Node_ComponentBoundEvent_Button_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ResultName_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UStoreMain_Root_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, bool CallFunc_IsActivated_ReturnValue, bool K2Node_CustomEvent_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBusyMatchmaking_ReturnValue, bool CallFunc_IsBusyMatchmaking_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class FText Temp_text_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UFortMcpContext* CallFunc_GetContext_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled, bool K2Node_CustomEvent_bIsCampaign, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled_1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_7, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue_2, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_2, bool K2Node_Event_bUsingGamepad, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_8, class FText Temp_text_Variable_1, bool CallFunc_CheckRewardRate_ReturnValue, enum class EFortSubgameSelectOption K2Node_Event_SubGameOption, class UTexture2D* K2Node_Event_Image, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_9, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_10, enum class ESubGameAccessReason CallFunc_GetAccessReason_ReturnValue, class FText CallFunc_GetPlatformDisplayName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class FText CallFunc_CanPlay_DenialReason_1, bool CallFunc_CanPlay_ReturnValue_1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UFortPartyContext* CallFunc_GetContext_ReturnValue_11, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_12, bool CallFunc_IsSubGameOptionVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
