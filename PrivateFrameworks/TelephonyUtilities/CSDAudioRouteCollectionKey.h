/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/callservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CSDAudioRouteCollectionKey : NSObject <NSCopying> {

	NSString* _category;
	NSString* _mode;

}

@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * mode;                  //@synthesize mode=_mode - In the implementation block
+(id)audioRouteCollectionKeyWithCategory:(id)arg1 mode:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
@end

