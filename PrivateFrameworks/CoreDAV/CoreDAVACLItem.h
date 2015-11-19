/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {

	NSMutableSet* _accessControlEntities;

}

@property (nonatomic,retain) NSMutableSet * accessControlEntities;              //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableSet *)accessControlEntities;
-(void)addACE:(id)arg1 ;
-(void)setAccessControlEntities:(NSMutableSet *)arg1 ;
-(id)notGrantedSubsetOfACEs:(id)arg1 ;
-(id)liveACEs;
@end

