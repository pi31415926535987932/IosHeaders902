/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class UILabel, SKUIViewElement;

@interface SKUITextFooterSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {

	UILabel* _label;
	SKUIViewElement* _viewElement;

}
+(id)_labelElementsFromViewElement:(id)arg1 ;
+(id)_labelWithLabelElements:(id)arg1 ;
+(id)_concatenateTextFromLabelElements:(id)arg1 ;
+(CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(char)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3 ;
-(void)layoutSubviews;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(float)arg2 context:(id)arg3 ;
@end
