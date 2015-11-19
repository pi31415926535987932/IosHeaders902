/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, UIColor;

@interface SKUINavigationBarViewElement : SKUIViewElement {

	char _hidesShadow;
	char _hidesBackButton;

}

@property (nonatomic,readonly) char hidesShadow;                          //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (nonatomic,readonly) char hidesBackButton;                      //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (nonatomic,readonly) char isTransparent; 
@property (nonatomic,readonly) NSArray * mainViewElements; 
@property (nonatomic,readonly) NSArray * navigationPalettes; 
@property (nonatomic,readonly) UIColor * tintColor; 
-(char)hidesBackButton;
-(UIColor *)tintColor;
-(char)hidesShadow;
-(char)isTransparent;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSArray *)navigationPalettes;
-(NSArray *)mainViewElements;
@end
