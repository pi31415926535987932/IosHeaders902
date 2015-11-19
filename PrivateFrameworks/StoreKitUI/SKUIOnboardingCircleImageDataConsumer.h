/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer {

	CGSize _outputSize;
	UIColor* _tintColor;
	char _usesSaturationFilter;

}

@property (assign,nonatomic) CGSize outputSize;                      //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) char usesSaturationFilter;              //@synthesize usesSaturationFilter=_usesSaturationFilter - In the implementation block
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(void)setOutputSize:(CGSize)arg1 ;
-(void)setUsesSaturationFilter:(char)arg1 ;
-(char)usesSaturationFilter;
-(id)_saturationBackgroundImageWithSize:(CGSize)arg1 ;
-(CGSize)outputSize;
@end

