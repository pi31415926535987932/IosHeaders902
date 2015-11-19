/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSData;

@interface WDFieldMarker : WDRun {

	WDCharacterProperties* mProperties;
	int mFieldPosition;
	int mMarkerType;
	unsigned char mFieldType;
	NSData* mData;
	unsigned mZombieEmbed : 1;
	unsigned mResultDirty : 1;
	unsigned mResultEdited : 1;
	unsigned mLocked : 1;
	unsigned mPrivateResult : 1;
	unsigned mNested : 1;
	unsigned mHasSeparator : 1;

}
-(void)dealloc;
-(id)description;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setLocked:(char)arg1 ;
-(id)properties;
-(unsigned char)fieldType;
-(int)fieldMarkerType;
-(int)runType;
-(void)setFieldPosition:(int)arg1 ;
-(void)setFieldMarkerType:(int)arg1 ;
-(void)setFieldType:(unsigned char)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(int)fieldPosition;
-(char)zombieEmbed;
-(void)setZombieEmbed:(char)arg1 ;
-(char)resultDirty;
-(void)setResultDirty:(char)arg1 ;
-(char)resultEdited;
-(void)setResultEdited:(char)arg1 ;
-(char)locked;
-(char)privateResult;
-(void)setPrivateResult:(char)arg1 ;
-(char)nested;
-(void)setNested:(char)arg1 ;
-(char)hasSeparator;
-(void)setHasSeparator:(char)arg1 ;
-(void)clearProperties;
@end

