/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSDictionary;

@interface MFPColorAdjust : NSObject {

	MFPColorMatrix* mColorMatrix;
	MFPColorMatrix* mGrayMatrix;
	int mColorMatrixFlags;
	SCD_Struct_MF74 mTransparentRange;
	float mGamma;
	NSDictionary* mRecolorMap;
	float mThreshold;
	char mEnabled;

}
-(void)dealloc;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(MFPColorMatrix*)colorMatrix;
-(void)setColorMatrix:(MFPColorMatrix*)arg1 ;
-(MFPColorMatrix*)grayMatrix;
-(void)setGrayMatrix:(MFPColorMatrix*)arg1 ;
-(int)colorMatrixFlags;
-(void)setColorMatrixFlags:(int)arg1 ;
-(id)transparentLow;
-(id)transparentHigh;
-(void)setTransparentLow:(id)arg1 high:(id)arg2 ;
-(float)gamma;
-(void)setGamma:(float)arg1 ;
-(id)recolorMap;
-(void)setRecolorMap:(id)arg1 ;
@end

