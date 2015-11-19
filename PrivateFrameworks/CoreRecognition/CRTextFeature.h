/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreRecognition/CoreRecognition-Structs.h>
@class NSArray;

@interface CRTextFeature : NSObject {

	NSArray* _subFeatures;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomLeft;
	CGPoint _bottomRight;
	CGRect _bounds;

}

@property (assign) CGRect bounds;                      //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGPoint topLeft;                    //@synthesize topLeft=_topLeft - In the implementation block
@property (assign) CGPoint topRight;                   //@synthesize topRight=_topRight - In the implementation block
@property (assign) CGPoint bottomLeft;                 //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (assign) CGPoint bottomRight;                //@synthesize bottomRight=_bottomRight - In the implementation block
@property (retain) NSArray * subFeatures;              //@synthesize subFeatures=_subFeatures - In the implementation block
+(id)textFeatureFromCITextFeature:(id)arg1 inImage:(id)arg2 ;
+(id)overlayFeatures:(id)arg1 onImage:(id)arg2 showSubFeatures:(char)arg3 ;
-(NSArray *)subFeatures;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTopRight:(CGPoint)arg1 ;
-(void)setTopLeft:(CGPoint)arg1 ;
-(void)setBottomRight:(CGPoint)arg1 ;
-(void)setBottomLeft:(CGPoint)arg1 ;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(id)initWithCITextFeature:(id)arg1 inImage:(id)arg2 ;
-(id)textFeatureScaledToImage:(id)arg1 ;
-(float)slopeOfSubFeatures;
-(void)addKohlsDigitProjection;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomRight;
-(CGPoint)bottomLeft;
@end

