/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {

	CIImage* inputImage;
	NSNumber* inputCubeDimension;
	NSData* inputCubeData;
	CIImage* _cubeImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputCubeDimension; 
@property (nonatomic,copy) NSData * inputCubeData; 
+(id)customAttributes;
-(id)_kernel;
-(char)_checkInputs;
-(id)cubeImage;
-(id)_kernelOpaque;
-(void)setInputCubeData:(NSData *)arg1 ;
-(NSNumber *)inputCubeDimension;
-(void)setInputCubeDimension:(NSNumber *)arg1 ;
-(NSData *)inputCubeData;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)dealloc;
-(void)setInputImage:(CIImage *)arg1 ;
@end

