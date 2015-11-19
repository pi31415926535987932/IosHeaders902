/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADParagraphProperties, CMStyle;

@interface PMBulletMapper : CMMapper {

	OADParagraphProperties* mProperties;
	CMStyle* mStyle;
	int mFontSize;

}
+(id)stringForIndex:(unsigned)arg1 withFormat:(int)arg2 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)makeBulletWithListState:(id)arg1 ;
-(int)bulletSize;
-(id)bulletFontName;
-(void)mapBulletColorWithState:(id)arg1 ;
-(id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3 ;
@end

