/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {

	CGRect mBounds;
	OITSUColor* mStartColor;
	OITSUColor* mEndColor;

}
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setStartColor:(id)arg1 ;
-(void)setEndColor:(id)arg1 ;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end

