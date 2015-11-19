/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class UIButton, SKUIButtonViewElement, SKUIViewElement;

@interface SKUIButtonFooterSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {

	UIButton* _button;
	SKUIButtonViewElement* _buttonElement;
	SKUIViewElement* _viewElement;

}
+(CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(char)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3 ;
+(id)_buttonWithButtonElement:(id)arg1 ;
-(void)layoutSubviews;
-(void)_buttonTapped:(id)arg1 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(void)_reloadWithButtonElement:(id)arg1 context:(id)arg2 ;
@end

