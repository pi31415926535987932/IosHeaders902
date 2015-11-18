/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageAccumulator : NSObject {

	void* _state;

}

@property (readonly) CGRect extent; 
@property (readonly) int format; 
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)setImage:(id)arg1 dirtyRect:(CGRect)arg2 ;
-(void)commitUpdates:(id)arg1 ;
-(int)format;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CGRect)extent;
-(id)image;
-(void)clear;
@end

