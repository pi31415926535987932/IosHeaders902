/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingDescriptionView.h>

@class UIView, SKUIViewReuseView;

@interface SKUIDefaultSettingDescriptionView : SKUISettingDescriptionView {

	char _hasDisclosureChevron;
	UIEdgeInsets _padding;
	UIView* _viewElementView;
	SKUIViewReuseView* _viewReuseView;

}
+(char)prefetchResourcesForSettingDescription:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
+(UIEdgeInsets)_paddingForStyle:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)hasDisclosureChevron;
@end

