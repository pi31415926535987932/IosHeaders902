/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject {

	CUIPSDImageRef* _imageRef;
	unsigned _layerIndex;

}

@property (readonly) CGRect bounds; 
@property (readonly) char visibility; 
@property (readonly) float opacity; 
@property (readonly) float fillOpacity; 
@property (readonly) int blendMode; 
@property (readonly) char hasLayerMask; 
@property (readonly) char hasVectorMask; 
-(CGRect)bounds;
-(id)name;
-(float)opacity;
-(CPSDLayerRecord*)_psdLayerRecord;
-(char)hasVectorMask;
-(char)hasLayerMask;
-(id)_psdImageRef;
-(char)isLayerGroup;
-(float)fillOpacity;
-(id)layerMaskRef;
-(id)vectorMaskRef;
-(CGImageRef)_createMaskFromAlphaChannel:(int)arg1 ;
-(int)blendMode;
-(char)visibility;
@end
