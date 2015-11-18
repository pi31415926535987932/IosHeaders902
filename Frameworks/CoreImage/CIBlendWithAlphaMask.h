/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIBlendWithAlphaMask : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;
	CIImage* inputMaskImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
+(id)customAttributes;
-(id)_kernel;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(id)_kernelNoF;
-(id)_kernelNoB;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

