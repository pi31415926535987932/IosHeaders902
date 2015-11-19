/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKGLView.h>

@class NSDictionary;

@interface CMKEffectsGridView : CMKGLView {

	OpaqueVTPixelTransferSessionRef _pixelTransferSession;
	CVPixelBufferPoolRef _pixelBufferPool;
	CGSize _pixelBufferPoolSize;
	char _square;
	char __fetchingGridFilters;
	char __atomicBlackAndWhite;
	NSDictionary* __gridFilters;

}

@property (getter=isSquare) char square;                                                                          //@synthesize square=_square - In the implementation block
@property (getter=isBlackAndWhite) char blackAndWhite; 
@property (setter=_setGridFilters:,retain) NSDictionary * _gridFilters;                                           //@synthesize _gridFilters=__gridFilters - In the implementation block
@property (setter=_setFetchingGridFilters:) char _fetchingGridFilters;                                            //@synthesize _fetchingGridFilters=__fetchingGridFilters - In the implementation block
@property (setter=_setAtomicBlackAndWhite:,getter=_isAtomicBlackAndWhite) char _atomicBlackAndWhite;              //@synthesize _atomicBlackAndWhite=__atomicBlackAndWhite - In the implementation block
-(void)dealloc;
-(CGRect)rectForFilterIndex:(unsigned)arg1 ;
-(id)filterIndices;
-(unsigned)_filterIndexForGridIndex:(unsigned)arg1 ;
-(unsigned)_gridIndexForFilterIndex:(unsigned)arg1 ;
-(unsigned)filterIndexForPoint:(CGPoint)arg1 ;
-(void)renderPixelBuffer:(CVBufferRef)arg1 ciContext:(id)arg2 mirrorRendering:(char)arg3 ;
-(void)setBlackAndWhite:(char)arg1 ;
-(void)setSquare:(char)arg1 ;
-(char)isSquare;
-(char)_isAtomicBlackAndWhite;
-(void)_setAtomicBlackAndWhite:(char)arg1 ;
-(void)_setGridFilters:(id)arg1 ;
-(void)_setupGridFiltersIfNecessary;
-(NSDictionary *)_gridFilters;
-(unsigned)_cellsPerRow;
-(CVBufferRef)_createPixelBufferForSize:(CGSize)arg1 ;
-(void)_scalePixelBuffer:(CVBufferRef)arg1 outputBuffer:(CVBufferRef)arg2 ;
-(void)_renderGridFilters:(id)arg1 withInputImage:(id)arg2 ciContext:(id)arg3 mirrorRendering:(char)arg4 ;
-(unsigned)_cellCount;
-(CGRect)_squareCropFromRect:(CGRect)arg1 ;
-(void)_updatePixelBufferPoolForSize:(CGSize)arg1 ;
-(char)_fetchingGridFilters;
-(void)_setFetchingGridFilters:(char)arg1 ;
-(char)isBlackAndWhite;
@end
