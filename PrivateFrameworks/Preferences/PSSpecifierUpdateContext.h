/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {

	char _animated;
	char _updateModelOnly;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) char animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) char updateModelOnly;               //@synthesize updateModelOnly=_updateModelOnly - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)context;
+(id)contextWithUserInfo:(id)arg1 ;
-(id)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(char)animated;
-(void)setAnimated:(char)arg1 ;
-(char)updateModelOnly;
-(void)setUpdateModelOnly:(char)arg1 ;
@end

