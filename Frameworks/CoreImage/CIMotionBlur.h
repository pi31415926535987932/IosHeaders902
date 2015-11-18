/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CILinearBlur.h>

@class NSNumber;

@interface CIMotionBlur : CILinearBlur {

	NSNumber* inputAngle;

}

@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(NSNumber *)inputAngle;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 ;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
@end

