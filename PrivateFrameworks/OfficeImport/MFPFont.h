/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface MFPFont : NSObject {

	float mSize;
	int mUnit;
	unsigned mFlags;
	NSString* mName;

}
-(float)size;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setSize:(float)arg1 ;
-(int)unit;
-(void)setUnit:(int)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(CTFontRef)createCTFontWithGraphics:(id)arg1 ;
@end

