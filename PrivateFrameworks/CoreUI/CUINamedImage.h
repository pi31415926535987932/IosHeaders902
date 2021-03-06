/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedImage : CUINamedLookup {

	float _scale;
	cuiniproperties _imageProperties;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) float scale;                                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) int imageType; 
@property (nonatomic,readonly) SCD_Struct_CU13 edgeInsets; 
@property (nonatomic,readonly) int resizingMode; 
@property (nonatomic,readonly) float opacity; 
@property (nonatomic,readonly) SCD_Struct_CU13 alignmentEdgeInsets; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) char hasSliceInformation; 
@property (nonatomic,readonly) char hasAlignmentInformation; 
@property (nonatomic,readonly) char isVectorBased; 
@property (nonatomic,readonly) char isTemplate; 
@property (nonatomic,readonly) int templateRenderingMode; 
@property (nonatomic,readonly) char isStructured; 
@property (nonatomic,readonly) int exifOrientation; 
-(id)traitCollection;
-(id)UIImage;
-(char)isStructured;
-(CGSize)size;
-(id)description;
-(unsigned)subtype;
-(float)scale;
-(SCD_Struct_CU13)edgeInsets;
-(int)resizingMode;
-(CGImageRef)image;
-(int)exifOrientation;
-(char)hasSliceInformation;
-(SCD_Struct_CU13)alignmentEdgeInsets;
-(int)templateRenderingMode;
-(id)baseKey;
-(float)opacity;
-(int)idiom;
-(char)isTemplate;
-(char)isVectorBased;
-(CGSize)originalUncroppedSize;
-(int)sizeClassHorizontal;
-(int)sizeClassVertical;
-(float)positionOfSliceBoundary:(unsigned)arg1 ;
-(void)_cacheRenditionProperties;
-(CGImageRef)createImageFromPDFRenditionWithScale:(float)arg1 ;
-(CGRect)alphaCroppedRect;
-(int)resizingModeWithSubtype:(int)arg1 ;
-(char)hasAlignmentInformation;
-(int)memoryClass;
-(int)graphicsClass;
-(int)blendMode;
-(int)imageType;
@end

