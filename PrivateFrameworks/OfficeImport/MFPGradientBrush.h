/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPBrush.h>

@class NSArray;

@interface MFPGradientBrush : MFPBrush {

	CGAffineTransform mTransform;
	NSArray* mBlend;
	NSArray* mColorBlend;
	int mWrapMode;
	NSArray* mStops;
	CGShadingRef mShading;
	CGFunctionRef mShadingFunction;

}
-(void)dealloc;
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)color;
-(void)setBlend:(id)arg1 ;
-(void)setColorBlend:(id)arg1 ;
-(void)setWrapMode:(int)arg1 ;
-(void)createPhoneBrush;
-(void)fillPath:(id)arg1 ;
-(id)colorAtPosition:(float)arg1 ;
-(void)createStopsFromColorBlend;
-(void)createStopsFromBlend;
-(void)createStopsFromStartAndEndColors;
-(void)createShadingFunction;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end
