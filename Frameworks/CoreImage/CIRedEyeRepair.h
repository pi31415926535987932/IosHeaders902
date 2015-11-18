/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSArray;

@interface CIRedEyeRepair : NSObject {

	char ownLF;
	SCD_Struct_CI19* lf;
	int imageSourceType;
	CGImageBlockSetRef blockSet;
	void* releaseMe;
	CFDataRef dataRef;
	NSArray* faces;
	int nRepairs;
	int nextRepairTag;
	SCD_Struct_CI26 repairs[32];
	int lastRepairTag;
	float lastRepairIOD;
	GridROI_t standardTemplate;
	int iFaceIndex;
	char iLeft;
	char debugRedEye;
	char logRepairs;
	int redEyeThresholdKind;
	char renderAlpha;
	char infillBackground;
	char renderSpecularShine;
	float specularSize;
	float specularSoftness;
	char pupilShadeAlignment;
	char autoPupilTonality;
	char forceLoValue;
	int loValue;
	SCD_Struct_CI22 lastClickYBitmap;
	SCD_Struct_CI22 lastClickCbCrBitmap;
	int lastClickBitmapMinX;
	int lastClickBitmapMaxX;
	int lastClickBitmapMinY;
	int lastClickBitmapMaxY;
	SCD_Struct_CI22 lastClickYBitmaps[3];
	SCD_Struct_CI22 lastClickCbCrBitmaps[3];
	GridROI_t lastClickIRects[3];
	SCD_Struct_CI22 lastSearchYBitmap;
	SCD_Struct_CI22 lastSearchCbCrBitmap;
	int lastSearchBitmapMinX;
	int lastSearchBitmapMaxX;
	int lastSearchBitmapMinY;
	int lastSearchBitmapMaxY;
	int nPolyPoints;
	char polyClosed;
	CGPoint polyPoints[20];
	SCD_Struct_CI27 polyLines[20];
	char polyPointConcave[20];
	unsigned char CbCrDistanceTable[65536];
	int nLinears;
	int linearCoefficients[8][3];

}
+(CGRect)supportRectangleWithFaceArray:(id)arg1 imageSize:(CGSize)arg2 ;
+(float)upperRepairDistance:(float)arg1 ;
+(float)upperRepairDistanceFraction:(float)arg1 ;
+(CGRect)supportRectangleWithPoint:(CGPoint)arg1 imageSize:(CGSize)arg2 IOD:(float)arg3 ;
+(CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)initWithExternalBuffer:(char*)arg1 subRectangle:(CGRect)arg2 fullSize:(CGSize)arg3 rowBytes:(unsigned long)arg4 cameraModel:(id)arg5 ;
-(void)autoRepairWithFaceArray:(id)arg1 ;
-(id)repairArray;
-(void)executeRepairArray:(id)arg1 ;
-(void)repairExternalBuffer;
-(char)getBlockSetWithImage:(CGImageRef)arg1 into:(SCD_Struct_CI22*)arg2 width:(unsigned long)arg3 height:(unsigned long)arg4 ;
-(char)getDataProviderBytePtrWithImage:(CGImageRef)arg1 into:(SCD_Struct_CI22*)arg2 width:(unsigned long)arg3 height:(unsigned long)arg4 ;
-(char)getDataProviderCopyWithImage:(CGImageRef)arg1 into:(SCD_Struct_CI22*)arg2 ;
-(id)initWithDeskView:(id)arg1 andFrame:(SCD_Struct_CI28*)arg2 ;
-(void)skinInit;
-(void)initializeNonDebugVariables;
-(id)initWithFrameExternalBuffer:(SCD_Struct_CI28*)arg1 ;
-(SCD_Struct_CI29*)repairWithTag:(int)arg1 ;
-(float)upperRepairSizeFraction:(float)arg1 ;
-(float)lowerRepairSizeFraction:(float)arg1 ;
-(float)lowerRepairSize:(float)arg1 ;
-(float)upperRepairSize:(float)arg1 ;
-(char)extractReusableAlignedBitmapsAroundPoint:(SCD_Struct_CI22*)arg1 YR:(GridROI_t)arg2 subYBitmap:(SCD_Struct_CI22*)arg3 subCbCrBitmap:(SCD_Struct_CI22*)arg4 ;
-(int)averageValueFromY:(SCD_Struct_CI22*)arg1 withinSkinMask:(SCD_Struct_CI22*)arg2 butOutsideAlpha:(SCD_Struct_CI22*)arg3 ;
-(char)computeTrimmedBitmaps:(SCD_Struct_CI22*)arg1 newY:(SCD_Struct_CI22*)arg2 newCbCr:(SCD_Struct_CI22*)arg3 IR:(GridROI_t)arg4 newTrimY:(SCD_Struct_CI22*)arg5 newTrimCbCr:(SCD_Struct_CI22*)arg6 returningYR:(GridROI_t*)arg7 andCbCrR:(GridROI_t*)arg8 ;
-(void)undoRepair:(int)arg1 ;
-(int)redEyeRemovalWithPoint:(CGPoint)arg1 alignPupilShades:(char)arg2 matching:(GridROI_t)arg3 force:(int)arg4 IOD:(float)arg5 tap:(char)arg6 ;
-(int)redoRepairWithTag:(int)arg1 IOD:(float)arg2 ;
-(void)insertIntoProminenceVettingHopper:(SCD_Struct_CI31*)arg1 max:(int)arg2 outside:(int)arg3 confidence:(float)arg4 distance:(float)arg5 row:(int)arg6 column:(int)arg7 IOD:(float)arg8 ;
-(char)gatherProminencesWithC:(SCD_Struct_CI22*)arg1 MC:(SCD_Struct_CI22*)arg2 altC:(SCD_Struct_CI22*)arg3 altMC:(SCD_Struct_CI22*)arg4 maxwindowsize:(int)arg5 repairsize:(int)arg6 IR:(GridROI_t)arg7 fr:(SCD_Struct_CI32*)arg8 intoHopper:(SCD_Struct_CI31*)arg9 faceIndex:(int)arg10 left:(char)arg11 ;
-(float)extractAverageFaceY:(SCD_Struct_CI32*)arg1 contrast:(float*)arg2 faceIndex:(int)arg3 ;
-(float)confidenceWithIOD:(float)arg1 repair:(int)arg2 andProminenceDifference:(int)arg3 ;
-(int)distanceMaskFromPolyToCb:(int)arg1 Cr:(int)arg2 ;
-(void)prepareLineFunctions;
-(void)autoRepairExtractAndSearchLeft:(GridROI_t)arg1 right:(GridROI_t)arg2 data:(SCD_Struct_CI32*)arg3 repairSize:(float)arg4 autoPupilTonality:(char)arg5 faceIndex:(int)arg6 ;
-(char)getFloat:(float*)arg1 d:(id)arg2 s:(id)arg3 ;
-(char)getInt:(int*)arg1 d:(id)arg2 s:(id)arg3 ;
-(char)getBool:(char*)arg1 d:(id)arg2 s:(id)arg3 ;
-(int)redEyeRemovalWithData:(SCD_Struct_CI33)arg1 ;
-(void)executeRepair:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 cameraModel:(id)arg2 ;
-(CGImageRef)createRepairedImage;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 cameraModel:(id)arg4 ;
-(id)initWithExternalBuffer:(char*)arg1 size:(CGSize)arg2 rowBytes:(unsigned long)arg3 ;
-(void)setDebug:(char)arg1 ;
-(char)logRepairs;
-(void)setLogRepairs:(char)arg1 ;
-(int)redEyeThresholdKind;
-(void)setRedEyeThresholdKind:(int)arg1 ;
-(char)renderAlpha;
-(void)setRenderAlpha:(char)arg1 ;
-(char)infillBackground;
-(void)setInfillBackground:(char)arg1 ;
-(char)renderSpecularShine;
-(void)setRenderSpecularShine:(char)arg1 ;
-(float)specularSize;
-(void)setSpecularSize:(float)arg1 ;
-(float)specularSoftness;
-(void)setSpecularSoftness:(float)arg1 ;
-(char)pupilShadeAlignment;
-(void)setPupilShadeAlignment:(char)arg1 ;
-(char)autoPupilTonality;
-(void)setAutoPupilTonality:(char)arg1 ;
-(char)forceLoValue;
-(void)setForceLoValue:(char)arg1 ;
-(int)loValue;
-(void)setLoValue:(int)arg1 ;
-(GridROI_t)standardTemplate;
-(SCD_Struct_CI29*)repairs;
-(int)nRepairs;
-(int)lastRepairTag;
-(void)redoLastRepair;
-(void)setFaceIndex:(int)arg1 ;
-(int)format;
-(void)dealloc;
-(void)setLeft:(char)arg1 ;
-(char)debug;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(id)faces;
@end

