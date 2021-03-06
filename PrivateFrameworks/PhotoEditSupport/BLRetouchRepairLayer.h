/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@class NSMutableData, UIImage, BLImagePatchList;

@interface BLRetouchRepairLayer : BLRetouchEffectLayer {

	CGContextRef _repairAnalysisImageContextRef;
	NSMutableData* _repairAnalysisImageRasterData;
	int _repairAnalysisBufferWidth;
	int _repairAnalysisBufferHeight;
	int _repairAnalysisBufferRowBytes;
	char _isNotFinalStroke;
	UIImage* _repairAnalysisImage;
	UIImage* _repairSourceImage;
	BLImagePatchList* _repairPatchList;
	int _totalStrokeArea;
	CGRect _brushStrokeRect;

}

@property (nonatomic,retain) UIImage * repairAnalysisImage;                   //@synthesize repairAnalysisImage=_repairAnalysisImage - In the implementation block
@property (nonatomic,retain) UIImage * repairSourceImage;                     //@synthesize repairSourceImage=_repairSourceImage - In the implementation block
@property (assign,nonatomic) CGRect brushStrokeRect;                          //@synthesize brushStrokeRect=_brushStrokeRect - In the implementation block
@property (nonatomic,retain) BLImagePatchList * repairPatchList;              //@synthesize repairPatchList=_repairPatchList - In the implementation block
@property (assign,nonatomic) int totalStrokeArea;                             //@synthesize totalStrokeArea=_totalStrokeArea - In the implementation block
-(void)dealloc;
-(id)init;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(float)arg3 ;
-(void)setBrushStrokes:(id)arg1 ;
-(CGRect)drawBrushAtLocation:(CGPoint)arg1 opacity:(float)arg2 erase:(char)arg3 magicEdges:(char)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6 ;
-(void)strokeDidFinish;
-(char)solidBrush;
-(UIImage *)repairAnalysisImage;
-(void)setRepairAnalysisImage:(UIImage *)arg1 ;
-(UIImage *)repairSourceImage;
-(void)setRepairSourceImage:(UIImage *)arg1 ;
-(BLImagePatchList *)repairPatchList;
-(void)setBrushStrokeRect:(CGRect)arg1 ;
-(CGRect)brushStrokeRect;
-(void)setRepairPatchList:(BLImagePatchList *)arg1 ;
-(int)totalStrokeArea;
-(void)setTotalStrokeArea:(int)arg1 ;
@end

