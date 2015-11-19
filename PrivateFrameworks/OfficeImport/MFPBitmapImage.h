/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPImage.h>

@class NSData, OITSUImage;

@interface MFPBitmapImage : MFPImage {

	NSData* mBitmapData;
	OITSUImage* mPhoneBitmapImage;
	CGSize mPixelSize;
	CGSize mPointSize;

}
-(void)dealloc;
-(CGSize)pointSize;
-(id)initWithBitmapData:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 unit:(int)arg3 effect:(id)arg4 ;
-(id)phoneImage;
-(CGSize)pixelSize;
@end
